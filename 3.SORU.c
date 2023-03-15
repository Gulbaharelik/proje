#include<studio.h>

int Search(int D[],int N,int sayi){
//Burada de�er atama i�lemi 1 kez yap�l�r.
	int i = 0;   
//Kar��la�t�rma i�lemi d�ng� i�erisinde N+1 kez yap�l�r	
	while(i < N){
//De�er atama i�lemi N kez yap�l�r
		if(D[i]== sayi)break;
//Aritmatik i�lemler N kez yap�l�r
		i++;
	}
//return i i�lemi 1 kez yap�l�r	
	if(i < N) return i;
//Burada aksi durum i�lemi 1 kez yap�l�r
	else return -1;
}

//T(N) = 3*N+4 olarak bulunur.

/* 
En iyi �al��ma zaman�: Algoritman�n en az say�da ad�mda tamamlayabilece�i durumdur.En iyi durumda,zaman karma��kl��� genellikle sabit bir zamand�r.

		D�ng� sadece bir kez �al��t���nda olur. Bu �al��ma zaman� ba��nt�s�nda 1 yaz�larak elde edilir.
		T(1) = 3*1+4= 7 olarak bulunur.

Ortalama �al��ma zaman�: Veriler �zerindeki t�m olas� girdilerin ortalamas�na denir.

		D�ng� ortalama bir de�er olan N/2 kez �al��t���nda olur.
		T(N/2) = 3*N/2+4 =1.5*N+4 olarak bulunur.

En k�t� �al��ma zaman�: Algoritman�n en k�t� performans g�sterdi�i durumdur. Bu zaman dizinin boyutuna ba�l�d�r.

		Burada en k�t� �al��ma zaman� d�ng�n�n kendi kadar �al��t��� zamand�r.
		T(N) = 3*N+4 olarak bulunur.

*/
