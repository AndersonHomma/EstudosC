#include<iostream>

using namespace std;

void MM(int &A, int &B){
	
	int aux;
	if(A>B){
		aux = B;
		B=A;
		A=aux;
	}
	
}

main(){
	
	int a,b;
	
	cout << "Digite um valor: ";
	cin >> a;
	cout << "Digite outro valor: ";
	cin >> b;
	MM(a,b);
	cout << "Menor: " <<a <<endl;
	cout << "Maior: " <<b <<endl;
	system ("pause");
}
