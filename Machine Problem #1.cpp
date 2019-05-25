#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>w
#include <math.h>
#include <stdlib.h>

using namespace std;
int main()
{
	int A,B,C;
	double x,y,z;
	double p,s;
	double area,apothem;
	double e,f,g, h;
	double i,j;
    const float pi=3.1416;
	char quit;
	bool userquit = false;

    
	while(!userquit)
{
	cout << "This program would compute the following values based on the given sides of the triangle:\nInterior angles, Area, Perimeter, Apothem\nand Circumcenter  of a triangle.\n" <<endl;
    cout << "Side: 1 lies on the x-axis\nSide: 2 lies on the right side\nside: 3 lies on the left side of the triangle:"<<endl;
    
    cout << "\nEnter side 1: ";
    cin >> x;
    cout << "Enter side 2: ";
    cin >> y;
    cout << "Enter side 3: ";
    cin >> z;

	A=floor(0.5+(acos((pow(y,2)+pow(z,2)-pow(x, 2))/(2*(y*z))))*(180/pi));
	B=floor(0.5+(acos((pow(x,2)+pow(z,2)-pow(y, 2))/(2*(x*z))))*(180/pi));
	C=floor(0.5+(acos((pow(x,2)+pow(y,2)-pow(z, 2))/(2*(y*x))))*(180/pi));
	
    p=x+y+z;
    s=p/2;
    area=sqrt((s*(s-x))*((s-y)*(s-z)));
    apothem=(2 * area)/p;
    
    e=cos(B* (pi/180));
	f=sin(B* (pi/180)); 
	
    g=z*static_cast<double>(e);
    h=z*static_cast<double>(f);
    
    i=x/2;
    j = (pow(h, 2) - (x * g) + pow(g, 2))/(2 * h);
    
	cout << "\n";
	
    if (x>0 && y>0 && z>0)
    {
		if (x==y||x==z||y==z)
			cout << "Isosceles, ";		
			
		else if (x==y&&x==z)
			cout << "Equilateral, ";
			
		else
			cout << "Scalene, ";
		
		if (A==90||B==90||C==90)
		cout << "Right Triangle" << endl;
		else if (A>90||B>90||C>90)
		cout << "Obtuse Triangle" << endl;
		else
		cout << "Acute Triangle" << endl;
		
		cout <<setprecision(2)<<fixed<<"The Vertices are: (0,0),("<<x<<",0)&("<<g<<","<<h<<")"<< endl;
		cout <<"The Interior Angles (in degrees) are: "<<A<<", "<<B<<", "<<C<<endl;
		cout <<"The Area is= "<<area<<" sq. units"<<endl;
		cout <<"The Perimeter is= "<<p<<" units"<<endl;
		cout <<"The Apothem is= "<<apothem<<" units" <<endl;
		cout <<setprecision(2)<<fixed<<"The Circumcenter is (x,y): ("<<i;
		cout <<setprecision(2)<<fixed<<","<<j<< ")\n";
		_getch();
	}
	else
	{
	cout << "Invalid!";
		userquit = true;
	}
	system ("CLS");
	cout<<"Continue: Press any key\nQuit: press [Q]"<<endl;
	cin>>quit;
	if(quit=='q'||quit=='Q')
	{
		system ("CLS");
			cout << "Thank you!";
				userquit = true;
		break;
	}
	system ("CLS");
}
	_getch();
    return 0;
}
