#include <iostream>
using namespace std;
typedef int larik[100];
void moveZeroToEnd(larik& arr, int n){
	for(int i=0; i<n; i++){
		if(arr[0]==0){
			swap(arr[0],arr[n]);
		}
		else if(arr[1]==0){
			swap(arr[1], arr[n-1]);
		}
		else if(arr[2]==0){
			swap(arr[2], arr[n-2]);
		}
	}
}
void input(larik& arr, int& n){
	cout<<"Masukan panjang data : "; cin>>n;
	for (int i=0; i<n; i++){
		cout<<"Data : "; cin>>arr[i];
	}
}
void output (larik& arr, int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
int main(){
	larik arr;
	int n;
	input(arr, n);
	moveZeroToEnd(arr, n);
	output(arr, n);
}
