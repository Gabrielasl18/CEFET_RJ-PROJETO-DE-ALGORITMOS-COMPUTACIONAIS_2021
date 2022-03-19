/*
USA UMA FUNÇÃO(CALCULA_SOMA) DENTRO DE OUTRA FUNÇÃO(CALCULA_MEDIA)
*/
#include <iostream>

using namespace std;

int calcula_soma(int x, int y)
{
int soma;
soma = x + y;
cout << endl << "soma ->> " << soma << endl;

return soma;
}
int calcula_media(int x, int y)
{
int media;
media = ((calcula_soma(x,y))/2);

return media;
}
int main()
{
int x, y;
cout << "digite aqui o primeiro numero inteiro: " << endl;
cin >> x;
cout << "digite aqui o segundo numero inteiro: " << endl;
cin >> y;
cout << "a media dos numeros: " << x << ", " << y << " ->> " << calcula_media(x,y) << endl;

return 0;
}