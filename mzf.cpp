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

		if (a==0){
			cout<<"a nie moze byæ równe 0";
		}
		else{
			cout<<"funkcja "<<a<<"x +"<<b<<" ma miejsce zerowe:";
			cout<<f_liniowa_0(a, b);	
		}



	return 0;
}
