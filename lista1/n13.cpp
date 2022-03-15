//programa pra calcular volume de uma caixa com furo cilindrico

#include <iostream>

using namespace std;

#define pi 3.14159

float volume_caixa(float a, float b, float c){
float Vcaixa = 0;

Vcaixa = a * b * c;

return Vcaixa;    
}

float volume_cilindro(float r,float h){

float Vcilindro = 0;
Vcilindro = (pi * h * (r * r));

return Vcilindro;
}

float volume_furo(float Vcaixa,float Vcilindro){

int Vfuro = 0;
Vfuro = Vcaixa - Vcilindro;

return Vfuro;    
}

int main(){

float a,b,c;
float r,h;
cout << "ola, digite os lados a, b e c da caixa, respectivamente: \n";
cin >> a >> b >> c;
cout << "\n";
cout << "agora digite o raio(r) e a altura(h) do cilindro: \n";
cin >> r >> h;
cout<< "volume da caixa: " << volume_caixa(a,b,c) << "\n";
cout<< "volume do cilindro: " << volume_cilindro(r,h) << "\n";
cout<< "volume da caixa com o furo cilindrico: " << volume_furo(volume_caixa(a,b,c),volume_cilindro(r,h)) << "\n";

return 0;
}