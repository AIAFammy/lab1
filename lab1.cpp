#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"input n:";
  cin>>n;
  while(1)
  {
    cout<<n<<" ";
    if(n == 1) break;
    else if(n%2 == 1) n = 3*n+1;
    else n = n/2;
  }
  cout<<endl;
  return 0;
}
