#include <iostream> 
#include<locale.h> 
 
using namespace std;  
int main(){
setlocale (LC_ALL,"Turkish");
int a;
cout <<"bir say� giriniz tek veya �ift yazay�m:";
cin>>a;
if (a%2==0){
	cout<<"say� tek ve 2 ye b�l�m�nden kalan 0";
	}
else if(a%2==1){
	cout<<"bu say� tektir ve 2 ye b�l�m�nden kalan 1";
}

else
cout<<"bu say� negatifdir ";


return 0 ;
}
