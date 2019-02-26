/*
Nama program			: swap
Nama				: Fadlan Mulya Priatna
NPM				: 140810180041
Tanggal pembuatan		: 26 Februari 2019
Deskripsi progrram		: 
*/

#include <iostream>   //library
using namespace std;

void swap(int& x,int& y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main (){
	int x,y;
	cout<<"X is ";cin>>x;
	cout<<"Y is ";cin>>y;

	swap (x,y);
	
	cout<<"after swap"<<endl;
	cout<<"X is "<<x<<endl;
	cout<<"Y is "<<y<<endl;
}