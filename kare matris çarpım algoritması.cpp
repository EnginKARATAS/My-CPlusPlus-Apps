#include <iostream>
#include <locale.h>
using namespace std;

int main(){


setlocale (LC_ALL,("Turkish"));


int toplam,e,i,a,s,j,k;

cout<<"A Kaça kaçlýk kare bir matris olsun?:";
cin>>e;
//burada kare matris olduðu için 1 tane deðiþken tanýmladýk.
int el[e][e];
int eliki[e][e];
int sonuc[e][e];	

for(i=0;i<e;i++){
	for(a=0;a<e;a++){
		cout<<"Matris A nýn "<<i+1<<" inci satýr, "<<a+1<<" inci sütünunu giriniz:";
			cin>>el[i][a];}
}

cout<<"B Kaça kaçlýk kare bir matris olsun?:";
cin>>s;
eliki[s][s];
for(i=0;i<s;i++){//matris annýn elemanlarýný istiyoruz
	for(a=0;a<s;a++){
cout<<"Matris A nýn "<<i+1<<" inci satýr, "<<a+1<<" inci sütünunu giriniz:";
cin>>eliki[i][a];	}
}
cout<<"girdiðiniz A elemanlarý"<<endl;
for(int i=0;i<e;i++){
	for(j=0;j<e;j++){ 
	
		cout<<" "<<el[i][j];
	}
cout<<endl;	}

cout<<"girdiðiniz B elemanlarý"<<endl;
for(int i=0;i<e;i++){
	for(j=0;j<e;j++){ 
	
		cout<<" "<<eliki[i][j];
	}
cout<<endl;	}
// çarpým kodu
cout<<"A ve B matrislerinin çarpýmý";
for(int i=0;i<e;i++){//i 0 0 0 2
	for(j=0;j<e;j++){//j 0 0 0 1 
	toplam=0;//toplam 0 0 0 1 1 1 0 0 0
		for(k=0;k<e;k++){//k 0 1 2 0 1 2 0 1 2 0 1 2 0 1 2
	toplam =toplam +el[i][k]*eliki[k][j];}//el11.el11,
		sonuc[i][j]=toplam;
		cout<<" "<<sonuc[i][j];
	}
cout<<endl;	}






return 0;}
	
