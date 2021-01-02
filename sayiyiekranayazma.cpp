#include <iostream>
using namespace std;

int girdi;
string birler[]={"bir","iki","uc","dort","bes","alti","yedi","sekiz","dokuz"};
string onlar[]={"on","yirmi","otuz","kirk","elli","altmis","yetmis","seksen","doksan"};
string yuzler[]={"yuz","iki yuz","uc yuz","dort yuz","bes yuz","alti yuz","yedi yuz","sekiz yuz","dokuz yuz"};

int main(){	
cin>>girdi;

if (girdi > 0 && girdi < 10){
cout<<birler[girdi-1]<<" ";
}

else if (girdi >=10 && girdi <100){
cout<<onlar[(girdi/10)-1]<<" ";
cout<<birler[(girdi%10)-1]<<" ";}

else if (girdi >=100 && girdi<1000){
	cout<<yuzler[(girdi/100)-1]<<" ";
	cout<<onlar[((girdi%100)/10)-1]<<" ";
	cout<<birler[(girdi%10)-1]<<" ";
}

else if (girdi >=1000 && girdi<10000){
	cout<<birler[(girdi/1000)-1]<<" "<<"bin"<<" ";
	cout<<yuzler[((girdi%1000)/100)-1]<<" ";
	cout<<onlar[(((girdi%1000)%100)/10)-1]<<" ";
	cout<<birler[(girdi%10)-1]<<" ";
}


return 0 ;}
