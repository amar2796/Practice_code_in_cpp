/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
std::string callingFunction(std::string& val)
{
	int i=0, count=0;
	int len=val.length();
	std::string ans;
	while(i<len)
	{
		char temp=val[i];
		while(i<len && val[i]==temp && count<9)
		{
			i++;
			count++;
		}
		ans+=std::to_string(count)+temp;
		count=0;
	}
	return ans;
}

int main()
{
	std::cout<<"Testing\n";
	std::string val="a";
	std::cout<<"Pasing value : "<<val<<"\n";
	std::cout<<"Output value : "<<callingFunction(val);
	return 0;
}