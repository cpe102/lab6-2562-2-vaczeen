#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	char y='A';
	char a='Z';
	if(x=='A'){
		return 'Z';
	}
	if(x>'A'&&x<='Z'){
	return x-1;
	}else {
	return '0';
			}

}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
