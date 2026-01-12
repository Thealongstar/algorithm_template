/*计数排序 时间复杂度n 空间复杂度 n+v 稳定*/
/*板子升序*/
#include<iostream>

using namespace std;

const int N=100000+10;
int n;
int arr[N];
int val[N];
int temp[N];

void counting_sort(int arr[],int l,int r)
{
    if(l>=r)return ;

    for(int i=l;i<=r;i++)val[arr[i]]++;
    for(int i=1;i<N;i++)val[i]=val[i-1];
    for(int i=l;i<=r;i++)temp[--val[arr[i]]]=arr[i];

    return ;
}

int main(void)
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    counting_sort(arr,0,n-1);

    for(int i=0;i<n;i++)printf("%d ",temp[i]);

    return 0;
}