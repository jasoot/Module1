#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
//Task 1, variant 11
int main(){
 
	{
	float I, y, x, z;
	z!=0;
	z=exp(y)+pow(sin(x), 2);
	cout<< "Input x: "; 
		cin>>x;
	cout<<	"Input y: ";
	    cin>>y;
	I=2.33*log(sqrt(1+pow(cos(y),2)))/z;
    cout << "I: " << I << endl;
}
	
//Task 2, variant 11
{
	double price, discount;
	cout<< "Input price:";
	cin>>price;
	if ((400<= price) && (price < 600))
	{
		discount= 5;
		cout <<" If price: 400 UAH<price<600UAH, and discount : 5 percent " << endl;
}
	else if ((600<= price) && (price < 1000))
        {
          discount = 10;
          cout <<" If price: 600 UAH<price<1000 UAH, and discount : 10 percent " << endl;
        
	}
}
	return 0;

}
