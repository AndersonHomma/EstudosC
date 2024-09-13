#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	
	double num, maior=0, menor=0; // declarando variáveis reais num->para armazenar o numero digitado
	//maior -> para armazenar o maior valor 
	//menor -> para armazenar o menor valor 
	
	int aux=1;// declarando variável inteiro aux-> para armazenar uma condição auxilar de determinação do primeiro valor maior e menor
			
	for(int i=1; i <=15; i++){//for utilizado para repetir o armazenamento de 15 valores, com inicio no 1 e finalização no 15 
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;	
		cout << "Digite 15 valores e descubra o maior e o menor" <<endl;
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
		cout << "\nDigite valor " << i << " : ";
		cin >> num;//armazenamento do valor digitado
		system("cls");//limpar tela
		
		if(aux==1){//condição para determinar o primeiro número digitado
			maior = num;
			menor = num;			
			aux=0;
		}else if(num > maior) {//se o número digitado for maior que o valor armazenado na variavel num, 
		//a variavel maior armazena o numero digitado
			maior = num;
		}else if (num < menor) {//se o número digitado for menor que o valor armazenado na variavel num, 
		//a variavel menor armazena o numero digitado
			menor = num;
		}
	}
	
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
	cout << "\nO maior valor digitado é " << maior <<endl;//mostra o número maior 
	cout << "\nO menor valor digitado é " << menor <<endl;//mostra o número menor
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
}
