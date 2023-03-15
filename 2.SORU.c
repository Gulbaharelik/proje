#include <stdio.h>
#define n 5


int minBul(int dizi[]){
//Degisken tanýmlama
    int i;
	int min;
	
//Tanýmlanan deðiþkene birinci eleman atandý (en küçük sayýlýr)
    min = dizi[0];
    
//Burada dizideki elemanlar arasýnda karsýlastýrma yapýlýr
    for(i=0 ; i < n ; i++){
        if(min > dizi[i])
            min = dizi[i];
    }
//Sonuc gonderme islemidir
    return min;
}

int main(){
//Degisken tanýmlama	
	int i;
    int sayilar[n];
    
//Dongu icerisinde sayý isteme
    for(i=0 ; i<n ; i++){
      printf("%d. sayiyi giriniz : ",i+1);
      scanf("%d", &sayilar[i]);
    }
    
//Soruda isteneni yazdirma     
	printf("Dizideki en kucuk sayi : %d", minBul(sayilar));
	
}
 
/* Yazýlan fonksiyonun yürütme zamanýný gösteren T(n) baðýntýsý ;

Ýlk elemanýn belirlenmesi ve return ile sonuc gonderme islemlerinde 1'er iþlem yapýlýr.
For döngüsünde döngü kapsamýnda yapýlanlar hariç paratez içi iþlemler ilki 1 kez ,
	ikincisi n kadar, üçüncüsü ise (n-1) kez yapýlýr.
Ýf ile karþýlaþtýrma yapýlan satýrda 1 kez karþýlaþtýrma iþlemi vardýr ve 
	bu döngü çevirme sayýsý kadar yürütülür yani (n-1) kez.
Atama iþleminin olduðu yani mininum deðerin dizinin elemanýna eþitlendiði iþlemde 
	en kötü durum düþünülerek (n-1) iþlem yapýlýr.
	
	T(n) = 1 + 2n + n-1 + n-1 +1    ---------> T(n)= 3n+4	 
*/
