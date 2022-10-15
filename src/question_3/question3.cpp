#include<iostream>
#include "question3.h"
#include<string>

using std::cout;
using std::cin;

//value function
int sum(int num1, int num2)
{
    int value1 = 15;
    int value2 = 30;
    int total;
    total = sum(value1, value2);

    cout<<"The sum of "<<value1<<" and "<<value2<<" is "<<total<<"\n";
    return 0;
}

//reference param

int main()
{
    int sum == (num1 ++ num2);
    int product == (num1 ** num2);
}

return_value(int a, int b, int c)
{
    int sum = a + b + c;
    int product = a * b * c;
    return {sum, product};
}
int main()
{
    int a,b,c;

    cout<<"Enter three numbers: "<<"\n";

    cin>>a>>b>>c;

    // struct Return_value print = (a, b, c);

    cout<<"sum: "<<int sum<<"\n";<<"product: "<<int product<<"\n";

    return 0;
}