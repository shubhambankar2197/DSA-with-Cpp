#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isOperator(char ch) {
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
		return true;
	else
		return false;
}

int precedence(char ch) {
	if(ch=='+'||ch=='-')
		return 1;
	else if(ch=='*' || ch=='/')
		return 2;

	return 0;
}

int op(int val1, int val2, char operators){
	switch(operators){
		case '+':
			return val1 + val2;
		case '*':
			return val1 * val2;
		case '-':
			return val2 - val1;
		case '/':
			return val2 / val1;
	}
	return 0;
}
int main() {
	string str = "5*5-2*10";
	int len = str.length();
	stack <int> number;
	stack <char> operators;
	int arr[len+1]={0};
	int k=0,j=0;
	while(str[k]!='\0') {
		if(isOperator(str[k])) {
			j++;
			arr[j]=str[k];
			j++;
		}
		else {
			arr[j] = arr[j]*10+(str[k]-'0');
			
		}
		k++;
	}
	// arr[j+1]='\0';
	int val1,val2,result;

	for(int i=0;i<=j;i++){
		if(!isOperator(arr[i])){
			number.push(arr[i]);
			// cout<<number.top()<<endl;

		}
		else if(isOperator(arr[i]) && operators.empty()){
			operators.push(arr[i]);
			// cout<<operators.top()<<endl;

		}
		else if(isOperator(arr[i]) && precedence(operators.top())<=precedence(arr[i])) {
			operators.push(arr[i]);
			// cout<<operators.top()<<endl;
		}
		else{
			while(!operators.empty() && precedence(operators.top())>=precedence(arr[i])){
				val1 = number.top();
				number.pop();
				val2 = number.top();
				number.pop();
				char oper = operators.top();
				operators.pop();
				result = op(val1,val2,oper);
				// cout<<result<<endl;
				number.push(result);
				// cout<<number.top();
			}
			operators.push(arr[i]);
		}
	}

	// cout<<operators.top()<<endl;
	// 	cout<<number.top()<<endl;


		// val1 = number.top();
		// 		number.pop();
		// 		val2 = number.top();
		// 		number.pop();

		// 		cout<<val1<<" "<<val2<<endl;

		while(!operators.empty()){
				val1 = number.top();
				number.pop();
				val2 = number.top();
				number.pop();
				char oper = operators.top();
				operators.pop();
				result = op(val1,val2,oper);
				number.push(result);
				// cout<<number.top()<<endl;
				}			
	// // number.push(arr[0]);
	// cout<<number.top();
	// if(isOperator(arr[1])) {
	// 	operators.push(arr[1]);
	// }
				cout<<number.top()<<endl;

	// cout<<operators.top();
	// if(operators.empty()) {
	// 	cout<<"xyz";
	// }

	// if(!isOperator(arr[1])) {
	// 	cout<<"true";
	// }




	return 0;
	
	
}