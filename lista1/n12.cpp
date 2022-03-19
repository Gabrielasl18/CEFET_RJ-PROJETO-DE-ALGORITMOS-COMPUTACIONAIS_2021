/*
a quantidade de cada célula a ser sacada no banco.
*/
#include <iostream>

using namespace std;

int valorSacado(int valoraSacar){

int um=0,dois=0,cinco=0,dez=0,vinte=0,cinquenta=0,cem=0;
int pago;

while(valoraSacar!=0){
if(valoraSacar>=1 && valoraSacar < 2){
valoraSacar = valoraSacar - 1;
um++;
}
if(valoraSacar>=2 && valoraSacar < 5){
valoraSacar = valoraSacar - 2;
dois++;
}
if(valoraSacar>=5 && valoraSacar < 10){
valoraSacar = valoraSacar - 5;
cinco++;
}
if(valoraSacar>=10 && valoraSacar < 20){
valoraSacar = valoraSacar - 10;
dez++;
}
if(valoraSacar>=20 && valoraSacar < 50 ){
valoraSacar = valoraSacar - 20;
vinte++;
}
if(valoraSacar>=50 && valoraSacar < 100){
valoraSacar = valoraSacar - 50;
cinquenta++;
}
if(valoraSacar>=100){
valoraSacar = valoraSacar - 100;
cem++;
}
}
if(um > 0){
cout << "pago com > " << um << " cedulas de 1." << endl;
}
if(dois > 0){
cout << "pago com > " << dois << " cedulas de 2." << endl;
}
if(cinco > 0){
cout << "pago com > " << cinco << " cedulas de 5." << endl;
}
if(dez > 0){
cout << "pago com > " << dez << " cedulas de 10." << endl;
}
if(vinte > 0){
cout << "pago com > " << vinte << " cedulas de 20." << endl;
}
if(cinquenta > 0){
cout << "pago com > " << cinquenta << " cedulas de 50." << endl;
}
if(cem > 0){
cout << "pago com > " << cem << " cedulas de 100." << endl;
}
return 0;
}
int main(){

int valoraSacar;
cout << "O valor que deseja sacar > ";
cin >> valoraSacar;
cout << endl;
valorSacado(valoraSacar);

return 0;
}