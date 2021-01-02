#include <iostream>
using namespace std;
string alfabe;
class segment{
	public:	
		
	
		string isim;
		string soyisim;
		segment()
		{
			cout<<"calisti\n";
			cin>>isim>>soyisim;
			baskafonksyon();
		}
		
		void baskafonksyon()
		{
			cout<<isim<<" "<<soyisim;
		}

			
};




int main(){
alfabe="abcde";
cout<<alfabe[0];
    for (int i=0;i<5;i++)
	segment alfabe[i];
//yuvarlak oldumu fonksyn o noktada döner;

	return 0;}
