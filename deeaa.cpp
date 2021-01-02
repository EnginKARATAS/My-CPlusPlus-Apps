#include <iostream>
#include <locale.h>
using namespace std;

int main(){


setlocale (LC_ALL,("Turkish"));
int toplam,e,i,a,s,j,k;



cout<<"A Kaça kaçlýk kare bir matris olsun?:";
cin>>e;
//burada kare matris olduðu için 1 tane deðiþken tanýmladýk.
}
int sonuc[e][e];
int el[e][e];
int eliki[s][s];	

for(i=0;i<e;i++){
	for(a=0;a<e;a++){
		cout<<"Matris A nýn "<<i+1<<" inci satýr, "<<a+1<<" inci sütünunu giriniz:";
			cin>>el[i][a];	}
}

cout<<"B Kaça kaçlýk kare bir matris olsun?:";
cin>>s;
eliki[s][s];
for(i=0;i<s;i++){
	for(a=0;a<s;a++){
cout<<"Matris A nýn "<<i+1<<" inci satýr, "<<a+1<<" inci sütünunu giriniz:";
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
	
