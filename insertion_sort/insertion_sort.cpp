#include<iostream>

using namespace std;

void insert_sort(int arr[],int l,int r)
{
    if(l>=r)return;

    insert_sort(arr,l,r-1);

    int i=r;
    int x=arr[r];

    while(i>l)
    {
        if(arr[i-1]>x)arr[i]=arr[i-1];
        else break;
        i--;
    }
    arr[i]=x;

    return;
}

const int N=10000+10;
int n;
int arr[N];

int main(void)
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    insert_sort(arr,n/2,n-1);

    for(int i=0;i<n;i++)printf("%d ",arr[i]);

    return 0;
}