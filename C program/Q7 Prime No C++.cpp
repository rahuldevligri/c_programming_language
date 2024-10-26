#include<iostream>
using namespace std;

void prime(int n){
int count=0,i,j;
for(i=2;i<=n;i++)
{
  for(j=2;j<i;j++)
  {
    if(i%j==0)
    {
    break;
    }
   }
    if(j==i)
    {
    cout<<i;
    }
 }
}
int main()
{
    cout << "how many terms of prime number!\n";
    int n;
    cin>>n;
    prime(n);
    return 0;
}