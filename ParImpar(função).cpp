//Identificar  numeros pares - impares retornar 0 par - retornar 1 para impar

#include <iostream>
#include <locale>

using namespace std;

int ParImpar (int num){
	if (num%2==0)
		return 0;
	else
		return 1;
}

main (){
	setlocale(LC_ALL, "Portuguese");
	int n;
	cout<<"Digite um n�mero: "<<endl;
	cin>>n;
	if (ParImpar(n) == 0)
		cout<<"O n�mero � PAR!"<<endl;
	else
		cout<<"O n�mero � �MPAR!"<<endl;


// outra forma de chamar a fun��o
	
	int res = ParImpar(n);
	if (res == 0)
		cout<<"Par"<<endl;
	else
		cout<<"Impar"<<endl;

}

