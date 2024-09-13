#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	
	int valor, cont=0, maiorvlr=0, menorvlr=0, somavlr=0, nvlr=3;
	/*Declaração das variáveis inteiras:
	valor-> armazena valor digitado
	cont-> contador
	maiorvlr-> armazena maior valor
	menorvlr-> armazena menor valor
	somavlr-> soma todos os valores
	nvlr-> armazena total de valores armazenados*/
	
	
	for (int i=1; i<=nvlr; i++){//Repete a digitação do valor 10 vezes
		cout << "Digite o valor " <<i <<" : ";
		cin >> valor;//armazena valor digitado
		
		if(cont<=0){
			maiorvlr = valor;//armazena na variável maiorvlr o primeiro valor digitado
			menorvlr = valor;//armazena na variável menorvlr o primeiro valor digitado
		}else if(valor > maiorvlr){
			maiorvlr = valor;//se o valor digitado for maior que o maior valor, maiorvlr armazena valor
		}else if(valor < menorvlr){
			menorvlr = valor;//se o valor digitado for menor que o menor valor, menorvlr armazena valor
		}
		somavlr += valor;//soma todos os valores
		cont++;//contador
	}
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
	cout << "O maior valor digitado é: " <<maiorvlr <<endl;//mostra maior valor
	cout << "O menor valor digitado é: " <<menorvlr <<endl;//mostra menor valor
	cout << "A média dos valores digitados é: " <<(somavlr/nvlr) <<endl;//calcula e mostra média
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
}
