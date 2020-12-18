#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#define MAXN 51
#define MAX(x,y) (x>=y? x : y)
using namespace std;

int tabela[MAXN][MAXN],resultado;
string s1, s2;

int lcs(int a, int b){


	if(tabela[a][b]>=0) return tabela[a][b];

	if(a==0||b==0) return tabela[a][b]=0;

	if(s1[a-1]==s2[b-1])return tabela[a][b]=1+lcs(a-1,b-1);

    tabela[a][b]= MAX(lcs(a,b-1), lcs(a-1,b));
}

int main(){

    getline(cin, s1);
    getchar();
    getline(cin, s2);

    if(cin.eof()) return 0;

    memset(tabela,-1,sizeof(tabela));
    resultado=0;

    printf("%d\n",lcs(s1.length(), s2.length()));

    s1.clear();
    s2.clear();
	main();
	return 0;
}
