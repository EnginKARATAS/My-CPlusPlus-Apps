#include <iostream>
#include <locale.h>
using namespace std;

int main(){
setlocale(LC_ALL, "Turkish");
int a,b,c,d,e,z,boyut,tin;

int f[125];
cout<<"boyut giriniz:";
cin>>boyut;

for(a=0;a<boyut;a++){
	cout<<"dizinin "<<a+1<<"inci elemaný:";
	cin>>f[a];
	}
c=0;
b=0;

for(int c=0;c<boyut-1 ;c++)
for(b=c+1;b<boyut;b++){
	if(f[c]>f[b]){
		
		tin=f[c];
		f[c]=f[b];
		f[b]=tin;
		
	}
}
for(d=0;d<boyut;d++)
cout<<f[d]<<endl;
cout<<"küçükten büyüðe sýralanýþýdýr";


return 0;}


