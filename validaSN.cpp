#include<iostream>
#include<locale>
#include<cstdlib>
#include<string.h>

using namespace std;

char resultValidation(char a){
	
	if(a!='S' and a!='N') {
		cout << "Caracter inválido. Digite novamente." <<endl;
	}
	
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int num;
	char a;
	do{
		cout << "Digite um número : "; cin >> num;
		cout << "O cubo de " << num << " é " << num*num*num <<endl;
		cout << "\nDeseja continuar (S/N): "; cin >> a;
		a= toupper(a);
		//strupr(a);
		resultValidation(a);
		
		system("cls");
	}while (a!='N');
	
}
