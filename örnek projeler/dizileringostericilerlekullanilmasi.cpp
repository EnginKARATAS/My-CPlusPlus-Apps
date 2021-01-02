#include <iostream>
using namespace std;

int main()
{
    cout << "dizilerin gostericiler ile kullanilmasi" << endl;
    
    int z[3]={1,4,8};
    
    int *p;
    p=&z[0]; //ya da p=z;
    
    cout << z[2] << endl; // z dizisinin 2.elemanını(3'ü) bastırıyoruz
    
    cout << p[2] << endl;
    /*aslında p bir diziye sahip değilken
     * z'yi işaret ettiği için
     * z'nin 2.elemanını basıyor
     * */
    
    p[1]=6; //p dolayısıyla z dizini işaret ettiği için, onun 1.elemanını 8 olarak güncelleyecektir
    
    cout << z[1] << endl;
    
    
    
}
