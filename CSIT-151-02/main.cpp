//
//  main.cpp
//  CSIT-151-02
//
//  Created by Matthew Passarelli on 2/12/22.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
     
     Write a c++ program that will calculate the income taxes owed based on the following table.
         Income Range               Income Tax Amount
        $0 - $2,000                 Nothing
        $2,001 - $20,000            4% * Each dollar earned over $2,000
        $20,001 - $40,000           $720 + 8% * Each dollar earned over $20,000
        $40,001 - $80,000           $2,320 + 16% * Each dollar earned over $20,000
        $80,001 - $120,000          $8,720 + 24% * Each dollar earned over $20,000
        $120,001 +                  $18,320 + 32% * Each dollar earned over $20,000
    
    
    Your program is to prompt the user for their income amount and then read in this value from the input. Next your program should calculate and output the amount of income tax. Be sure to output your information is some readable style.
     */
    
    float income, tax;
    cout<<"enter your annual income in $: ";
    cin>>income;
    int test=ceil(income/1000);
    
    switch(test)
    {
    case 0 ... 2:
        tax=0;
            break;
    case 3 ... 20:
            tax=0.04*(income-2000);
            break;
    case 21 ... 40:
            tax=0.08*(income-20000)+720;
            break;
    case 41 ... 80:
            tax=0.16*(income-20000)+2320;
            break;
    case 81 ... 120:
            tax=0.24*(income-20000)+8720;
    default:
            tax=0.32*(income-20000)+18320;
    }
    cout<< endl<<"Your tax liability is: $"<<tax<<endl;
     
    return 0;
}
