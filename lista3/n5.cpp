//RETORNA O MAIOR NUMERO ARMAZENADO NO VETOR.
#include <iostream>

using namespace std;

float vetReal(float reais, float vet[],float quantArm,float media){
int acimaMedia = 0;
int maior=0;

for(int i=1;i<=quantArm;i++){
 if (vet[i]>maior){
     maior=vet[i];
 }
}
return maior;
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
}
cout << "o maior numero armazenado no vetor >> " << vetReal(i,vet,quantArm,media) << "\n";

return 0;
}