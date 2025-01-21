from selenium import webdriver as opcoesSelenium
from selenium.webdriver.common.by import By
import pyautogui as tempoEspera

from selenium.webdriver.support.select import Select

# Inicializando o navegador
navegador = opcoesSelenium.Chrome()

# Acessando o formulário
navegador.get("https://form.jotform.com/221436066464051")

# Tempo para carregar o formulário
tempoEspera.sleep(5)

# Preenche o campo Nome
navegador.find_element(By.NAME, "q3_nome[first]").send_keys("Fernando Marques")

# Tempo de espera
tempoEspera.sleep(1)

# Preenche o campo Sobrenome
navegador.find_element(By.NAME, "q3_nome[last]").send_keys("Guimarães")

# Tempo de espera
tempoEspera.sleep(1)

# Preenche o campo Email
navegador.find_element(By.NAME, "q4_email").send_keys("fernando.marques@hotmail.com")

# Tempo de espera
tempoEspera.sleep(3)

# Seleciona uma opção do dropdown
pegaDropDown = navegador.find_element(By.ID, "input_5")
itemSelecionado = Select(pegaDropDown)
itemSelecionado.select_by_index(1)  # Altere o índice conforme necessário

# Tempo de espera
tempoEspera.sleep(2)

# Verifica se tem filhos e marca a resposta
filho = "Não"

if filho == "Sim":
    navegador.find_element(By.ID, "label_input_6_0").click()  # Opção "Sim"
else:
    navegador.find_element(By.ID, "label_input_6_1").click()  # Opção "Não"

# Tempo de espera
tempoEspera.sleep(2)

# Marca a cor favorita (Exemplo: Azul e Verde)
navegador.find_element(By.ID, "label_input_7_0").click()  # Azul
tempoEspera.sleep(2)
navegador.find_element(By.ID, "label_input_7_5").click()  # Verde

# Tempo de espera
tempoEspera.sleep(2)

# Avaliação de 5 estrelas
navegador.find_element(By.XPATH, '//*[@id="input_8"]/div[5]').click()

# Tempo de espera
tempoEspera.sleep(2)

# Qualidade do Serviço: Muito Satisfeito
navegador.find_element(By.ID, "input_9_0_3").click()

# Tempo de espera
tempoEspera.sleep(2)

# Grau de Dificuldade: Satisfeito
navegador.find_element(By.ID, "input_9_1_2").click()

# Tempo de espera
tempoEspera.sleep(2)

# Envia o formulário
navegador.find_element(By.ID, "input_2").click()

# Finalização
print("Formulário preenchido e enviado com sucesso!")

