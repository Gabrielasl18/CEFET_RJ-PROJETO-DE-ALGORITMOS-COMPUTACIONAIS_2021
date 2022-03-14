/*
calcula o IMC dos atletas.
*/
#include <iostream>
#include <string.h>

using namespace std;

struct Atletas{
   char nome[40];
   float peso;
   float altura;
}dados[5];

float calculaIMC(struct Atletas dados[]){
float IMC=0;

for(int i=0;i<=4;i++){
IMC = dados[i].peso/(dados[i].altura*dados[i].altura);
cout << "o IMC de > " << dados[i].nome << " > " << IMC << "\n"; 
}
return 0;
}
int main(){

strcpy(dados[0].nome,"gabriela");
dados[0].peso = 58;
dados[0].altura = 1.57;
strcpy(dados[1].nome,"maria");
dados[1].peso = 87;
dados[1].altura = 1.95;
strcpy(dados[2].nome,"pedro");
dados[2].peso = 65;
dados[2].altura = 1.56;
strcpy(dados[3].nome,"joseph");
dados[3].peso = 74;
dados[3].altura = 1.57;
strcpy(dados[4].nome,"carolina");
dados[4].peso = 50;
dados[4].altura = 1.60;
calculaIMC(dados);

return 0;
}