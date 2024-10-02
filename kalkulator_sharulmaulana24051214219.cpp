#include <iostream>


using namespace std;

int main () {
	
	float  a,b;
	char aritmatika;
	
	cout << "tolong massukkan nilai pertama :";
	cin >> a;
	
	cout << "tolong massukan aritmatika  (+,-,*,/) :";
	cin >> aritmatika;
	
		cout << "tolong massukkan nilai kedua :";
    	cin >> b;
    	
    if (aritmatika == '+') {
    	cout << "hasil : " << a + b << endl;
	} else if (aritmatika == '-') {
    	cout << "hasil : " << a - b << endl;
 	} else if (aritmatika == '*') {
    	cout << "hasil : " << a * b << endl;
	} else if (aritmatika == '/') {
		if (b !=0) {

    	cout << "hasil : " << a / b << endl;
    } else {
 cout << "pembagian ini tidak valid"<< endl;
}
	} else { cout << "erorrr: operator tidak valid"<< endl;
	}
	
	return 0;	
}