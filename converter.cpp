/*
Nama program			: converter
Nama				: Fadlan Mulya Priatna
NPM				: 140810180041
Tanggal pembuatan		: 26 Februari 2019
Deskripsi progrram		: 
*/

#include <iostream>   //library
using namespace std;

float konver(float celcius){
	return celcius*1.8+32;
}

int main (){
	int celcius;
	cout<<"masukkan suhu dalam celcius = ";cin>>celcius;
	cout<<"suhu fahrenhait = "<<konver(celcius)<<endl;
}