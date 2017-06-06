/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Shubham Mehrotra
 *
 * Created on 05 June 2017, 19:42
 */

#include <iostream>
using namespace std;
int maxsubarray(int a[],int n)
{
    int maxsofar=0;
    int maxendinghere=0;
    for(int i=0;i<n;i++)
    {
        maxendinghere=maxendinghere + a[i];
        if(maxsofar<maxendinghere)
            maxsofar=maxendinghere;
        if(maxendinghere<0)
            maxendinghere=0;
    }
    return maxsofar;
}

int main() {
    
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    
    int sum;
    sum=maxsubarray(a,n);
    cout<<sum;
    return 0;
}





