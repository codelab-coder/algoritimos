import pandas as pd
import numpy as npy

dataframe_datas=pd.date_range("20221201",periods=31)
print(dataframe_datas)

dataframe_meses=pd.date_range("20221231",periods=12)
print(dataframe_meses)

numerosAleatorios=pd.DataFrame(npy.random.rand(5,1))
print(numerosAleatorios)

numerosAleatorios=pd.DataFrame(npy.random.rand(15,10)*100)
print(numerosAleatorios)

numerosAleatorios=pd.DataFrame(npy.random.rand(15,10)*100,columns=["A","B","C","D","E","F","G","H","I","J"])
print(numerosAleatorios.columns)
notasalunos=pd.DataFrame({"nome":["ana","pedro","joao"],"media":[9,7,10]})
print(notasalunos)