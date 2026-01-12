#include<iostream>

using namespace std;

const int N=100000+10;
int n;
int arr[N];

void shell_sort(int arr[],int l,int r)
{
    if(l>=r)return;

    int h = r-l+1>>1;

    while(h>=1)
    {
        for(int i=h;i<=r;i++)
            for(int j=i;j>=l+h&&arr[j]<arr[j-h];j-=h)
                swap(arr[j],arr[j-h]);
        
        h/=2;
    }
}

int main(void)
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    shell_sort(arr,n/2,n-1);

    for(int i=0;i<n;i++)printf("%d ",arr[i]);

    return 0;
}