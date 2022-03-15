#! /bin/bash
sub funct
{
	$ a=20;
	until(a>7)
	{
		$ b=10;
		until(b>=5)
		{
			do
			{
				b=b+1;
				do
				{
					b=9;
				}while(a==7);
			}while(a>7);
		}
		a=a-1;
	}

}
