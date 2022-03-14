/*a soma TOTAL de todos os salarios de uma empresa
*/
#include <iostream>

using namespace std;


int empresa(int quant_func){
int i=0;
int matricula,sexo;
float salario,salarioTOTAL =0;

for(i=1;i<=quant_func;i++){

 cout << "digite aqui sua matricula:\n";
 cin >> matricula;
 cout << "digite aqui seu sexo:\n" << "(1 - feminino 2 - masculino)\n";
 cin >> sexo;
 cout << "digite aqui seu salario:\n";
 cin >> salario;

 salarioTOTAL+=salario;

}

cout << "a soma de TODOS os salarios da empresa: " << salarioTOTAL << "\n";

return salarioTOTAL;
}

int main(){
int quant_func;

cout << "digite a quantidade de funcionarios na empresa:\n";
cin >> quant_func;
cout << empresa(quant_func) << "\n";

return 0;
}