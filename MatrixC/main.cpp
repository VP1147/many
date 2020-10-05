#include <iostream>
#include <time.h>
using namespace std;

void Det(void){
	srand((unsigned) time(NULL));
	int M[2][2];
	for(int i=0; i<2; i++){
		for(int e=0; e<2; e++){
			M[i][e] = rand() % 10;
		}
	}
	int d = (M[0][0]*M[1][1])-(M[0][1]*M[1][0]);
	int r;
	cout<<"|"<<M[0][0]<<" "<<M[0][1]<<"|\n";
	cout<<"|"<<M[1][0]<<" "<<M[1][1]<<"|"<<" = ";
	cin>>r; if(r == d) {
		cout<<"\nCerto\n";
	} else {
		cout<<"\nO certo seria "<<d<<"\n";
	}
}
	


int main(void) {
	int select;
	cout<<"<< MatrixC >>\n";
	cout<<"1 - Determinantes\n";
	cin>>select;
	bool loop = true; while(loop = true) {
		switch(select) {
			case 1: Det();
			break;
		}
	}
}
