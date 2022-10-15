#include<iostream>
#include<string>
#include"question4.h"

using std::cout;
using std::cin;
using std::string;


int main()
{
    string rna = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");
    cout<<rna<<"\n";
    return 0;
}