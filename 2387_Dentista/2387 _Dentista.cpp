#include <iostream>
#include <cstdio>
#include <algorithm>

#define MAXN 10106

using namespace std;

struct Horario{
    int ini;
    int fim;
};

int comptempo(Horario a, Horario b){
    return a.fim < b.fim;
}

int main() {
    Horario paciente[MAXN];
    int n, ini, fim, consultas=1, x;

    scanf("%d", &n);
    for(int i = 0;i < n;i++){
        scanf("%d %d", &ini, &fim);
        paciente[i].ini = ini;
        paciente[i].fim = fim;
        }
    sort(paciente, paciente+n, comptempo);

    x = paciente[0].fim;

    for(int i = 1;i < n;i++){
       if(paciente[i].ini >= x){
            consultas++;
            x = paciente[i].fim;
           }
        }
    printf("%d\n", consultas);

    return 0;
}
