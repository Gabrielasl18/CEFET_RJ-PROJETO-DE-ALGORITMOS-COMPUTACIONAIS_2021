/*ler a quantidade de funcionarios de uma empresa, ler os dados, exibir a quantidade de funcionariAs.
*/
#include<iostream>

using namespace std;

int empresa(int quant_func){
int i=0;
int matricula,sexo,funcionarias = 0,funcionarios = 0;

for(i=1;i<=quant_func;i++){

 cout << "digite aqui sua matricula:\n";
 cin >> matricula;
 cout << "digite aqui seu sexo:\n" << "(1 - feminino 2 - masculino)\n";
 cin >> sexo;
(sexo==1) ? funcionarias++ : funcionarios++;
}

cout << "a quantidade de funcionariAs na empresa: " << funcionarias << "\n";

return funcionarios;
}

int main(){
int quant_func;

cout << "digite a quantidade de funcionarios na empresa:\n";
cin >> quant_func;
cout << empresa(quant_func) << "\n";

return 0;
}