#include<iostream>
using namespace std;
int arr[3][30],crr[30],n;
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
arr[2][i]=arr[1][i]-arr[0][i];
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
cout<<arr[0][i]<<"---"<<arr[1][i]<<"-------"<<arr[2][i];
}
for(i=1;i<=n-1;i++)
{
grr[2]=arr[2][i];
grr[1]=arr[1][i];
grr[0]=arr[0][i];
j=i;
while((arr[2][j-1]>grr[2])&&(j>=1))
{
arr[2][j]=arr[2][j-1];
arr[1][j]=arr[1][j-1];
arr[0][j]=arr[0][j-1];
j--;
}
arr[2][j]=grr[2];
arr[1][j]=grr[1];
arr[0][j]=grr[0];
}
cout<<"\nThe intervals are :\n";
for(i=0;i<n;i++)
{
cout<<"\nThe "<<i+1<<"th interval is :";
cout<<arr[0][i]<<"---"<<arr[1][i]<<"-------"<<arr[2][i];
}
intervalo();
}
void intervalo()
{
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if((arr[0][i]!=-1)&&(arr[0][i]!=arr[0][j]))
if((arr[0][j]<arr[1][i])&&(arr[1][j]>arr[0][i]))
{
arr[0][j]=-1;
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
}
