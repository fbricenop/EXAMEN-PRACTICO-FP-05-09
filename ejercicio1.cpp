#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cout<<"INGRESE EL "<< "N" <<" NUMERO DEL ARREGLO: ";
	cin>>n;
	int array[n][3*n];
	for(int i=0;i<n;i++){
		for(int j=0;j<3*n;j++){
			if(array[i][3*j]<array[i][j*3]){
				array[i][3*j]=1;
			}
		}
		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<array[i][j*3];
		}
	}
	
	
	return 0;
}