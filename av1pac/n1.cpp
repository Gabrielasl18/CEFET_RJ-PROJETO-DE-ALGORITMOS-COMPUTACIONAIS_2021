#include <iostream>

using namespace std;

int main()
{
    int ano_bis,ano,mes,dia,data;

cout << "por favor,entre com uma data no formato ddmmaaaa" << endl;
cin >> data;

dia = (data/1000000);
mes = (data/10000) % 100;
ano = data % 10000;
ano_bis = ano % 4;
  
if(dia>=1 && dia<=28){
            cout << "data valida" << endl;
      if(mes==1 || mes==3 || mes==5 || mes==7  || mes==8 || mes==10 || mes==12){
          if(dia<=31){
                   cout <<  "data valida" << endl;
               if(mes==4 || mes==6 || mes==9 || mes==11){
                  if(dia<=30){
                            cout << "data valida" << endl;
                        if(mes==2 && ano==ano_bis){
                           if(dia<=29){
                                  cout << "data valida" << endl;
                        }
                    }
                }
            }
        }
    }
}
else{
     cout << "data invalida" << endl;
}
  cout << "dia:" << dia << endl;
  cout << "mes:" << mes << endl;
  cout << "ano:" << ano << endl;
return 0;  
}