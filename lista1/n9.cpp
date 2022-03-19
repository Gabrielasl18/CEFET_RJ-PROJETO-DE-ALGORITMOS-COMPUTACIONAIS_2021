/*
CALCULA E EXIBE A SOMA E A MEDIA DOS NUMEROS
*/

#include <iostream>

using namespace std;


int le_calcula_soma(int x, int y){

int soma=0;
soma = x + y;
calcula_media(soma);

return soma;
}
int calcula_media(int soma){

float media=0;
media=soma/2;
cout << "a soma = " << soma << endl;
cout << "a media = " << media << endl;

return 0;
}
int main(){

int x,y;
cout << "entre com o primeiro numero inteiro";
cin >> x;
cout << "entre com o segundo numero inteiro";
cin >> y;
le_calcula_soma(x,y);


return 0;
}