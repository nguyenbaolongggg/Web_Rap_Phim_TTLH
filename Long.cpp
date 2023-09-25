#include<bits/stdc++.h>
#include<stdlib.h>
#include <ctime> 
using namespace std;

float  doublepow(int &b, int &n){
	cout<<"nhap he so:"; cin>>b;
	cout<<"nhap so mu:"; cin>>n;
	if(b==0 && n<0){
		cout<<"errol"<<endl; 
	}
	else{
		cout<<"ket qua la:"<<pow(b,n)<<endl;
	} 
	 
} 

int main(){
	int x,y;
	cout<<"tinh luy thua cua mot so"<<endl; 
	doublepow(x,y); 
} 
