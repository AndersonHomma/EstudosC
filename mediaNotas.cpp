//FUNÇÃO PARA VERIRFICAR A MEDIA E RETORNAR 'A' - 'E' - 'R'

#include <iostream>
#include <locale>

using namespace std;

char obterConceito(float media){
	if (media >= 7.0){
		return 'A';
	}else if (media >= 3.0){
		return 'E';		
	}else{
		return 'R';
	}
}

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, media;
	
	cout << "Digite nota 1 : "; cin >> n1;
	cout << "Digite nota 2 : "; cin >> n2;
	media = (n1+n2)/2;
	
	char conceito = obterConceito(media);
	switch (conceito){
		case 'A' : cout << "Aluno aprovado com média = " <<media <<endl;
					break;
		case 'E' : cout << "Aluno de exame com média = " <<media <<endl;
					break;
		case 'R' : cout << "Aluno reprovado com média = " <<media <<endl;
					break;
		default:
					cout << "Conceito inválido!";
					break;
	}
}
