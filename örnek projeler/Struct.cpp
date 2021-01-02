#include <iostream>
using namespace std;

int month,day,year;//Struck
struct Date
{
    int month;
    string day;
    int year;
};
Date dueDate = {10, "Dean", 2016};//Tipleri teker teker belirtmek yerine sırasına göre 
								  //aldığı değerleri süslü parantez ile böyle belirtebiliriz....

int main(){

cout<<dueDate.month<<endl<<dueDate.day<<endl<<dueDate.year;

	
return 0;}


	


