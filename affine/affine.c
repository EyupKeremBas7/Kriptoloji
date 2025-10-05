#include <stdio.h>
#include <ctype.h>

const int len = 10;


void main()
{
    int x,c,n,ctrl,result;
    char text[len];

    do {
        printf("Denklemin baskatsayisini giriniz: ");
        result = scanf("%d", &x);
        while(getchar() != '\n');

        if(result != 1) {
            printf("Lutfen bir tamsayi giriniz!\n");
        }
    } while(result != 1);

    do {
        printf("Denklemin sabit sayisini giriniz: ");
        result = scanf("%d", &c);

        while(getchar() != '\n');

        if(result != 1) {
            printf("Lutfen bir tamsayi giriniz!\n");
        }
    } while(result != 1);

    printf("Denkleminiz: %ix+%i\n",x,c);

    do
    {
    	printf("Sifrelemek istediginiz metni giriniz: ");
    	scanf("%s",text);
    	for(int i=0;text[i]!='\0';i++)
    	{
            if(text[i] >= 97  && text[i]<=122)
            {
                ctrl = 1;
            }
            else if(text[i] >= 65  && text[i]<=90)
            {
                ctrl = 1;
            }
	    }
    }
    while(ctrl!=1);

    for(int j=0;text[j]!='\0';j++)
    {
        if(text[j] >= 97 && text[j] <= 122) 
        {
            text[j] -= 97;
            text[j] = ( ((x * text[j]) + c) % 26) + 97;
        }
        else if(text[j] >= 65 && text[j] <= 90) 
        {
            text[j] -= 65;
            text[j] = ( ((x * text[j]) + c) % 26) + 65;
        }
    }
    printf("Sifrelenmis metin: %s\n",text);
}