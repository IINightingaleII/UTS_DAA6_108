#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

	struct mahasiswa {
		string nama[50];
		int nim[9];
	};

main(){
	int n, i;
	mahasiswa mhs;

	//input
	cout<<"=========================================================\n"<<endl;
	cout<<"     Input Data NIM dan Nama Mahasiswa"<<endl;
	cout<<"=========================================================\n"<<endl;
	cout<<"Masukkan Banyak Mahasiswa : ";
	cin>>n;
	for (int i=0; i<n; i++){
		cout<<endl<<"Masukkan Data Mahasiswa ke-"<<i+1<<setw(5)<<endl;
		cout<<" Nama ke-"<<i+1<<setw(5)<<" : ";cin>>mhs.nama[i];
		cout<<" Nim ke-"<<i+1<<setw(5)<<" : ";cin>>mhs.nim[i];
	}

	//Bubble Sort
	cout<<"=========================================================\n"<<endl;
	cout<<setw(10)<<"   Proses Sorting Nim Mahasiswa"<<endl;
	cout<<"=========================================================\n"<<endl;
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (mhs.nim[j]<mhs.nim[j-1]){
				int t;
				string u;
    			t=mhs.nim[j-1];
    			mhs.nim[j-1]=mhs.nim[j];
    			mhs.nim[j]=t;
    			u=mhs.nama[j-1];
    			mhs.nama[j-1]=mhs.nama[j];
    			mhs.nama[j]=u;
			}
		}
		for (int i=0;i<n;i++){
			cout<<"["<<mhs.nim[i]<<"] ";
		}
	cout<<endl;
	}
	cout<<endl<<endl;

	//Hasil sorting
	for(int i=0; i<n; i++) {
		
	}
		
	for(int i=0; i<n; i++) {
		cout<<"Nama :"<<mhs.nama[i]<<"Nim :"<<mhs.nim[i]<<endl;
	}
}