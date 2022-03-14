#include <iostream>

using namespace std;

int misterio(int x0){

int n;
float proximo;
float anterior = x0 - ((x0 * x0 - x0)/(2*x0));

for(n=1;n<=100;n++){
    proximo = (anterior  - (anterior * anterior - x0)/(2*anterior));
    anterior = proximo;
}
return anterior;
}
int main(){

int x0;
cin >> x0;
cout << misterio(x0) << endl;

return 0;
}