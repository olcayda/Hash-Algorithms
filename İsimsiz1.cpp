#include <fstream> //Dosyalama iþlemleri için gerekli olan kütüphane.
#include<iostream>
#include <stdlib.h>   
#include<ctime>
using namespace std;

int main() {
  clock_t baslangic=clock(),bitis;
  ofstream dosya; 
  dosya.open("deneme.txt"); 
  for(int i=0; i<1000000; i++){
  int a1=rand();
  dosya << a1 <<endl;
  }
  dosya.close(); 
  bitis=clock();
  cout<<(float)(bitis-baslangic)/CLOCKS_PER_SEC;
  return 0;
}
