#! /bin/bash
sub funct
{
	$ a=5;
	$ b=6;
	@ arr =( 10 ,50,40,0,0,50,0,80,0);
	% hash = (10,100.0,20,54.54,130,10.151);
	if(a==5)
	{
		if(a<=7)
		{
			if(a==9)
			{
				b=b*8;
				b=9;
			}
			else
			{
				a=10;
				foreach $ x (@arr)
				{
					$  l = x *10+a/10+b+2-a*2+100;
				}
			}
		}
		else
		{
			b=2;
			$ i = 0;
			$ n=10;
			for(i=0;i<n;i=i+1)
			{
				b=b*2;
				i=i+1;
			}	
		}
	}
	else
	{
		$ x = 10;
		while(a!=5)
		{
			a=a+1;
			x = x+a; 
		}
	}
}
