#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

int main(int argc, char** argv) {
	int fgenel = 20;
	unsigned __int16 sayac = 20;
 	unsigned __int16 icbosluksayisi = 20;
 		unsigned __int16 disbosluksayisi = 20;
 	unsigned __int16 container = 20;
 	 	unsigned __int16 container2 = 20;

 	unsigned __int16 vurus = 1;
 	string dizi = "yilbasinizmubarekolsu";
 	reverseStr(dizi);
 	
  	
  
 	for(int i=sayac; i>0; i--)
	{	

		
		
	 	while(icbosluksayisi > 0 && container > 0)
		{

	 		if(icbosluksayisi % 2 == 0)
	 		{
	 				 		cout<<"`";
			 }
			 			 else{
			 	cout<<"*";
			 }
	 		icbosluksayisi--;
		}	
		//container--;
		icbosluksayisi= --container;
			int yarivurus = vurus/2;
			for(int j=1;j<=vurus;j++)
			{
				 
				cout<<dizi[i];
			}
			
	 	while(disbosluksayisi > 0)
		{
	 	 
	 			 		if(disbosluksayisi % 2 == 0)
	 		{
	 				 		cout<<"`";
			 }
			 else{
			 	cout<<"*";
			 }
	 		disbosluksayisi--;
	 		
		}	
		disbosluksayisi= --container2;	
			vurus += 2;
			cout<<"\n";
			
			sayac--;
			
	 	
			if(sayac == 0 )
			for (int sonsatir = 0; sonsatir < 4;sonsatir++)
			{
			
				{
				for(int boslukson = 0; boslukson<16;boslukson++){	
				cout<<"_";
				}
				
				for(int k = 0; k<3; k++){
					for(int u= 0; u<3; u++){
						cout<<"*";
					}
					
					
				}	
				cout<<"__________________";
				cout<<"\n";
			}	


		}
			

	}
	int theend = 21;
	cout<<"         ";
	while(theend>0){
		cout<<dizi[theend];
		theend--;
	}
	cout<<"un";
		return 0;
}
