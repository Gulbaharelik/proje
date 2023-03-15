#include<studio.h>

int Search(int D[],int N,int sayi){
//Burada deðer atama iþlemi 1 kez yapýlýr.
	int i = 0;   
//Karþýlaþtýrma iþlemi döngü içerisinde N+1 kez yapýlýr	
	while(i < N){
//Deðer atama iþlemi N kez yapýlýr
		if(D[i]== sayi)break;
//Aritmatik iþlemler N kez yapýlýr
		i++;
	}
//return i iþlemi 1 kez yapýlýr	
	if(i < N) return i;
//Burada aksi durum iþlemi 1 kez yapýlýr
	else return -1;
}

//T(N) = 3*N+4 olarak bulunur.

/* 
En iyi çalýþma zamaný: Algoritmanýn en az sayýda adýmda tamamlayabileceði durumdur.En iyi durumda,zaman karmaþýklýðý genellikle sabit bir zamandýr.

		Döngü sadece bir kez çalýþtýðýnda olur. Bu çalýþma zamaný baðýntýsýnda 1 yazýlarak elde edilir.
		T(1) = 3*1+4= 7 olarak bulunur.

Ortalama çalýþma zamaný: Veriler üzerindeki tüm olasý girdilerin ortalamasýna denir.

		Döngü ortalama bir deðer olan N/2 kez çalýþtýðýnda olur.
		T(N/2) = 3*N/2+4 =1.5*N+4 olarak bulunur.

En kötü çalýþma zamaný: Algoritmanýn en kötü performans gösterdiði durumdur. Bu zaman dizinin boyutuna baðlýdýr.

		Burada en kötü çalýþma zamaný döngünün kendi kadar çalýþtýðý zamandýr.
		T(N) = 3*N+4 olarak bulunur.

*/
