#include <iostream> 
using namespace std; 
int basari;  
char harfnot; 
main(){ 
cout << "Basari notunu giriniz: "; 
cin >> basari; 
if(basari>=90) 
harfnot = 'A'; 
else if (basari>=80) 
harfnot = 'B'; 
else if (basari >=70) 
harfnot = 'C'; 
else if (basari >=60) 
harfnot = 'D'; 
else 
harfnot ='F'; 
cout  <<  "Ogrencinin  Harf  Notu:  "  <<  harfnot 
<< endl; } 
