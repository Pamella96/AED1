def inverter_iterador(lista):
    lista_invertida = []
    for elemento in lista:
        lista_invertida.insert(0, elemento)
    return lista_invertida

lista = inverter_iterador([1, 2, 3, 4, 5])
print(lista)
