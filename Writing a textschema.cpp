#include <iostream>
#include <locale.h>
using namespace std;

int k,i;

int main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Bu program size girdi�iniz metinin anlaml� bir s�sl� �ema ile yazman�za yarayacakt�r.\nDaha sonra "<<
	"dilerseniz kopyalay�p youtube facebook gibi medyalarda yorumlara\nyap��t�rabilirsiniz...\n\n";
	
	
	int lenisim,x;
	string isim;

	

	
	cout<<"�sted�iniz metini girin:";
	getline(cin,isim);//stringin t�m�n� okuyan ve dizide tutan ara�
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




