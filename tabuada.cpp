#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	
	int n;
	
	cout << "Digite um número para saber a tabuada: ";
	cin >> n;
	
	cout << "=-=-=-=-=-=-=-=" <<endl;
	for(int i=1; i<=10; i++){
		cout << "  " << n << " x " << i << " = " << n*i <<endl;
	}
	cout << "=-=-=-=-=-=-=-=" <<endl;
}
