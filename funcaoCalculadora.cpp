#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

float adicao(float n1, float n2){
	return n1 + n2;	
}

float subtracao(float n1, float n2){
	return n1 - n2;	
}

float multiplicacao(float n1, float n2){
	return n1 * n2;	
}

float divisao(float n1, float n2){
	return n1 / n2;	
}


main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int opc;
	float n1, n2;
	
	do {
		cout <<	" ************************************************* " <<endl; 
		cout << "*                                                 *" <<endl;
		cout << "*       Calculadora Simples. Opções possíveis:    *" <<endl;
		cout << "*                                                 *" <<endl;	
		cout << "*          1.Adição                               *" <<endl;	
		cout << "*                                                 *" <<endl;		
		cout << "*          2.Subtração                            *" <<endl;
		cout << "*                                                 *" <<endl;			
		cout << "*          3.Multiplicação                        *" <<endl;
		cout << "*                                                 *" <<endl;			
		cout << "*          4.Divisão                              *" <<endl;
		cout << "*                                                 *" <<endl;			
		cout << "*          5.Sair do programa                     *" <<endl;		
		cout << "*                                                 *" <<endl;
		cout <<	" ************************************************* " <<endl;	
		
		cout << "Entre com sua opção: "; cin >> opc;
		
		switch(opc){			
			case 1:
												
				cout << "\nDigite um número: "; cin >>n1;
				cout << "\nDigite outro número: "; cin >>n2;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				cout << "\nA soma de " <<n1 <<" + " <<n2 <<" = " <<adicao(n1, n2) <<endl;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				system("pause");
				system("cls");
				break;
			
			case 2:
				
				cout << "\nDigite um número: "; cin >>n1;
				cout << "\nDigite outro número: "; cin >>n2;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				cout << "\nA subtração de " <<n1 <<" - " <<n2 <<" = " <<subtracao(n1, n2) <<endl;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				system("pause");
				system("cls");
				break;
			
			case 3:
				
				cout << "\nDigite um número: "; cin >>n1;
				cout << "\nDigite outro número: "; cin >>n2;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				cout << "\nA multiplicação de " <<n1 <<" * " <<n2 <<" = " <<multiplicacao(n1, n2) <<endl;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				system("pause");
				system("cls");
				break;
			
			case 4:
				
				cout << "\nDigite um número: "; cin >>n1;
				cout << "\nDigite outro número: "; cin >>n2;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				cout << "\nA divisão de " <<n1 <<" / " <<n2 <<" = " <<divisao(n1, n2) <<endl;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				system("pause");
				system("cls");
				break;
			
			default:
				
				if(opc!=5){cout << "\nOpção inválida!\n" <<endl;}				
				system("pause");
				system("cls");
				break;
			
		}
		
	}while(opc !=5);
	
	
	
	
	
	
	
	
}
