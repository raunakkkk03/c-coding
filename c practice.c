DAY 1-ARRAY
#include <stdio.h>

int main() {
   int a[10],i,sum=0;
   float avg;
   printf("enter 10 numbers\n");
   for(i=0;i<10;i++)
   {
        scanf("%d",&a[i]);
   }
   for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
   avg=sum/10.0;
   printf("average is %f",avg);
   return 0;
}
output-enter 10 numbers
1
2
3
4
5
6
7
8
9
10
average is 5.500000
DAY 2-STRING
#include <stdio.h>

 main() {
    char s[10]={'R','A','U','N','A','K','\0'};
    int i;
    for(i=0;i<=6;i++)
    printf("%c",s[i]);
    
    return 0;
}
OUTPUT-RAUNAK-
#include <stdio.h>

 main() {
    char s[10]={'R','A','U','N','A','K','\0'};
    int i;
    for(i=0;s[i]!='\0';i++)
    printf("%c",s[i]);
    
    return 0;
}
OUTPUT-RAUNAK
USING PUTS
#include <stdio.h>

 main() {
    char s[10]={'R','A','U','N','A','K','\0'};
    int i;
    /*for(i=0;s[i]!='\0';i++)
    printf("%c",s[i]); */
   // printf("%s",s);
    puts(s);
    return 0;
}
OUTPUT-RAUNAK BUT its change the line means it forward the cursor to the next line..
TAKE INPUT FROM THE USER
#include <stdio.h>

 main() {
    char s[20];
    int i;
    printf("enter your name");
    scanf("%s",&s[0]);
    /*for(i=0;s[i]!='\0';i++)
    printf("%c",s[i]); */
   // printf("%s",s);
    puts(&s[0]);
    return 0;
}
OUPUT-ENTER YOUR NAME RAUNAK
RAUNAK
#include <stdio.h>

 main() {
    char s[20];
    int i;
    printf("enter your name");
    scanf("%s",&s[0]);
    /*for(i=0;s[i]!='\0';i++)
    printf("%c",s[i]); */
   // printf("%s",s);
    puts(&s[0]);
    return 0;
}
OUTPUT-ENTER YOUR NAME RAUNAK GUPTA
RAUNAK BECAUSE STRING DOES NOT TAKE MULTIPLE WORDS

FOR MULTIPLE WORDS USE GETS(S)
   #include <stdio.h>

 main() {
    char s[10]={'R','A','U','N','A','K','\0'};
    int i;
    printf("enter your name");
    gets(s);
    scanf("%s",&s[0]);
    /*for(i=0;s[i]!='\0';i++)
    printf("%c",s[i]); */
   // printf("%s",s);
    puts(&s[0]);
    return 0;
}
OUTPUT-ENTER YOUR NAMERAUNAK GUPTA
RAUNAK GUPTA

#include <stdio.h>

 main() {
char s[3][10];
int i;
printf("enter three strings");
for(i=0;i<=2;i++)
gets(&s[i][0]);
for(i=0;i<=2;i++)
printf("%s\n",s[i]);
return 0;
}
OUTPUT=ENTER YOUR NAME RAJA
AMAN
YATI
raja
aman
yati

USING STRLEN(STRING)
   #include <stdio.h>
#include <string.h>
int main() {
    char s[20];
    int l;
    printf("enter your name");
    gets(s);
    l=strlen(s);
    printf("length of %s is %d",s,l);
    
    return 0;
}
OUPUT-ENTER YOUR NAME-RAUNAK
LENGTH OF RAUNAK IS 6

   "PROGRAM TO REVERSE A NUMBER"
   #include <stdio.h>

int main() {
    int x,y=0,r;
    printf("enter a number");
    scanf("%d",&x);
    while(x!=0)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    printf("reverse is %d",y);
    return 0;
}
OUTPUT-ENTER YOUR NUMBER4753
"3753"(ANSWER)

   
int main()
{
    int i;
    for (i=0;i<6;i++)
    {
        printf("raunak\n");
    }
getch();   
    
}
OUTPUT-raunak
raunak
raunak
raunak
raunak

#include <stdio.h>
 main() {
     int choice;
     printf("enter your choice=");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:printf("sunday");
                break;
         case 2:printf("monday");
                break;
         case 3:printf("tuesday");
                break;
         case 4:printf("wednesday");
                break;
         case 5:printf("thursday");
                break;
         case 6:printf("friday");
                break;
         case 7:printf("saturday");
                break;
     }
     OUTPUT-enter your choice=4
wednesday

#include <stdio.h>
 void main() {
    int a,b;
    char op;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter any operator");
    scanf("%c",&op);
    switch(op)
    {
        case '+':("addition");
        break;
        case '-':("subtraction");
        break;
        case '*':("mul");
        break;
        case'/':("div");
        break;
    }
    }#include <stdio.h>
 void main() {
    int a,b;
    char op;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter any operator");
    scanf("%c",&op);
    switch(op)
    {
        case '+':("addition");
        break;
        case '-':("subtraction");
        break;
        case '*':("mul");
        break;
        case'/':("div");
        break;
    }
    }
    
    #include <stdio.h>
 void main() {
    int a,b;
    char op;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter any operator");
    scanf("%c",&op);
    switch(op)
    {
        case '+':("addition");
        break;
        case '-':("subtraction");
        break;
        case '*':("mul");
        break;
        case'/':("div");
        break;
    }
    }
    OUTPUT-enter the value of a10
enter the value of b5
