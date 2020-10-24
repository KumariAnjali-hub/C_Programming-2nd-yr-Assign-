	 #include<conio.h>
	 #include<stdio.h>
	 #include<string.h>
	 int main(void)
	 {const char *str="anjali";
	 const size_t len=strlen(str);
	 char buffer[len+1];
	 size_t start=1;
	 slice_str(str,buffer,1,1);
	 printf("%s\n",buffer);


			     return 0;
	   getch();
	 }
	 void slice_str(const char *str,char *buffer,size_t start,size_t end)
	 {size_t j=0;
	 for(size_t i=start;i<=end;++i)
	 {
	  buffer[j++]=str[i];
	 }                   buffer[j]=0;
	 }


	 }

