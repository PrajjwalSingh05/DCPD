#include<iostream>
using namespace std;
bool checkBirthDay(string month,int day)
{
    if(month=="july" && day==5)
    {
        return true;

    }
    return false;
}
int main()
{
    string month;
    int day;
    cout<<"Enter The month:";
    cin>>month;
    cout<<"Enter Day";
    cin>>day;
    if(checkBirthDay(month,day))
    {
        cout<<"Lisa Birthday";
    }
    else{
        cout<<"Not Lisa Birthday";
    }
}