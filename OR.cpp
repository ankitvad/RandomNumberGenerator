/*Designing a Random Number Generator based on Congruential method.
-Ankit Vadehra
ankitvad@gmail.com
|
Recursive Relation to produce a sequence of integers: x1,x2,x3,...
between 0 and 'M-1' is:
x[i+1] = (a * x[i] + c) mod M
		where, i=0,1,2,3,....
x[0]=Seed.
a=constant multiplier.
C=increment.
	c=0 : Multipliative Congruential Method.
	c!=0 : Mixed Congruential Method.
M= The Modulus

The idea is to keep the modulus to get a fixed value of the maximum number that can be printed.
Eg: if 'M' is 560, the number range can be between 0 and 559. So on..
*/

#include <iostream>
using namespace std;

int main()
{

int loop = 1;
int x,m,a,choice,c,limit;
char term;
while(loop)
{

	cout<<"\n Please Enter the Seed or Start Value of X:";
	cin>>x;
	cout<<"\nPlease Enter the Modulus max:";
	cin>>m;
	cout<<"Please enter the constant multiplier : ";
	cin>>a;
	cout<<"\nPlease Enter The Number According to your choice:\n1)Mixed Congruential Method\t2)Multiplicative Congruential Method";
	cin>>choice;
	if(choice==1)
		{cout<<"\nPlease Enter the value for the incrementing factor 'C'";
		cin>>c;}
	else
		{c=0;}
	cout<<"\nNumber of Random Numbers to be generated:";
	cin>>limit;
	while (limit)
	{
		x=(a * x + c) % m;
		cout<<"\n"<<x;
		limit=limit-1;
	}
	cout<<"Do you wish to continue (y/n)";
	cin>>term;
	if (term=='n'||term=='N')
		loop=0;
	else
		loop=1;
}

return 0;
}






