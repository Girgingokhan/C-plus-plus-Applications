
Nesne y�nelimli programlama kavramlarindan birisi olan kaps�lleme islemi (encapsulation)
Kaps�lleme veya diger adiyla veri kaps�lleme islemi, basit�e bir sinifin (class) disariya karsi kapali hale getirilmesi ve 
sinifa erisimin kaps�llenmesi yani engellenmesidir. Bilindgi �zere, siniflar, �zelliklerden (properties) ve metotlardan (methods) olusmaktadir. 
Veri kaps�llemesinin amaci, sinifta bulunan �zelliklerin erisimini kontrol altina almak ve sinifin �zelliklerinin disaridan erisimini engelleyerek, 
sinftaki metotlar marifetiyle erisimi kontrol etmektir.


Sinifimizdaki pay ve payda degiskenlerinin (properties) dogrudan atanmasi problem teskil etmektedir.�rnegin paydanin 0 olmasi istenmez! 
Bu problemin ��z�m� ise ancak kontrol�n� bizim yaptigimiz bir atama y�ntemi olan kaps�lleme (encapsulation) islemidir.

class rasyonelSayi{

private:

    int pay;

    int payda;

public:

    void setPay(int x)
	{ 
	pay = x; 
	}

    void setPayda(int x) 
	{ 
	payda = x; 
	}

    int getPay()
	{ 
	return pay; 
	}

    int getPayda()
	{ 
	return payda; 
	}

};

Yukaridaki yeni sinifta, pay ve payda degiskenlerine atama islemi bizim kontrol�m�z altina girmistir.
Kisacasi literat�rde getter / setter fonksiyonlari olarak bilinen ve T�rk�eye alici/atayici fonksiyonlari olarak �evirebilecegimiz,
ve bir siniftaki degiskenlerin degerlerini almak veya atamak i�in kullanilan fonksiyonlar disinda, bu sinifta bulunan degiskenlere erisimi
engellemis olduk.

Aslinda, bir degisken �zerinde yapilabilecek iki temel islem almak ve atamaktir. 
Yukaridaki yeni sinif tanimimizda hen�z problemimizi ��zen bir tedbir bulunmasa da artik yazmamiz m�mk�nd�r

class rasyonelSayi{

private:

    int pay;

    int payda;

public:

    void setPay(int x)
	{
	 pay = x;
	}

    void setPayda(int x)
	{

      if (x!=0)

      payda = x;
    }

    int getPay()  { return pay;   }

    int getPayda(){ return payda; }

};

G�r�ld�g� �zere, setPayda fonksiyonu i�erisinde kontrol edilerek atama islemi yapilmaktadir. 
Dolayisiyla artik payda degeri konulmadan �nce 0 olup olmadigi kontrol edilecek ve uygunsa atama islemi yapilacaktir.

Bu kontrolden sonra main fonksiyonumuz asagidaki sekilde olacaktir.

int main(){

tamsayi a,b;

a.setPay ( 4 );

a.setPayda (6);

b.setPay ( 3);

b.setPayda(0);

cout << a.b�lme(b) << endl;

}

G�r�ld�g� �zere, artik sinifimizdaki degiskenlere, nesnelerin dogrudan erisimi m�mk�n olmamaktadir.
Bu erisim, bizim kontrol�m�zde olan fonksiyonlar marifetiyle yapilmakta, dolayisiyla bizim kontrol�m�zden ge�mektedir.

////////////////////////////////////////////////////////////
Nesne y�nelimli programlamanin ilk prensibi kaps�lleme (encapsulation) olarak adlandirilir. 
Bu �zellik, dilin nesne kullanicisindan gereksiz uygulama ayrintilarini saklar. 
Olusturulan bir sinif (class) i�erisinde kullanicinin islemlerini daha kolay ger�eklestirebilmesi i�in bazi islemler birlestirilerek
tek bir islem gibi g�sterilir. Bu birlestirme islemine kaps�lleme denir.
Erisim belirte�leri (access modifier) sayesinde kaps�lleme �ok daha kolay yapilmaktadir.
Erisim belirte�leri, olusturulan SINIF veya SINIF i�indeki elemanlarin erisim seviyelerini belirlemek i�in kullanilan anahtar kelimeler
grubuna verilen isimdir. Metotlar ve degiskenler bir anahtar s�zc�k ile �nceden belirlenen sinirlar dahilinde kullanilabilir. 
Bu anahtar kelimeler su sekilde siralanabilir.

public: Sistemdeki b�t�n siniflarin erisebilmesini saglar. Yalnizca ayni proje i�inden degil, diger projelerden de erisim saglanabilir.
private: Bir "�zellik (property)"in veya "metod"un sadece tanimlandigi siniftan erisilebilmesini saglar. 
Olusturulan sinif veya yapilarin "public" olmasi a�ik bir sekilde belirtilmez ise, derleyici tarafindan "private" olarak belirlenir.
internal: Ayni derleyici (assembly) i�inde bulunan t�m siniflardan erisim saglanir. 
protected: Sadece tanimlandigi sinifin i�inde ve o siniftan t�retilmis diger siniflarin i�inde erisilebilir.
Kaps�lleme "private" degiskenlerin metotlar gibi kullanilmasina yardimci olur. Okuma (Read Only) isleminin yanisira okuma - yazma
(read - write) isleminin yapilmasini saglar.

Uygulama:

Id,  Ad, OkulNo ve HarcUcreti alanlarindan olusan Ogrenci adli bir SINIF in ; HarcUcreti alani kaps�llenip,
birisi nesneye deger atamasini kontrol eden SetHarcUcreti metodu, digeri de atanan degeri geriye d�nd�ren GetHarcUcreti metodlariyla 
kaps�lleme uygulamasi su sekilde yapilir:

namespace Encapsulation
{
    class Ogrenci
     {
        public int Id;
        public string Ad;
        public string OkulNo;
        
		private double HarcUcreti; // HarcUcreti alani kaps�lleniyor

        public void SetHarcUcreti(double value)
        {
           if (value > 0) //set metoduyla verilen degerin uygun olmasi durumunda HarcUcreti alanina atama yapilir
              HarcUcreti = value;

           else //uygun olmamasi durumunda kullaniciya hata mesaji verilir.

              Console.WriteLine("Girilen tutar ge�ersiz.");
        }
        public double GetHarcUcreti()
        {
            return HarcUcreti;
        }
    }
}

Program sinifinda bir Ogrenci nesnesi olusturulup deger atamasi ise su sekilde yapilir:

class Program
{
    static void Main(string[] args)
    {
        double value; //value degiskenine atama yapilmalidir. Bu haliyle uygulama hata verecektir.

        Ogrenci o = new ogrenci();
        o.SetHarcUcreti(value);
        Console.WriteLine(o.GetHarcUcreti());
    }

