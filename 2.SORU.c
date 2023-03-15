#include <stdio.h>
#define n 5


int minBul(int dizi[]){
//Degisken tan�mlama
    int i;
	int min;
	
//Tan�mlanan de�i�kene birinci eleman atand� (en k���k say�l�r)
    min = dizi[0];
    
//Burada dizideki elemanlar aras�nda kars�last�rma yap�l�r
    for(i=0 ; i < n ; i++){
        if(min > dizi[i])
            min = dizi[i];
    }
//Sonuc gonderme islemidir
    return min;
}

int main(){
//Degisken tan�mlama	
	int i;
    int sayilar[n];
    
//Dongu icerisinde say� isteme
    for(i=0 ; i<n ; i++){
      printf("%d. sayiyi giriniz : ",i+1);
      scanf("%d", &sayilar[i]);
    }
    
//Soruda isteneni yazdirma     
	printf("Dizideki en kucuk sayi : %d", minBul(sayilar));
	
}
 
/* Yaz�lan fonksiyonun y�r�tme zaman�n� g�steren T(n) ba��nt�s� ;

�lk eleman�n belirlenmesi ve return ile sonuc gonderme islemlerinde 1'er i�lem yap�l�r.
For d�ng�s�nde d�ng� kapsam�nda yap�lanlar hari� paratez i�i i�lemler ilki 1 kez ,
	ikincisi n kadar, ���nc�s� ise (n-1) kez yap�l�r.
�f ile kar��la�t�rma yap�lan sat�rda 1 kez kar��la�t�rma i�lemi vard�r ve 
	bu d�ng� �evirme say�s� kadar y�r�t�l�r yani (n-1) kez.
Atama i�leminin oldu�u yani mininum de�erin dizinin eleman�na e�itlendi�i i�lemde 
	en k�t� durum d���n�lerek (n-1) i�lem yap�l�r.
	
	T(n) = 1 + 2n + n-1 + n-1 +1    ---------> T(n)= 3n+4	 
*/
