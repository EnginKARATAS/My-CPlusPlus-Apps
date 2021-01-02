#include <iostream>
#include <stdlib.h>   
 
using namespace std;


	
	
class yazitura{
	public:
	int sayac=0;
	string oyuncuadi;

	
	 yazitura()
	{
		cout<<"oyuncu adi";
		cin>>oyuncuadi;
		cout<<"merhaba  "<<oyuncuadi;
	}
	
	
	int paraAt(){
	
		int t=rand()%2 ;
		
		return t;
	}
	
	
	oyna(){
	
		if (paraAt()==1){
			if(sayac>10)
			{
				sayac+=2;
			}
			else sayac++;
		}
		else{
		cout<<"cikan sonuc=yazi\n";}
	}
	
};




int main() {
	yazitura x;
	
	return 0;
}
