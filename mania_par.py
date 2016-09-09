# Tem solucao:
0 2  0 0
2 0  1 10
0 1  0 6
0 10 6 0

# Nao tem solucao:
0 3 0 0 8      
3 0 5 1 0
0 5 0 0 2
0 1 0 0 4
0 0 2 4 0

for i in range(row - 1, 0, -1):
    for j in range(col - 1, 0, -1):
        if matrix[j][i]:
            price = matrix[j][i]
        ispair += 1
            
