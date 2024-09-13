#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

void calculaQuadradoCubo (int num, int &quadrado, int &cubo){
	quadrado = num*num;
	cubo = num*num*num;
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int quadrado, cubo, num;
	
	cout << "Digite um número: "; cin >> num;
	
	
	calculaQuadradoCubo(num, quadrado, cubo);
	
	cout << "\nO quadrado de " <<num <<" = " <<quadrado <<endl;
	cout << "\nO cubo de " <<num <<" = " <<cubo <<endl;
	
	
}
