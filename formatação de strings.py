nome="Cintia Alves Moreira"
print(nome)
print("total de caracteres:"+str(len(nome)))
print((nome[0]))
print(nome[0:6])
print(nome[7:12])
print(nome[13:20])
print(nome[0:])
print(nome[7:])

frase="curso de lógica de programação python"
print(frase.upper())
print(frase.lower())

notaprova="tirei nota cinco na prova"
print(notaprova.replace("cinco","dez"))


cpf="123.456.789-10"
cpfpartes=cpf.split(".")

print(cpfpartes)
print(cpfpartes[0])
print(cpfpartes[1])
print(cpfpartes[2])

cpfpartes2=cpfpartes[2].split(("-"))
print(cpfpartes2[0])
print(cpfpartes2[1])

print("cpf:"+cpfpartes[0]+cpfpartes[1]+cpfpartes2[0]+cpfpartes2[1])

palavracomespaco="      curso de python      "
print(palavracomespaco)
print(palavracomespaco.strip())

gostoporfrutas="eu gosto de laranja"
print("maça"in gostoporfrutas)
resultadoprocura=gostoporfrutas.find("o")
print(resultadoprocura)

copa="Brasil vai ganhar a copa do mundo"
campeao="alemanha" not in copa
print(campeao)

aluno="Rebeca Martins"
nota1=9
nota2=6
media=(nota1+nota2)/2
print( f"aluna:{aluno}-média{media}")
ajustartexto="aluna:{}-média{}"
print(ajustartexto.format(aluno,media))
