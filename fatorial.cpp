#include<iostream>
#include<locale>

using namespace std;

unsigned long long fatorial(int n){/*unsigned - é um modificador que declara o 
armazenamento somente de números naturais (inteiros não negativos, ou seja, positivos 
e zero) e também aumentand a capacidade de armazenamento do long long, por não necessitar 
de armazenar os números negativos*/
	
	if(n==0 || n==1){ return 1; }else{ return n*fatorial(n-1); }/*Verifica se o número 
	é 0 ou 1 e retorna 1. Senão executará a funçãa recursiva, ou seja, chamando a si
	mesma novamente*/
}

main(){
	
	setlocale (LC_ALL,"portuguese");
	
	int n;
	cout << "Digite um número inteiro não negativo: "; cin >> n; /*recebendo a entrada
	do número*/
	
	cout << "\nO fatorial de " << n <<  " é : " << fatorial(n);/*Imprimindo o resultado
	do número fatorial, conforme a execução da função fatorial*/
}
