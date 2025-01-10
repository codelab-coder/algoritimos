pontuacao = input("digite sua pontuação de 0 a 100")
converterP=float(pontuacao)

if converterP > 100:
    print("nota inválida")
if converterP >= 90 and converterP<100:
    print("Sua classificação é A. Parabéns!")
if converterP >= 80 and converterP < 90:
    print("sua classificação é B")
if converterP >= 70 and converterP < 80:
    print("sua classificação é C")
if converterP >= 60 and converterP < 70:
    print("sua classificação é D")
if converterP <= 60:
    print("sua classificação é F")
