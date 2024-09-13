#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	
	int n, soma=0;
	
	do{//validação para aceitar somente números maiores que zero
		
		cout << "Digite um número: ";
		cin >> n;
		
		if(n%2 != 0){
			cout << "\nDigite um número par." <<endl;				
		}		
		
		if(n < 0){
			cout << "\nDigite número maior que zero." <<endl;
		}	
	}while((n < 0) || (n%2!=0));
	
	//verifica divisões
	for (int i=1; i<(n-1); i++) {
		if(n % i == 0) {			
			soma += i;	
		}
				
	};
	
	cout << "\n n: " << n << " soma: " << soma;
	if(soma == n) {
		cout <<"\n O número " << n << " é perfeito.";
	}else{
		cout <<"\n O número " << n << " não é perfeito." <<endl;
	}
	
}
