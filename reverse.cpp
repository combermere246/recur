#include <iostream>
#include <string>

using namespace std;


int reverse (int n)
	{
		int r=0;
		int m;
	
	while (n>0)
	{
		
		m = n%10;
		r = r*10+m;
		n = n/10;
			
	}	
		return r;
	}
	
int main ()
{
	
	int num = 124753;
	int number = reverse(num);
	
	cout << number << endl;
}
	
