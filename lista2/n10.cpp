/*
valor a ser pago por um computador, com vendas adicionas de perifericos.
*/
#include <iostream>

using namespace std;

float perifericos(int quant_perifericos){
int i; 
float valor_pago_periferico;
float valor_periferico;
float valor_total_perifericos=0;

for(i=1;i<=quant_perifericos;i++){

cout << "entre com o valor do periferico: \n";
cin >> valor_periferico;
cout << "o preco do periferico: " << valor_periferico << "\n";

valor_pago_periferico = 1 * valor_periferico;
valor_total_perifericos += valor_pago_periferico;

cout << "o valor da venda: " << valor_pago_periferico << "\n"; 

}
valor_total_perifericos = valor_pago_periferico++;

return valor_total_perifericos;
}
int vendas(){
int quant_perifericos,i=1,j=1,TOTAL_vendas=0;
int sem_perifericos=0;
int codigo_modelo;
float preco_TOTALcomputador=0;
float valor_media_vendas=0;
float com_perifericos;
float preco_modelo;

cout << "informe o codigo do modelo >> " << " ";
cin >> codigo_modelo;
cout << "\n";

while(codigo_modelo!=0){

cout << "digite a quantidade de perifericos adicionais: \n"; 
cin >> quant_perifericos;

         if (quant_perifericos==0){
               sem_perifericos = i++;
         }
            if(quant_perifericos!=0){
               com_perifericos = perifericos(quant_perifericos);
         }

cout << "digite o preco do modelo: \n";
cin >> preco_modelo;
preco_TOTALcomputador += preco_modelo + com_perifericos;
cout << "informe o codigo do modelo >> " << " ";
cin >> codigo_modelo;
TOTAL_vendas = j++;
}
cout << "a quantidade de vendas sem perifericos adicionais: " << sem_perifericos << "\n" ;
cout << "o TOTAL de vendas de computadores : " << TOTAL_vendas << "\n"; 
cout << "PRECO total da vendas de computadores >> " << preco_TOTALcomputador << "\n";

return 0;   
}
int main(){

cout << vendas();
cout << "\n";

return 0;
}