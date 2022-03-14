/*menu para calcular o salario de 20 trabalhadores em suas respectivas profissoes 
*/
#include <iostream>


using namespace std;


int horista(){

float valor_hora_trabalho,quant_horas_trabalhadas,salario=0;

    cout << "por favor, digite aqui o valor da hora de trabalho : \n";
    cin >> valor_hora_trabalho;
    cout << "agora o valor de horas  trabalhadas: \n";
    cin >> quant_horas_trabalhadas;

salario = valor_hora_trabalho * quant_horas_trabalhadas;


return salario;
}
int contratado(){ 

float salario=0;

    cout << "por favor, digite aqui seu salario: \n";
    cin >> salario;
    cout << "\n";

return salario; 
}
int prestador_de_serviço(){

float valor_servico,quant_serv_prestados,salario=0;

    cout << "por favor, digite aqui a quantidade de servicos prestados: \n";
    cin >> quant_serv_prestados;
    cout << "agora o valor para cada serviço: \n";
    cin >> valor_servico;
    cout << "\n";   

salario = quant_serv_prestados * valor_servico;

return salario;
}
int menu(){

int i=1,funcao;

while(i<=20){

cout << "\n";
cout << "em qual desses menu's voce se encaixa? \n";
cout << "1 - HORISTA 2 - CONTRATADO 3 - PRESTADOR DE SERVICO: \n";
cin >> funcao;

  switch (funcao)
  {
  case 1: 
      cout << horista();
      break; 
  case 2:
      cout << contratado();
      break;
  case 3:
      cout << prestador_de_serviço();
      break;
  default:
      break;
  }

i++;    
}
return funcao;
}
int main(){

cout << menu();
cout << "\n";

return 0;    
}