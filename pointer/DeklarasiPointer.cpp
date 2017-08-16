#include "iostream"
#include "string"

using namespace std;

int main() {
	int a = 100;
	string iwan = "iwan";
	
	// pada variabel
	int *b = &a;
	
	cout<<"Nilai b = "<<b<<endl; 
	
	// pada konstanta
    // const int *c = &a;
	
	// pada string 
	
	
	// pada pointer
	int **e = &b;
	
	cout<<"Nilai e : "<<e<<endl;
	
	// pada array
	int f[] = {10, 20, 30};
	int n  = sizeof(f) / sizeof(int);
	
	for(int i=1; i<=n; i++)
    {
      cout<<"Nilai f = "<<f[i]<<" => "<<&b[i]<<endl;
    }
		
		
}

