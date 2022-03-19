/*
CALCULA A MEDIA PONDERADA
*/
#include <iostream>

using namespace std;

float calc_pond(float nota_1, float nota_2) {

float media_pond;
media_pond = ((nota_1 * 2 + nota_2 * 4) / 6);
return media_pond;

}
int main() {

float nota_1, nota_2;
cout << "digite aqui a primeira nota: "<<endl;
cin >> nota_1;
cout << "digite aqui a segunda nota: "<< endl;
cin >> nota_2;
cout << "sua media esta em: " << calc_pond(nota_1, nota_2) << endl;

return 0;
}