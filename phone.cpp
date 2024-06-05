#include<iostream>
#include<cstring>
using namespace std;
struct Mobile {
	char number[11];
	bool isvalid(){
		if (number[0] == '0' && number[1] == '9') {
			return true;
	}
		return false;
	}
};
int main()
{
	Mobile mobile;
	cin >> mobile.number;
	if (mobile.isvalid()) {
		cout << "Good number!";
	}
	else {
		cout << "wrong!";
	}
	return 0;
}