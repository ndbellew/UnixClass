#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int i;
int num;
cin>>num;
if(num<0)
cerr<<"Error, bad number"<<endl;
else
for (i=1;i<num;i++)
{
cout<<i+1<<endl;
}
return 0;
}

