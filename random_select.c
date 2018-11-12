#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{

        int i,number=0,lastnumber,*member;
        int choose_number;



        if(argc <=2)
        {
                printf("usage: randam_number lastnumber choose_number\n");
                return -1;
        }


        choose_number = atoi(argv[2]);
        lastnumber = atoi(argv[1]);
        
        if(choose_number >lastnumber)
        {
        	printf("number error \n");
        	return -1;
        }
        
        printf("generate randaum number \n");
        member=(int *)malloc(sizeof(int)*(lastnumber));

        srand(time(NULL));

        for(i=0;i<lastnumber;i++)
                member[i]=0;

        while(number<choose_number)
        {
                i=rand()%lastnumber+1;
                if(member[i-1]==0)
                {
                        member[i-1]=1;
                        printf("%d\n",i);
                        number++;
                }
        }
        return 0;
}
