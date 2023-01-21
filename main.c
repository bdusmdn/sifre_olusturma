#include <stdio.h>
#include <stdlib.h>
#define SON 320         // c dilinde string ifadelerin max degeridir


int main()
{
    char dizi[SON];     //alınan cümledir
    int i;              //şifre oluşturulurken kullanılacak
    int onay;           //hangi uygulamanın yapılacağını seçerken kullanacağız

    printf("Lutfen sifresini olusturmak istediginiz cumleyi girin:\n");
    fgets(dizi,sizeof(dizi),stdin);         //cümleyi alıyoruz
    printf("girdiginiz cumle \"%s\"",dizi); //cümleyi gösteriyoruz
    
    printf("\n");       //alt satıra inme
    printf("uzun sifre istiyorsaniz (1)'i kisa sifre istiyorsaniz (2)'yi tuslayiniz");
    printf("\n");       //alt satıra inme
    scanf("%d",&onay);  //hangi islemin yapilacağı alınıyor


    if(onay == 1)   //onay 1 olursa işleme giriyor
    {
    	printf("\n");       //alt satıra inme
        printf("sifreniz:");
        printf("\n");       //alt satıra inme
        
        for(i=0; dizi[i+1] !='\0'; i++)     //harf harf string inceleniyor
        {
            int harf = dizi[i];     //harf değeri dizinin "i"înci harfinin ASCI koduna eşitleniyor
            harf = harf-96;         //"a" harfi 97 olduğundan 96 çıkartıp kaçıncı harf olduğuna bakmamıza yarıyor
            if(harf<0)              //eğer harfin ASCI kodu 96 da küçük ise
                harf = (harf* -1);  //pozitif değeri alınıyor
            //printf("%c\n",dizi[i]);       //istendiği takdirde bu işlem harf harf görüntülenebilir
            printf("%d",harf);      //harfin alfabedeki sırası ekrana bastırılıyor
            //printf("\n\n\n");
        }
    }
    
    
    else if(onay == 2)      //onay 2 olursa işleme giriyor
    {
        int toplam=0;       //toplam değeri 0dan başlatılıyor
        
        for(i=0; dizi[i+1] !='\0'; i++)     //tüm harflerin ASCI koduna iniliyor
        {
            int harf = dizi[i];     //harf değeri dizinin "i"înci harfinin ASCI koduna eşitleniyor
            harf = harf-96;         //"a" harfi 97 olduğundan 96 çıkartıp kaçıncı harf olduğuna bakmamıza yarıyor
            if(harf<0)              //eğer harfin ASCI kodu 96 da küçük ise
                harf = (harf* -1);  //pozitif değeri alınıyor
            toplam+=harf;           //toplam değerine yeni harfin değeri ekleniyor
        }
        
        printf("\n");       //alt satıra inme
        printf("sifreniz:");
        printf("\n");       //alt satıra inme
        printf("%d",toplam);
    }
    
    
    else       //onay 1 yada 2den farklı olursa işleme giriyor
    {
    	printf("\n");       //alt satıra inme
    	printf("hatali bir giris yaptiniz");
    	printf("\n");       //alt satıra inme
    	printf("program sonladiriliyor");
	}
  
    return 0;
}
