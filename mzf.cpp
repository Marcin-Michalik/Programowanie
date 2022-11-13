#include <iostream>
#include <cmath>
using namespace std;
float f_liniowa_0(float a,float b) {
	return -(b / a);
}
int main()
{
		float a, b;
		cout << "podaj a:";
		cin >> a;
		cout << "podaj b:";
		cin >> b;


		if (a==0.0){
			if(b==0.0)
				cout<<"a = 0, b = 0, wiec miejsce zerowe jest rowne 0.\n";
			else
				cout<<"Brak miejsc zerowych funkcji.\n";
		}
		else{
			cout<<"funkcja "<<a<<"x +"<<b<<" ma miejsce zerowe:";
			cout<<f_liniowa_0(a, b);	
		}
		
	return 0;
}
