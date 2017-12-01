//Nicorici Adrian, 08.03.2014
//Se citesc mai multe siruri de numere.
//Pentru fiecare sa se calculeze maximul si sa se tipareasca si apoi sa se depuna intr-un sir. Sa se gaseasca maximul sirului obtinut si sa se tipareasca.

#include <iostream>
using namespace std;

int sirfinal[100],cont=0;
int contor=0,i=1;

void tiparire(int sir[]){
	contor=0;
	cout << "Sirul final : \n" ;
	while(contor<cont){
		cout << sir[contor] << endl;
		contor++;
	}
}

int maxim(int sir[]){
	int max=sir[0];
	contor=0;
	while(sir[contor]!=0){
		if(max < sir[contor])
			max=sir[contor];
		contor++;
	}
	if(i<=4){
		cout << "Maximul sirului " << i << " este " << max << endl;
		i++;
	}
	else{
		cout << "Maximul sirului final este " << max << endl;
	}
	sirfinal[cont]=max;
	cont++; 
	return 0;
}

void citire(int sir[]){
	contor=0;
	cout << " sir[ " << contor << " ]= ";
	cin >> sir[contor];
	
	while(sir[contor]!=0){
		contor++;
		cout << " sir[ " << contor << " ]= ";
		cin >> sir[contor];
	}
}

int main(){
	int sir1[100],sir2[100],sir3[100],sir4[100];
	
	cout << "Pentru a opri citirea unui sir de numere introduceti 0(zero,se vor citi 4 siruri de numere)" << endl;
	
	citire(sir1);
	citire(sir2);
	citire(sir3);
	citire(sir4);

	maxim(sir1);
	maxim(sir2);
	maxim(sir3);
	maxim(sir4);
	tiparire(sirfinal);
	maxim(sirfinal);
	

	system("pause");
	return 0;
}
