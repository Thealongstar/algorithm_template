/*选择排序 时间复杂度n*n 空间复杂度1 稳定*/
/*板子升序*/
#include<iostream>

using namespace std;

const int N=100000+10;
int n;
int arr[N];

void choice_sort(int arr[],int l,int r)
{
    if(l>=r)return;

    for(int i=l;i<r;i++)
    {
        int Min=i;
        for(int j=i;j<=r;j++)
            if(arr[Min]>arr[j])
            Min=j;

        swap(arr[i],arr[Min]);
    }
}

int main(void)
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    choice_sort(arr,n/2,n-1);

    for(int i=0;i<n;i++)printf("%d ",arr[i]);

    return 0;
}