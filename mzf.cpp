#include <iostream>
#include <cmath>

using namespace std;

///////////		FUNKCJE		////////////////////////////////


float f_liniowa_0(float a,float b) {
	return -(b / a);
}




float f_liniowa_3D(float a,float b, float c) {
	return -(c/a);
}	



void f_kwadratowa(float a, float b, float c){
float delta;
delta=(b*b)-(4*a*c);
	cout << "Funkcja "<<a<<"x2 + "<<b<<"x + "<<c<<" ";	
if(delta<0){
	cout <<"nie ma mijesca zerowego ";
}
else if(delta>0){
	cout << "miejsca zerowe: "<<endl;
	cout<<"x1 = "<<(-b-sqrt(delta))/(2*a)<<endl;
	cout<<"x2 = "<<(-b+sqrt(delta))/(2*a)<<endl;
}





}


int main()


/////////     MENU   ///////////
{	int x;
	float a, b, c;
	cout <<"miejsce zerowe ax+b - wcisnij 1"<<endl;
	cout <<"miejsce zerowe Ax+By+C=0 - wcisnij 2"<<endl;
	cout <<"miejsce zerowe postaci ax2 + bx + c gdzie a rozne od 0  - wcisnij 3"<<endl;
	cin>>x;
	
	
	
	
	
	///////////		ax+b	//////////
	if(x==1){
	
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
	}
	
	
	///////////		Ax + By + C = 0 	//////////
	else if(x==2){
		cout << "podaj a:";
		cin >> a;
		cout << "podaj b:";
		cin >> b;
		cout << "podaj c:";
		cin >> c;
		
		cout << "Funkcja "<<a<<"x + "<<b<<"y +"<<c<<"= 0 ma miejsce zerowe: ";
		cout<<f_liniowa_3D(a,b,c);
	}
	
	
	///////////		ax2 + bx + c	//////////
	else if(x==3){
		cout << "podaj a:";
		cin >> a;
		cout << "podaj b:";
		cin >> b;
		cout << "podaj c:";
		cin >> c;
		
		f_kwadratowa(a,b,c);
	}
	
	
	
	
	
	else{
		cout << "brak";
	}
	


	return 0;
}
