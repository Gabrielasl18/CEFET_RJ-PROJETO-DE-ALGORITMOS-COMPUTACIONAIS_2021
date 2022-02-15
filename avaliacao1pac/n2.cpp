#include <iostream>

using namespace std;

int main(){

    int quant_meses,i,j,mes,ano,masc_vacinados;
    int fem_vacinados,vacinados_mes,vacinados_meses;
    int somaM,somaH;

   cout << "digite o período"<<endl;
   cin >> quant_meses;
   
   somaM = 0;
   somaH = 0;

for(i = 1;  i<=quant_meses; i++){
        cin >> mes;
        cin >> ano;
        cin >> masc_vacinados;
        cin >> fem_vacinados;
        cout << "o total de vacinados no mes foi de: " << masc_vacinados + fem_vacinados << endl;

              somaH += masc_vacinados;
              somaM += fem_vacinados; 
}
          cout << "o total de MULHERES vacinadas no periodo de " << quant_meses <<  " meses foi de: " << somaM << endl;
          cout << "o total de HOMENS vacinados no periodo de " << quant_meses << " meses foi de: " << somaH << endl;

return 0;
}
