#include<iostream>
using namespace std;
int arr[2][30],crr[30],n;
class Interval
{
public :
    int i;
void input()
{
cout<<"\n 1. Intervals which ends the quickest \n\n";
cout<<"\nEnter the total number of intervals to be entered :";
cin>>n;
cout<<"\nEnter the intervals :";
for(i=0;i<n;i++)
{
cout<<"\nEnter the "<<i+1<<"th interval :";
cin>>arr[0][i]>>arr[1][i];
}
output();
}
void output()
{
cout<<"\nThe intervals are :";
for(i=0;i<n;i++)
{
cout<<"\nThe "<<i+1<<"th interval is :";
cout<<arr[0][i]<<"---"<<arr[1][i];
}
}
};
class End
{
public:
    int i,j,k,temp,tempo;
void sorto()
{
cout<<"\nIt is being sorted according to quicker finish time :";
for(i=1;i<n;i++)
{
temp=arr[1][i];
tempo=arr[0][i];
j=i-1;
while(j>=0&&arr[1][j]>temp)
{
arr[1][j+1]=arr[1][j];
arr[0][j+1]=arr[0][j];
j=j-1;
}
arr[1][j+1]=temp;
arr[0][j+1]=tempo;
}
cout<<"\nThe sorted intervals are :";
for(i=0;i<n;i++)
{
cout<<"\nThe "<<i+1<<"th interval is :";
cout<<arr[0][i]<<"---"<<arr[1][i];
}
intervalo();
}
void intervalo()
{
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(arr[0][i]!=-1)
if(arr[1][i]>arr[0][j+1])
{
arr[0][j+1]=-1;
}
}
}
cout<<"\n";
for(i=0;i<n;i++)
if(arr[0][i]!=-1)
cout<<endl<<arr[0][i]<<"\t"<<arr[1][i];
}
};
main()
{
Interval k;
k.input();
End r;
r.sorto();
}
