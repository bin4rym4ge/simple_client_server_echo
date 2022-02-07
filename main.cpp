#include<iostream>
#include<string>
#include<cstring>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<arpa/inet.h>

using namespace std;

int main(int argc, char* argv[])
{
	string inObj[argc]; // remap command line args to string array from cstring array

	for (int i = 0; i < argc; i++)
	{
		 inObj[i] = argv[i];
	}

	for (int i = 0; i < argc; i++)
	{
		cout << inObj[i] << '\n';
	}
}
