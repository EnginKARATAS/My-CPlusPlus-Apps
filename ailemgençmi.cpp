#include <iostream>
#include <locale.h>

using namespace std;

int kisisayisi;

	
int main()
{
	setlocale (LC_ALL,"Turkish");
	
    int x=0;
   
   
    cout<<"Aileniz ka� ki�i ?  ";
    cin>>kisisayisi;
   
    int deccal[kisisayisi];
   
	for(int i=1;i<=kisisayisi;i++)
{          
	
	cout<<"birey "<<i<<" ya�� ? ";
	
	cin>>deccal[i];
}
  
  
           
	for(int a=1;a<=kisisayisi;a++)
{
    
	x=x+deccal[a];   
}

int t = x/kisisayisi ;
cout<<"Ailenizin ya�  ortalamas�= "<<t; 

	if(t>22&&t<30)
{
	if(kisisayisi>2)
	{
	
	cout<<"Baban�z sizi hala i�e gidiyor.Herkes kendi haline ";
	}

	
	if(kisisayisi<3)
	{
	cout<<", aileniz hen�z hayata yeni "<<endl<<"at�lm��."<<kisisayisi<<" ki�i oldu�unuza g�re �ekirdek"<<endl
	<<" bir ailesiniz.Hayat�n�zdan �ok"<<endl<<"i�iniz �n planda... :)";
		
	}




}





	if(t>29&&t<40)
{
	if(kisisayisi>2)
	{
	
	cout<<", ailenizin hayat hakk�nda �ok�a "<<endl<<"tecr�besi var."<<kisisayisi<<" ki�i oldu�unuza g�re �ocuklar evlenmeye ba�lam��"<<endl<<"gelecek hakk�nda epey plan�n�z var gibi... :)";
	}

	
	if(kisisayisi<3)
	{
	cout<<", ailenizin hayat hakk�nda �ok�a "<<endl<<"tecr�besi var."<<kisisayisi<<" ki�i oldu�unuza g�re �ekirdek"<<endl<<" rahat ve d���nen bir ailesiniz... :)";
		
	}




}

	if(t>40&&t<999)
{
	if(kisisayisi>2)
	{
	
	cout<<", nirvana master yoda amuled televizyon"<<endl<<"tecr�besi var."<<kisisayisi<<"siz var tecr�be d�nya kadar "<<endl<<"gelecek hakk�nda bilgiler verebiliyorsunuz ... :)"<<endl<<"sayg� duyulacak ya�tas�n�z hepiniz :))";
	}

	
	if(kisisayisi<3)
	{
	cout<<", ailenizin hayat hakk�nda �ok�a "<<endl<<"tecr�besi var."<<kisisayisi<<" ki�i oldu�unuza g�re �ekirdek"<<endl<<" rahat ve d���nen bir ailesiniz... :)";
		
	}




}


	
	







 
            

            
        
   
    
    return 0 ;
}
	

