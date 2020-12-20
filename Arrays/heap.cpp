#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void buildHeap(std::vector<int> arr, int n, int i) {

	
			while(i>=0) {
				int left = (2*i)+1;
				int right = (2*i)+2;
				int x;

				cout<<"left = " <<left<<" i = "<<i<<" right = "<<right<<endl;

				// cout<<"left = "<<left<<" arr[left] = "<<arr[left]<<"\n";
				// cout<<"i = "<<i<<" arr[i] = "<<arr[i]<<"\n";
				// cout<<"right = "<<right<<" arr[right] = "<<arr[right]<<"\n";

				if(left<=n && arr[left] < arr[i]) {
					swap(arr[i], arr[left]);
					x = left;
				}

				

				if(right<=n && arr[right] < arr[i]) {
					swap(arr[i], arr[right]);
					x=right;
					cout<<x<<endl;
				}

				buildHeap(arr,n,x);
			

				i--;
			}

				

	
}


void print(vector<int> arr) {
	vector<int>::iterator it = arr.begin();
				while(it!=arr.end()) {
					cout<<*it<<" ";
					it++;
				}
				cout<<endl;
}

int main() {
vector<int> arr;

	arr.push_back(43);
	arr.push_back(19);
	arr.push_back(35);
	arr.push_back(12);
	arr.push_back(4); 
	arr.push_back(2);
	arr.push_back(20);
	arr.push_back(6);

	int n = arr.size();
	int i=(n-1)/2;

		buildHeap(arr,n-1,i);
		

	


}