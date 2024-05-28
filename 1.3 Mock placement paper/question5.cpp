#include<iostream>
#include<cmath>
using namespace std;
int allExponent(int base,int expo)
{
    float result=1.0f;
    for(int i=0;i<abs(expo);i++)
    {
        result=result*base;
    }
    if(expo<0)
    {
        result=float(1/result);
    }
    return result;

}
int main()
{
    int base,exponet;
    cout<<"Enter the value of base:";
    cin>>base;
    cout<<"Enter exponet value";
    cin>>exponet;
    float answer=allExponent(base,exponet);
    cout<<answer;
}