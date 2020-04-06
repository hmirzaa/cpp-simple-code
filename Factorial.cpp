#include <iostream>

using namespace std;
int main()
{
	int n,h,sum ;
	
	
	cout << "Enter A Number : ";
	cin >> n;
	
	h = n;
	for ( int i = n ; i > 1 ; i-- )
	{
		n--;
		sum = 0 ;
			for ( int j = 1 ; j <= h ; j++ )
			{
					
					sum = sum + n;
			}	
			h = sum;
			
	}
	
	cout << "Factorial Is : " << h; 
	
	
	return 0;
}
