//RETORNA A QUANTIDADE DE NUMEROS MAIORES QUE O ULTIMO NUMERO ARMAZENADO NO VETOR.
#include <iostream>

using namespace std;

float vetReal(float reais, float vet[],float quantArm,float media){
int acimaMedia = 0;
int maiorUltimo=0;

for(int i=1;i<=quantArm;i++){
 if (vet[i]>vet[5]){
     maiorUltimo += 1;
 }
}
cout << "quantidade de numeros maiores que o ultimo numero armazenado no vetor >> " << maiorUltimo;

return maiorUltimo;
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
vetReal(i,vet,quantArm,media);
}

return 0;
}