#include<iostream>
using namespace std;
int arr[2][30],crr[30][30],n;
class Interval
{
public :
    int i,j;
void input()
{
cout<<"\n4. Intervals that has the smallest intervals\n\n";
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
float grr[3];
cout<<"\nThe intervals are :\n";
for(i=0;i<n;i++)
{
cout<<"\nThe "<<i+1<<"th interval is :";
cout<<arr[0][i]<<"---"<<arr[1][i]<<"-------"<<i+1;
}
intervalo();
}
void intervalo()
{
cout<<"\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
cout<<"\t"<<crr[i][j];
cout<<"\n";
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if((arr[0][j]<arr[1][i])&&(arr[1][j]>arr[0][i])&&(i!=j))
crr[i][j]=1;
cout<<"\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
cout<<"\t"<<crr[i][j];
cout<<"\n";
}
cout<<"\n";
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(crr[i][j]==1)
cout<<"\n"<<arr[0][i]<<" --- "<<arr[1][i]<<"-overlaps with-"<<arr[0][j]<<" --- "<<arr[1][j];
}
};
main()
{
Interval k;
k.input();
}
