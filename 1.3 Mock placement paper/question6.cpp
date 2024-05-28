#include<iostream>
using namespace std;
int sumMatrix(int arr[][6],int row,int column)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            sum=arr[i][j]+sum;
        }
    }
        return sum;


}
void printmatrix(int arr[][6],int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
void insertElement(int arr[][6],int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"Enter the element";
            cin>>arr[i][j];
        }
    }
}
int main(){
    int row;
    int column;
    int arr[row][6];
    cout<<"Enter the Number of row:";
    cin>>row;
    cout<<"Enter the umber of column :";
    cin>>column;
    insertElement(arr,row,column);
    printmatrix(arr,row,column);
    int result=sumMatrix(arr,row,column);
    cout<<"Sum of they elements are "<<result;




}