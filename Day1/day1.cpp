#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string captcha;
	int total = 0;

	cin >> captcha;

	for(int i = 0; i < captcha.length(); i++){
		if(captcha[i] == captcha[i+1])
			total += captcha[i] - 48;
	}

	if(captcha[0] == captcha[captcha.length() - 1])
		total += captcha[0] - 48;

	cout << total << endl;

}