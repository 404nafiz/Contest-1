#include<bits/stdc++.h> 
using namespace std;
int main()
{ 
  char C;
  int alphabate_value;
  cin>>C;
  alphabate_value=int(C);
  if(alphabate_value>=97&&alphabate_value<=121)
  {
    alphabate_value=alphabate_value+1;
    cout<<char(alphabate_value);
  }
  else
  {
    alphabate_value=97;
    cout<<char(alphabate_value);
  }

 
    return 0;
}
 
