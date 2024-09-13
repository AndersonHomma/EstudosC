#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;

void encontraMinMax(int a, int b, int c, int&min, int&max){
	if(a>b && a>c){
		max = a;
	}else if(b>a && b>c){
		max = b;
	}else if(c>a && c>b) {
		max = c;
	}
	if(a<b && a<c){
		min = a;
	}else if (b<a && b<c ){
		min = b;
	}else if (c<a && c<b){
		min = c;
	}
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int a, b, c, min, max;
	
	cout << "Digite 1° número: "; cin >> a;
	cout << "Digite 2° número: "; cin >> b;
	cout << "Digite 3° número: "; cin >> c;
	
	encontraMinMax(a, b, c, min, max);
	
	cout << "\nO maior número é o " <<max <<endl;
	cout << "\nO menor número é o " <<min <<endl;
}

