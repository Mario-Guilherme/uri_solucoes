# URI 1237 COMPARAÇÃO DE SUBSTRING
Questão feita em C++ utilizando programação dinâmica,para achar a solução ótima com abordagem TOP-DOWN.

Fórmula recursiva para solução:

![equation](https://latex.codecogs.com/gif.latex?lcs%28a%2Cb%29%3D%5Cleft%5C%7B%5Cbegin%7Bmatrix%7D%20%26%201&plus;lcs%28a-1%2Cb-1%29%20%26%2C%20se%20%26%20S1%5Ba-1%5D%3DS2%5Bb-1%5D%20%5C%5C%20%26%20MAX%28lcs%28a-1%2Cb%29%2Clcs%28a%2Cb-1%29%29%20%26%2C%20se%20%26%20S1%5Ba-1%5D%20%5Cneq%20S2%5Bb-1%5D%20%5Cend%7Bmatrix%7D%5Cright)
