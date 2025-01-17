from selenium import webdriver  # Ajuste no import
from selenium.webdriver.common.by import By

# Inicialize o navegador
navegador = webdriver.Chrome()

# Abra o site
navegador.get("https://rpachallengeocr.azurewebsites.net/")

# Localize a tabela
elementotabela = navegador.find_element(By.XPATH, '//*[@id="tableSandbox"]')

# Obtenha as linhas e colunas da tabela
linhas = elementotabela.find_elements(By.TAG_NAME, "tr")  # Corrigido tuple extra
colunas = elementotabela.find_elements(By.TAG_NAME, "th")  # Corrigido tuple extra

# Iterar pelas linhas
linha = 1
for linhaatual in linhas:
    print(linhaatual.text)  # Exibe o texto de cada linha
    linha += 1
