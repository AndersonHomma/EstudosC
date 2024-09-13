#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

bool ehprimo(int num){/*função com parâmetro de entrada de um número inteiro
onde retornará uma saída boleana de true ou false*/
	int cont=0;
	
	for (int i=1; i<=num; i++){/*utilização de um for para determinar por quantas 
	vezes o número é divisível por outro número, armazenando na variável cont*/
		if(num % i == 0){
			cont++;
		}
	}
	if(cont == 2){/*Verificando se o número é divisível 2 vezes, determinando
	se é um número primo ou não.*/
		return true;
	}else{return false;}
		
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	long long num;
	int sair;
	bool primo;
	
	
	
	do{		
		cout << "\nDigite um número inteiro: "; cin >> num;
		
		primo = ehprimo(num); //reservando o retorno da função na variável
	
		if(primo ==true) {/*Imprimindo o resultado, se o número é primo ou não*/
			cout<<"\nO número " <<num << " É primo." << endl;
		}else{
			cout << "\nO número " <<num << " NÃO é primo." << endl;			
		}
		
		cout << "\nDeseja sair? (0-Sair ou 1-Continuar)"; cin >> sair;
		
		if(sair==1) system("cls");
		
	}while(sair!=0);	
	
	
}
