import tkinter as tk
from tkinter import messagebox
from sklearn import tree

# Características dos animais: [peso, altura]
caracteristicas = [
    [20, 50], [5, 25], [30, 60], [4, 20], [35, 70], [3, 18], [28, 55], [6, 30]
]

# Rótulos dos animais: 0 = Gato, 1 = Cachorro
rotulos = [1, 0, 1, 0, 1, 0, 1, 0]

# Criar e treinar o classificador
classificador = tree.DecisionTreeClassifier()
classificador = classificador.fit(caracteristicas, rotulos)

def prever_animal():
    try:
        peso = float(entry_peso.get())
        altura = float(entry_altura.get())
        previsao = classificador.predict([[peso, altura]])
        resultado = "Cachorro" if previsao == 1 else "Gato"
        messagebox.showinfo("Resultado", f"Este animal é um {resultado}!")
    except ValueError:
        messagebox.showerror("Erro", "Por favor, insira valores numéricos válidos!")

def mostrar_dicas():
    dados_texto = "Dados Utilizados:\n\n"
    for i, (carac, rot) in enumerate(zip(caracteristicas, rotulos)):
        tipo = "Cachorro" if rot == 1 else "Gato"
        dados_texto += f"Animal {i+1}: Peso {carac[0]}kg, Altura {carac[1]}cm - {tipo}\n"
    messagebox.showinfo("Dados do Modelo", dados_texto)

# Criar a janela principal
root = tk.Tk()
root.title("Classificador de Animais")
root.geometry("350x300")

# Criar e posicionar os widgets
tk.Label(root, text="Peso (kg):").pack(pady=5)
entry_peso = tk.Entry(root)
entry_peso.pack()

tk.Label(root, text="Altura (cm):").pack(pady=5)
entry_altura = tk.Entry(root)
entry_altura.pack()

tk.Button(root, text="Prever", command=prever_animal).pack(pady=10)
tk.Button(root, text="Ver Dados", command=mostrar_dicas).pack(pady=5)

# Iniciar o loop da interface
tk.mainloop()

