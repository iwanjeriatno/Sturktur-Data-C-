#include <stdio.h>
#include <iostream>
#define MAX 6

using namespace std;

struct Queue
{
  int data[MAX];
  int head;
  int tail;
};

Queue antrian;
void Create()
{
  antrian.head=antrian.tail=-1;
}

int IsEmpty()
{
  if(antrian.tail==-1)
    return 1;
  else
    return 0;
}
int IsFull()
{
  if(antrian.tail==MAX-1)
    return 1;
  else
    return 0;
} 

void Enqueue(int data)
{
  if(IsEmpty()==1)
  {
     antrian.head=antrian.tail=0;
     antrian.data[antrian.tail]=data;
     cout<<antrian.data[antrian.tail];
  }
  else
   //kodisi lainnya jika penuh() sama dengan 0 maka antrian.ekor ditambah 1
  {
     antrian.tail++;
     antrian.data[antrian.tail]=data;
     cout<<antrian.data[antrian.tail];
  }
}

int Dequeue()
{
  int i;
  int e=antrian.data[antrian.head];
  for(i=antrian.head;i<=antrian.tail-1;i++)
  {
    antrian.data[i]=antrian.data[i+1];
  }
  antrian.tail--;
  return e;
}

void Clear()
{
  antrian.head=antrian.tail=-1;
  cout<<"Data Clear";
}

void Tampil()
{
  if (IsEmpty()==0)
    for (int i=antrian.head;i<=antrian.tail; i++)
      cout<<antrian.data[i]<<"  ";
  else
    cout<<"Data Kosong\n";
}

int main()
{
  int pil;
  int data;
  Create();
  do
  {
    cout<<"\n============MENU PILIHAN============\n";
    cout<<"1. Enqueue\n";
    cout<<"2. Dequeue\n";
    cout<<"3. Tampil\n";
    cout<<"4. Clear\n";
    cout<<"5. Keluar\n";
    cout<<"--------------------------------------\n";
    cout<<"Masukkan Pilihan Anda -> ";
    cin>>pil;
    switch(pil)
    {
    case 1: 
      cout<<"Data : ";cin>>data;
      Enqueue(data);
      break;
     case 2:
      if (IsEmpty()==0)
        cout<<"Elemen yang keluar : "<<Dequeue();
      else
      cout<<"Data kosong"<<endl;
      break;
    case 3:
      Tampil();
      break;
    case 4:
      Clear();
      break;
    case 5:
      break;
    }
} while(pil!=5);
}
