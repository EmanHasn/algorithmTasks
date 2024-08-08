#include <iostream>
using namespace std;
int LinearSearch(int arr[], int SizeofArr , int data)
{
    int loc=-1;
    int i=0;
    while(loc== -1&&i<SizeofArr)
    {
        if(arr[i]==data)
        {
            loc=i;
        }
        else{
            i++;
        }
    }
    return loc;
}
int main()
{
    int n = 5;
    int arr[n];
    arr[0]=50;
    arr[1]=20;
    arr[2]=80;
    arr[3]=40;
    arr[4]=10;
    cout<<"Arr: ";
    for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    int num;
    cout<<endl<<"enter number:";
    cin>>num;
    cout<<endl;
    int res;
    res=LinearSearch(arr,n,num);
    if(res==-1)
    {
        cout<<"element not found"<<endl;
    }
    else
    {
        cout<<"element founded"<<endl;
    }

    return 0;
}
