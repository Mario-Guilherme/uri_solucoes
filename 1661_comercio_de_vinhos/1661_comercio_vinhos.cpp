/*#include <iostream>
#include <cstdio>
#include <utility>
#include <queue>

#define ABSOLUTO(x) ((x)>=0?(x):-(x))
using namespace std;

int main(){
    queue < pair <int, int> > comprador;
    queue < pair <int, int> > vendedor;
    long long int energia = 0;
    int n,oferta,diff_distancia,diff_compra;

    while(scanf("%d", &n)&&n!=0){

        long long int energia = 0;

        for(int i = 0; i < n; i++){

            scanf("%d", &oferta);

            if(oferta>=0){

                comprador.push(make_pair(oferta,i+1));

            }else{

                vendedor.push(make_pair(ABSOLUTO(oferta),i+1));

            }

        }

        while((!comprador.empty())&&(!vendedor.empty())){

            diff_distancia = comprador.front().second - vendedor.front().second;
            diff_compra = comprador.front().first - vendedor.front().first;

            if(diff_compra == 0){

                energia+= vendedor.front().first * ABSOLUTO(diff_distancia);
                vendedor.pop();
                comprador.pop();

            }else{
                if(diff_compra>0){

                    comprador.front().first = diff_compra;
                    energia+= vendedor.front().first * ABSOLUTO(diff_distancia);
                    vendedor.pop();

                }else{

                    vendedor.front().first = ABSOLUTO(diff_compra);
                    energia+= comprador.front().first * ABSOLUTO(diff_distancia);
                    comprador.pop();

                }
            }

        }

        printf("%lld\n", energia);
  }
  return 0;
}*/

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
