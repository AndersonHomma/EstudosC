#include<iostream>
#include<locale>

using namespace std;

unsigned long long fatorial(int n){/*unsigned - � um modificador que declara o 
armazenamento somente de n�meros naturais (inteiros n�o negativos, ou seja, positivos 
e zero) e tamb�m aumentand a capacidade de armazenamento do long long, por n�o necessitar 
de armazenar os n�meros negativos*/
	
	if(n==0 || n==1){ return 1; }else{ return n*fatorial(n-1); }/*Verifica se o n�mero 
	� 0 ou 1 e retorna 1. Sen�o executar� a fun��a recursiva, ou seja, chamando a si
	mesma novamente*/
}

main(){
	
	setlocale (LC_ALL,"portuguese");
	
	int n;
	cout << "Digite um n�mero inteiro n�o negativo: "; cin >> n; /*recebendo a entrada
	do n�mero*/
	
	cout << "\nO fatorial de " << n <<  " � : " << fatorial(n);/*Imprimindo o resultado
	do n�mero fatorial, conforme a execu��o da fun��o fatorial*/
}
