// 7 8 1 4
// 8 -1 4 -1

//10 3 12 4 2 9 13 0 8 11 1 7 5 6
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void larger(int *arr, int n) {
	stack<int>s;
	int i=n-1,t,max=0;
	// cout<<n<<endl;
	// cout<<endl;	
	// cout<<arr[i];
	while(i>=0) {
		// if(arr[i] > max) {
		// 			max = arr[i];
		// 		}
		// cout<<"i= "<<i<<endl;
		if(arr[i]==arr[n-1]) {
			s.push(-1);
			// cout<<s.top()<<" ";
		}
		else {
			cout<<"arr[i+1] = "<<arr[i+1]<<"  ";
			cout<<"arr[i] = "<<arr[i]<<" ";
			cout<<endl;
			if(arr[i]<arr[i+1]) {
				s.push(arr[i+1]);
				max = arr[i+1];
				// cout<<s.top()<<" ";

			}
			else if(arr[i]>arr[i+1]) {
				// max = arr[i];
				cout<<"max = "<<max<<" ";
				t = s.top();
				cout<<t<<endl;
				if(t<arr[i]) {
					if(arr[i]<max)
						s.push(max);
					else
						s.push(-1);					
				}
				else 
					s.push(t);
							// cout<<s.top()<<" dsds   ";

			}
			else {
				s.push(-1);
				// cout<<s.top()<<"dd  ";

			}

			
		}
		i--;
	}

	while(!s.empty()) {
		cout<<s.top()<<" ";
		s.pop();
	}
}



int main()
{
	int n,testCase;
	int arr[100];
	cin>>testCase;
	while(testCase>0) {
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}
			larger(arr,n);
			cout<<endl;
			testCase--;
	}
	return 0;
}