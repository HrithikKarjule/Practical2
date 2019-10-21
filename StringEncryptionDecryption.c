#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    char ar[20],i;
    int m,x;
    while(1)
    {
    printf("\nPlease choose following options:\n");
    printf("1 = Encrypt the string.\n");
    printf("2 = Decrypt the string.\n");
    printf("3 = EXIT\n");
    scanf("%d", &x);
    switch(x)
    {
        case 1:
					printf("Enter a Sentence:");
        			scanf("%s",ar);
					for(i=0;i<strlen(ar);i++)
					{
					m=ar[i];
                    if((m>=97&&m<=119)||(m>=65&&m<=87))
                    {
                        m=m+3;
                        ar[i]=m;
                    }
                    else
                    {
                        m=m-23;
                        ar[i]=m;
                    }
                	}
                    printf("\nCode Language:");
                    puts(ar);
                    break;
        case 2:
                    printf("Enter a Sentence:");
        			scanf("%s",ar);
					for(i=0;i<strlen(ar);i++)
					{
					m=ar[i];
                    if((m>=100&&m<=122)||(m>=68&&m<=90))
                    {
                        m=m-3;
                        ar[i]=m;
                    }
                    else
                    {
                        m=m+23;
                        ar[i]=m;
                    }
                	}
					printf("\nCode Language:");
                    puts(ar);
                    break;
        case 3:
					{
					    exit(-1);
						break;
					}
        default:
                {
                    printf("Error");
                }
    }
    }
}
