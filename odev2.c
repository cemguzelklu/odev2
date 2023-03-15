#include <stdio.h>
#include <stdlib.h>
 
	//A��klama sat�rlar�nda ilk s�radakiler kodlar�n a��klamas� 2. s�radakiler y�r�tme zaman� hesab� i�in yaz�lm��t�r.
	int en_kucuk_sayi(int sayi_dizisi[], int n) {//en k���k say�y� bulan fonksiyonu tan�mlad�k.
    int en_kucuk_sayi = sayi_dizisi[0];//dizinin ilk eleman�n� en k���k elemana e�itledik.  
    for (int i = 1; i < n; i++) {// dizinin t�m elemanlar�n� kontrol edebilmek i�in bir d�ng� yazd�k.   //1+(n)+(n+1)=2n+2
        if (sayi_dizisi[i] < en_kucuk_sayi) {//elimizdeki en k���k say�y� dizinin b�t�n elemanlar� ile s�ras�yla kar��la�t�rd�k. //n-1
            en_kucuk_sayi = sayi_dizisi[i];//Kar��la�t�rma sonucu k���k olan eleman� en k���k say�ya e�itledik.   //a�a��da yazd���m dizi i�in bu i�lem sadece 1 kere ger�ekle�ir( 0<3 oldu�unda)
            
        }
    }
    return en_kucuk_sayi;
}

int main() {
	
   int sayi_dizisi[] = {3,5,6,34,532,5453544,654,654524,4,0};//Rastgele bir dizi tan�mlad�k.  
   int n = sizeof(sayi_dizisi) ; 
   int en_kucuk_sayi = en_kucuk_sayi(sayi_dizisi, n);//Yukar�da yazd���m�z fonksiyonu �a��rd�k. 
   printf("en k���k say� = %d", en_kucuk_sayi);//Kendi yazd���m�z dizideki en k���k eleman� ekrana yazd�rd�k.
return 0;
}//Yukar�da a��klama sat�r�nda yazd���m de�erleri toplarsak T(n) y�r�tme zaman�na ula�abiliriz. 2n+2+n-1+1=3n+2 olur. Yani T(n)=3n+2 dir.
