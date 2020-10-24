    #include<stdio.h>
    #include<string.h>
	#include<conio.h>
void function(char *input);

	int main(){ int c,i;    //char c="akansha"
		     char input1[8];

		    
		     printf("enter string:");
	scanf("%s",&input1[8]);
	function(&input1[8]) ;
	printf("do u want to continue if yes press1\n");
	scanf("%d",&c);
	if(c==1)
{ printf("-----NextItteration:-----");
main();}

       getch();
	return 0;

	}

    void function(char *input)
    {int i=1;
    char buffer[8];
    int j=2;

     strcpy(buffer,input)     ;
     printf("%x%x%s\n",i,j,buffer);
    }