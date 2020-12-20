#include<iostream>
using namespace std;
int main() {
	int arr[100][100],b[100][100],c[50][50];
	int n1,n2,temp;
	cin>>n1>>n2;
	for(int i=0; i<n1; i++) {
		for(int j=0; j<n2; j++) {
			cin>>arr[i][j];
		}
	}

	for (int i = 0; i <n1 ; i++){
		cout<<"\n";
		for(int j=0; j<n2; j++) {
			cout<<arr[i][j];

		}
	}

	cout<<"\n";

	

	for (int i = 0; i<n1 ; ++i){
		for(int j=0; j<n2; ++j){
				b[i][j] = arr[j][i];
			}
		}


		for (int i = 0; i <n1 ; i++){
		cout<<"\n";
		for(int j=0; j<n2; j++) {
			cout<<b[i][j];

		}
	}

	cout<<"\n";
	
	for(int i=0; i<n1; i++) {
		for(int j=0; j<n2; j++) {
			c[i][j]=0;
			for(int k=0; k<n2; k++) {
				c[i][j] = c[i][j]  + arr[i][k]*b[k][j];
			}
		}
	}


		for (int i = 0; i <n1 ; i++){
		cout<<"\n";
		for(int j=0; j<n2; j++) {
			cout<<c[i][j];

		}
	}

	
}