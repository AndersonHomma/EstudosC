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
	cout << "            CÁLCULO DA MÉDIA";
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
	
	cout << "\n Tipos de média: " <<endl;
	cout << "\n A - Média aritmética" <<endl;
	cout << "\n P - Média ponderada" <<endl;
	cout << "\n H - Média harmônica" <<endl;
	cout << "\n Digite a opção desejada (A/P/H) : " ; cin >> tp;
	
	tp = toupper(tp);
	
	cout << "\n Digite a primeira nota: "; cin >> n1;
	cout << "\n Digite a segunda nota: "; cin >> n2;
	cout << "\n Digite a terceira nota: "; cin >> n3;
	
	switch (tp){
	
		
		case 'A':
			cout << "\nA média aritmética de " <<n1 <<" + " <<n2 <<" + " <<n3 <<" é = " << media(n1,n2,n3,tp);
			break;
			
		case 'P':
			cout << "\nA média ponderada de " <<n1 <<" + " <<n2 <<" + " <<n3 <<" é = " << media(n1,n2,n3,tp);
			break;
			
		case 'H':
			cout << "\nA média harmônica de " <<n1 <<" + " <<n2 <<" + " <<n3 <<" é = " << media(n1,n2,n3,tp);
			break;	
			
	
	}
	
}
