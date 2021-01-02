#include <iostream>
using namespace std;
int main()
{
    cout << "gostericiler - pointers" << endl;
    
    int a= 10;
    int *p; //p'nin gösterdiği yerdeki değer
    p= &a; //p, a'nı adresini gösteriyor
    
    cout << "a: " << a << endl; //a'nın değeri
    cout << "p: " << p << endl; //p'nin adresi (fakat a'yı işaret edecektir)
    cout << "*p: " << *p << endl; //p'nin işaret ettiği yerdeki değer
    cout << "&a: " << &a << endl; //a'nın adresi
    cout << "&p: " << &p << endl; //p'nin kendi adresi
   
}
