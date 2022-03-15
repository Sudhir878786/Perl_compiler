#include<stdio.h>
#include<string.h>
struct SYMBOL_TABLE
{
	int sno;
	char TOKEN[100];
	int type[100];
	int TOKEN_NUMBER;
	int address;
	float fv;
	int scp;
}symbol_table[100];
int n=0,a[10];
float t[100];
int iter=0;
int RETUEN_TYPE(int ct)
{
	return a[ct-1];
}
void STORE_TYPE( int ct, int returntype )
{
	a[ct] = returntype;
	return;
}
void SCOPE_ADD(char *a,int s)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(!strcmp(a,symbol_table[i].TOKEN))
		{
			symbol_table[i].scp=s;
			break;
		}
	}
}
int returnscope(char *a,int cs)
{
	int i;
	int max = 0;
	for(i=0;i<=n;i++)
	{
		if(!(strcmp(a,symbol_table[i].TOKEN)) && cs>=symbol_table[i].scp)
		{
			if(symbol_table[i].scp>=max)
				max = symbol_table[i].scp;
		}
	}
	return max;
}
int LOOK_UP_SYMBOL(char *a)
{
	int i;
	for(i=0;i<n;i++)
	{
		if( !strcmp( a, symbol_table[i].TOKEN) )
			return 0;
	}
	return 1;
}
int returntype(char *a,int sct)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(!strcmp(a,symbol_table[i].TOKEN) && symbol_table[i].scp==sct)
		{
			return symbol_table[i].type[0];
		}
	}
}

void CSU(char *a,char *b,int sc)
{
	int i,j,k;
	int max=0;
	for(i=0;i<=n;i++)
	{
		if(!strcmp(a,symbol_table[i].TOKEN)   && sc>=symbol_table[i].scp)
		{
			if(symbol_table[i].scp>=max)
				max=symbol_table[i].scp;
		}
	}
	for(i=0;i<=n;i++)
	{
		if(!strcmp(a,symbol_table[i].TOKEN)   && max==symbol_table[i].scp)
		{
			float temp=atof(b);
			for(k=0;k<symbol_table[i].TOKEN_NUMBER;k++)
			{
				if(symbol_table[i].type[k]==258)
					symbol_table[i].fv=(int)temp;
				else
					symbol_table[i].fv=temp;
			}
		}
	}
}
void storevalue(char *a,char *b,int s_c)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(!strcmp(a,symbol_table[i].TOKEN) && s_c==symbol_table[i].scp)
		{
			symbol_table[i].fv=atof(b);
		}
	}
}

void insert(char *name, int type, int address)
{
	int i;
	if(LOOK_UP_SYMBOL(name))
	{
		strcpy(symbol_table[n].TOKEN,name);
		symbol_table[n].TOKEN_NUMBER=1;
		symbol_table[n].type[symbol_table[n].TOKEN_NUMBER-1]=type;
		symbol_table[n].address=address;
		symbol_table[n].sno=n+1;
		n++;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(!strcmp(name,symbol_table[i].TOKEN))
			{
				symbol_table[i].TOKEN_NUMBER++;
				symbol_table[i].type[symbol_table[i].TOKEN_NUMBER-1]=type;
				break;
			}
		}
	}	
	
	return;
}
void INSERTION_OF_DUPLICATE(char *name, int type, int address,int s_c)
{
	strcpy(symbol_table[n].TOKEN,name);
	symbol_table[n].TOKEN_NUMBER=1;
	symbol_table[n].type[symbol_table[n].TOKEN_NUMBER-1]=type;
	symbol_table[n].address=address;
	symbol_table[n].sno=n+1;
	symbol_table[n].scp=s_c;
	n++;
	return;
}

void print()
{
	int i,j;
	printf("\nSymbol Table\n\n");
	printf("\nSNo.\tToken\tAddress\tValue\tScope\tType\n");
	for(i=0;i<n;i++)
	{
		if(symbol_table[i].type[0]==258)
			printf("%d\t%s\t%d\t%d\t%d",symbol_table[i].sno,symbol_table[i].TOKEN,symbol_table[i].address,(int)symbol_table[i].fv,symbol_table[i].scp);
		else
			printf("%d\t%s\t%d\t%.1f\t%d",symbol_table[i].sno,symbol_table[i].TOKEN,symbol_table[i].address,symbol_table[i].fv,symbol_table[i].scp);
		int once=1;
		for(j=0;j<symbol_table[i].TOKEN_NUMBER;j++)
		{
			if(symbol_table[i].type[j]==258)
				printf("\tSCALAR");
			else if(symbol_table[i].type[j]==260)
				printf("\tHASH");
			else if(symbol_table[i].type[j]==259)
				printf("\tARRAY");
			else if(symbol_table[i].type[j]==271)
				printf("\tFUNCTION");
			else if(symbol_table[i].type[j]==269)
				printf("\tARRAY");
			else {if(once){printf("\tFunction");once=!once;}}
		}
		printf("\n");
	}
	return;
}
