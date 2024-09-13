#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

void converterTempo(int segundos, int &horas, int &minutos, int &segRestantes){
	
	horas = segundos/3600;
	segRestantes = segundos%3600;
	minutos = segRestantes/60;
	segRestantes = segRestantes%60;
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int segundos, horas, minutos, segRestantes;
	
	cout << "Digite os segundos: "; cin >> segundos;
	
	converterTempo(segundos, horas, minutos, segRestantes);
	
	cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
	cout << "\nResultado: \n" <<endl;
	cout << horas <<" hora(s) " <<endl;
	cout << minutos <<" minuto(s) " <<endl;
	cout <<segRestantes <<" segundo(s) " <<endl;
	cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
}
