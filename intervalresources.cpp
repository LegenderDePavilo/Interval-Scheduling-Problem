#include<iostream>
using namespace std;
float arr[2][30],crr[2][60];int n;
class Interval
{
public :
    int i;
void input()
{
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
class Resources
{
public:
int i,j=0,k=0;
float v,q;
void newsort()
{
for(i=0;i<2*n;i++)
{
if(i<n)
{
crr[0][i]=arr[0][j++];
crr[1][i]=1;
}
else
{
crr[0][i]=arr[1][k++];
crr[1][i]=-1;
}
}
cout<<"\nThe sorted array is :\n";
for(i=0;i<2*n;i++)
cout<<"\t"<<crr[0][i];
cout<<"\n";
for(i=0;i<2*n;i++)
cout<<"\t"<<crr[1][i];
sorto();
}
void sorto()
{
for(i=1;i<=2*n-1;i++)
{
v=crr[0][i];
q=crr[1][i];
j=i;
while((crr[0][j-1]>v)&&(j>=1))
{
crr[0][j]=crr[0][j-1];
crr[1][j]=crr[1][j-1];
j--;
}
crr[0][j]=v;
crr[1][j]=q;
}
cout<<"\nThe sorted array is :\n";
for(i=0;i<2*n;i++)
cout<<"\t"<<crr[0][i];
cout<<"\n";
for(i=0;i<2*n;i++)
cout<<"\t"<<crr[1][i];
cumulo();
}
void cumulo()
{
for(i=1;i<2*n;i++)
crr[1][i]+=crr[1][i-1];
j=crr[1][0];
for(i=1;i<2*n;i++)
if(crr[1][i]>j)
j=crr[1][i];
cout<<"\nThe maximum intervals required is : "<<j;
}
};
main()
{
Interval k;
k.input();
Resources R;
R.newsort();
}
