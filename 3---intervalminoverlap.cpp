#include<iostream>
using namespace std;
int arr[2][30],crr[20],n;
class Interval
{
public :
    int i,j;
void input()
{
cout<<"\n3.  Intervals which have minimum number of overlaps\n\n";
cout<<"\nEnter the total number of intervals to be entered :";
cin>>n;
cout<<"\nEnter the intervals :";
j=1;
for(i=0;i<n;i++)
{
cout<<"\nEnter the "<<j<<"th interval :";
++j;
cin>>arr[0][i]>>arr[1][i];
}
output();
}
void output()
{
cout<<"\nThe intervals are :";
j=1;
for(i=0;i<n;i++)
{
cout<<"\nThe "<<j++<<"th interval is :";
cout<<arr[0][i]<<"---"<<arr[1][i];
}
}
};
class End
{
public:
    int i,j,k,mino=0,p;
void sorto()
{
cout<<"\nIt is being sorted according to minimum overlap \n";
for(i=0;i<n;i++)
{
k=0;
for(j=0;j<n;j++)
if((arr[0][j]<arr[1][i])&&(arr[1][j]>arr[0][i]))
++k;
k=k-1;
crr[i]=k;
cout<<"\t"<<i<<crr[i];
}
cout<<"\nThe intervals are :";
for(i=0;i<n;i++)
{
mino=crr[0];
for(j=0;j<n;j++)
if(crr[j]<=mino)
{
mino=crr[j];
p=j;
}
cout<<"\n"<<arr[0][p]<<"---"<<arr[1][p]<<" with overlap "<<crr[p];
crr[p]=n+1;
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
End r;
r.sorto();
}
