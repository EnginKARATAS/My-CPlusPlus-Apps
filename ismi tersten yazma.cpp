#include <iostream> 
#include<locale.h> 
 
using namespace std;  
int main()
{
setlocale(LC_ALL,"Turkish");
cout<<"tersi al�nacak harfleri gir gir\n:";
string b;
cin>>b;

cout<<"Bize Bir say� ver bizde onu tersten yazal�m"<<endl;
int bboyut=b.length();
for(int i=bboyut;i>=0;i--)
{

	cout<<b[i];
	
}
	

return 0 ;
}

