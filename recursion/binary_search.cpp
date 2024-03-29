#include <iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;
void binsearch(int * arr,int first,int last,int srch);

int binary_search(int* a , int* l,int srch,int leftside)
{
    int middle = (l-a)/2;

    if(l-a == 1)
    {
        if(*a == srch){
            return middle + leftside;
        }
        else if(*l == srch){
            return middle +1 + leftside;
        }
        else{
            return -1;
        }
    }

    if(a[middle] < srch)
    {
        return binary_search(a+middle,l,srch ,leftside + middle);
    }
    else if(a[middle]>srch) {
        return binary_search(a,l - middle,srch,leftside);
    }
    else {
        return middle + leftside;
    }
}


int main()
{
    int n;
    cout<< "enter the length of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int srch;
    cout<< "enter the number to search:";
    cin>>srch;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout<<'\n';
    binsearch(arr,0,n-1,srch);


}



 void binsearch(int * arr,int first,int last,int srch)
{
    int middle;
    middle = (first + last)/2;
    if(arr[middle]== srch){
        cout<<srch<<" is at the "<<middle+1<<" position"<<endl;
        return;
    }
    else if(arr[middle]<srch)
    {
        first = middle + 1;
        binsearch(arr,first,last,srch);
    }
    else
    {
        last = middle-1;
        binsearch(arr,first,last,srch);
    }

}
