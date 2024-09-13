#include <iostream>
#include <locale>

using namespace std;

main(){
	setlocale(LC_ALL,"portuguese");
	
	int serie, livros, redacao, resp, totAlu=0, gostaRed=0, naoGostaRed=0, naoGostaRedTer=0, prim=0, seg=0, terc=0, quar=0, 
	livpri=0, livseg=0, livter=0, livqua=0, maiorLivQua=0, cont=0;
	
	do{
		cout << "\nDigite a série do aluno? (primeira-1, segunda-2, terceira-3 ou quarta-4) : ";
		cin >> serie;
		
		switch(serie){
			
			case 1:
				cout << "\nQuantos livros este aluno lê por mês? " <<endl;
				cin >> livros;
				cout << "\nEste Aluno gosta de fazer redação? (sim-1 ou não-0): " <<endl;
				cin >> redacao;
				if(redacao==1){gostaRed++;}else{naoGostaRed++;}
				livpri += livros;				
				prim++;
				totAlu++;
				break;
			case 2:
				cout << "\nQuantos livros este aluno lê por mês? " <<endl;
				cin >> livros;
				cout << "\nEste Aluno gosta de fazer redação? (sim-1 ou não-0): " <<endl;
				cin >> redacao;
				if(redacao==1){gostaRed++;}else{naoGostaRed++;}
				livseg += livros;
				seg++;
				totAlu++;
				break;
			case 3:
				cout << "\nQuantos livros este aluno lê por mês? " <<endl;
				cin >> livros;
				cout << "\nEste Aluno gosta de fazer redação? (sim-1 ou não-0): " <<endl;
				cin >> redacao;
				if(redacao==1){gostaRed++;}else{naoGostaRed++; naoGostaRedTer++;}
				livter += livros;
				terc++;
				totAlu++;
				break;
			case 4:
				cout << "\nQuantos livros este aluno lê por mês? " <<endl;
				cin >> livros;
				cout << "\nEste Aluno gosta de fazer redação? (sim-1 ou não-0): " <<endl;
				cin >> redacao;
				cont++;
				if(redacao==1){gostaRed++;}else{naoGostaRed++;}
				livqua += livros;
				if(cont <=1){
					maiorLivQua = livros;
				}
				if(livros > maiorLivQua) {
					maiorLivQua = livros;
				}
				quar++;
				totAlu++;
				break;
			default:
				cout << "Série inválida!";
				break;
		} 
		
		
		cout << "Deseja continuar? (sim-1 ou não-0): ";
		cin >> resp;
		system("cls");
	}while(resp != 0);
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
	cout << "\nTotal de alunos da Terceira série: " << terc << " aluno(s)." <<endl;
	cout << "\nA maior quantidade de livros lidos por um aluno da quarta série: " << maiorLivQua << " livro(s)." <<endl;
	cout << "\nAlunos que não gostam de redação: " << (naoGostaRed*100)/(totAlu) << " %." <<endl;
	cout << "\nAlunos da terceira série que não gostam de redação: " << (naoGostaRedTer*100)/(totAlu) << " %." <<endl;
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" <<endl;
	
		
}
