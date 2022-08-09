// Bug - Unable to return string variable from a function
/*Progress 1 - Writing, reading and append works
  Need to figure out passing string to a function and when to write and append*/ 
#include <stdio.h>
int write();
int read();
int append();
int prototype();
int main()
{
	prototype();
	return 0;
}
char* categorisecharacter(int cvalue)
{
	char type[10];
	if(cvalue>=5 && cvalue<9)
		type="Astute";
	else
	{
		if(cvalue>=9 && cvalue<13)
			type="Inter";
		else
		{
			if(cvalue>=13 && cvalue<=15)
				type="Reverie"
		}
	}
	return *type;
}
char* categoriseinterest(int ivalue)
{
	char type[2];
	if(ivalue>=5 && ivalue<9)
	{
		type="l1";
	} 
	else
	{
		if(ivalue>=9 && ivalue<13)
		{
			type="l2";
		}
		else
		{
			if(ivalue>=13 && ivalue<16)
			{
				type="l3";
			}
			else
			{
				if(ivalue>=16 && ivalue<=20)
					type="l4";
			}
		}
	}
	return *type;
} 
/*int prototype()
{
	char name[10]="Harjith";
	int p_value=100;
	int i_value=100;
	FILE *fp ;  
    char ch ;  
    fp = fopen("data.txt","w") ;  
    if(fp == NULL)
    {
    	printf("Error opening file");
    	return -1;
    }
    int i;
    fprintf(fp,"%s %d %d",name,p_value,i_value);
    fclose(fp);
    //Reading the file
    fp = fopen("data.txt","r");

    if (fp == NULL)
    {
        printf("Error: could not open file");
        return 1;
    }

    // reading line by line, max 256 bytes
    const unsigned MAX_LENGTH = 256;
    char buffer[MAX_LENGTH];

    while (fgets(buffer, MAX_LENGTH, fp))
        printf("%s", buffer);

    // close the file
    fclose(fp);

	return 0;
}
int write()
{
	//File writing
	FILE *fp ;  
    char ch ;  
    fp = fopen("data.txt","w") ;  
    if(fp == NULL)
    {
    	printf("Error opening file");
    	return -1;
    }
    int i;
    for(i=0;i<10;i++)
    {
    	fprintf(fp,"This is line %d\n",i+1);
    }
    fclose (fp) ;  
}
int append()
{
	FILE *fp = fopen("data.txt","a");
	fputs("This text was append to the file\n",fp);
	fclose(fp);
	return 0;
}
int read() //reading line by line
{
    char *filename = "data.txt";
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
        return 1;
    }

    // reading line by line, max 256 bytes
    const unsigned MAX_LENGTH = 256;
    char buffer[MAX_LENGTH];

    while (fgets(buffer, MAX_LENGTH, fp))
        printf("%s", buffer);

    // close the file
    fclose(fp);

    return 0;
}*/