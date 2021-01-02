#include <iostream>
using namespace std;


class yurt{
	public:
		int oda;
		int ucret;
		int kisisayisi;
		int katsayisi;
		string bantuvvarmi;
		
};	 



class  adver{

	public:
		string isim;
		
	void isimprint(){
		cout<<"isminiz:"<<isim;
	}
		
	
};



int main(){

yurt ahmetefendi;
yurt kinalihasan;
kinalihasan.oda=400;
ahmetefendi.oda=250;
ahmetefendi.ucret=213;
ahmetefendi.kisisayisi=4;
ahmetefendi.katsayisi=6;
ahmetefendi.bantuvvarmi="var";


cout<<"oda sayisi:"<<ahmetefendi.oda<<endl;
cout<<"ucret:"<<ahmetefendi.ucret<<endl;
cout<<"kisi sayisi:"<<ahmetefendi.kisisayisi<<endl;
cout<<"kat sayisi:"<<ahmetefendi.katsayisi<<endl;
cout<<"banyo ve tuvalet her oda da varmi: "<<ahmetefendi.bantuvvarmi<<endl;
cout<<"kinalihasanin oda sayisi:"<<kinalihasan.oda<<endl;
adver engin;
engin.isim="Engin";
engin.isimprint();



return 0;}
