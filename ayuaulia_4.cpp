#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
int p,l,t,v; // Deklarasi variabel panjang,lebar,tinggi,volume
    string dimensi;

    cout<<"PROGRAM C++ MENGHTUNG VOLUME BALOK"<<endl;
    cout<<"----------------------------------"<<endl;
    //Menginput nilai panjang,lebar dan tinggi
    cout<<"Masukan Panjang : 9"; 
    cin>>p;
    cout<<"Masukan Lebar   :7 ";
    cin>>l;
    cout<<"Masukan Tinggi  : 10";
    cin>>t;
    cout<<"Masukan Satuan (mm,cm,m) Dimensi Balok : ";
    cin>>dimensi;
    cout<<endl;
    
    v=p*l*t; //Rumus untuk menghitung volume balok
    
    cout<<"Volume Balok    = "<<v<<" "<<dimensi<<"3"; //Tampilkan hasil
    return 0;

}