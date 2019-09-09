#include <iostream>
using namespace  std;
const int max__Num=100000001;
bool is__Prime[max__Num];
void screen()
{
	memset(is__Prime,true,max__Num);
	is__Prime[0]=false;is__Prime[1]=false;
	for (int i = 2; i <max__Num ; ++i)
	{
		if (true ==is__Prime[i])
		{
			for (int j=2; j*i<max__Num ; ++j)
			{
				is__Prime[j*i] = false;
			}
		}
	}
}
int PrimeScreen(int argc, char* argv[])
{
	screen();
	/*int cnt=0;
	for (int i = 0; cnt< 1000; i++)
	{
		if (is__Prime[i])
		{
			cout<<i<<" ";
			cnt++;
		}
		if ((cnt+1)%10 ==0)
		{
			cout<<endl;
		}
	}*/
	return  0;
}
