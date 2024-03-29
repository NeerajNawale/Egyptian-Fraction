#include<iostream>
#include<math.h>
#include<stdlib.h>
using std::cout;
using std::cin;

class EG
{
		double m,n;
	public:
		EG(double m=1.1,double n=1.1)
		{
			this->m=m;
			this->n=n;
		}
		void Egyptian(char* msg)
		{
			cout<<msg;
			int a,b=0,c;
			for(double p=m,q=n;p;p=m*b-n*a,q=n*b)
			{
				c=ceil(q/p);
				cout<<"1/"<<c<<" + ";
				if(!b)
				{
					a=1;
					b=c;
				}
				else
				{
					a=a*c+b;
					b*=c;
				}
			}
			cout<<"\b\b ";
		}
};
main()
{
	double m,n;
	cout<<"\nEnter Numerator --> ";
	cin>>m;
	cout<<"\nEnter Denominator --> ";
	cin>>n;
	if(m>n || m<1 || n<1)
	{
		cout<<"\nInvalid Input...";
		exit(1);
	}
	EG eg(m,n);
	cout<<"\nFor "<<m<<"/"<<n;
	eg.Egyptian(", Egyptian Representation is --> ");
	cout<<"\n\n";
}
/*
Sample Output - 1 ::

Enter Numerator --> 3

Enter Denominator --> 5

For 3/5, Egyptian Representation is --> 1/2 + 1/10
--------------------------------------------------------------------
Sample Output - 2 ::

Enter Numerator --> 3

Enter Denominator --> 7

For 3/7, Egyptian Representation is --> 1/3 + 1/11 + 1/231

*/

