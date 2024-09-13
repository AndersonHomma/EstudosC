#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

int sumNum(int n1, int n2){
	int sum;
	for (int i=n1; i<=n2; i++){
		sum += i;
		
	}
	return sum;
}

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2;
	
	cout << "Digite um número inteiro: "; cin >> num1;
	cout << "Digite outro número inteiro: "; cin >> num2;
	
	int result = sumNum(num1,num2);
	
	cout << "\nA soma do intervalo de " <<num1 <<" a " <<num2 <<" é : " <<result <<endl;
	
}
