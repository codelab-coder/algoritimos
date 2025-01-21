from selenium import webdriver as opcoesSelenium
from selenium.webdriver.common.by import By
import pyautogui as tempoEspera
import requests
import pandas as pd

# Configuração do WebDriver
navegador = opcoesSelenium.Chrome()
navegador.get("https://buscacepinter.correios.com.br/app/endereco/index.php")

# Lista de CEPs para consultar
lista_ceps = ["05892387", "01001000", "20040002"]  # Substitua pelos CEPs desejados

# Tempo para o computador processar as informações
tempoEspera.sleep(4)

# Lista para armazenar os resultados
resultados = []

for cep_input in lista_ceps:
    try:
        # Limpando o campo de busca e inserindo o novo CEP
        navegador.find_element(By.NAME, "endereco").clear()
        navegador.find_element(By.NAME, "endereco").send_keys(cep_input)
        tempoEspera.sleep(2)

        # Clica no botão de Pesquisar
        navegador.find_element(By.NAME, "btn_pesquisar").click()
        tempoEspera.sleep(4)

        # Verifica se há resultados ou captcha
        captcha_text = navegador.find_elements(By.XPATH, '//*[@id="mensagem-resultado"]')
        if captcha_text and "caractere" in captcha_text[0].text.lower():
            print(f"Captcha detectado para o CEP {cep_input}. Consultando API ViaCEP...")
            raise Exception("Captcha detected")

        # Pega os dados da tabela de resultados no site
        rua = navegador.find_element(By.XPATH, '//*[@id="resultado-DNEC"]/tbody/tr/td[1]').text
        bairro = navegador.find_element(By.XPATH, '//*[@id="resultado-DNEC"]/tbody/tr/td[2]').text
        cidade = navegador.find_element(By.XPATH, '//*[@id="resultado-DNEC"]/tbody/tr/td[3]').text
        cep = navegador.find_element(By.XPATH, '//*[@id="resultado-DNEC"]/tbody/tr/td[4]').text
        print(f"Dados dos Correios para o CEP {cep_input}: Rua: {rua}, Bairro: {bairro}, Cidade: {cidade}, CEP: {cep}")
    except Exception as e:
        print(f"Erro ao processar dados nos Correios para o CEP {cep_input}: {e}")
        # Consultando API ViaCEP como alternativa
        try:
            url = f"https://viacep.com.br/ws/{cep_input}/json/"
            resposta = requests.get(url)
            if resposta.status_code == 200:
                dados = resposta.json()
                if not dados.get("erro"):
                    rua = dados.get("logradouro", "Não disponível")
                    bairro = dados.get("bairro", "Não disponível")
                    cidade = f"{dados.get('localidade', 'Não disponível')} - {dados.get('uf', 'Não disponível')}"
                    cep = dados.get("cep", "Não disponível")
                    print(
                        f"ViaCEP - Dados para o CEP {cep_input}: Rua: {rua}, Bairro: {bairro}, Cidade: {cidade}, CEP: {cep}")
                else:
                    print(f"CEP {cep_input} não encontrado na API ViaCEP.")
                    rua = bairro = cidade = "Não disponível"
            else:
                print(f"Erro ao consultar API ViaCEP. Status: {resposta.status_code}")
                rua = bairro = cidade = "Não disponível"
        except Exception as api_error:
            print(f"Erro ao consultar API ViaCEP para o CEP {cep_input}: {api_error}")
            rua = bairro = cidade = "Não disponível"

    # Adicionando os dados na lista de resultados
    resultados.append({
        "CEP": cep_input,
        "Rua": rua,
        "Bairro": bairro,
        "Cidade": cidade
    })

# Fechando o navegador
navegador.quit()

# Criando um DataFrame do pandas com os resultados
df_resultados = pd.DataFrame(resultados)

# Salvando os resultados em um arquivo Excel
arquivo_excel = "resultados_ceps.xlsx"
df_resultados.to_excel(arquivo_excel, index=False)

print(f"Resultados salvos no arquivo '{arquivo_excel}'.")
