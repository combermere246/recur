#include <iostream>
#include <string>

using namespace std;


/*int reverse (int n)
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
	
	*/
int reverse (int n, int r)
	{
		int m;
		
		if (n>0)
		{
		
		m = n%10;
		n = n/10;	
		r = r*10+m;
		
		return reverse (n,r);
			
		}
		else
		 
		 return r;
	}
	
int main ()
{
	int g=0;
	int num = 12478;
	
	int number = reverse(num,g);
	
	cout << number << endl;
}
	
