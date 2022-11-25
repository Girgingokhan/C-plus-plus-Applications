
Nesne yönelimli programlama kavramlarindan birisi olan kapsülleme islemi (encapsulation)
Kapsülleme veya diger adiyla veri kapsülleme islemi, basitçe bir sinifin (class) disariya karsi kapali hale getirilmesi ve 
sinifa erisimin kapsüllenmesi yani engellenmesidir. Bilindgi üzere, siniflar, özelliklerden (properties) ve metotlardan (methods) olusmaktadir. 
Veri kapsüllemesinin amaci, sinifta bulunan özelliklerin erisimini kontrol altina almak ve sinifin özelliklerinin disaridan erisimini engelleyerek, 
sinftaki metotlar marifetiyle erisimi kontrol etmektir.


Sinifimizdaki pay ve payda degiskenlerinin (properties) dogrudan atanmasi problem teskil etmektedir.Örnegin paydanin 0 olmasi istenmez! 
Bu problemin çözümü ise ancak kontrolünü bizim yaptigimiz bir atama yöntemi olan kapsülleme (encapsulation) islemidir.

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

Yukaridaki yeni sinifta, pay ve payda degiskenlerine atama islemi bizim kontrolümüz altina girmistir.
Kisacasi literatürde getter / setter fonksiyonlari olarak bilinen ve Türkçeye alici/atayici fonksiyonlari olarak çevirebilecegimiz,
ve bir siniftaki degiskenlerin degerlerini almak veya atamak için kullanilan fonksiyonlar disinda, bu sinifta bulunan degiskenlere erisimi
engellemis olduk.

Aslinda, bir degisken üzerinde yapilabilecek iki temel islem almak ve atamaktir. 
Yukaridaki yeni sinif tanimimizda henüz problemimizi çözen bir tedbir bulunmasa da artik yazmamiz mümkündür

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

Görüldügü üzere, setPayda fonksiyonu içerisinde kontrol edilerek atama islemi yapilmaktadir. 
Dolayisiyla artik payda degeri konulmadan önce 0 olup olmadigi kontrol edilecek ve uygunsa atama islemi yapilacaktir.

Bu kontrolden sonra main fonksiyonumuz asagidaki sekilde olacaktir.

int main(){

tamsayi a,b;

a.setPay ( 4 );

a.setPayda (6);

b.setPay ( 3);

b.setPayda(0);

cout << a.bölme(b) << endl;

}

Görüldügü üzere, artik sinifimizdaki degiskenlere, nesnelerin dogrudan erisimi mümkün olmamaktadir.
Bu erisim, bizim kontrolümüzde olan fonksiyonlar marifetiyle yapilmakta, dolayisiyla bizim kontrolümüzden geçmektedir.

////////////////////////////////////////////////////////////
Nesne yönelimli programlamanin ilk prensibi kapsülleme (encapsulation) olarak adlandirilir. 
Bu özellik, dilin nesne kullanicisindan gereksiz uygulama ayrintilarini saklar. 
Olusturulan bir sinif (class) içerisinde kullanicinin islemlerini daha kolay gerçeklestirebilmesi için bazi islemler birlestirilerek
tek bir islem gibi gösterilir. Bu birlestirme islemine kapsülleme denir.
Erisim belirteçleri (access modifier) sayesinde kapsülleme çok daha kolay yapilmaktadir.
Erisim belirteçleri, olusturulan SINIF veya SINIF içindeki elemanlarin erisim seviyelerini belirlemek için kullanilan anahtar kelimeler
grubuna verilen isimdir. Metotlar ve degiskenler bir anahtar sözcük ile önceden belirlenen sinirlar dahilinde kullanilabilir. 
Bu anahtar kelimeler su sekilde siralanabilir.

public: Sistemdeki bütün siniflarin erisebilmesini saglar. Yalnizca ayni proje içinden degil, diger projelerden de erisim saglanabilir.
private: Bir "özellik (property)"in veya "metod"un sadece tanimlandigi siniftan erisilebilmesini saglar. 
Olusturulan sinif veya yapilarin "public" olmasi açik bir sekilde belirtilmez ise, derleyici tarafindan "private" olarak belirlenir.
internal: Ayni derleyici (assembly) içinde bulunan tüm siniflardan erisim saglanir. 
protected: Sadece tanimlandigi sinifin içinde ve o siniftan türetilmis diger siniflarin içinde erisilebilir.
Kapsülleme "private" degiskenlerin metotlar gibi kullanilmasina yardimci olur. Okuma (Read Only) isleminin yanisira okuma - yazma
(read - write) isleminin yapilmasini saglar.

Uygulama:

Id,  Ad, OkulNo ve HarcUcreti alanlarindan olusan Ogrenci adli bir SINIF in ; HarcUcreti alani kapsüllenip,
birisi nesneye deger atamasini kontrol eden SetHarcUcreti metodu, digeri de atanan degeri geriye döndüren GetHarcUcreti metodlariyla 
kapsülleme uygulamasi su sekilde yapilir:

namespace Encapsulation
{
    class Ogrenci
     {
        public int Id;
        public string Ad;
        public string OkulNo;
        
		private double HarcUcreti; // HarcUcreti alani kapsülleniyor

        public void SetHarcUcreti(double value)
        {
           if (value > 0) //set metoduyla verilen degerin uygun olmasi durumunda HarcUcreti alanina atama yapilir
              HarcUcreti = value;

           else //uygun olmamasi durumunda kullaniciya hata mesaji verilir.

              Console.WriteLine("Girilen tutar geçersiz.");
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

