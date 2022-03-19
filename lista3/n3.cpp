//RETORNA A QUANTIDADE DE NUMEROS ACIMA DA MEDIA DOS NUMEROS ARMAZENADOS NO VETOR.
#include <iostream>

using namespace std;

float vetReal(float reais, float vet[],float quantArm,float media){
int acimaMedia = 0;
float soma=0;

for(int i=1;i<=quantArm;i++){
if(vet[i]>media){
    acimaMedia+=1;
}
}
cout << "Quantidade de numeros no vetor acima da media >> " << acimaMedia << "\n";

return acimaMedia;
}

int main(){

int i;
int quantArm=5;
float vet[5];
float soma = 0;
float media = 0;

for(i=1;i<=quantArm;i++){

cout << "vetor >> ";
cin >> vet[i];
cout << "\n";
soma += vet[i];
media = soma/quantArm;
}
vetReal(i,vet,quantArm,media);

return 0;
}