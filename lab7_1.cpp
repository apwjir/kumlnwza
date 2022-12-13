#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string A,B,C,D;

int main(){
    cout << "Input text: ";
	cin >> A;
	B = func1(A);
    cout << "Reversed text: ";
	cout << B << "\n";
    cout << "Palindrome: ";
	C = func2(A);
	D = func2(B);
	if(C == D){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
    return 0;
}
