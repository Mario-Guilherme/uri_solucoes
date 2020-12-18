# URI 1237 COMPARAÇÃO DE SUBSTRING
Questão feita em C++ utilizando programação dinâmica,para achar a solução ótima com abordagem TOP-DOWN.

Fórmula recursiva para solução:

![equation](https://latex.codecogs.com/gif.latex?lcs(a,b)=\left\{\begin{matrix}&space;&&space;1&plus;lcs(a-1,b-1)&space;&,&space;se&space;&&space;S1[a-1]=S2[b-1]&space;\\&space;&&space;MAX(lcs(a-1,b),lcs(a,b-1))&space;&,&space;se&space;&&space;S1[a-1]&space;\neq&space;S2[b-1]&space;\end{matrix}\right.)
