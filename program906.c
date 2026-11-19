#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
    int ans = 0;

    if(argc != 3)
    {
        printf("Invalid NUmber of Arguments");
        return -1;
    }

    ans = atoi(argv[1]) + atoi(argv[2]);

    printf("Addition is :%d\n",ans);

    return 0;
}