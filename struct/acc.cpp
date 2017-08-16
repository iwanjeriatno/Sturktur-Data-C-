#include<stdio.h>
#include<iostream>

using namespace std;

void stambuk() {  
    cout<<"Stambuk : ";
}

void nama() {
	cout<<"Nama    : ";
}

void garis() {
	cout<<"\n======================================\n\n";
}

int main( )
{
   struct {
	char stambuk[10];
    char nama[15]; 
   } biodata;
   
   struct {
	int tugas;
	char grade[1];
   } nilai;
  
	stambuk();
	cin>>biodata.stambuk;
	nama();
	cin>>biodata.nama;
	
	cout<<"Tugas   : ";
	cin>>nilai.tugas;
	
	garis();
	
	cout<<"Stambuk : "<<biodata.stambuk<<endl;
	cout<<"Nama    : "<<biodata.nama<<endl;
	cout<<"Tugas   : "<<nilai.tugas<<endl;
	
	if(nilai.tugas > 50)
	cout<<"Grade   : A";
	else 
	cout<<"Grade   : E";
	
}

