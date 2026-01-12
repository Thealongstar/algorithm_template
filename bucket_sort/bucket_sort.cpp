/*桶排序 时间复杂度：n+n*n/k+k 空间复杂度：n+v 稳定*/
/*板子升序*/
#include<iostream>
#include<vector>

using namespace std;

const int N=100000+10;
int n;
int arr[N];
vector<int>bucket[N];

void insert_sort(vector<int>&A,int n)
{
    if(n<=0)return ;
    
    insert_sort(A,n-1);

    int i=n;
    int x=A[n];

    while(i>0)
    {
        if(A[i-1]>x)A[i]=A[i-1];
        else break;
        i--;
    }
    A[i]=x;

    return ;
}

void bucket_sort(int arr[],int l,int r)
{
    if(l>=r)return;

    int w; //w表示待排序数组中的最大数字，用于决定arr中元素被分配的桶

    for(int i=l;i<=r;i++)w=max(w,arr[i]);

    int bucket_size=w/(r-l+1)+1;

    for(int i=l;i<=r;i++)
    bucket[w/bucket_size].push_back(arr[i]);//将各元素分配到相应的桶中

    int p=0;//指针指向原数组

    for(int i=0;i<n;i++)
    {
        insert_sort(bucket[i],bucket[i].size()-1);
        for(int j=0;j<bucket[i].size();j++)
            arr[p++]=bucket[i][j];
    }
}

int main(void)
{
    scanf("%d",&n);

    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    bucket_sort(arr,0,n-1);

    for(int i=0;i<n;i++)printf("%d ",arr[i]);

    return 0;
}