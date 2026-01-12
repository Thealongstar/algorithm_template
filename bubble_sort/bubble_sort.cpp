/*冒泡排序：时间复杂度 n*n 空间复杂度 1*/
/*板子升序排列*/
#include<iostream>

using namespace std;

const int N=100000+10;
int n;
int arr[N];

void bubble_sort(int arr[],int l,int r)
{
    for(int i=l ; i <= r; i++)
    {
        for(int j = r ; j > i ; j--)
        {
            if(arr[j] < arr[j-1])
            swap(arr[j],arr[j-1]);
        }
    }
}

int main(void)
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    bubble_sort(arr,n/2,n-1);

    for(int i=0;i<n;i++)printf("%d ",arr[i]);


    return 0;
}