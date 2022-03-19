#include <iostream>

using namespace std;

int exibesemRep(int numInt[],int quantNum,int numProcurado){

int numEncontrado=0;
int i=0,j=0;
do{
if(numInt[i]!=numProcurado){
    cout << "procurando...\n";
}
else if(numInt[i]==numProcurado){
numEncontrado = numInt[i];
cout << "encontrado > " << numEncontrado << " na posicao > " << i << "\n";
}
for(j=0;j<=3;j++){
if(numInt[i]==0){
numInt[j]=numProcurado;
cout << numInt[j] << " colocado na posicao > " << j << endl;
}
i++;
}
}while(i<=3);
return 0;
}
int main(){

int quantNum=4;
int numInt[4]={0,0,0,0};

numInt[0]=1;
numInt[1]=7;
numInt[2]=8;
numInt[3]=0;

exibesemRep(numInt,quantNum,6);
return 0;
}