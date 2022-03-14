/*calcular a quantidade de downloads. do valor de tantos downloads por tal preço
*/
#include <iostream>

using namespace std;

int downloads(int quant_downloads)
{

int  total_downloads2M = 0;
float tam_mbytes, tamanho_total_downloads;

for(int j=1;j<=quant_downloads;j++)
{

cout << "digite o tamanho do MBytes" << "\n";
cin >> tam_mbytes;
tamanho_total_downloads += tam_mbytes;

  if(tam_mbytes<=2)
  {
    total_downloads2M ++; 
  }
}

cout << "Quantidade de downloads ate 2 MBytes: " <<total_downloads2M << "\n"; 

return tamanho_total_downloads; 
}   

int main()
{
int quant_downloads;
float preco_site, valor_total=0,valor_total_todos_usuarios = 0,usuarios;

cout << "Preco do site por Mbyte: ";
cin >> preco_site;

cout << "digite a quantidade de downloads" << "\n";
cin >> quant_downloads;

while(quant_downloads != 0)
{usuarios++;
valor_total = downloads(quant_downloads);
cout << "Valor total a ser pago: R$" << preco_site * valor_total;
cout << "\n";
cout << "digite a quantidade de downloads";
cout << "\n";
cin >> quant_downloads;
cout << "\n";
valor_total_todos_usuarios += preco_site * valor_total;
}
cout << valor_total_todos_usuarios/usuarios;
 

return 0; 
}