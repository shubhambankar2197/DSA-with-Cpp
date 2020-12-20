#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,i,j,temp;
	cin>>n;
	i = n;
	j=n;
	queue<int> callingOrder,idealOrder;
	while(i>0) {
		cin>>temp;
		callingOrder.push(temp);
		i--;
	}
	while(j>0) {
		cin>>temp;
		idealOrder.push(temp);
		j--;
	}

	int count=0;
	// while(!callingOrder.empty()) {
	// 	if(idealOrder.front()==callingOrder.front()) {
	// 		callingOrder.pop();
	// 		count++;
	// 	}
	// 	else {
	// 		temp = callingOrder.front();
	// 		callingOrder.push(temp);
	// 		count++;
	// 	}
	// }
while(!callingOrder.empty()){
	while(callingOrder.front()!=idealOrder.front()) {
		temp = callingOrder.front();
		callingOrder.pop();
		callingOrder.push(temp);
		count++;
	}

	if(callingOrder.front()==idealOrder.front()) {
		count++;
		callingOrder.pop();
		idealOrder.pop();
	}
}
	

cout<<count;

}