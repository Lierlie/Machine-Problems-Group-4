// Problem 2 : Machine Problem //

#include <iostream>
#include <cmath>
#define PI 3.14159265

using namespace std;

double angle(double a,double b,double c)
{
	double theta = acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b))*180/PI;
	return theta;
}

int main()
{
   
    double a, b, c, s;
	double area, per,apo, circ;
	double A, B, C;
       
    cout << "\nA Program determing certain values of a Triangle based on given sides\n";
    // Sides of the Triangle // 
	cout<<"\nEnter the length of side A: ";
    cin>>a;
    
    cout<<"Enter the length of side B: ";
    cin>>b;     
    
    cout<<"Enter the length of side C: ";
    cin>>c;
    cout << "\n";

	// Interior Angles //
	if(a + b > c && b + c > a && c + a > b )
	{
		A = angle (b, c, a);
		B = angle (c, a, b);
		C = 180 - A - B;
	
	cout << "Interior Angles: \n";
	cout << "Angle A: " << A << endl;
	cout << "Angle B: " << B << endl;
	cout << "Angle C: " << C << endl;
	cout << endl;
	}
	
	// Type Of Triangle //
	cout << "Type of Triangle:\n";
	if(a==b && b==c)                 
	cout << "The Triange is an Equilateral triangle\n"; // All sides Equal //
		else if(a==b || a==c || b==c)   
	cout << "The Triange is an Isosceles triangle\n"; // Atleast 2 sides Equal //
	else                                
	cout << "The Triange is an Scalene triangle\n"; // No sides Equal //
	
	// Classify Angle //
	if(A>90 || B>90 || C>90)                 
	cout << "The Triange has an Obtuse Angle\n"; 
		else if(a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)  
		cout << "The Triange has a Right Angle\n";
	else                                
	cout << "The Triange has a Acute Angle\n";
	
    s = ( a + b + c ) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c) );
    per = (a + b + c);
    apo = (2 * area) / per;
    circ = (a * b * c) / sqrt((a + b + c) * (b + c - a) * (a + b - c) * (c + a - b));
    
    cout << "\n";
    cout << "The Area of the Triangle is = " << area << endl;
    cout << "The Perimeter of the Triangle is = " << per << endl;
	cout << "The Apothem of the Triangle is = " << apo << endl;
	cout << "The Circumcenter of the Triangle is = " << circ << endl;
    return 0;
}
