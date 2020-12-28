#include<iostream>
#include<cstdio>
#include<string>
#define MAX(x,y) (x>=y? x : y)
#define MAXN 102
using namespace std;

int lcs(string &s1, string &s2){
    int tabela[MAXN][MAXN];
    int resultado=0;
    for(int i=0;i<=s1.size();i++){
        for(int j=0;j<=s2.size();j++){
            if(i==0||j==0) tabela[i][j]=0;
            else{
                if(s1[i-1]==s2[j-1]){
                tabela[i][j]=tabela[i-1][j-1]+1;
                resultado = MAX(resultado,tabela[i][j]);
                }else{
                    tabela[i][j]=0;
                }
            }
        }
    }
    return resultado;
}

 int main(){
    string s1,s2;

    while(getline(cin, s1)){
        if(cin.eof()) break;

        getline(cin, s2);

        printf("%d\n",lcs(s1,s2));
    }

    return 0;
 }

