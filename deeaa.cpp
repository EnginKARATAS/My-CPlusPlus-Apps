#include <iostream>
#include <locale.h>
using namespace std;

int main(){


setlocale (LC_ALL,("Turkish"));
int toplam,e,i,a,s,j,k;



cout<<"A Ka�a ka�l�k kare bir matris olsun?:";
cin>>e;
//burada kare matris oldu�u i�in 1 tane de�i�ken tan�mlad�k.
}
int sonuc[e][e];
int el[e][e];
int eliki[s][s];	

for(i=0;i<e;i++){
	for(a=0;a<e;a++){
		cout<<"Matris A n�n "<<i+1<<" inci sat�r, "<<a+1<<" inci s�t�nunu giriniz:";
			cin>>el[i][a];	}
}

cout<<"B Ka�a ka�l�k kare bir matris olsun?:";
cin>>s;
eliki[s][s];
for(i=0;i<s;i++){
	for(a=0;a<s;a++){
cout<<"Matris A n�n "<<i+1<<" inci sat�r, "<<a+1<<" inci s�t�nunu giriniz:";
cin>>eliki[i][a];	}
}

for(int i=0;i<e;e++){
	for(j=0;j<e;j++){
	toplam=0;
		for(k=0;k<e;k++){
	toplam =toplam +el[i][k]*eliki[k][j];}
	sonuc[i][j]=toplam;
	cout<<" "<<sonuc[i][j];
}
}




return 0;}
	
