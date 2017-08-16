#include<stdio.h>
#include<iostream>

using namespace std;

int main( )
{
   struct
   {
      char stambuk[10];
      char nama[15];
      int tahun_sekarang;
      int tahun_lahir;
      
   } data;
    
    cout<<"Stambuk : ";
    cin>>data.stambuk;
    cout<<"Nama : ";
    cin>>data.nama;
    
    cout<<"================================"<<endl;
	cout<<"Tahun Sekarang : ";
	cin>>data.tahun_sekarang;
	cout<<"Tahun Lahir : ";
	cin>>data.tahun_lahir;
	
	cout<<"================================"<<endl;
	
	cout<<"Nama : "<<data.nama<<endl;
	cout<<"Stambuk : "<<data.stambuk<<endl;
	
	int hasil = data.tahun_sekarang / data.tahun_lahir;	
	cout<<"Jadi Umur : "<<hasil<<endl;

	
}

