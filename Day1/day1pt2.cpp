#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string captcha;
	int total = 0;

	cin >> captcha;

	int offset = (captcha.length() / 2);

	for(int i = 0; i < captcha.length(); i++){
		if(captcha[i] == captcha[(i+offset) % captcha.length()]){
			total += captcha[i] - 48;
		}
	}

	cout << total << endl;

}