#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //********************************INT DÝZÝ ÖRNEÐÝ ********************************
    setlocale(LC_ALL,"Turkish");

    /*
    int sayilar[] = {12,26,15,78,91};
    for(int i=0;i<5;i++) {
        printf("Dizinin %d'inci elemaný: %d\n",i+1,sayilar[i]);
    }
    */

    //********************************FLOAT DÝZÝ ÖRNEÐÝ ********************************

    /*
    float sayilar[5] = {};
    for (int i=0;i<5;i++) {
        printf("Diziye yüklemek istediðiniz float deðerlerini giriniz...\n");
        scanf("%f",&sayilar[i]);
    }
    printf("Oluþturulan dizinin elemanlarý:\n");
    for (int i=0;i<5;i++){
        printf("%.1f\n",sayilar[i]);
    }
    */

    //********************************CHAR DÝZÝ ÖRNEÐÝ ********************************

    char isim[4] = "Cam";
    for(int i=0;i<3;i++) {
        printf("Char dizisinin %d'inci elemani: %c\n",i+1,isim[i]);
    }
    printf("**********************************************************************\n");
    char takmismi[] = "Barcelona";
    printf("%s",takmismi);



    return 0;
}
