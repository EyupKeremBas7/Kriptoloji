#include <stdio.h>
const int len = 10;



void main()
{
    char text[len];
    int n;
    int ctrl;

    printf("Kaydırmak istediginiz miktari giriniz:");
    scanf("%d",&n);

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

    printf("%s\n",text);

    for(int j=0;text[j]!='\0';j++)
    {
        if(text[j] >= 97 && text[j] <= 122) 
        {
            text[j] = ((text[j] - 97 + n) % 26) + 97;
        }
        else if(text[j] >= 65 && text[j] <= 90) 
        {
            text[j] = ((text[j] - 65 + n) % 26) + 65;
        }
    }
    printf("Sifrelenmis metin: %s\n",text);
}
