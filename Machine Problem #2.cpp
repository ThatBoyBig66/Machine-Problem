#include <iostream> 
#include <cmath>
#include <conio.h> 


using namespace std; 
int main()
{ 
	float x,y,z;
    float Cvol, Clat, Cbas,Csa; 
    float Pvol, Plat, Pbas, Psa; 
    float Svol, Ssa, pi = 3.14; 
    char again; 
    char i, quit; 
    bool userquit = false;
    

    
    while(!userquit)
    {
    	cout << "This Geometric Calculator will compute the geometric parameters for Cone, Pyramid, Sphere:" << endl;
        cout << "PRESS (C): To calculate: Volume, Lateral area, Base area, and Surface area of a Cone"<< endl; 
        cout << "PRESS (P): To calculate: Volume, Lateral area, Base area, and Surface area of a Pyramid: " << endl;
        cout << "PRESS (S): To calculate: Volume and surface area of a Sphere: " << endl; 
        
        cout << "Input: "; 
        cin >> i; 
        
    if(i=='c'||i=='C')
        {
            cout << "\nThe radius of the Cone: ";
            cin >> x;
            cout << "The height of the cone: "; 
            cin >> y; 
            Cvol = x * x * (y / 3) * pi;
            Clat = x * sqrt((y * y) + (x * x)) * pi; 
            Cbas = x * x * pi; 
            Csa =pi * x * (x + sqrt((y* y) + (x * x)));
            
            cout << "\nVolume: " << Cvol << " cubic units";
            cout << "\nLateral area: " << Clat << " square units";
            cout << "\nBase area: " << Cbas << " square units"; 
            cout << "\nSurface area: " << Csa << " square units";
  		}
    else if(i=='p'||i=='P')
        {
            cout << "The length of the Pyramid: "; 
            cin >> x; 
            cout << "The width of the Pyramid: "; 
            cin >> y; 
            cout << "The height of the Pyramid: "; 
            cin >> z; 
            Pvol = (z * y * x) / 3; 
            Pbas = Plat * x;
            Plat = (x * sqrt(((y / 2) * (y / 2)) + (z * z)) + y * sqrt(((x / 2) * (x / 2)) + (z * z)));
            Psa = Plat + Pbas; 
            
            cout << "\nVolume: " << Pvol << " cubic units";
            cout << "\nLateral area: " << Plat << " square units";
            cout << "\nBase area: " << Pbas << " square units"; 
            cout << "\nSurface area: " << Psa << " square units";

     	}
 	else if(i=='S'||i=='s')
        {	
            cout << "The radius of the Sphere: ";
            cin >> x; 
            Svol = ((4 * pi * (x * x * x)) / 3);
            Ssa = ((x * x) * pi * 4); 
            
            cout << "\nVolume: " << Svol << " square units";
            cout << "\nSurface area: " << Ssa << " square units"; 
   		}	
   			else 
   		{
			cout << "The input is invalid";
			userquit = true;
			break;
		}
	_getch();
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
