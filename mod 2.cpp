#include <iostream> 
#include<locale.h> 
 
using namespace std;  
int main(){
setlocale (LC_ALL,"Turkish");
int a;
cout <<"bir sayý giriniz tek veya çift yazayým:";
cin>>a;
if (a%2==0){
	cout<<"sayý tek ve 2 ye bölümünden kalan 0";
	}
else if(a%2==1){
	cout<<"bu sayý tektir ve 2 ye bölümünden kalan 1";
}

else
cout<<"bu sayý negatifdir ";


return 0 ;
}
