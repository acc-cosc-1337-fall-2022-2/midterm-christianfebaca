#include<iostream>
#include"question2.h"

using std::cout;
using std::cin;
using std::string;

//1) Prompt user for a number: a - Validate that the number is in the range of 1 - 15
//2) pass the number to the get_fib_sequence function, save the return value to a variable in main
//3)display the fibonacci sequence
//4) the program will loop until user wants to exit


void get_fib_sequence()
{
    int num = 0;
    char i = 0;
    cin>>num;
    cout<<"Please enter a number from 1 to 15: "<<num<<"\n";
    cout<<"Fibonacci sequence: "<<"\n";

    do
    {

    for(int i = 1; i <= num; ++i);
    if(i == 1)
    cin>>num;
    cout<<"Please re-enter number between 1 and 15: "<<num<<"\n";
    
    while(num <= 1 && num >= 15);
    cin>>num;
    cout<<"Number selected is going through the get_fib_sequence: "<<num<<"\n";
    
    }while(num != 0);
    cout<<"Program has been terminated"<<"\n";

    return;
}