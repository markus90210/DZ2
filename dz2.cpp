#include <iostream>

using namespace std;

enum SYMBOL{X,O};    
typedef enum SYMBOL Sym;
 

typedef struct poleDlyaIgry {
	int stroka;
	int stolbec;
	Sym s;
} Pole;



typedef struct dataSym{
	char vSym;
	int is_char : 1;
	int is_int : 1;
	int is_float : 1;
	int is_upp : 1;
	int is_low : 1;

	
} DS;

int main(int argc, char *argv[]) 
{
	int i, j;
	float f;
	Pole kletka;	
	kletka.stroka;
	kletka.stolbec;
	kletka.s;
	
	union vs1{		
		int cyfra;
		char simvol;
		char cherta;
	};
	
	DS simvol, cyfra, cgerta;
	simvol.vSym = 'X';
	simvol.is_char = 1;
	simvol.is_int = 0;
	simvol.is_float = 0;
	simvol.is_upp = 1;
	simvol.is_low = 0;
	cyfra.vSym = '0';
	cyfra.is_char = 0;
	cyfra.is_int = 1;
	cyfra.is_float = 0;
	cyfra.is_upp = 0;
	cyfra.is_low = 0;
	
	
	
	

	puts("Igrovoe pole igry v krestiki-noliki!\n\n");
	char playpole[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			playpole[i][j] = 32;
			if ((j != 2)&(i != 2))
				cout << playpole[i][j] << "_|";	
			else if ((j == 2)&(i != 2))
				cout << playpole[i][j] << "_";	
			else if ((j != 2)&(i == 2))
				cout << (playpole[i][j]) << " |";				
			else
				cout << (playpole[i][j]);
		}
		cout << endl;
	}
	
	

	
	return 0;
}
