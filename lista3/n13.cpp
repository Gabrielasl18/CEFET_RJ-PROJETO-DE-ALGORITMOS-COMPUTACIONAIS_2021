#include <iostream>

using namespace std;

struct operadora{
int codPlano;
int quantMinutos;
float valorAss;
float valorExcedente;
}telefonia[2];

int exibePlanos(int numplanosLidos,struct operadora telefonia[],int minDesejados){

for(int i=0;i<numplanosLidos;i++){
cout << " ---- PLANO " << i <<  "----\n" << telefonia[i].codPlano << "\n" << telefonia[i].quantMinutos << "\n" << telefonia[i].valorAss << "\n" << telefonia[i].valorExcedente << "\n";
}
cout << endl;
return 0;
}

int planos(struct operadora telefonia[]){

int numplanosLidos=0,minDesejados;
int i=0;
for(i=0;i<2;i++){
cout << "digite o codigo do plano :: ";
cin >> telefonia[i].codPlano;
cout << "digite a quantidade de minutos livres :: ";
cin >> telefonia[i].quantMinutos;
cout << "digite o valor da assinatura :: ";
cin >> telefonia[i].valorAss;
cout << "digite o valor mínimo excedente :: ";
cin >> telefonia[i].valorExcedente;
cout << endl;
numplanosLidos++;
}
exibePlanos(numplanosLidos,telefonia,minDesejados);

return numplanosLidos;
}

int escolhePlano(){

int minDesejados=0,minExcedidos=0,escolha;
float valorPagar=0;
planos(telefonia);

cout << "qual sua escolha de plano --";
cin >> escolha;
cout << "digite os minutos desejados :: ";
cin>> minDesejados;
minExcedidos = minDesejados - telefonia[escolha].quantMinutos;

if(minExcedidos>0){
valorPagar = telefonia[escolha].valorAss + (minExcedidos * telefonia[escolha].valorExcedente);
cout << "voce tera que pagar :: R$" << valorPagar << "\n";
}
else{
cout << "voce tera que pagar :: R$" << telefonia[escolha].valorAss << endl;
}
return 0;
}
int main(){

escolhePlano();

return 0;
}