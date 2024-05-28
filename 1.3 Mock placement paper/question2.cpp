#include<iostream>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"arr["<<i<<"] ="<<arr[i]<<endl;
    }
}
void selectionsort(int arr[],int size)
{
    int min_index=0;
    for(int i=0;i<size;i++)
    {
        min_index=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
            if(min_index!=i)
            {
                swap(arr[i],arr[min_index]);
            }
        }
    }
}
int main()
{
    int size_n;
    cout<<"Ente The number of element in the array:";
    cin>>size_n;
    int arr[size_n];
    for(int i=0;i<size_n;i++)
    {
        cout<<"Enter The value:";
        cin>>arr[i];

    }
    cout<<"The array before Swaping"<<endl;
    display(arr,size_n);
    selectionsort(arr,size_n);
    cout<<"The array After Swaping"<<endl;
    display(arr,size_n);
}