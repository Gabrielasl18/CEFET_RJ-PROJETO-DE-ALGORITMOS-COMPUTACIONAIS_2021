//o maior salario de cada departamento, a soma dos salarios de cada departamento e a soma de todos os salarios da empresa
#include <iostream>

using namespace std;

int departamento(int quant_funcionarios){

int matricula,i=1;
float soma_salarioDep=0;
float salario=0,maior=0;

while(i<=quant_funcionarios){

  cout << "funcionario " << i << ", por favor,entre com a matricula : \n" ;
  cin >> matricula;
  cout  << "entre tambem com o salario : \n";
  cin >> salario;
  
      (salario>=maior) ? maior=salario : ;

i++;
soma_salarioDep += salario++;
}
cout << "o maior salario da empresa e : \n" << maior << "\n";

return soma_salarioDep;    
}
int main(){

int quant_funcionarios=2,j=1;
float SALARIO_TOTAL_EMPRESA = 0;

while(j<=10){

 cout << "\n";
 cout << "departamento " << j << "\n";
 cout << "\n";
 SALARIO_TOTAL_EMPRESA += departamento(quant_funcionarios);

j++;
}

cout << "a soma de todos os salarios da empresa : " << SALARIO_TOTAL_EMPRESA << "\n";
cout << "\n";

return 0; 
}
