//tabuada de 1 a 10
#include <iostream>

using namespace std;

int tabuada(int N){

int i=0,multiplicacao;

for(N=1;N<=10;N++){

    cout << "\n";

  for(i=0;i<=10;i++){

    multiplicacao = N * i;
    cout << N << " x " << i << " = "<< multiplicacao << "\n"; 
  
  }
}
return 0;
}
int main(){
int N;
// cin >> N;
cout << tabuada(N);

return 0;
}