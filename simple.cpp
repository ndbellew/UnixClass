#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	for (int i=0; i<argc;i++)cout<<i<<" "<<argc[i]<<endl;
	cerr<<"this is an error"<<endl;
	cout<<"This is an output"<<endl;
	return 0;
}
