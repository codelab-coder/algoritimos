from selenium import webdriver as opcoesSelenium
from selenium.webdriver.common.by import By
import time
import pandas as pd

# Configuração do WebDriver
navegador = opcoesSelenium.Chrome()

# Abrindo o site da Magazine Luiza
navegador.get("https://www.magazineluiza.com.br/")
time.sleep(2)  # Aguarde o carregamento da página

# Buscar produto
navegador.find_element(By.ID, "input-search").send_keys("geladeira")
time.sleep(2)
navegador.find_element(By.ID, "input-search").submit()
time.sleep(10)

# Extraindo produtos
produtos = []
itens = navegador.find_elements(By.XPATH, '//a[contains(@href, "/p/")]')  # Captura os links de produtos

for item in itens:
    try:
        link = item.get_attribute("href")  # Captura o link do produto
        nome = item.text  # Captura o nome do produto
        produtos.append([nome, link])
    except Exception as e:
        print(f"Erro ao processar item: {e}")

# Verificando se há dados coletados
if produtos:
    # Salvando os dados em um arquivo Excel
    df = pd.DataFrame(produtos, columns=["Nome", "URL"])
    df.to_excel("produtos_magalu_novo.xlsx", index=False)
    print("Dados extraídos e salvos com sucesso!")
else:
    print("Nenhum dado foi extraído. Verifique os seletores ou o carregamento da página.")

# Fechar o navegador
navegador.quit()
