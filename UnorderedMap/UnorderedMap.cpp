#include <iostream>
#include <fstream>
#include <stdlib.h>   
#include<ctime>
#include <unordered_map> 
#include<sstream>
#include<string>
#include <bits/stdc++.h> 
#include <sys/time.h> 
#include <vector>
#include <list>
using namespace std;


int main(){
		char c;
  		int r;
  		vector<string>vecStr2;
  		string satir;
  		ofstream dosya1("deneme2.txt");
		ifstream dosya2("deneme2.txt");
		ofstream dosya3("find.txt");
		ifstream dosya4("find.txt");
		unordered_map<string, int> umap;
		clock_t baslangic = clock(),bitis,findbaslangic,findbitis;
		dosya1.is_open();
		
		for(int i=0; i<1000000; i++){
      		for (int j=0; j<40; j++){
		    		     
 			 	r = rand() % 26;   // generate a random number
             	c = 'a' + r;   
		     	dosya1<< c<<"";
		  	   						}
	  			dosya1<<endl;
									}
		
		if (dosya2.is_open()){
			for(int i=0;i<1000000;i++){
				while ( getline(dosya2, satir) ){
						
										vecStr2.push_back(satir);
												}
										}
							}
							
		baslangic=clock();					
		for(int i=0; i<1000000;i++){
			umap.reserve(1000000);
			umap.insert(make_pair(satir,i)); 
			
		}
        bitis=clock();
        cout <<endl<< " Hashing suresi: "<< (float)(bitis - baslangic) / CLOCKS_PER_SEC<<endl;
        
        dosya3.is_open();
		for(int i=0; i<1000000; i++){
      		for (int j=0; j<40; j++){
		    		     
 			 		r = rand() % 26;
             		c = 'a' + r;   
		     		dosya3<< c<<"";
		  	   						}
	  				dosya3<<endl;
									}
		
		findbaslangic=clock();							
		if (dosya4.is_open()){
			for(int i=0; i<1000000; i++){
				while ( getline(dosya4, satir) ){
						if (umap.find(satir) == umap.end()) {
						}
        					 
    					
						
											}
										}
							}
		findbitis=clock();
		cout <<endl<< " Finding Suresi "<< (float)(findbitis - findbaslangic) / CLOCKS_PER_SEC<<endl;
									
		
	
	
	
	
	
}
