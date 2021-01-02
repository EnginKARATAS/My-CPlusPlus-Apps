#include <iostream>
#include <locale.h>

using namespace std;

int kisisayisi;

	
int main()
{
	setlocale (LC_ALL,"Turkish");
	
    int x=0;
   
   
    cout<<"Aileniz kaç kiþi ?  ";
    cin>>kisisayisi;
   
    int deccal[kisisayisi];
   
	for(int i=1;i<=kisisayisi;i++)
{          
	
	cout<<"birey "<<i<<" yaþý ? ";
	
	cin>>deccal[i];
}
  
  
           
	for(int a=1;a<=kisisayisi;a++)
{
    
	x=x+deccal[a];   
}

int t = x/kisisayisi ;
cout<<"Ailenizin yaþ  ortalamasý= "<<t; 

	if(t>22&&t<30)
{
	if(kisisayisi>2)
	{
	
	cout<<"Babanýz sizi hala iþe gidiyor.Herkes kendi haline ";
	}

	
	if(kisisayisi<3)
	{
	cout<<", aileniz henüz hayata yeni "<<endl<<"atýlmýþ."<<kisisayisi<<" kiþi olduðunuza göre çekirdek"<<endl
	<<" bir ailesiniz.Hayatýnýzdan çok"<<endl<<"iþiniz ön planda... :)";
		
	}




}





	if(t>29&&t<40)
{
	if(kisisayisi>2)
	{
	
	cout<<", ailenizin hayat hakkýnda çokça "<<endl<<"tecrübesi var."<<kisisayisi<<" kiþi olduðunuza göre çocuklar evlenmeye baþlamýþ"<<endl<<"gelecek hakkýnda epey planýnýz var gibi... :)";
	}

	
	if(kisisayisi<3)
	{
	cout<<", ailenizin hayat hakkýnda çokça "<<endl<<"tecrübesi var."<<kisisayisi<<" kiþi olduðunuza göre çekirdek"<<endl<<" rahat ve düþünen bir ailesiniz... :)";
		
	}




}

	if(t>40&&t<999)
{
	if(kisisayisi>2)
	{
	
	cout<<", nirvana master yoda amuled televizyon"<<endl<<"tecrübesi var."<<kisisayisi<<"siz var tecrübe dünya kadar "<<endl<<"gelecek hakkýnda bilgiler verebiliyorsunuz ... :)"<<endl<<"saygý duyulacak yaþtasýnýz hepiniz :))";
	}

	
	if(kisisayisi<3)
	{
	cout<<", ailenizin hayat hakkýnda çokça "<<endl<<"tecrübesi var."<<kisisayisi<<" kiþi olduðunuza göre çekirdek"<<endl<<" rahat ve düþünen bir ailesiniz... :)";
		
	}




}


	
	







 
            

            
        
   
    
    return 0 ;
}
	

