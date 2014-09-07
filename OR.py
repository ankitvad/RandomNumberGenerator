"""Designing a Random Number Generator based on Congruential method.
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
"""

loop = 1


while loop:
	print("\n Please Enter the Seed or Start Value of X:")
	x=input()
	x=int(x)
	print("Please Enter the Modulus max:")
	m=input(int)
	print("Please enter the constant multiplier :")
	a=input(int)
	print("Please Enter The Number According to your choice:\n1)Mixed Congruential Method\t2)Multiplicative Congruential Method")
	choice=input(int)
	if(choice==1):
		print("Please Enter the value for the incrementing factor 'C'")
		c=input(int)
	else:
		c=0
	print("Number of Random Numbers to be generated:")
	limit=input(int)

	while limit:
		x=(a * x + c) % m
		print(x)
		limit=limit-1
	print("Do you wish to continue (y/n)")
	term=input()
	if term=="n":
		loop=0
	else:
		loop=1





