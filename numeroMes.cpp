#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	
	int mes;
	
	cout << "Digite um n�mero de um m�s: ";
	cin >> mes;
	
	switch(mes) {
		case 1:
			cout << "\nO n�mero digitado � referente ao m�s de Janeiro.";
			break;
			
		case 2:
			cout << "\nO n�mero digitado � referente ao m�s de Fevereiro.";
			break;
		
		case 3:
			cout << "\nO n�mero digitado � referente ao m�s de Mar�o.";
			break;
			
		case 4:
			cout << "\nO n�mero digitado � referente ao m�s de Abril.";
			break;
		
		case 5:
			cout << "\nO n�mero digitado � referente ao m�s de Maio.";
			break;
		
		case 6:
			cout << "\nO n�mero digitado � referente ao m�s de Junho.";
			break;
		
		case 7:
			cout << "O n�mero digitado � referente ao m�s de Julho.";
			break;
		
		case 8:
			cout << "\nO n�mero digitado � referente ao m�s de Agosto.";
			break;
		
		case 9:
			cout << "\nO n�mero digitado � referente ao m�s de Setembro.";
			break;
		
		case 10:
			cout << "\nO n�mero digitado � referente ao m�s de Outubro.";
			break;
			
		case 11:
			cout << "\nO n�mero digitado � referente ao m�s de Novembro.";
			break;
		
		case 12:
			cout << "\nO n�mero digitado � referente ao m�s de Dezembro.";
			break;
		
		default:
			cout << "\nO n�mero do m�s � inv�lido.";
			break;
	}		
	
}
