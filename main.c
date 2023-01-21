#include <stdio.h>
#include <stdlib.h>
#define SON 320

void cumle_alma(char gelen[SON])
{
    int i;
    do{
        scanf
    }
}

int main()
{
    char dizi[SON];
    int i;
    int onay;

    do
    {
        printf("Lutfen sifresini olusturmak istediginiz cumleyi girin:\n");
        //fgets(dizi,sizeof(dizi),stdin);
        cumle_alma(dizi);
        printf("girdiginiz cumle \"%s\"",dizi);
        printf("\nislem yapmak istiyorsaniz 1 giriniz\n");
        scanf("%d",&onay);
    }
    while((onay != 1  ||  onay == 2) && (onay != 1  ||  onay == 2));
    printf("ciktim babba");
    if(onay == 1)
    {
        for(i=0; dizi[i+1] !='\0'; i++)
        {
            int harf = dizi[i];
            harf = harf-96;
            if(harf<0)
                harf = (harf* -1);
            //printf("%c\n",dizi[i]);
            printf("%d",harf);
            //printf("\n\n\n");
        }
    }
    else if(onay == 2)
    {
        int toplam=0;
        for(i=0; dizi[i+1] !='\0'; i++)
        {
            int harf = dizi[i];
            harf = harf-96;
            if(harf<0)
                harf = (harf* -1);
            toplam+=harf;
        }
        printf("%d",toplam);
    }
    /*
    int i;
    do{
        scanf("%d",&i);
    }while((i == 0  ||  i !=1) && (i != 0  ||  i ==1));
    */
    return 0;
}
