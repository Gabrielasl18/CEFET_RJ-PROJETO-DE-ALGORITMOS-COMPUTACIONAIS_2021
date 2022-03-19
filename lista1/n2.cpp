/*
QUANTIDADE DE ALUNOS REPROVADOS/APROVADOS
*/
#include<iostream>

using namespace std;

int quant_alunos( int quant_alunos, int quant_alunosAP) {

int quant_alunosRE,perc;
quant_alunosRE = quant_alunos - quant_alunosAP;
perc = (quant_alunosRE * 100) / quant_alunos;

return quant_alunosRE;
}
int main() {

cout << "quantidade de alunos reprovados: " << quant_alunos(35, 28) << endl;
cout << "percentual de alunos reprovados: " << (quant_alunos(35, 28) * 100) / 35 << "%" <<  endl;

return 0;
}