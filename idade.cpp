#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	int anos, meses, dias;
	
	cout << "Qual a idade em " << endl;
	cout << " Anos: ";
	cin >> anos;
	cout << " Meses: ";
	cin >> meses;
	cout << " Dias: ";
	cin >> dias;
	
	cout << " \nA idade em dias é de : " << (anos*365)+(meses*30) + dias << " dias";
	
}
