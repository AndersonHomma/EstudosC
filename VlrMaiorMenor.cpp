#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	
	int valor, cont=0, maiorvlr=0, menorvlr=0, somavlr=0, nvlr=3;
	/*Declara��o das vari�veis inteiras:
	valor-> armazena valor digitado
	cont-> contador
	maiorvlr-> armazena maior valor
	menorvlr-> armazena menor valor
	somavlr-> soma todos os valores
	nvlr-> armazena total de valores armazenados*/
	
	
	for (int i=1; i<=nvlr; i++){//Repete a digita��o do valor 10 vezes
		cout << "Digite o valor " <<i <<" : ";
		cin >> valor;//armazena valor digitado
		
		if(cont<=0){
			maiorvlr = valor;//armazena na vari�vel maiorvlr o primeiro valor digitado
			menorvlr = valor;//armazena na vari�vel menorvlr o primeiro valor digitado
		}else if(valor > maiorvlr){
			maiorvlr = valor;//se o valor digitado for maior que o maior valor, maiorvlr armazena valor
		}else if(valor < menorvlr){
			menorvlr = valor;//se o valor digitado for menor que o menor valor, menorvlr armazena valor
		}
		somavlr += valor;//soma todos os valores
		cont++;//contador
	}
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
	cout << "O maior valor digitado �: " <<maiorvlr <<endl;//mostra maior valor
	cout << "O menor valor digitado �: " <<menorvlr <<endl;//mostra menor valor
	cout << "A m�dia dos valores digitados �: " <<(somavlr/nvlr) <<endl;//calcula e mostra m�dia
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
}
