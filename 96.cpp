#include"iostream"
using namespace std;
int main()
{ 
  int n,count=0,i;
  cout<<" Enter value : ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    count++;
  }
  if(count==1 || count==2)
  cout<<" Prime ";
  else
  cout<<" Composite ";
}
