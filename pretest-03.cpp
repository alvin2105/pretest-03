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
void inpuMhs(larikMhs& mhs,int n){
	for(int i=0;i<n;i++){
		cout<<"nama\t: ";
		cin>>r_mhs.npm[i]<<endl;
		cout<<"nama\t: ";
		cin>>r_mhs.nama[i]<<endl;
		cout<<"nama\t: ";
		cin>>r_mhs.ipk[i]<<endl;
	}
	
}
void cetakMhs(larikMhs& mhs,int n){
	for(int i=0;i<n;i++){
		cout<<r_mhs.npm[i]<<"  "<<r_mhs.nama[i]<<"  "<<r_mhs.ipk[i]<<endl;
	}
}
void sortNPM(larikMhs& mhs,int n){
   
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            
            if(npm[j] < npm[i])
            {
                temp = npm[i];
                npm[i] = npm[j];
                npm[j] = temp;
            }
        }
    }
    
    for(i=0; i<n; i++)
    {
        cout<<n[i]<<endl;
    }
 
    return 0;
}
 
int main(){
	int n;
	banyakData(n);
	inputMhs(mhs,n);
	cetakMhs(mhs,n);
	sortNPM(mhs,n);
}

