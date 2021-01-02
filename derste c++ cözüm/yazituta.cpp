#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
using namespace std;
enum {yazi,tura} degisken;
class YaziTura {
	public:
	string oyuncu;
	int puan;
	YaziTura() {
		srand(time(NULL));
		cout <<"Oyuncu ismi: ";
		cin >> oyuncu;
		cout <<"Merhaba "<<oyuncu<<"!";
		puan = 0;
	}
	int ParaAt(){
		if(rand() % 2==0) {
			degisken = yazi;
			return degisken;} 
			
			else {
			degisken = tura;
			return degisken;
		}
	}
	void Oyna() {
		
		if(ParaAt()==1) { //if baþladý.
			
			if(puan >= 10) {
				puan+=2;
			} else {
				puan++;
			}
		} //if bitti.
	}
};

int main() {
	string kar;
	string paraSonuc;
	setlocale(LC_ALL,"turkish");
	YaziTura nesne;
	cout<<"Yazý Tura Oynamak için bir tusa, çýkmak için <Q>'ya bas:";
	
	while(true) {
	cin >>kar;
	if(kar=="Q" || kar=="q") {
		break;
	} else {
		nesne.Oyna();
		if(degisken==0){
			paraSonuc ="YAZI";
		} else {
			paraSonuc ="TURA";
		}
		cout<<"SONUC:"<<paraSonuc<<endl;
		cout<<"Çýkmak Ýçin <Q>: ";
		
	}
	
	}
	
	cout<<"\n"<<nesne.oyuncu<<" ! Toplam "<<nesne.puan<<" puan kazadýnýz..";
	
	return 0;	
	
}
