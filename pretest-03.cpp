/*
nama	: alvin
npm	: 140810180013
ddeskripsi	: pretest-03
tgl	: 12 maret 2019
*/
#include<iostream>
using namespace std;
struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};
typedef r_mhs larikMhs[30];
void banyakData (int& n){
	cout<<"masukan banyak data	: ";
	cin>>n;
}
void inputMhs(larikMhs& mhs,int n){
	for(int i=0;i<n;i++){
		cout<<"npm\t: ";
		cin>>mhs[i].npm;
		cout<<"nama\t: ";
		cin>>mhs[i].nama;
		cout<<"nama\t: ";
		cin>>mhs[i].ipk;
	}
 cout<<endl;
}
void cetakMhs(larikMhs& mhs,int n){
	for(int i=0;i<n;i++){
		cout<<mhs[i].npm<<"  "<<mhs[i].nama<<"  "<<mhs[i].ipk<<endl;
	}
}
void sortNPM(larikMhs& mhs,int n){
    int i;
    r_mhs temp;
    for(i=1; i<n; i++)
    {
        temp = mhs[i];
        while(i>0 && mhs[i-1].npm>temp.npm){
            mhs[i]= mhs[i-1];
            i = i-1;
        }
        mhs[i]= temp;
    }
}


int main(){
	int n;
	larikMhs mhs;
    banyakData(n);
    inputMhs(mhs,n);
    cetakMhs(mhs, n);
    sortNPM(mhs, n);
}

