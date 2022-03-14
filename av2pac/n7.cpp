/*
ler varias strings e retornar aquela de menor comprimento.
*/
#include <iostream>
#include <string.h>

using namespace std;

int Caracteres(char string[]){
int numCaracteres=0,i;
int menor=0;

for(i=1;string[numCaracteres]!=0;i++){
    ++numCaracteres;
}
return numCaracteres;
}
int main(){
char nome[40];
char menor[40];
int i=0;
strcpy(menor,nome);

for(i=1;i<=10;i++){
    cin >> nome;
    if(Caracteres(nome) < Caracteres(menor)){
    strcpy(menor,nome);
    }
}
cout <<  "menor string :: " << menor << "\n";

return 0;
}