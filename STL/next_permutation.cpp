#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {1,2,3};
    int n  = sizeof(arr)/sizeof(int);

    do{
        for(int i =0;i<n;i++)
        {
            cout<< arr[i] << " ";
        }
        cout<<endl;
    }while(next_permutation(arr,arr+n)== true);
}