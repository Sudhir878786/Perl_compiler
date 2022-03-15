#! /bin/bash
sub funct
{
	$ a=5;
	$ b=6;
	$ i = 0;
	$ n=20;
	for(i=0;i<n;i=i+1)
	{
		do
		{
			b=b+1;
			if(b==1)
			{
				$ c = a*b;
				b=b*2;
			}
			elsif(b==2)
			{
				$ d = b-a;
				b=b/2;
			}
		}while(a>7);
	}
}
