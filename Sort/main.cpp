#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int arr[n];
    arr[0]=50;
    arr[1]=20;
    arr[2]=80;
    arr[3]=40;
    arr[4]=10;
    cout<<"Array before Sorting"<<endl;
    for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    int temp;
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-1-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    cout<<endl<<"Array After Sorting"<<endl;
     for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
