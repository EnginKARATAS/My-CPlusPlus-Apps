#include <iostream>
#include <locale.h>
using namespace std;

int k,i;

int main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Bu program size girdiðiniz metinin anlamlý bir süslü þema ile yazmanýza yarayacaktýr.\nDaha sonra "<<
	"dilerseniz kopyalayýp youtube facebook gibi medyalarda yorumlara\nyapýþtýrabilirsiniz...\n\n";
	
	
	int lenisim,x;
	string isim;

	

	
	cout<<"Ýstedðiniz metini girin:";
	getline(cin,isim);//stringin tümünü okuyan ve dizide tutan araç
	lenisim=isim.length();
	for ( i=1 ; i<=lenisim ; i++ ){			 
		for( k=0;k<i;k++){
			cout<<isim[k];
			
		}cout<<endl;
	}
	
	
	

		for ( i=lenisim-1 ; i>=1 ; i--){			 
		for( k=0;k<i;k++){
			cout<<isim[k];
			
		}cout<<endl;
	}




return 0;}




