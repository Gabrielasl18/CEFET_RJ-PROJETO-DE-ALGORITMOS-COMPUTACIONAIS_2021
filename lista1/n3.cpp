/*
CALCULA A MEDIA
*/
#include <iostream>

using namespace std;

double calculamedia(int a, int b, int c) {

double media;
media = ((a + b + c) / 3);

return media;
}
int main() {
int a, b, c;

cout << "entre com o primeiro numero inteiro: " << endl;
cin >> a; 
cout << "entre com o segundo numero inteiro: " << endl;
cin >> b;
cout << "entre com o terceiro numero inteiro: " << endl;
cin >> c;
cout << "a media entre: " << endl << a << endl << b << endl << c << endl << "eh:" << endl;
cout << endl << endl << endl << calculamedia(a,b,c)<< endl << endl;
cout << "######################### FIM #########################" << endl;

return 0;
}