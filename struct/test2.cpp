#include<stdio.h>
#include<iostream>

using namespace std;

void biodata() {
  char stambuk[10];
  char nama[15];
  
    cout<<"Stambuk : ";
    cin>>stambuk;
    cout<<"Nama : ";
    cin>>nama;
    
	cout<<"================================"<<endl;
	
	cout<<"Nama : "<<nama<<endl;
	cout<<"Stambuk : "<<stambuk<<endl;
    
}

int hitung_umur(int tahun_sekarang, int tahun_lahir) {	
	return tahun_sekarang - tahun_lahir;
}

int main( )
{
	int thn_sekarang;
	int thn_lahir;
	
	cout<<"Tahun Sekarang : ";
	cin>>thn_sekarang;
	cout<<"Tahun Lahir : ";
	cin>>thn_lahir;
	
	biodata();
	cout<<"Jadi Umur : "<<hitung_umur(thn_sekarang, thn_lahir);
	
}

