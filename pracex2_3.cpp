#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();

int main(){
	srand(time(0)); 	
	cout << rand()%26+1;
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}

//Write definition of function randomAlphabet() here.
void randomAlphabet(char Alp){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << Alp[][] ;
		}
	Alp[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};	
	
}}