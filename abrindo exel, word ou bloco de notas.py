import pyautogui as escolha

opcao=escolha.confirm("clique no botão desejado",buttons=['Excel','Word','notepad'])

if opcao=='Excel':
    escolha.hotkey("win","r")
    escolha.sleep(2)
    escolha.typewrite("Excel")
    escolha.sleep(2)
    escolha.press("enter")
    escolha.sleep(5)
    escolha.click(322,256)
    escolha.sleep(3)
    escolha.typewrite("escolhi abrir o excel")
elif opcao=='Word':
    escolha.hotkey("win","r")
    escolha.sleep(2)
    escolha.typewrite("C:/Users/dinha/OneDrive/Área de Trabalho/WORD.docx")
    escolha.sleep(2)
    escolha.press("enter")
    escolha.sleep(5)
    escolha.click(322,256)
    escolha.sleep(3)
    escolha.typewrite("escolhi abrir o word")
else:
    escolha.hotkey("win","r")
    escolha.sleep(2)
    escolha.typewrite("notepad")
    escolha.sleep(2)
    escolha.press("enter")
    escolha.sleep(5)
    escolha.click(322,256)
    escolha.sleep(3)
    escolha.typewrite("escolhi abrir o notepad")

