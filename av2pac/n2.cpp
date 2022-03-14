//ler 10 numeros inteiros e imprimir o MENOR que seja MAIOR que a media dos numeros informados.
#include <iostream>

using namespace std;

int main(){
int inteiro[10],i,menor,soma=0,media=0;

for(i=1; i<10 ;i++){
    cout << "por favor, digite 10 numeros inteiros >> ";
    cin >> inteiro[i]; //le os 10 numeros inteiros.
    cout << "\n";
    soma += inteiro[i]; //faz a soma dos 10 numeros.
    media = soma/10; // media dos 10 numeros.
}
for(i=1;i<10;i++){
    if(inteiro[i] < menor && inteiro[i]>media){ //analisa se o inteiro é o menor numero dos 10 que seja maior que a media.
    menor=inteiro[i];
    }
}
cout << "o numero inteiro que e o menor entre os 10 e maior que a media >> " << menor << "\n"; 

return 0;
}