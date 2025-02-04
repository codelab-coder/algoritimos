import pandas as pd

# Criando os dados de vendas
dados_vendas = {
    "Data": ["2024-02-01", "2024-02-02", "2024-02-03"],
    "Produto": ["Mouse", "Teclado", "Monitor"],
    "Quantidade": [5, 3, 2],
    "Preço Unitário": [50.00, 100.00, 700.00],
    "Total": [5*50.00, 3*100.00, 2*700.00]
}

# Criando o DataFrame
df = pd.DataFrame(dados_vendas)

# Exibindo o DataFrame
print(df)

# Salvando em CSV (opcional)
df.to_csv("vendas.csv", index=False)

# Salvando em Excel (opcional)
df.to_excel("vendas.xlsx", index=False)
