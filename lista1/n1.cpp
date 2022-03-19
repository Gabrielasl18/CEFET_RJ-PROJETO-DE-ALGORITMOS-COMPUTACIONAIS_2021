/*
CALCULA O IMC
*/
#include<iostream>

using namespace std;

float calculaIMC(float peso, float altura) {
float IMC;
IMC = (peso / (altura * altura));

return IMC;
}
int main(){

float imc;
imc = calculaIMC(58,1.57);
cout << "seu imc esta em: "<< imc;

}