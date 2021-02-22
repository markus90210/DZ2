#include <iostream>

using namespace std;

//������������ ��������� ���������
enum SYMBOL{X,O};    
typedef enum SYMBOL Sym;
 
 //��������� "���� ��� ���� � ��������-������"
typedef struct poleDlyaIgry {
	int stroka;
	int stolbec;
	Sym s;
} Pole;


// ��������� � �������� �������
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
	int i, j; //��� ��������� �����
	float f;
	char v = 49;   // �� ������� ASCII ��� ����� ����
	Pole kletka;	
	kletka.stroka;
	kletka.stolbec;
	kletka.s;
	
	union vs1{		
		int cyfra;
		char simvol;
	};
	
	DS simvol, cyfra;
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
	
	
// ������������� �������  ������� ���� char �� 1 �� 9.	
	printf("Igrovoe pole igry v krestiki-noliki!\n\n");
	char playpole[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if ((j != 2)&(i != 2))
				cout << (playpole[i][j] = v) << "_|_";	
			else if ((j != 2)&(i == 2))
				cout << (playpole[i][j] = v) << " | ";				
			else
				cout << (playpole[i][j] = v);
			v++;
		}
		cout << endl;
	}
	cout << endl;
	

	
	return 0;
}

