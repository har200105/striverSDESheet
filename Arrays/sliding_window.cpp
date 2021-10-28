#include<iostream>
using namespace std;

int main()
{
  int n, s;
  cout<<"Enter the size of array: ";
  cin>>n;
  cout<<"Enter the size of window.";
  cin>>s;
  int A[n];
  for(int i = 0; i < n; i++)
    cin>>A[i];
  
  for(int j = 0; j <= n-s; j++)
  {
    for(int k = j; k <j+s; k++)
      cout<<A[k]<<" ";
    cout<<endl;
  }
  
  return 0;
}
