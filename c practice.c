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
    char s[10]={'R','A','U','N','A','K','\0'};
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
