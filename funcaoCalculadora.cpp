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
		cout << "*       Calculadora Simples. Op��es poss�veis:    *" <<endl;
		cout << "*                                                 *" <<endl;	
		cout << "*          1.Adi��o                               *" <<endl;	
		cout << "*                                                 *" <<endl;		
		cout << "*          2.Subtra��o                            *" <<endl;
		cout << "*                                                 *" <<endl;			
		cout << "*          3.Multiplica��o                        *" <<endl;
		cout << "*                                                 *" <<endl;			
		cout << "*          4.Divis�o                              *" <<endl;
		cout << "*                                                 *" <<endl;			
		cout << "*          5.Sair do programa                     *" <<endl;		
		cout << "*                                                 *" <<endl;
		cout <<	" ************************************************* " <<endl;	
		
		cout << "Entre com sua op��o: "; cin >> opc;
		
		switch(opc){			
			case 1:
												
				cout << "\nDigite um n�mero: "; cin >>n1;
				cout << "\nDigite outro n�mero: "; cin >>n2;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				cout << "\nA soma de " <<n1 <<" + " <<n2 <<" = " <<adicao(n1, n2) <<endl;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				system("pause");
				system("cls");
				break;
			
			case 2:
				
				cout << "\nDigite um n�mero: "; cin >>n1;
				cout << "\nDigite outro n�mero: "; cin >>n2;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				cout << "\nA subtra��o de " <<n1 <<" - " <<n2 <<" = " <<subtracao(n1, n2) <<endl;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				system("pause");
				system("cls");
				break;
			
			case 3:
				
				cout << "\nDigite um n�mero: "; cin >>n1;
				cout << "\nDigite outro n�mero: "; cin >>n2;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				cout << "\nA multiplica��o de " <<n1 <<" * " <<n2 <<" = " <<multiplicacao(n1, n2) <<endl;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				system("pause");
				system("cls");
				break;
			
			case 4:
				
				cout << "\nDigite um n�mero: "; cin >>n1;
				cout << "\nDigite outro n�mero: "; cin >>n2;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				cout << "\nA divis�o de " <<n1 <<" / " <<n2 <<" = " <<divisao(n1, n2) <<endl;
				cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
				system("pause");
				system("cls");
				break;
			
			default:
				
				if(opc!=5){cout << "\nOp��o inv�lida!\n" <<endl;}				
				system("pause");
				system("cls");
				break;
			
		}
		
	}while(opc !=5);
	
	
	
	
	
	
	
	
}
