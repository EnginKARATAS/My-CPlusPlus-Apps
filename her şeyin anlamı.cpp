#include <iostream>

using namespace std;

int x=3;

int k,i,lenght;

int main()
{
	cout<<"you can understud mean of evrything with the powerful father'sublime'of computer's."<<endl
	<<"Also sublime gives you three life"<<endl<<"****************"<<endl;
	while(x!=0){
	
	cout<<"what is the mean of...";
	string girdi;
	getline(cin,girdi);//stringin t�m�n� okuyan ve dizide tutan ara�
	int yaziboyut=girdi.length();
	
	string alfabe="abcdefghijklmnopqrstywxvz";
	

	int toplamharf=0;
	
	for (int i=0;i<=yaziboyut;i++){
		
		for(int k=0;k<25;k++){
			
			if(girdi[i]==alfabe[k])
			{
				toplamharf=toplamharf+k+1;//+1 alfabenin s�ff�rdan ba�lamad��� i�in eklendi
/*"engin"*/	
				break;
			}
			
		}system("CLS");
				
	}


for(int j=0;j<=yaziboyut;j+=2)
	{

	for(int i=0;i<=yaziboyut-j;i+=2)
		{
		cout<<" ";
		}				
	for(int i=-1;i<j;i++)
		{		
		cout<<"*";
		}
		
		cout<<endl;
					
	}



cout<<"     "<<toplamharf<<endl;
	
//amac�m burada alfabedeki kar��l��� olan her harfin k de�erini toplamak ve ekrana yazd�rmak

x--;	
}
	
	
	return 0;}
