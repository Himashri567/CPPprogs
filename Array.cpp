#include<iostream>
using namespace std;
int main()
{
  int *p;
  int i,n,a[100];//={1,2,3,5,4};
  cout<<"Enter the no. of elements you want to enter (less than 100)"<<endl;
  cin>>n;
  cout<<"Enter elements:"<<endl;
  for(i=0;i<n;i++)
    cin>>a[i];
  p=a;
  cout<<"You entered:"<<endl;
  for(i=0;i<n;i++)
  {
    cout<<*p<<endl;
    p++;
  }
  return 0;
}
