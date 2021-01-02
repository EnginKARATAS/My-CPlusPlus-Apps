#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



class ogrenci{
	public :
	string ogradi;
	int sinifi;
	int ogrno;
	int odev,ara,final;
	
	ogrenci(){
		cout<<"ogr isim gir lan";
		cin>>ogradi>>ogrno>>ara>>odev>>final;
	
	  
	~ogrenci(){
		cout<<"ogrenci no"<<ogrno<<endl;
		cin>>ogrno;
	}
	int hesapla(){
	int ort =(ara*0.2)+(final*0.5)+(odev*0.3);
	return ort;
	}
};






int main() {
	ogrenci x;

	return 0;
}
