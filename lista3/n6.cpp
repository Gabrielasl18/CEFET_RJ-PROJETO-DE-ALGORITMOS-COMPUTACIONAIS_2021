// SOMA 2 VETORES.
#include <iostream>

using namespace std;

float somaVets(float reais, float vet_1[],float vet_2[],float quantArm){

float soma = 0;

for(int i=1;i<=quantArm;i++){

cout << vet_1[i] << "\n";
cout << vet_2[i] << "\n";
}
for (int i=1;i<=quantArm;i++){
soma = vet_1[i] + vet_2[i];
cout << "a soma >> " << soma << "\n";
}

return soma;
}

int main(){

int i;
int quantArm=5;
float vet_1[5];
float vet_2[5];
float soma = 0;
float media = 0;

for(i=1;i<=quantArm;i++){
cout << "vetor 1 >> ";
cin >> vet_1[i];
cout << "\n";
}
for(i=1;i<=quantArm;i++){
cout << "vetor 2 >> ";
cin >> vet_2[i];
cout << "\n";
}
somaVets(i,vet_1,vet_2,quantArm);

return 0;
}