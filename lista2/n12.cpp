/*pedidos reservas de uma modalidade esportiva.
*/
#include <iostream> 

using namespace std;

int pedidosReservas(int codigo, int quantDisponiveis,int precoUnitario){

int i=1,ID,totalReservados,quantIngressos,total=0,totalDisponivel=0;

cout << "se identifique:\n";
cin >> ID;

for (i=1; i<=quantDisponiveis;i++)
{
while(ID!=0)
{

cout << "digite a quantidade dos ingressos de reserva \n";
cin >> quantIngressos;

if(totalDisponivel==0)
{
     totalDisponivel=0;
 cout << "ingressos esgotados!\n";
}
    // total += quantIngressos++;

if(quantIngressos <= quantDisponiveis && quantIngressos<6)
{
     total += quantIngressos++;
cout << "compra efetuada com sucesso! \n";

}
else if(quantIngressos>=6)
{
cout << "Acima do maximo permitido!\n";
if(quantIngressos >= totalDisponivel)
{
cout << "Quantidade desejada acima da disponivel! \n";
}
}
totalDisponivel = quantDisponiveis - total;
cout << "O total de ingressos ate o momento " << totalDisponivel << "\n";

cout << "\n";
cout << "se identifique:\n";
cin >> ID;
}
}
return totalReservados;
}
int main(){

int codigo, quantDisponiveis,precoUnitario;
cout << "digite o codigo >>  ";
cin >> codigo;
cout << "\n";
cout << "digite a quantidade de ingressos disponiveis >>  ";
cin >> quantDisponiveis;
cout << "\n";
cout << "digite o preco unitario >>  ";
cin >> precoUnitario;
cout << "\n";

cout << pedidosReservas(codigo,quantDisponiveis,precoUnitario);

return 0;    
}