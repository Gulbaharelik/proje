#include <stdio.h>
#include <stdlib.h>


struct OgrenciBilgisi{
	char isim[30];
	char soyad[20];
	char adres[100];
	int no;
	int yas;
};

int main(){
	//Burada struct olarak tanýmlanan fonksiyon çaðrýldý
	struct OgrenciBilgisi ogrenciler[5];
	int a;
	
	//burada 5 öðrencinin bilgileri okutulur
	for(a=0 ; a < 5 ; a++){
		printf("%d. Ogrenci:\n",a+1);
		printf("Isim: ");
		scanf("%s",ogrenciler[a].isim);
		printf("Soyad: ");
		scanf("%s",ogrenciler[a].soyad);
		printf("Yas: ");
		scanf("%d",&ogrenciler[a].yas);
		printf("No: ");
		scanf("%d",&ogrenciler[a].no);
		printf("Adres: ");
		scanf("%s",ogrenciler[a].adres);
	}
	
	printf("\n\n");
	//burada 5 öðrencinin bilgileri yazdýrýlýr
	printf("************************OGRENCI BILGILERI*************************\n");
	for(a=0 ; a < 5 ; a++){
		printf("%d. Ogrenci Bilgileri:\n",a+1);
		printf("Isim: %s\n",ogrenciler[a].isim);
		printf("Soyad. %s\n",ogrenciler[a].soyad);
		printf("Yas: %d\n",ogrenciler[a].yas);
		printf("No: %d\n",ogrenciler[a].no);
		printf("Adres: %s\n",ogrenciler[a].adres);
		printf("\n");
	}
	
	return 0;
}

