#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"Enter the value of side 1:";
    cin>>side1;
    
    cout<<"Enter the value of side 2:";
    cin>>side2;
    cout<<"Enter the value of side 3:";
    cin>>side3;
    if(side1+side2>side3 && side2+side3>side1 && side1+side3> side2)
    {
        cout<<side1<<","<<side2<<","<<side3<<"are valid set of sides for a traingle ";
    }
    else
    {cout<<side1<<","<<side2<<","<<side3<<"are not valid set of sides for a traingle ";
    

    }
    return 0;

}