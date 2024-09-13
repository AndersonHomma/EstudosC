#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

bool ehprimo(int num){/*fun��o com par�metro de entrada de um n�mero inteiro
onde retornar� uma sa�da boleana de true ou false*/
	int cont=0;
	
	for (int i=1; i<=num; i++){/*utiliza��o de um for para determinar por quantas 
	vezes o n�mero � divis�vel por outro n�mero, armazenando na vari�vel cont*/
		if(num % i == 0){
			cont++;
		}
	}
	if(cont == 2){/*Verificando se o n�mero � divis�vel 2 vezes, determinando
	se � um n�mero primo ou n�o.*/
		return true;
	}else{return false;}
		
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	long long num;
	int sair;
	bool primo;
	
	
	
	do{		
		cout << "\nDigite um n�mero inteiro: "; cin >> num;
		
		primo = ehprimo(num); //reservando o retorno da fun��o na vari�vel
	
		if(primo ==true) {/*Imprimindo o resultado, se o n�mero � primo ou n�o*/
			cout<<"\nO n�mero " <<num << " � primo." << endl;
		}else{
			cout << "\nO n�mero " <<num << " N�O � primo." << endl;			
		}
		
		cout << "\nDeseja sair? (0-Sair ou 1-Continuar)"; cin >> sair;
		
		if(sair==1) system("cls");
		
	}while(sair!=0);	
	
	
}
