def ffilter(f, l): 
    if not l: #base case: lista vazia
        return []
    elif f(l[0]): #primeiro elemento passa no teste
        return [l[0]] + ffilter(f, l[1:]) 
    else: # primeiro elemento não passa no teste
        return ffilter(f, l[1:])

#Definindo a função de teste
def is_par(x):
    return x % 2 == 0

l = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
filtered_list = ffilter(is_par, l)
#Testando a função ffilter
print(filtered_list)
