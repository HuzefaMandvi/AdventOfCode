#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string captcha;
	int total = 0;

	cin >> captcha;

	if(captcha[0] == captcha.length() / 2){
		
	}

	for(int i = 1; i <= captcha.length() / 2; i++){
		if(captcha[i] == captcha[i*2])
			total += captcha[i] - 48;
	}

	cout << total << endl;

}