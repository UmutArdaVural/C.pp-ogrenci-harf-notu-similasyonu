

/****************************************************************************
**					SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				    B�LG�SAYAR M�HEND�SL��� B�L�M�
**				          PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�.01..
**				��RENC� ADI UMUT ARDA VURAL
**				��RENC� NUMARASI B231210081 
**				DERS GRUBU A
****************************************************************************/







#include <iostream>  
#include <cstdlib> // Rastgele say�lar i�in//
#include <ctime>   // Zaman kullan�m� i�in (rasgele olu�tururken uygulama her  �al��mas�nda farkl� rasgelelik olmas�n� sa�lar  //
#include <iomanip> // notlar� ekrana tablo �eklinde yazd�rmak istedi�im i�in bunu kullan�yorum //
#include <cmath> // k�k i�ine almak i�in matematik �t�panesi gerekli //
using namespace std;


// struct olu�turma t�m ��renciler i�in d�ng�ye almada kolayl�k sa�lar // 
struct ogrenci {
    string adi;
    string soyadi;
    int odev1;
    int odev2;
    int kisas�nav1;
    int kisasinav2;
    int vize;
    int final;
    double y�li�i;
    double toplamnot;
    string harfnotu;
};

int rastgeleNotOlustur() {
    int rastgele = rand() % 101; // 0-100aras�nda bir rastgele say� al�n�r //
    if (rastgele < 20) {
        return 80 + (rand() % 21); // %20'si 80-100 aras�nda notlar//
    }
    else if (rastgele < 70) {
        return 50 + (rand() % 31); // %50'si 50-80 aras�nda notlar//
    }
    else {
        return rand() % 51; // %30'u 0-50 aras�nda notlar//
    }
}
// yukar�da rasgele not olu�turmak i�in fonksiyon olu�turdum //

string rastgeleAdOlustur() {
    string adlar[] = { "Umut" , "Eray", "Nisa", "Arda", "Murat", "Haydar", "Azra", "Ali","Aziz","Mustafa","Hakan" };
    int adlarSayisi = sizeof(adlar) / sizeof(adlar[0]);
    return adlar[rand() % adlarSayisi];
}

//yukar�da  rasgele ad olu�turma fonksiyonu ile rasgeler adlar dizesi bulunmakta //

string rastgeleSoyadOlustur() {
    string soyadlar[] = { "�z�lmez", "Vural", "Erdo�an", "�zt�rk","�nce", "Metmet�ik", "Atat�rk", "Topal","Halidi","Fidan" };
    int soyadlarSayisi = sizeof(soyadlar) / sizeof(soyadlar[0]);
    return soyadlar[rand() % soyadlarSayisi];
}
// ad i�in yapt���m�n soy ad i�in �evrilmi� hali //




int main() {
    srand(time(0)); // Rastgelelik  (uygulama her �al��t���nda farkl� rasgelilik olu�turur) //
    setlocale(LC_ALL, "Turkish");

    // s�n�ftaki ��rencilerin toplam notlar�n� kaydetmek i�in olu�turdu�um dizi //
    int toplamnot[101];

    double a, b, c, d, e, f; // a= 1.�dev b=2�dev c=1. k�sa s�nav d=2.k�sa s�nav e = vize f=final // uzun uzun yazmamak i�in burda  harflerle tan�mlad�m //
    int j;
    int ogrenciler[101];

    // yukarda s�n�ftaki ��renciler i�in ayr� bir dizi olu�turdum //



    do {
        cout << "L�tfen 0 ile 100 aras�nda bir say� giriniz  " << endl << endl;
        cout << "S�n�f�n ��renci Say�s�n� Giriniz: ";
        cin;  ogrenciler[j];
        /* s�n�f�n ��renci say�s�n� al�rken iki defa istememek i�in yukardaki cin den sonra noktal� virg�l kulland�m b�ylece j al�nca �grenciler dizisinin eleman�
        oldu ve d�ng�lerde kullanmama yard�mc� oldu */
        cin >> j;
        cout << endl << endl;
    } while (j > 100 or j <= 0);
    // yukarda s�n�ftaki ��renci say�s�n� 0 ile 100 aras�nda al�cak bir d�ng� yapt�m al�nmad��� taktirde tekrar edicek //



    // a�a��da ders a��rl�klar�n toplam� 100 olacak �ekilde ders a��rl�klar�n� ald�m toplam� 100 olmad��� zaman tekrar d�ng� ba�l�cakt�r //
    do {
        
        // a= 1.�dev b=2�dev c=1. k�sa s�nav d=2.k�sa s�nav e = vize f=final // uzun uzun yazmamak i�in burda  harflerle tan�mlad�m //
        
        cout << "Ders a��rl�klar�n�n toplam� 100 olmak zorundad�r olmad��� halde d�ng� ba�l�cakt�r  " << endl << endl;


        cout << "1. �devin katk�s�n� giriniz (girdi�iniz say� y�zdelik olarak al�nacakt�r) 0 ile 100 aras�ndan giriniz: " ;
        cin >> a;
        cout << endl;

        cout << "2. �devin katk�s�n� giriniz (girdi�iniz say� y�zdelik olarak al�nacakt�r) 0 ile 100 aras�ndan giriniz: " ;
        cin >> b;
        cout << endl;

        cout << "1. k�sas�nav�n katk�s�n� giriniz (girdi�iniz say� y�zdelik olarak al�nacakt�r) 0 ile 100 aras�ndan giriniz: " ;
        cin >> c;
        cout << endl;


        cout << "2. k�sas�nav�n katk�s�n� giriniz (girdi�iniz say� y�zdelik olarak al�nacakt�r) 0 ile 100 aras�ndan giriniz: " ;
        cin >> d;
        cout << endl;


        cout << " vizenin katk�s�n� giriniz (girdi�iniz say� y�zdelik olarak al�nacakt�r) 0 ile 100 aras�ndan giriniz: " ;
        cin >> e;
        cout << endl;



        cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;



    } while (a + b + c + d + e  != 100);

    int g; // g y�l i�inin y�zdeli�i 

    cout << "Ba�ar�l� bir �ekilde y�l i�in notlar�n da��l�m y�zdesini girdiniz " << endl;
    do
    { 
        cout << " Birazdan y�l i�i ve finalin katk�sn� gireceksiniz toplam� 100 olmak zorunda ! " << endl<<endl;
        cout << "Y�l i�inin y�zdesini giriniz  :  ";
        cin >> g;   // g = y�l i�i nin y�zdeli�i 
        cout << endl;
        cout << "finalin katk�sn� giriniz ( girdi�iniz say� y�zdelik olarak al�nacakt�r) 0 ile 100 aras�ndan giriniz:" ;
        cin >> f; // f  finalin y�zdel�i 
        cout << endl;

    } while ( g + f != 100 ) ;
    // toplamlar� 100 olmazsa d�ng�  yine ba�lar 


    cout << endl << endl << endl;

    //��renci notlar�n� tablo �eklinde yapt�rmak istedim setw() kulland�m //

    cout << setw(10) << "Adi" << setw(15) << "Soyadi" << setw(6)  << " " << "1.�dev" << " " << setw(6) << "2.�dev" << " "<<setw(6) << "1.K�sas�nav" <<"  "<< setw(8) << "2.K�sa s�nav" <<" "<< setw(7) << "Vize" <<"   "<< setw(10) << "ToplamNot" <<"       "<< setw(7) << "Harf Notu" << endl << endl << endl;

    // her nottan ka� ��renci oldu�unu g�stermek i�in saya� olu�turdum //

    double saya�AA = 0, saya�BA = 0, saya�BB = 0, saya�CB = 0, saya�CC = 0, saya�DC = 0, saya�DD = 0, saya�FD = 0, saya�FF = 0;


    double toplamnotstandartsapmaveortalama = 0;  //ortalama i�in ve standart sapma i�in t�n notlar� buraya kaydettim//

    ogrenci o;

    int i = 0;
    for (int i = 0; i < j; i++) {

        // yukarda olu�turdu�um fonksiyonlar� kullanrak rasgele isim not olu�turdum //

        o.adi = rastgeleAdOlustur();

        o.soyadi = rastgeleSoyadOlustur();

        o.odev1 = rastgeleNotOlustur();

        o.odev2 = rastgeleNotOlustur();

        o.kisas�nav1 = rastgeleNotOlustur();

        o.kisasinav2 = rastgeleNotOlustur();

        o.vize = rastgeleNotOlustur();

        o.final = rastgeleNotOlustur();

        //a�a��da toplam not hesaplad�m a ,b ,c, d, e ,f yukarda a��rl�kla�rn� al�d��m yerden gelmekte // 
        o.y�li�i = (a * o.odev1 + b * o.odev2 + c * o.kisas�nav1 + d * o.kisasinav2 + e * o.vize ) / 100;
        //
        o.toplamnot = (o.y�li�i * g + o.final*f ) / 100;

        // toplam notu toplamnot dizisiinin i�ine kaydettim //


        toplamnot[i] = +o.toplamnot;
        // yukarda diziye s��nftaki �rencilerin notu kaydedildi//


        toplamnotstandartsapmaveortalama = toplamnotstandartsapmaveortalama + o.toplamnot;
        // olu�an toplam notlar� ortalama ve standart sapma i�in kaydettim

        cout << setw(10) << o.adi << setw(15) << o.soyadi <<"  "<< setw(7) << o.odev1 << " " << setw(7)<<" " << o.odev2 << setw(7) << o.kisas�nav1 << "    "<< setw(7) << o.kisasinav2 <<"       "<< setw(7) << o.vize << "   " << setw(11) << o.toplamnot << "  " << setw(7) << o.harfnotu;

        string AA, BA, BB, CB, CC, DC, DD, FD, FF;

        // a�a��da ��rencinin toplam notu hangi arakl�ktaysa o ekrana yazd�r�l�p saya�a eklenir //
        if (90 <= o.toplamnot && o.toplamnot <= 100) {
            cout << "Notunuz AA" << endl;
            o.harfnotu == AA;
            saya�AA++;
        }
        else if (85 <= o.toplamnot && o.toplamnot <= 89.99) {
            cout << "Notunuz BA" << endl;
            o.harfnotu == BA;
            saya�BA++;

        }
        else if (80 <= o.toplamnot && o.toplamnot <= 84.99) {
            cout << "Notunuz BB" << endl;
            o.harfnotu == BB;
            saya�BB++;

        }
        else if (75 <= o.toplamnot && o.toplamnot <= 79.99) {
            cout << "Notunuz CB" << endl;
            o.harfnotu == CB;
            saya�CB++;

        }
        else if (65 <= o.toplamnot && o.toplamnot <= 74.99) {
            cout << "Notunuz CC" << endl;
            o.harfnotu == CC;
            saya�CC++;

        }
        else if (58 <= o.toplamnot && o.toplamnot <= 64.99) {
            cout << "Notunuz DC" << endl;
            o.harfnotu == DC;
            saya�DC++;

        }
        else if (50 <= o.toplamnot && o.toplamnot <= 57.99) {
            cout << "Notunuz DD" << endl;
            o.harfnotu == DD;
            saya�DD++;

        }
        else if (40 <= o.toplamnot && o.toplamnot < 50) {
            cout << "Notunuz FD" << endl;
            o.harfnotu == FD;
            saya�FD++;

        }
        else
        {
            cout << "Notunuz FF (ders tekrar�)";
            o.harfnotu == FF;
            saya�FF++;


        }


        




        cout << endl << endl << endl << endl << endl << endl;
    }
    /* her nottan ka� ki�i oldu�unu bulmak i�in saya� kulland�m  */

    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;

    cout << "Notu AA olan ��renci sayisi  :  " << saya�AA << endl << "S�n�fa oranla y�zdesi : " << saya�AA * 100 / j << endl << endl;

    cout << "Notu BA olan ogrenci sayisi  :  " << saya�BA << endl << "S�n�fa oranla y�zdesi : " << saya�BA * 100 / j << endl << endl;

    cout << "Notu BB olan ogrenci sayisi : " << saya�BB << endl << "S�n�fa oranla y�zdesi : " << saya�BB * 100 / j << endl << endl;

    cout << "Notu CB olan ogrenci sayisi : " << saya�CB << endl << "S�n�fa oranla y�zdesi : " << saya�CB * 100 / j << endl << endl;

    cout << "Notu CC olan ogrenci sayisi : " << saya�CC << endl << "S�n�fa oranla y�zdesi : " << saya�CC * 100 / j << endl << endl;

    cout << "Notu DC olan ogrenci sayisi : " << saya�DC << endl << "S�n�fa oranla y�zdesi : " << saya�DC * 100 / j << endl << endl;

    cout << "Notu DD olan ogrenci sayisi : " << saya�DD << endl << "S�n�fa oranla y�zdesi : " << saya�DD * 100 / j << endl << endl;

    cout << "Notu FD olan ogrenci sayisi : " << saya�FD << endl << "S�n�fa oranla y�zdesi : " << saya�FD * 100 / j << endl << endl;

    cout << "Notu FF olan ogrenci sayisi : " << saya�FF << endl << "S�n�fa oranla y�zdesi : " << saya�FF * 100 / j << endl << endl;

    // en b�y�k not en k���k not hesaplama dizideki en b�y�k ve en k���k eleman� bulmak i�in // 

    int enk���k = toplamnot[0];

    int enb�y�k = toplamnot[0];

    for (int i = 0; i < j; i++)
    {
        if (toplamnot[i] < enk���k)
        {
            enk���k = toplamnot[i];

        }

        if (toplamnot[i] > enb�y�k)
        {
            enb�y�k = toplamnot[i];
        }

    }
    cout << endl;


    // ortalamay� toplamnotstandartsapmaveortalama / j olarak tan�lamadan kullan�cam tan�mlay�nca iki de�i�kendde sabit olmad���ndan hata al�yorum //
    cout << "S�n�f�n Ortalama : " << toplamnotstandartsapmaveortalama / j << endl << endl;

    // standart sapma formul hesaplama ekrana yazd�rma//


    //standart sapma hesaplamas� a�a��da form�le g�re yap�lmakta //
    float ssapmapay = 0;

    float standartsapma = 0;
    for (int i = 0; i < j; i++) {
        ssapmapay = ssapmapay + (toplamnot[i] - toplamnotstandartsapmaveortalama / j) * (toplamnot[i] - toplamnotstandartsapmaveortalama / j);
    }
    standartsapma = sqrt(ssapmapay / (j - 1));
    cout << "S�n�f�n  Standart Sapmas� : " << standartsapma << endl << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;

    cout << "En k���k de�er = " << enk���k << endl << endl;

    cout << "En b�y�k de�er = " << enb�y�k << endl << endl << endl << endl;


    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;


    cout << endl << endl << endl << endl << endl << endl << endl << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl;




    return 0;


}
