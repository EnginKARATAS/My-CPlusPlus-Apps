#include <iostream>
using namespace std;

int a,b,x;


void ekranayaz(int x);
void aci(int akrep , int yelkovan);
void girdi();

int main(){
girdi();	
return 0;}


void ekranayaz(int x){
	cout<<"akrep yelkovan arası aci degeri="<<x;
}



void girdi(){
	cout<<"akrep";
	cin>>a;
	cout<<"yelkovan";
	cin>>b;
	aci(a,b);
	}



void aci(int akrep , int yelkovan){
	
	int deger=(akrep*30)-((yelkovan)*55/10);
	ekranayaz(deger);	
	}






