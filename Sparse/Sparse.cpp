#include <fstream> //Dosyalama iþlemleri için gerekli olan kütüphane.
#include<iostream>
#include <stdlib.h>   
#include<ctime>
using namespace std;



int main() {
	char a[40];
	char c;
    int r;
  clock_t baslangic=clock(),bitis;
  ofstream dosya; 
  dosya.open("deneme.txt"); 
  for(int i=0; i<1000000; i++){
      for (int j=0; j<40; j++)
    {    r = rand() % 26;   // generate a random number
          c = 'a' + r;   
		  a[j]=c;         // Convert to a character from a-z
          
		  dosya << c ;
    }
	dosya<<endl;

	    }
  dosya.close(); 
  bitis=clock();
  cout<<(float)(bitis-baslangic)/CLOCKS_PER_SEC;
  return 0;
}
