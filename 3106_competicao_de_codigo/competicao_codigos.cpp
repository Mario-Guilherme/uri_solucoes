#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int n,i=0,vao=0,s;
    //soma_quant_aluno=0, rest_div_alun=0, ,s;

    scanf("%d", &n);
    while(i!=n){
        scanf("%d", &s);
        vao+=(s-s%3);
        i++;

    }

    printf("%d\n", vao);
    return 0;
}
