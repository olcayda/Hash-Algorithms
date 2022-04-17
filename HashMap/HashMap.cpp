#include<iostream>
#include <iterator> 
#include <map> 
#include<string>
#include<ctime>
#include <bits/stdc++.h> 
#include <sys/time.h> 
#include <fstream>
#include <stdlib.h>  
#include<sstream>
#include<stdio.h>
#include <vector>
#include <list>

using namespace std;

int main(){
	
		
 		char c;
  		int r;
  		vector<string>vecStr2;
  		string satir;
  		ofstream dosya1("deneme.txt");
		ifstream dosya2("deneme.txt");
		ofstream dosya3("find.txt");
		ifstream dosya4("find.txt");
		
		map<string , int> gquiz1;
		clock_t baslangic = clock(),bitis,findbaslangic,findbitis;
		dosya1.is_open();
		for(int i=0; i<1000000; i++){
      			for (int j=0; j<40; j++){
		    		     
 			 		r = rand() % 26;
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
			gquiz1.insert(pair<string , int>(vecStr2[i],i)); 
			
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
		map<int, int>::iterator itr;							
		if (dosya4.is_open()){
			for(int i=0; i<1000000; i++){
				while ( getline(dosya4, satir) ){
						
						for (auto itr = gquiz1.find(satir); itr != gquiz1.end(); itr++){
       						cout << itr->first << '\t' << itr->second << '\n';
    																				}
											}
										}
							}				
		findbitis=clock();
		cout <<endl<< " Finding Suresi "<< (float)(findbitis - findbaslangic) / CLOCKS_PER_SEC<<endl;
			
		dosya1.close();
		dosya2.close();
		dosya3.close();
		dosya4.clear();
}
