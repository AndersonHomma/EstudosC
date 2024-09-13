#include<iostream>
#include<locale>
#include<cstdlib>
#include<string.h>

using namespace std;

float media(float n1, float n2, float n3, char tp){
	
	if (tp == 'A'){		
		return (n1+n2+n3)/3;
	}else if (tp == 'P'){
		return (n1*5+n2*3+n3*2)/10;
	}else if(tp == 'H'){
		return 3/(1/n1+1/n2+1/n3);
	}
	
}

main(){
	
	setlocale (LC_ALL, "portuguese");
	
	char tp;
	float n1, n2, n3;
	
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
	cout << "            C�LCULO DA M�DIA";
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
	
	cout << "\n Tipos de m�dia: " <<endl;
	cout << "\n A - M�dia aritm�tica" <<endl;
	cout << "\n P - M�dia ponderada" <<endl;
	cout << "\n H - M�dia harm�nica" <<endl;
	cout << "\n Digite a op��o desejada (A/P/H) : " ; cin >> tp;
	
	tp = toupper(tp);
	
	cout << "\n Digite a primeira nota: "; cin >> n1;
	cout << "\n Digite a segunda nota: "; cin >> n2;
	cout << "\n Digite a terceira nota: "; cin >> n3;
	
	switch (tp){
	
		
		case 'A':
			cout << "\nA m�dia aritm�tica de " <<n1 <<" + " <<n2 <<" + " <<n3 <<" � = " << media(n1,n2,n3,tp);
			break;
			
		case 'P':
			cout << "\nA m�dia ponderada de " <<n1 <<" + " <<n2 <<" + " <<n3 <<" � = " << media(n1,n2,n3,tp);
			break;
			
		case 'H':
			cout << "\nA m�dia harm�nica de " <<n1 <<" + " <<n2 <<" + " <<n3 <<" � = " << media(n1,n2,n3,tp);
			break;	
			
	
	}
	
}
