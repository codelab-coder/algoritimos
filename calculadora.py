import tkinter as tk


def calcular():
    try:
        num1 = float(entrada1.get())  # Lê o primeiro número
        num2 = float(entrada2.get())  # Lê o segundo número
        operacao = operacao_var.get()  # Lê a operação escolhida

        if operacao == "Soma":
            resultado = num1 + num2
        elif operacao == "Subtração":
            resultado = num1 - num2
        elif operacao == "Multiplicação":
            resultado = num1 * num2
        elif operacao == "Divisão":
            if num2 != 0:
                resultado = num1 / num2
            else:
                resultado_label.config(text="Erro: Divisão por zero!")
                return

        resultado_label.config(text=f"Resultado: {resultado}")
    except ValueError:
        resultado_label.config(text="Por favor, digite números válidos.")


# Criando a janela principal
janela = tk.Tk()
janela.title("Calculadora Simples")

# Criando widgets
entrada1 = tk.Entry(janela)
entrada2 = tk.Entry(janela)

operacao_var = tk.StringVar()
operacao_var.set("Soma")  # Valor padrão

# Criação dos botões de operação
opcoes_operacoes = ["Soma", "Subtração", "Multiplicação", "Divisão"]
menu_operacoes = tk.OptionMenu(janela, operacao_var, *opcoes_operacoes)

botao_calcular = tk.Button(janela, text="Calcular", command=calcular)
resultado_label = tk.Label(janela, text="Digite os números e escolha a operação.")

# Posicionando widgets
entrada1.pack(pady=5)
entrada2.pack(pady=5)
menu_operacoes.pack(pady=5)
botao_calcular.pack(pady=5)
resultado_label.pack(pady=5)

# Iniciando o loop principal
janela.mainloop()

