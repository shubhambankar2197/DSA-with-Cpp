#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


void min_heapify(vector<int> arr, int i, int n) {
	int left = 2*i + 1;
	int right = 2*i + 2;
	int smallest;

cout<<"left = "<<left<<" arr[left] = "<<arr[left]<<"\n";
cout<<"i = "<<i<<" arr[i] = "<<arr[i]<<"\n";
cout<<"right = "<<right<<" arr[right = "<<arr[right]<<"\n";

	if(left < n && arr[left] < arr[i]){
		cout<<"wfssd"<<endl;
		smallest = left;
	}
	else {
		smallest = i;
	}

	if(right < n && arr[right] < arr[i]){
		smallest = right;
	}

cout<<"smallest = "<<smallest<<" "<<arr[smallest]<<"\n";
	
	if(smallest!=i) {
		swap(arr[i], arr[smallest]);
		min_heapify(arr,smallest,n);
	}

std::vector<int>::iterator it = arr.begin();
	while(it!=arr.end()) {
		cout<<*it<<" ";
		it++;
	}
	cout<<endl;


}

void buildHeap(vector<int> arr, int n) {
	for(int i=floor((n-1)/2); i>=0; i--) {
		min_heapify(arr,i,n);
	}



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


	// int parent= 2*i;
	// int left = (2*i)+1;
	// int right = (2*i)+2;
	int n = arr.size();
	buildHeap(arr,n-1);

}