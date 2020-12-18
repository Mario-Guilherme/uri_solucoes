#include <iostream>
#include <cstdio>

#define ABSOLUTO(x) ((x)>=0?(x):-(x))
using namespace std;

int main ()
{
    int n,demanda,carga;
    long long int energia;


    while (scanf("%d", &n)&&n!=0){
        int i=0;
        energia = 0;
        carga = 0;

        while(i < n){

            scanf("%d", &demanda);

            carga+= demanda;

            energia+= ABSOLUTO(carga);

            i++;
        }

        printf("%lld\n", energia);

    }

}
