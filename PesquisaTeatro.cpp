#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	
	int rg, idade, nota, cont=0, qq10=0, somaId=0, pessMenor5=0, maiorId=0, maisVelha=0, nPessoa=200;
	/* Declaração das variáveis inteiras :
	rg-> armazena identificador
	idade-> armazena idade
	nota-> armazena nota
	cont-> contador
	qq10-> armazena quantidade de pessoas que deram nota 10
	somaId-> soma todas as idades das pessoas
	pessMenor-> soma a quantidade de pessoas que deram nota abaixo de 5
	maiorId-> armazena maior idade
	maisVelha-> armazena RG da pessoa mais velha
	nPessoa-> quantidade de pessoas à serem pesquisadas  */
	
	
	for(int i=1; i<=nPessoa; i++){//Repete a pesquisa de 200 pessoas
		
		cout << "\nDigite seu RG: " ;
		cin >> rg;//armazena RG
		cout << "Digite sua idade: " ;
		cin >> idade;//armazena idade
		cout << "Digite uma nota para a peça de 0 a 10: " ;
		cin >> nota;//armazena nota
		
		if (nota==10){
			qq10++;//Se nota igual a 10 armazena soma uma unidade(pessoa)
		}
		
		if (nota<=5){
			pessMenor5++;//Se nota menor ou igual a 5 soma uma unidade(pessoa)
		}
		
		if (cont<=0){
			maiorId = idade;//Se iniciando a pesquisa a primeira idade é armazenada na maior idade.		
			maisVelha = rg;//Armazena RG da primeira pessoa
		}else if (idade > maiorId){
			maiorId = idade;//Armazena a maior idade
			maisVelha = rg;//Armazena RG da pessoa de maior idade
		}
		somaId += idade;//Soma idades
		cont++;//Contador
	}
	
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;	
	cout << "Quantidade de pessoas que deram nota 10 : " <<qq10 <<" pessoa(s)" <<endl;//mostra quantidade de pessoas que deram nota 10
	cout << "Média de idade das pessoas: " <<somaId/nPessoa <<" anos" <<endl;//calcula e mostra a media de todas as idades
	cout << "Porcentagem de pessoas que respoderam 5 : " <<(pessMenor5*100)/nPessoa <<" % " <<endl;//calcula e mostra a porcentagem de pessoas que deram nota 5
	cout << "O RG da pessoa mais velha: " <<maisVelha <<endl;//mostra o RG da pessoa mais velha
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;	
}
