#include<iostream.h> 
   #include<stdio.h> 
   #include<conio.h> 
   class tower 
   { 
     int *t1,*t2,*t3; 
     int x,y,z; 
     public: 
     void disp_tower(); 
     void move_disk(int tx,int ty); 
     void toh(int n,int a,int b,int c); 
     tower(int no); 
     ~tower(); 
   }; 
   tower :: tower(int no) 
   { 
     t1 = new int[no+1]; 
     t2 = new int[no+1]; 
     t3 = new int[no+1]; 
     x = no; 
     y = z = 0; 
     for(int i=0,j=no ; i     { 
       t1[i] = j; 
       t2[i] = t2[i] = 0; 
     } 
     t1[no] = t2[no] = t3[no] = 0; 
   } 
   tower :: ~tower() 
   { 
     delete []t1; 
     delete []t2; 
     delete []t3; 
   } 
   void tower :: disp_tower() 
   { 
     clrscr(); 
     cout<<" 
     X :: "; 
     for(int i=0;i     { 
       cout<<" "<     } 
     cout<<" 
     Y :: "; 
     for(i=0;i     { 
       cout<<" "<     } 
     cout<<" 
     Z :: "; 
     for(i=0;i     { 
       cout<<" "<     } 
     getch(); 
   } 
   void tower :: toh(int n,int tx,int ty,int tz) //x to y using z 
   { 
     if(n>=1) 
     { 
       toh(n-1,tx,tz,ty); 
       move_disk(tx,ty); //x to y 
       disp_tower(); 
       toh(n-1,tz,ty,tx); 
     } 
   } 
   void tower :: move_disk(int tx,int ty) 
   { 
     switch(tx) 
     { 
       case 1: 
       { 
         if(ty==2) 
           t2[y++] = t1[--x]; 
         else 
           t3[z++] = t1[--x]; 
       }break; 
       case 2: 
       { 
         if(ty==1) 
           t1[x++] = t2[--y]; 
         else 
           t3[z++] = t2[--y]; 
       }break; 
       case 3: 
       { 
         if(ty==1) 
           t1[x++] = t3[--z]; 
         else 
           t2[y++] = t3[--z]; 
       }break; 
     }//end of switch 
   } 