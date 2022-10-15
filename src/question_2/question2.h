#include<iostream>

using std::cout;


bool test_config();

int get_fib_sequence(int n)
{
    if(n <= 1)

        return n;

    return get_fib_sequence(n - 1) + get_fib_sequence(n - 2); 
}

int main(int, char**)
{
    int n = 1;

    cout<<get_fib_sequence(n);

    getchar();

    return 0;
}