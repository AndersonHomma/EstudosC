#include<iostream>
#include<locale>
#include<cstdlib>
#include<Windows.h>

using namespace std;

int sorteiaMoeda(){
	return rand()%2;
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int faceAdd = 0, crownAdd = 0;
	
	for (int i=1; i<=100; i++){
		
		int sorteio = sorteiaMoeda();
		Sleep(200);
		
				
		if(sorteio == 0){
			cout << i <<"°" <<"sorteio: " <<"cara" <<endl;
			faceAdd++;
		}else {
			cout << i <<"°" <<"sorteio: " <<"coroa" <<endl;
			crownAdd++;
		}
	}
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
	cout << "Quantidade de caras sorteadas: " <<faceAdd <<" vezes." <<endl;
	cout << "\nQuantidade da coroas sorteadas: " <<crownAdd <<" vezes." <<endl;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
}
