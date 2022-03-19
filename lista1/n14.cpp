/*
calcula o perímetro do triangula e a distancia entre dois pontos.
*/
#include <iostream>
#include <math.h>

using namespace std;

float distancia(float x1,float x2,float y1,float y2){

float distanciaXY;
distanciaXY= sqrt(pow(x1,x2) + pow(y1,y2));

return distanciaXY;
}

int main(){

float v1,v2,v3,x1,x2,y1,y2,perTriangulo=0;
cout << "digite as 3 vertices de um triangulo > ";
cin >> v1 >> v2 >> v3;
perTriangulo = v1+v2+v3;
cout << "perimetro do triangulo > " << perTriangulo << endl;
cout << "de as coordenados dos 2 pontos (x1,x2)(y1,y2) :: ";
distancia(x1,x2,y1,y2);

return 0;
}