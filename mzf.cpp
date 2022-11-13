#include <iostream>
#include <cmath>
using namespace std;
float f_liniowa_0(float a,float b) {
	return -(b / a);
}


float f_liniowa_3D(float a,float b, float c) {
	return -(c/a);
}
int main()

{	int x;
	float a, b, c;
	cout <<"miejsce zerowe ax+b - wcisnij 1"<<endl;
	cout <<"miejsce zerowe Ax+By+C=0 - wcisnij 2"<<endl;
	cin>>x;

	if(x==1){
	
		cout << "podaj a:";
		cin >> a;
		cout << "podaj b:";
		cout<<"funkcja "<<a<<"x +"<<b<<" ma miejsce zerowe:";
			cout<<f_liniowa_0(a, b);	
		}
	
	else{
		cout << "podaj a:";
		cin >> a;
		cout << "podaj b:";
		cin >> b;
		cout << "podaj c:";
		cin >> c;

		cout << "Funkcja "<<a<<"x + "<<b<<"y +"<<c<<"= 0 ma miejsce zerowe: ";
		cout<<f_liniowa_3D(a,b,c);
	}




	return 0;
}
