#include <iostream>
using namespace std;
class NumberRev
{
int s;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>s;
	}
void rev()
{
cout<<"OUTPUT"<<endl;
while(s%10)
{
    cout<<s%10;
    s=s/10;
    }
  }
};
int main()
{
NumberRev nr;
nr.get();
    nr.rev();
return 0;
}