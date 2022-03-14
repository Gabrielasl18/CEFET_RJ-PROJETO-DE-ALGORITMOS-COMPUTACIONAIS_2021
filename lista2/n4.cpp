/*o maior salario de uma empresa.
*/
#include <iostream>

using namespace std;


int empresa(int quant_func){
int i=0;
int matricula,sexo;
float salario,maiorSALARIO;

for(i=1;i<=quant_func;i++){

 cout << "digite aqui sua matricula:\n";
 cin >> matricula;
 cout << "digite aqui seu sexo:\n" << "(1 - feminino 2 - masculino)\n";
 cin >> sexo;
 cout << "digite aqui seu salario:\n";
 cin >> salario;

 if(salario>=maiorSALARIO){
     maiorSALARIO = salario;
 }
}
 cout << "o maior salario da empresa e: " << maiorSALARIO << "\n";

return maiorSALARIO;
}

int main(){
int quant_func;

cout << "digite a quantidade de funcionarios na empresa:\n";
cin >> quant_func;
cout << empresa(quant_func) << "\n";

return 0;
}