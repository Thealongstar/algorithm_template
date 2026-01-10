/*归并排序 时间复杂度nlogn 空间复杂度 n*/
/*板子升序*/
#include<iostream>

using namespace std;

const int N = 100000+10;
int n;
int arr[N],temp[N];

void merge_sort(int arr[],int l,int r)
{
    if(l>=r)return;

    int mid=i+j>>1;

    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);

    int i=l,j=mid+1,k=0;
    while(i<=mid&&j<=r)
    {
        if(arr[i]<arr[j])temp[k++]=arr[i++];
        else temp[k++]=arr[j++];
    }
    while(i<=mid)temp[k++]=arr[i++];
    while(j<=r)temp[k++]=arr[j++];

    for(int i=l,j=0;i<=r;i++,j++)arr[i]=temp[j];

    return ;
}

int main(void)
{
    scanf("%d",&n);

    for(int i = 0;i<n;i++)scanf("%d",&arr[i]);

    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++)printf("%d ",arr[i]);

    return 0;
}