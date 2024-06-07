

/****************************************************************************
**					SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI….01..
**				ÖÐRENCÝ ADI UMUT ARDA VURAL
**				ÖÐRENCÝ NUMARASI B231210081 
**				DERS GRUBU A
****************************************************************************/







#include <iostream>  
#include <cstdlib> // Rastgele sayýlar için//
#include <ctime>   // Zaman kullanýmý için (rasgele oluþtururken uygulama her  çalýþmasýnda farklý rasgelelik olmasýný saðlar  //
#include <iomanip> // notlarý ekrana tablo þeklinde yazdýrmak istediðim için bunu kullanýyorum //
#include <cmath> // kök içine almak için matematik ütüpanesi gerekli //
using namespace std;


// struct oluþturma tüm öðrenciler için döngüye almada kolaylýk saðlar // 
struct ogrenci {
    string adi;
    string soyadi;
    int odev1;
    int odev2;
    int kisasýnav1;
    int kisasinav2;
    int vize;
    int final;
    double yýliçi;
    double toplamnot;
    string harfnotu;
};

int rastgeleNotOlustur() {
    int rastgele = rand() % 101; // 0-100arasýnda bir rastgele sayý alýnýr //
    if (rastgele < 20) {
        return 80 + (rand() % 21); // %20'si 80-100 arasýnda notlar//
    }
    else if (rastgele < 70) {
        return 50 + (rand() % 31); // %50'si 50-80 arasýnda notlar//
    }
    else {
        return rand() % 51; // %30'u 0-50 arasýnda notlar//
    }
}
// yukarýda rasgele not oluþturmak için fonksiyon oluþturdum //

string rastgeleAdOlustur() {
    string adlar[] = { "Umut" , "Eray", "Nisa", "Arda", "Murat", "Haydar", "Azra", "Ali","Aziz","Mustafa","Hakan" };
    int adlarSayisi = sizeof(adlar) / sizeof(adlar[0]);
    return adlar[rand() % adlarSayisi];
}

//yukarýda  rasgele ad oluþturma fonksiyonu ile rasgeler adlar dizesi bulunmakta //

string rastgeleSoyadOlustur() {
    string soyadlar[] = { "Üzülmez", "Vural", "Erdoðan", "Öztürk","Ýnce", "Metmetçik", "Atatürk", "Topal","Halidi","Fidan" };
    int soyadlarSayisi = sizeof(soyadlar) / sizeof(soyadlar[0]);
    return soyadlar[rand() % soyadlarSayisi];
}
// ad için yaptýðýmýn soy ad için çevrilmiþ hali //




int main() {
    srand(time(0)); // Rastgelelik  (uygulama her çalýþtýðýnda farklý rasgelilik oluþturur) //
    setlocale(LC_ALL, "Turkish");

    // sýnýftaki öðrencilerin toplam notlarýný kaydetmek için oluþturduðum dizi //
    int toplamnot[101];

    double a, b, c, d, e, f; // a= 1.ödev b=2ödev c=1. kýsa sýnav d=2.kýsa sýnav e = vize f=final // uzun uzun yazmamak için burda  harflerle tanýmladým //
    int j;
    int ogrenciler[101];

    // yukarda sýnýftaki öðrenciler için ayrý bir dizi oluþturdum //



    do {
        cout << "Lütfen 0 ile 100 arasýnda bir sayý giriniz  " << endl << endl;
        cout << "Sýnýfýn öðrenci Sayýsýný Giriniz: ";
        cin;  ogrenciler[j];
        /* sýnýfýn öðrenci sayýsýný alýrken iki defa istememek için yukardaki cin den sonra noktalý virgül kullandým böylece j alýnca ögrenciler dizisinin elemaný
        oldu ve döngülerde kullanmama yardýmcý oldu */
        cin >> j;
        cout << endl << endl;
    } while (j > 100 or j <= 0);
    // yukarda sýnýftaki öðrenci sayýsýný 0 ile 100 arasýnda alýcak bir döngü yaptým alýnmadýðý taktirde tekrar edicek //



    // aþaðýda ders aðýrlýklarýn toplamý 100 olacak þekilde ders aðýrlýklarýný aldým toplamý 100 olmadýðý zaman tekrar döngü baþlýcaktýr //
    do {
        
        // a= 1.ödev b=2ödev c=1. kýsa sýnav d=2.kýsa sýnav e = vize f=final // uzun uzun yazmamak için burda  harflerle tanýmladým //
        
        cout << "Ders aðýrlýklarýnýn toplamý 100 olmak zorundadýr olmadýðý halde döngü baþlýcaktýr  " << endl << endl;


        cout << "1. ödevin katkýsýný giriniz (girdiðiniz sayý yüzdelik olarak alýnacaktýr) 0 ile 100 arasýndan giriniz: " ;
        cin >> a;
        cout << endl;

        cout << "2. ödevin katkýsýný giriniz (girdiðiniz sayý yüzdelik olarak alýnacaktýr) 0 ile 100 arasýndan giriniz: " ;
        cin >> b;
        cout << endl;

        cout << "1. kýsasýnavýn katkýsýný giriniz (girdiðiniz sayý yüzdelik olarak alýnacaktýr) 0 ile 100 arasýndan giriniz: " ;
        cin >> c;
        cout << endl;


        cout << "2. kýsasýnavýn katkýsýný giriniz (girdiðiniz sayý yüzdelik olarak alýnacaktýr) 0 ile 100 arasýndan giriniz: " ;
        cin >> d;
        cout << endl;


        cout << " vizenin katkýsýný giriniz (girdiðiniz sayý yüzdelik olarak alýnacaktýr) 0 ile 100 arasýndan giriniz: " ;
        cin >> e;
        cout << endl;



        cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;



    } while (a + b + c + d + e  != 100);

    int g; // g yýl içinin yüzdeliði 

    cout << "Baþarýlý bir þekilde yýl için notlarýn daðýlým yüzdesini girdiniz " << endl;
    do
    { 
        cout << " Birazdan yýl içi ve finalin katkýsný gireceksiniz toplamý 100 olmak zorunda ! " << endl<<endl;
        cout << "Yýl içinin yüzdesini giriniz  :  ";
        cin >> g;   // g = yýl içi nin yüzdeliði 
        cout << endl;
        cout << "finalin katkýsný giriniz ( girdiðiniz sayý yüzdelik olarak alýnacaktýr) 0 ile 100 arasýndan giriniz:" ;
        cin >> f; // f  finalin yüzdelði 
        cout << endl;

    } while ( g + f != 100 ) ;
    // toplamlarý 100 olmazsa döngü  yine baþlar 


    cout << endl << endl << endl;

    //öðrenci notlarýný tablo þeklinde yaptýrmak istedim setw() kullandým //

    cout << setw(10) << "Adi" << setw(15) << "Soyadi" << setw(6)  << " " << "1.Ödev" << " " << setw(6) << "2.Ödev" << " "<<setw(6) << "1.Kýsasýnav" <<"  "<< setw(8) << "2.Kýsa sýnav" <<" "<< setw(7) << "Vize" <<"   "<< setw(10) << "ToplamNot" <<"       "<< setw(7) << "Harf Notu" << endl << endl << endl;

    // her nottan kaç öðrenci olduðunu göstermek için sayaç oluþturdum //

    double sayaçAA = 0, sayaçBA = 0, sayaçBB = 0, sayaçCB = 0, sayaçCC = 0, sayaçDC = 0, sayaçDD = 0, sayaçFD = 0, sayaçFF = 0;


    double toplamnotstandartsapmaveortalama = 0;  //ortalama için ve standart sapma için tün notlarý buraya kaydettim//

    ogrenci o;

    int i = 0;
    for (int i = 0; i < j; i++) {

        // yukarda oluþturduðum fonksiyonlarý kullanrak rasgele isim not oluþturdum //

        o.adi = rastgeleAdOlustur();

        o.soyadi = rastgeleSoyadOlustur();

        o.odev1 = rastgeleNotOlustur();

        o.odev2 = rastgeleNotOlustur();

        o.kisasýnav1 = rastgeleNotOlustur();

        o.kisasinav2 = rastgeleNotOlustur();

        o.vize = rastgeleNotOlustur();

        o.final = rastgeleNotOlustur();

        //aþaðýda toplam not hesapladým a ,b ,c, d, e ,f yukarda aðýrlýklaýrný alýdðým yerden gelmekte // 
        o.yýliçi = (a * o.odev1 + b * o.odev2 + c * o.kisasýnav1 + d * o.kisasinav2 + e * o.vize ) / 100;
        //
        o.toplamnot = (o.yýliçi * g + o.final*f ) / 100;

        // toplam notu toplamnot dizisiinin içine kaydettim //


        toplamnot[i] = +o.toplamnot;
        // yukarda diziye sýýnftaki ðrencilerin notu kaydedildi//


        toplamnotstandartsapmaveortalama = toplamnotstandartsapmaveortalama + o.toplamnot;
        // oluþan toplam notlarý ortalama ve standart sapma için kaydettim

        cout << setw(10) << o.adi << setw(15) << o.soyadi <<"  "<< setw(7) << o.odev1 << " " << setw(7)<<" " << o.odev2 << setw(7) << o.kisasýnav1 << "    "<< setw(7) << o.kisasinav2 <<"       "<< setw(7) << o.vize << "   " << setw(11) << o.toplamnot << "  " << setw(7) << o.harfnotu;

        string AA, BA, BB, CB, CC, DC, DD, FD, FF;

        // aþaðýda öðrencinin toplam notu hangi araklýktaysa o ekrana yazdýrýlýp sayaça eklenir //
        if (90 <= o.toplamnot && o.toplamnot <= 100) {
            cout << "Notunuz AA" << endl;
            o.harfnotu == AA;
            sayaçAA++;
        }
        else if (85 <= o.toplamnot && o.toplamnot <= 89.99) {
            cout << "Notunuz BA" << endl;
            o.harfnotu == BA;
            sayaçBA++;

        }
        else if (80 <= o.toplamnot && o.toplamnot <= 84.99) {
            cout << "Notunuz BB" << endl;
            o.harfnotu == BB;
            sayaçBB++;

        }
        else if (75 <= o.toplamnot && o.toplamnot <= 79.99) {
            cout << "Notunuz CB" << endl;
            o.harfnotu == CB;
            sayaçCB++;

        }
        else if (65 <= o.toplamnot && o.toplamnot <= 74.99) {
            cout << "Notunuz CC" << endl;
            o.harfnotu == CC;
            sayaçCC++;

        }
        else if (58 <= o.toplamnot && o.toplamnot <= 64.99) {
            cout << "Notunuz DC" << endl;
            o.harfnotu == DC;
            sayaçDC++;

        }
        else if (50 <= o.toplamnot && o.toplamnot <= 57.99) {
            cout << "Notunuz DD" << endl;
            o.harfnotu == DD;
            sayaçDD++;

        }
        else if (40 <= o.toplamnot && o.toplamnot < 50) {
            cout << "Notunuz FD" << endl;
            o.harfnotu == FD;
            sayaçFD++;

        }
        else
        {
            cout << "Notunuz FF (ders tekrarý)";
            o.harfnotu == FF;
            sayaçFF++;


        }


        




        cout << endl << endl << endl << endl << endl << endl;
    }
    /* her nottan kaç kiþi olduðunu bulmak için sayaç kullandým  */

    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;

    cout << "Notu AA olan öðrenci sayisi  :  " << sayaçAA << endl << "Sýnýfa oranla yüzdesi : " << sayaçAA * 100 / j << endl << endl;

    cout << "Notu BA olan ogrenci sayisi  :  " << sayaçBA << endl << "Sýnýfa oranla yüzdesi : " << sayaçBA * 100 / j << endl << endl;

    cout << "Notu BB olan ogrenci sayisi : " << sayaçBB << endl << "Sýnýfa oranla yüzdesi : " << sayaçBB * 100 / j << endl << endl;

    cout << "Notu CB olan ogrenci sayisi : " << sayaçCB << endl << "Sýnýfa oranla yüzdesi : " << sayaçCB * 100 / j << endl << endl;

    cout << "Notu CC olan ogrenci sayisi : " << sayaçCC << endl << "Sýnýfa oranla yüzdesi : " << sayaçCC * 100 / j << endl << endl;

    cout << "Notu DC olan ogrenci sayisi : " << sayaçDC << endl << "Sýnýfa oranla yüzdesi : " << sayaçDC * 100 / j << endl << endl;

    cout << "Notu DD olan ogrenci sayisi : " << sayaçDD << endl << "Sýnýfa oranla yüzdesi : " << sayaçDD * 100 / j << endl << endl;

    cout << "Notu FD olan ogrenci sayisi : " << sayaçFD << endl << "Sýnýfa oranla yüzdesi : " << sayaçFD * 100 / j << endl << endl;

    cout << "Notu FF olan ogrenci sayisi : " << sayaçFF << endl << "Sýnýfa oranla yüzdesi : " << sayaçFF * 100 / j << endl << endl;

    // en büyük not en küçük not hesaplama dizideki en büyük ve en küçük elemaný bulmak için // 

    int enküçük = toplamnot[0];

    int enbüyük = toplamnot[0];

    for (int i = 0; i < j; i++)
    {
        if (toplamnot[i] < enküçük)
        {
            enküçük = toplamnot[i];

        }

        if (toplamnot[i] > enbüyük)
        {
            enbüyük = toplamnot[i];
        }

    }
    cout << endl;


    // ortalamayý toplamnotstandartsapmaveortalama / j olarak tanýlamadan kullanýcam tanýmlayýnca iki deðiþkendde sabit olmadýðýndan hata alýyorum //
    cout << "Sýnýfýn Ortalama : " << toplamnotstandartsapmaveortalama / j << endl << endl;

    // standart sapma formul hesaplama ekrana yazdýrma//


    //standart sapma hesaplamasý aþaðýda formüle göre yapýlmakta //
    float ssapmapay = 0;

    float standartsapma = 0;
    for (int i = 0; i < j; i++) {
        ssapmapay = ssapmapay + (toplamnot[i] - toplamnotstandartsapmaveortalama / j) * (toplamnot[i] - toplamnotstandartsapmaveortalama / j);
    }
    standartsapma = sqrt(ssapmapay / (j - 1));
    cout << "Sýnýfýn  Standart Sapmasý : " << standartsapma << endl << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;

    cout << "En küçük deðer = " << enküçük << endl << endl;

    cout << "En büyük deðer = " << enbüyük << endl << endl << endl << endl;


    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;


    cout << endl << endl << endl << endl << endl << endl << endl << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;




    return 0;


}
