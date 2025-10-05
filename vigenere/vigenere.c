#include <stdio.h>
const int len = 20;



void main()
{
    char text[len];
    char key[len];
    int ctrl;
    do
    {
    	printf("Metninizi sifrelemek istediginiz keyi giriniz: ");
    	scanf("%s",key);
    	for(int i=0;key[i]!='\0';i++)
    	{
            if(key[i] >= 97  && key[i]<=122)
            {
                ctrl = 1;
            }
            else if(key[i] >= 65  && key[i]<=90)
            {
                ctrl = 1;
            }
	    }
    }
    while(ctrl!=1);

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
        int n = key[j];
        if(text[j] >= 97 && text[j] <= 122) 
        {
            text[j] = (((text[j] - 97) + (n - 97)) % 26) + 97;
        }
        else if(text[j] >= 65 && text[j] <= 90) 
        {
            text[j] = (((text[j] - 65) + (n - 65)) % 26) + 65;
        }
    }
    printf("Sifrelenmis metin: %s\n",text);
}
