#include<iostream>
using namespace std;

int main()
{
    int arr[7]={14,15,89,76,54,45,32};
    int key;
    cout<<"Enter the element you want to find:"<<endl;
    cin>>key;
    int n=7;
    for (int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
        
            return arr[i];
        }
        else{
            continue;
        }
    }
    cout<<"The element you are trying to find is not found!!!"<<endl;
    return 0;
}