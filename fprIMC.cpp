#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

void calculaIMC(float peso, float altura, float &imc){
	imc = peso/(altura*altura);
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float peso, altura, imc;
	
	cout << "\nDigite seu peso (kg): "; cin >> peso;
	cout << "\nDigite sua altura (m): "; cin >> altura;
	
	calculaIMC(peso, altura, imc);
	
	cout << "\nSeu IMC é de : " <<imc;
	
}
