//PROGRAMA QUE DIZ A QUANTIDADE EXATA DE NUMEROS IMPARES E PARES EXISTENTES NO VETOR.
#include <iostream> 

using namespace std;

float parImpar(int inteiros, int vet[], int quantNum)
{
	float media, soma = 0;
	int i;
	int quantPar = 0, quantImpar = 0;


for (i = 1; i <= quantNum; i++) 
{
     if (vet[i] % 2 == 0){
    quantPar +=1;
    }
    if (vet[i] % 2 != 0){
    quantImpar += 1;
    }
}
for (i = 1; i <= quantNum; i++) {
    cout << vet[i] << "\n";
}
    cout << "a quantidade de numeros pares >> " << quantPar << "\n" << "e a quantidade de numeros impares >> " << quantImpar << "\n";

return 0;
}
int main()
{
int i = 0;
int vet[] = { i }, quantNum;

    cout << "digite a quantidade de numeros que serao armazenados no vetor >> ";
    cin >> quantNum;
    cout << "\n";

for (i = 1; i <= quantNum; i++) {
    cin >> vet[i];
}
cout << parImpar(i, vet, quantNum);

return 0;
}