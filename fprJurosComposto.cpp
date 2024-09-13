#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

void calculaJurosCompostos(double principal, double taxa, int tempo, double &valorFuturo, double &juros){
	
    valorFuturo = principal;
        
    double fatorCrescimento = 1 + taxa / 100;
        
    for (int i = 0; i < tempo; ++i) {
        valorFuturo *= fatorCrescimento;
    }
        
    juros = valorFuturo - principal;
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int tempo;
	double principal, taxa, valorFuturo, juros;
	
	cout << "Digite o valor do empr�stimo: R$ "; cin >> principal;
	cout << "Digite a taxa de juros anual: "; cin >> taxa;
	cout << "Digite o tempo (anual) do empr�stimo: "; cin >> tempo;
	
	calculaJurosCompostos(principal, taxa, tempo, valorFuturo, juros);
	
	cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
	cout << "\nO valor futuro ser� de R$ " <<valorFuturo <<endl;
	cout << "\nO juros ser� de R$ " <<juros <<endl;
	cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
}
