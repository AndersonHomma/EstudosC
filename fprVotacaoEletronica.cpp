#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

void registraVoto(int voto, int &candidato1, int &candidato2, int &candidato3){

	switch(voto){
		case 1:
			candidato1++;
			break;
		case 2:
			candidato2++;
			break;
		case 3:
			candidato3++;
			break;
	}
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int voto, candidato1=0, candidato2=0, candidato3=0, res;
	
	do{
		cout << "\n*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
		cout << "\nVOTAÇÃO ELETRÔNICA" <<endl;
		cout << "\n*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
		cout << "\n1 - Candidato 1" <<endl; 
		cout << "\n2 - Candidato 2" <<endl; 
		cout << "\n3 - Candidato 3" <<endl; 
		cout << "\n*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
		cout << "\nDigite sua opção: "; cin >> voto;
		
		registraVoto(voto, candidato1, candidato2, candidato3);
		
		cout << "\nDeseja continuar votação? (1-Sim 2-Não)" <<endl;
		cin >> res;
		system("cls");
		
	}while (res != 2);
	
	cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
	cout << "\nO Candidato 1 recebeu : " << candidato1 <<" voto(s)." <<endl;
	cout << "\nO Candidato 2 recebeu : " << candidato2 <<" voto(s)." <<endl;
	cout << "\nO Candidato 3 recebeu : " << candidato3 <<" voto(s)." <<endl;
	cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" <<endl;
	
}
