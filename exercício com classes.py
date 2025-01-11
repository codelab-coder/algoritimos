class Carro:
    marca = ""
    modelo = ""
    ano = 0
    quilometragem = 0

    def __init__(self, marca, modelo, ano):
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
        self.quilometragem = 0

    def dirigir(self, numero=20):
        self.quilometragem += numero  # Atualiza o atributo quilometragem

    def descricao(self):
        return f"{self.marca} {self.modelo} ({self.ano}) - {self.quilometragem} km"
