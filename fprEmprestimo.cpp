#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

void calculaEmprestimo(double valor, double taxa, int tempo, double &totalAPagar, double &juros){
	totalAPagar = valor+(valor*(taxa/100))*tempo;
	juros = (valor*(taxa/100))*tempo;
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	int tempo;
	double valor, taxa, totalAPagar, juros;
	
	cout << "Digite o valor do empr�stimo: R$ "; cin >> valor;
	cout << "Digite a taxa de juros anual: "; cin >> taxa;
	cout << "Digite o tempo (anual) do empr�stimo: "; cin >> tempo;
	
	calculaEmprestimo(valor, taxa, tempo, totalAPagar, juros);
	
	cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
	cout << "\nO valor total a pagar � de R$ " <<totalAPagar <<endl;
	cout << "\nO juros acumulado � de R$ " <<juros <<endl;
	cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
	
	
}

