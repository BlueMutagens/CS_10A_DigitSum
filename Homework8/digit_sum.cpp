//
//  main.cpp
//  Homework8
//
//  Created by Sean Belingheri on 10/20/22.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x, total = 0;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Digit sum of "<<x<<" is ";
    
    while(x>=10)
    {
        total += x%10;
        x /= 10;
    }
    total += x;
    cout<<total<<endl;
    return 0;
}
