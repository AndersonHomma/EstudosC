#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

void verificaNumPrimo(int num, int &primo){
	int cont=0;
	
	for (int i=1; i<=num; i++){
		if(num % i == 0){
			cont++;
		}
	}
	if(cont == 2){
		primo=1;
	}
		
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int num;
	int primo = 0;
	
	cout << "Digite um n�mero: "; cin >> num;
	
	verificaNumPrimo(num, primo);
	
	if(primo == 1){
		cout << "\n� n�mero primo.";
	}else{
		cout << "\nN�o � n�mero primo.";
	}
	
	
}
