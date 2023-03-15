#include <stdio.h>
#include <stdlib.h>
 
	//Açýklama satýrlarýnda ilk sýradakiler kodlarýn açýklamasý 2. sýradakiler yürütme zamaný hesabý için yazýlmýþtýr.
	int en_kucuk_sayi(int sayi_dizisi[], int n) {//en küçük sayýyý bulan fonksiyonu tanýmladýk.
    int en_kucuk_sayi = sayi_dizisi[0];//dizinin ilk elemanýný en küçük elemana eþitledik.  
    for (int i = 1; i < n; i++) {// dizinin tüm elemanlarýný kontrol edebilmek için bir döngü yazdýk.   //1+(n)+(n+1)=2n+2
        if (sayi_dizisi[i] < en_kucuk_sayi) {//elimizdeki en küçük sayýyý dizinin bütün elemanlarý ile sýrasýyla karþýlaþtýrdýk. //n-1
            en_kucuk_sayi = sayi_dizisi[i];//Karþýlaþtýrma sonucu küçük olan elemaný en küçük sayýya eþitledik.   //aþaðýda yazdýðým dizi için bu iþlem sadece 1 kere gerçekleþir( 0<3 olduðunda)
            
        }
    }
    return en_kucuk_sayi;
}

int main() {
	
   int sayi_dizisi[] = {3,5,6,34,532,5453544,654,654524,4,0};//Rastgele bir dizi tanýmladýk.  
   int n = sizeof(sayi_dizisi) ; 
   int en_kucuk_sayi = en_kucuk_sayi(sayi_dizisi, n);//Yukarýda yazdýðýmýz fonksiyonu çaðýrdýk. 
   printf("en küçük sayý = %d", en_kucuk_sayi);//Kendi yazdýðýmýz dizideki en küçük elemaný ekrana yazdýrdýk.
return 0;
}//Yukarýda açýklama satýrýnda yazdýðým deðerleri toplarsak T(n) yürütme zamanýna ulaþabiliriz. 2n+2+n-1+1=3n+2 olur. Yani T(n)=3n+2 dir.
