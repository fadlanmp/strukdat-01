/*
Nama program			: Fizz Buzz
Nama				: Fadlan Mulya Priatna
NPM				: 140810180041
Tanggal pembuatan		: 26 Februari 2019
Deskripsi progrram		: 
*/

#include <iostream>   //library
using namespace std;

void fizz_buzz (int a,int b,int i){     //function
	for (i=a;i<=b;i++){                //looping
		if (i%3==0 && i%5==0){
			cout<<"Fizz Buzz"<<endl;
		}
		else if (i%3==0){
			cout<<"Fizz"<<endl;
		}
		else if (i%5==0){
			cout<<"Buzz"<<endl;
		}
		else {
			cout<<i<<endl;
		}
	}
}
int main (){
	int a,b,x;
	cout<<"masukkan batas"<<endl;
	cout<<"awalan = ";cin>>a;
	cout<<"sampai = ";cin>>b;
	fizz_buzz (a,b,x);        //pemanggilan function
}