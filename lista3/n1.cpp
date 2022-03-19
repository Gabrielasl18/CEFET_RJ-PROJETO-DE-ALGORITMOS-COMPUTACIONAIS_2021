//RETORNA A MEDIA DOS NUMEROS DO VETOR.
#include <iostream> 

using namespace std;

float Mediavet(int inteiros,int vet[], int quantNum) 
{
float media,soma=0;
int i;

for (i = 1; i <= quantNum; i++) {
    soma += vet[i];
}
for (i = 1; i <= quantNum; i++) {
		cout << vet[i] << "\n";
}

    cout << "a soma dos numeros inseridos nos vetores >> " << soma << "\n";
    media = (soma / quantNum);
    cout << "a media dos numeros inseridos nos vetores >> " << media << "\n";

return media;
}
int main() 
{
int i = 0;
int vet[] = {i}, quantNum;
    
    cout << "digite a quantidade de numeros que serao armazenados no vetor >> ";
    cin >> quantNum;
    cout << "\n";

for (i = 1; i <= quantNum; i++) {
    cin >> vet[i];
}
    cout << Mediavet(i, vet, quantNum);

return 0;
}