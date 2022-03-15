#include <iostream> 

using namespace std; 


int main() 

{ 

   int dias,semanas,entrada; 

   cout << "Digite o numero de dias: "; 
   cin >>  entrada; 

if(entrada>7){ 

        semanas=entrada/7; 
        dias=entrada%7; 
        cout << semanas << " semanas e " << dias << " dias."; 
} 

   else{ 
       dias=entrada; 
       cout << dias << " dias."; 
   } 
    return 0; 
} 

 