#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;


//
bool test_config();

string transcribe_dna_into_rna(string t)
{
    string u = "";

    for(int i = 0; i < t.length(); i++)
    {
        if(t[i] == 'T')
        {
            u += 'U';
        }
        else
        {
            u += t[i];
        }
    }
    return u;
}