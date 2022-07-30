#include<stdio.h>
#include<stdlib.h>
#define CYCLE 59
#ifdef _win32
#include<conio.h>
#define sleep(x) Slee{x*1000}
#else
#define clrscr()
#include<unistd.h>
#endif
int main(){
int hour, minute, second;
printf("Enter hour minute second: ");
scanf("%d%d%d",&hour,&minute, &second);
 system("cls");
int h=0, m=0, s=0;
while(1){
   // printf("              %.2d :%.2d :%.2d\n",h,m,s);
    if(h==hour && m== minute&& s== second){
        break;
    }
    s++;
    sleep(1);
    if(s==CYCLE){
        m++;
    s=0;
    }
    if(m==CYCLE){
        h++;
        m=0;
    }
    if(h==12){
        s++;
        h=0;
    }
     else{
     system("cls");
    }
printf("\n\n\n\n\n");
    printf("                             THIS IS WATCH                    \n");
        printf("                            Show YOUR  time                   \n\n");
            printf("         *****************************************************\n");
                printf("         *                       -----                       *\n");
printf("         *                 ALLAH is Almighty                 *\n");
    printf("         *                       -----                       *\n");
        printf("         *****************************************************\n");
            printf("         *                                                   *\n");
                printf("         *                                                   *\n");
                    printf("         *                                                   *\n");
                         printf("         *                                                   *\n");
                               printf("         *              Hour:  Minute:  Second:              *\n");
                                  printf("         *               %.2d :     %.2d :      %.2d               *\n",h,m,s);
                         printf("         *                                                   *\n");
                    printf("         *                                                   *\n");
                printf("         *                                                   *\n");
             printf("         *                                                   *\n");
         printf("         *****************************************************\n");
     printf("         *                [Say  ALHAMDULLIAH]                *\n");
printf("         *****************************************************\n");
}
return 0;
}

