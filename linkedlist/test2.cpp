#include <iostream>

using namespace std;

struct Gerbong {
	int data;
	Gerbong *next;
};

Gerbong *head;

void init() {
	head = NULL;
}

int cekKosong() {
	if(head == NULL)
		return 1;
	else 
		return 0;
}

void pasangDiDepan(int a) {
	Gerbong *depan;
	depan = new Gerbong;
	depan->data = a;
	depan->next = NULL;
	
	if(cekKosong() == 1) {
		head = depan;
		head->next = NULL;
	}
	else {
		depan->next = head;
		head = depan;
	}
	cout<<"Data Terisi"<<endl;
}	

void pasangDiBelakang(int z) {
	Gerbong *depan, *belakang;
	depan = new Gerbong;
	
	depan->data = z;
	depan->next = NULL;
	
	if(cekKosong() == 1) {
		head = depan;
		head->next = NULL;
	}
	else {
		belakang = head;
		while(belakang->next != NULL) {
			belakang = belakang->next;
		}
		belakang->next = depan;
	}
	cout<<"Data Terisi"<<endl;
}

void lepasGerbong() {
	Gerbong *lepas;
	int gerbong;
	
	if(cekKosong() == 0) {
		if(head != NULL) {
			lepas = head;
			gerbong = lepas->data;
			head = lepas->next;
			delete lepas;
		}
		cout<<gerbong<<" terhapus"<<endl;
	}
}

void lihatGerbong() {
	Gerbong *belakang;
	belakang = head;
	
	if(cekKosong() == 0) {
		while(belakang != NULL) {
			cout<<belakang->data<<" | ";
			belakang = belakang->next;
		}
	}
	else {
		cout<<"Masih Kosong"<<endl;
	}
}

int main() {
	int pilihan;
	do {
		int pasang;
		cout<<endl<<endl<<endl;
		cout<<"+ ============================== +"<<endl;
		cout<<"  1. Pasang Gerbong di Depan"<<endl;
		cout<<"  2. Pasang Gerbong di Belakang"<<endl;
		cout<<"  3. Lihat Gerbon"<<endl;
		cout<<"  4. Lepas Gerbong"<<endl;
		cout<<"  5. Exit"<<endl;
		cout<<"+ ============================== +"<<endl<<endl;
		cout<<"  Input Pilihan : "; cin>>pilihan;
		
		switch(pilihan) {
			case 1 : system("clear");
				cout<<"Pasang Gerbong = ";
				cin>>pasang;
				cekKosong();
				pasangDiDepan(pasang);
				break;
			case 2 : system("clear");
				cout<<"Pasang Gerbong = ";
				cin>>pasang;
				cekKosong();
				pasangDiBelakang(pasang);
				break;
			case 3 : system("clear");
				cekKosong();
				lihatGerbong();
				break;
			case 4 : system("clear");
				cekKosong();
				lepasGerbong();
				break;
		}
	} while(pilihan != 5);
	
	return 0;
}
