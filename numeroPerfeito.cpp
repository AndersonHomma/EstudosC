#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	
	int n, soma=0;
	
	do{//valida��o para aceitar somente n�meros maiores que zero
		
		cout << "Digite um n�mero: ";
		cin >> n;
		
		if(n%2 != 0){
			cout << "\nDigite um n�mero par." <<endl;				
		}		
		
		if(n < 0){
			cout << "\nDigite n�mero maior que zero." <<endl;
		}	
	}while((n < 0) || (n%2!=0));
	
	//verifica divis�es
	for (int i=1; i<(n-1); i++) {
		if(n % i == 0) {			
			soma += i;	
		}
				
	};
	
	cout << "\n n: " << n << " soma: " << soma;
	if(soma == n) {
		cout <<"\n O n�mero " << n << " � perfeito.";
	}else{
		cout <<"\n O n�mero " << n << " n�o � perfeito." <<endl;
	}
	
}
