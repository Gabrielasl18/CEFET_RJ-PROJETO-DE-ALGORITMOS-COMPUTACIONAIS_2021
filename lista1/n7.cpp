/*
1 FUNCAO PRA CALCULAR A SOMA E A OUTRA PRA CALCULAR A MEDIA E RECEBE A SOMA (OBRIGATORIAMENTE) COMO PARAMETRO
*/
#include <iostream>
using namespace std;

int calcula_soma(int x,int y) 
{
int soma;
soma = x + y;

return soma;
}
int calcula_media(int soma)
{
int media;
media = soma/2;

return media;
}