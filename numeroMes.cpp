#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	
	int mes;
	
	cout << "Digite um número de um mês: ";
	cin >> mes;
	
	switch(mes) {
		case 1:
			cout << "\nO número digitado é referente ao mês de Janeiro.";
			break;
			
		case 2:
			cout << "\nO número digitado é referente ao mês de Fevereiro.";
			break;
		
		case 3:
			cout << "\nO número digitado é referente ao mês de Março.";
			break;
			
		case 4:
			cout << "\nO número digitado é referente ao mês de Abril.";
			break;
		
		case 5:
			cout << "\nO número digitado é referente ao mês de Maio.";
			break;
		
		case 6:
			cout << "\nO número digitado é referente ao mês de Junho.";
			break;
		
		case 7:
			cout << "O número digitado é referente ao mês de Julho.";
			break;
		
		case 8:
			cout << "\nO número digitado é referente ao mês de Agosto.";
			break;
		
		case 9:
			cout << "\nO número digitado é referente ao mês de Setembro.";
			break;
		
		case 10:
			cout << "\nO número digitado é referente ao mês de Outubro.";
			break;
			
		case 11:
			cout << "\nO número digitado é referente ao mês de Novembro.";
			break;
		
		case 12:
			cout << "\nO número digitado é referente ao mês de Dezembro.";
			break;
		
		default:
			cout << "\nO número do mês é inválido.";
			break;
	}		
	
}
