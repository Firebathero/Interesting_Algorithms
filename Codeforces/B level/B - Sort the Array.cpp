#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+7;
int n;
int a[maxn];
bool check()
{
    for(int i=2;i<=n;i++)
        if(a[i]<a[i-1])return false;
    return true;
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
        int j=i+1;
        for(;j<=n;j++)
            if(a[j]>=a[i])  //move j until we reach an increasing ordered pair
                break;
        if(j!=i+1)          //if j has moved, we know we have an out of order segment
        {
            reverse(a+i,a+j);   //reverse the segment
            if(check())         //did that sort our whole array?
            {
                printf("yes\n");            
                printf("%d %d",i,j-1);
            }
            else
                printf("no\n");             
            return 0;
        }
    }
    
     if(check())                 //if j never moved, we never ran check(), so check if base array was sorted
    {
        printf("yes\n");
        printf("%d %d",1,1);
    }
    else
        printf("no\n"); 
}