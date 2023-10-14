#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

void waiting();
void stop();
int wait_mark;
int *fp;


void waiting()
{
	while(wait_mark!=0);
}

void stop()
{
	wait_mark=0;
}

void main()
{
    char file[20];
    int p1,p2;
    printf("please input the file name:\n");
    scanf("%s",file);

    
    fp = fopen(file,"w+");
    signal(SIGINT,SIG_IGN);
    while((p1=fork())==-1);
    if(p1>0)
    {

        while((p2=fork())==-1);
        if(p2>0)
        {
            printf("«Î∞¥CTRL+C÷’÷π≥Ã–Ú\n");
            wait_mark=1;
            signal(SIGINT,stop);
            waiting();
            kill(p1,10);
            kill(p2,12);
            wait(0);
            wait(0);
            fprintf(fp,"parent process is killed\n");
            exit(0);
        }

        else
        {
            wait_mark=1;
            signal(12,stop);
            waiting();
            lockf(*fp,1,0);//lock
            printf("child 2 prcess is killed by parent\n");
            fprintf(fp,"child 2 prcess is killed by parent\n");
            lockf(*fp,0,0);//unlock
            exit(0);
        }
    }
    else
    {	
        wait_mark=1;
        signal(10,stop);
        waiting();
        lockf(*fp,1,0);//lock
        printf("child 1 process is killed by parent\n");
        fprintf(fp,"child 1 process is killed by parent\n");
        lockf(*fp,0,0);//unlock
        exit(0);
    }
}



