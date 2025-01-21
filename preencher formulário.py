from selenium import webdriver
from selenium.webdriver.common.by import By
import time

# Função para preencher o formulário
def preencher_formulario():
    # Configurar o driver do navegador (ex: Chrome)
    driver = webdriver.Chrome()  # Certifique-se de ter o chromedriver instalado e no PATH

    try:
        # Acessar o site
        url = "https://rpachallenge.com/"
        driver.get(url)
        time.sleep(2)  # Esperar o site carregar

        # Iniciar o desafio (botão Start)
        start_button = driver.find_element(By.XPATH, "//button[contains(text(), 'Start')]")
        start_button.click()
        time.sleep(2)  # Esperar o formulário ser exibido

        # Dados de exemplo para preencher o formulário
        dados = {
            "First Name": "Adriano",
            "Last Name": "Silva",
            "Company Name": "Tech Inc.",
            "Role in Company": "Engineer",
            "Address": "123 Main St",
            "Email": "adriano@example.com",
            "Phone Number": "1234567890"
        }

        # Preencher o formulário com base nos rótulos dos campos
        for campo, valor in dados.items():
            # Procurar os campos pelo rótulo visível
            label = driver.find_element(By.XPATH, f"//label[contains(text(), '{campo}')]")
            input_field = label.find_element(By.XPATH, "./following-sibling::input")
            input_field.clear()
            input_field.send_keys(valor)

        # Submeter o formulário (botão Submit)
        submit_button = driver.find_element(By.XPATH, "//button[contains(text(), 'Submit')]")
        submit_button.click()

        # Esperar para ver o resultado
        time.sleep(5)

    finally:
        # Fechar o navegador
        driver.quit()

# Executar a função
if __name__ == "__main__":
    preencher_formulario()
