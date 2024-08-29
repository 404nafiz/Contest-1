#include<bits/stdc++.h>
 
using namespace std;
int main()
{
 int input,part1,part2;
 cin>>input;
 part1=input%10;
 input=input/10;
 part2=input%10;
 if(part1%part2==0||part2%part1==0)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
} 
 return 0;
}
 
 
 
 
