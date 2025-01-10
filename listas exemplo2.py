listaminmax=[5,10,20,100,50]
print(min(listaminmax))
print(max(listaminmax))

listarde1a100=[posicao for posicao in range(101) if posicao<=10]
print(listarde1a100)

listarde1a100=[posicao for posicao in range(101)]
listacopiada=listarde1a100.copy()
print(listacopiada)
listaminmax=[5,10,20,100,50]
listarde1a100=[posicao for posicao in range(101)]
listajoin=listaminmax+listarde1a100
print(listajoin)