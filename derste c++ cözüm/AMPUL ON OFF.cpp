#include <iostream>
using namespace std;


class Lamba{
		enum Durum{OFF,ON};
		
		bool anahtar ;
		int watt;
		
	public:

		Lamba(int); //baþlangýçta kapalý
		Lamba() {anahtar=ON ; watt=11;}
		void ac(){anahtar=ON;}
		void kapa(){anahtar =OFF;}
		void bas();
		void durum();
		~Lamba(){cout<<"AMPUL PATLADI";};
};

Lamba::Lamba(int w):watt(w){anahtar=OFF;};

void Lamba :: bas()
{
	switch(anahtar){
		case OFF :	 ac(); break;
		case ON  :	 kapa(); break;
	}	
}

void Lamba :: durum()
{
	cout<<"Lamba "<<((anahtar==ON)? "ACIK" : "KAPALI")<<endl;
	
}

int main(){
	
	Lamba ampul(23);
	for(int i=1 ; i<=3 ;i++)
	{
		ampul.bas();
	}
	ampul.durum();
	
	
return 0;}
