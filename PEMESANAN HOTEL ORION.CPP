#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <string.h>
using namespace std;

class Akun {
    public:
    string id,n, nama, pw, ktp, hp, in, out, email;
    Akun(string newid, string newnama, string newpw, string newktp, string newhp, string newemail){
    id  = newid;
    nama = newnama;
    pw = newpw;
    ktp = newktp;
    hp = newhp;
    email = newemail;
    }
    string getid(){
    return id;
    }
    string getnama(){
    return nama;
    }
    string getpw(){
    return pw;
    }
};
void garis(),login(),reg(),menu(),kamar(),hargakamar(),beli(),ranjangg(),daftarkamar(),gotoxy();
int loading();
string jp;
char h, id[10], pw[8], nama[30], ktp[16], hp[13], in[20], out[20];
int a;
string email;
float harga, total, ho;
Akun *A= NULL;
Akun A1 = Akun("adellaptr", "Adella Putri Riani", "oki", "1910631250001", "085894745887", "adellaptr@gmail.com");
Akun A2 = Akun("deasafryda","Dea Safryda Putri", "doki", "1910631250039", "085311207519", "deasfryd@gmail.com");
Akun A3 = Akun("","","","","","");
main()
{
    system("color b");
     a:
    cout<<"\t                      ";garis(); cout<<endl;
    cout<<"\t                      ------------SELAMAT DATANG-----------"<<endl;
    cout<<"\t                      ------------DI HOTEL ORION-----------"<<endl;
    cout<<"\t                      ";garis(); cout<<endl;
    cout<<"\n\n\t                  Apakah Anda sudah memiliki akun? (Y/T) : "; cin>>h;
    switch(h)
    {
    case 'Y':
        login();
        break;
    case 'T':
        reg();
        break;
    default:
    cout<<"\n\n\t   (Maaf, huruf yang Anda masukkan salah! (Masukan Y atau T)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
    getch();
    system("cls");
    goto a;
    }
}

void garis()
{
    cout<<"=====================================";
}

void login()
{
    x:
    system ("cls");
	string id,pw;
	char ch;
    login :
    cout<<"\t                      ";garis(); cout<<endl;
    cout<<"\t                      ------------SELAMAT DATANG-----------"<<endl;
    cout<<"\t                      --------------HOTEL ORION -----------"<<endl;
    cout<<"\t                      ";garis(); cout<<endl;
    cout<<" \t                      |          Silakan Login          |"<<endl;
    cout<<"\t                      "; garis(); cout<<endl;
        cout << "\t                 Username : "; cin >>id;
        cout << "\t                 Password : ";
		ch = _getch();
            while(ch != 13)
            {
            pw.push_back(ch);
            cout << '*';
            ch = _getch();
            }
    beranda:
	if (id=="adellaptr" && pw=="oki")
    {
            loading();
            system("cls");
            menu();
            getch();
	}
	else if (id=="deasafryda" && pw=="doki")
    {

            loading();
            system("cls");
            menu();
            getch();
	}
	else if (id==A3.id)
    {
        if (pw==A3.pw)
        {
            A=&A3;
        loading();
	    system("cls");
		menu();
        getch();
	}}
	else
	{
		system("cls");
		cout<<"\n\n Username atau Password salah, silakan login kembali"<<endl;
		goto x;
    }
}

void reg()
{
    system ("cls");
    cout<<"\t                      ";garis(); cout<<endl;
    cout<<"\t                      ------------SELAMAT DATANG-----------"<<endl;
    cout<<"\t                      --------------HOTEL ORION -----------"<<endl;
    cout<<"\t                      ";garis(); cout<<endl;
    cout<<"\n\n\t                              REGISTRASI DISINI!"<<endl;
    cin.ignore();
    cout<<"\t                      ";garis(); cout<<endl;
    cout<<"\n\n\t                  Nama Lengkap  : ";gets(nama);
    cout<<"\n\t                  Nomor KTP     : "; cin>>ktp;
    cout<<"\n\t                  Nomor HP/Telp : "; cin>>hp;
    cout<<"\n\t                  Email         : "; cin>>email;
    cout<<"\n\t                  ID Username   : "; cin>>id;
    cout<<"\n\t                  Password      : "; cin>>pw;
    A3.nama=nama;
    A3.ktp=ktp;
    A3.id=id;
    A3.hp=hp;
    A3.email=email;
    A3.pw=pw;
    system("cls");
    cout<<"\t                      ";garis(); cout<<endl;
    cout<<"\t                      ------------SELAMAT DATANG-----------"<<endl;
    cout<<"\t                      --------------HOTEL ORION -----------"<<endl;
    cout<<"\t                      ";garis(); cout<<endl;
    cout<<endl<<endl<<endl<<endl;
    cout<<"\n\n\t            ***Selamat! akun anda telah dibuat, silahkan login kembali***";
    cout<<"\n\n\t                    Silahkan tekan enter untuk melanjutkan";
    getch();
    login();
}

void menu()
{
    int p;
    system ("cls");
    cout<<"\t                     "<<"===";garis(); cout<<"==="<<endl;
    cout<<"\t                           SELAMAT DATANG DI HOTEL ORION "<<endl;
    cout<<"\t                     "<<"===";garis(); cout<<"==="<<endl<<endl;
    cout<<"\t\t                   1. Cek Daftar Kamar"<<endl;
    cout<<"\t\t                   2. Cek Harga"<<endl;
    cout<<"\t\t                   3. Pemesanan Kamar"<<endl<<endl;
    cout<<"\t                     "<<"===";garis(); cout<<"==="<<endl;
    cout<<"\t                     Masukkan Pilihan : "; cin>>p;
    switch(p)
    {
    case 1:
        kamar();
        break;
    case 2:
        system("cls");
        hargakamar();
        break;
    case 3:
        beli();
        break;
    }
}

void kamar()
{
    char b;
    daftarkamar();
    cout << "\nPress B For Back : ";
    cin >> b;
    if(b == 'b' || b == 'B')
    {
        menu();
    }
    getch();
}

void hargakamar()
{
    char b;
    ranjangg();
    cout << "\nPress B For Back : ";
    cin >> b;
    if(b == 'b' || b == 'B')
    {
        menu();
    }
    getch();
}

void daftarkamar()
{
    system("cls");
    cout<<"                               ***- TIPE KAMAR -***"<<endl;
    cout<<"   ____________________________________________________________________________________"<<endl;
    cout<<"   |    1. STANDARD    |   2. PREMIUM       |   3. DULUXE      |     4. SUITE         |"<<endl;
    cout<<"   |-------------------|--------------------|------------------|----------------------|"<<endl;
    cout<<"   | A. | SINGLE BED   | A. | SINGLE BED    | A. | SINGLE BED  | A. | SINGLE BED      |"<<endl;
    cout<<"   |    |              |    |               |    |             |    |                 |"<<endl;
    cout<<"   | B. | DOUBLE BED   | B. | DOUBLE BED    | B. | DOUBLE BED  | B. | DOUBLE BED      |"<<endl;
    cout<<"   |-------------------|--------------------|------------------|----------------------|"<<endl<<endl;
}

void ranjangg()
{
    cout<<"\n                       === HARGA KAMAR ==="<<endl;
    cout<<"           _______________________________________________"<<endl;
    cout<<"           |    KELAS    |    JENIS    |     HARGA       |"<<endl;
    cout<<"           |-------------|-------------|-----------------|"<<endl;
    cout<<"           |             |   SINGLE    |  Rp200.000,00   |"<<endl;
    cout<<"           |  STANDARD   |-------------|-----------------|"<<endl;
    cout<<"           |             |   DOUBLE    |  Rp250.000,00   |"<<endl;
    cout<<"           |-------------|-------------|-----------------|"<<endl;
    cout<<"           |             |   SINGLE    |  Rp400.000,00   |"<<endl;
    cout<<"           |  PREMIUM    |-------------|-----------------|"<<endl;
    cout<<"           |             |   DOUBLE    |  Rp450.000,00   |"<<endl;
    cout<<"           |-------------|-------------|-----------------|"<<endl;
    cout<<"           |             |   SINGLE    |  Rp800.000,00   |"<<endl;
    cout<<"           |  DELUXE     |-------------|-----------------|"<<endl;
    cout<<"           |             |   DOUBLE    |  Rp900.000,00   |"<<endl;
    cout<<"           |-------------|-------------|-----------------|"<<endl;
    cout<<"           |             |   SINGLE    |  Rp1.500.000,00 |"<<endl;
    cout<<"           |  SUITE      |-------------|-----------------|"<<endl;
    cout<<"           |             |   DOUBLE    |  Rp1.800.000,00 |"<<endl;
    cout<<"           |-------------|-------------|-----------------|"<<endl;

}
void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

int loading()
{
    gotoxy(50,11);cout<<"============";
    gotoxy(50,13);cout<<"============";
    for(int i=0;i<=100;i++)
    {
        gotoxy(50,12);cout<<"Loading "<<i<<"%";
        system("cls");
    }
    cout<<"LOADING COMPLETE"<<endl;
}

void beli()
{
                char customer[30], alamat[50];
                int kamar, no_kamar, harga_kamar, ranjang, bayar;
                int total, lama, um, kurang;
                float diskon;
                string jwb, id_customer, jk, hp, checkin, checkout, fixkam, emaily, jwbn;
                awal:
                system("cls");
    cout<<"\n\n                        === HOTEL ORION === HOTEL ORION === HOTEL ORION === HOTEL ORION ==="<<endl;
    cout<<"\t                               ";garis(); cout<<endl;
    cout<<"\n\t                                       PESAN DISINI!"<<endl;
    cout<<"\t                    -------------------------------------------------------------";
    cout<<"\n\t\tNama Pemesan                   : "; cin>>customer;
    cout<<"\t\tID Pemesan                     : "; cin>>id_customer;
    cout<<"\t\tEmail                          : "; cin>>emaily;
    cout<<"\t\tJenis Kelamin [L/P]            : "; cin>>jk;
    cout<<"\t\tNomor Telepon/HP               : "; cin>>hp;
    cout<<"\t\tAlamat                         : "; cin>>alamat;
      system("cls");
cout<<"\n\n                        === HOTEL ORION === HOTEL ORION === HOTEL ORION === HOTEL ORION ==="<<endl;
                cout<<"\n\n\t\tSilahkan Pilih Tipe Kamar Yang Anda Inginkan";
  cout<<"\n\t\t=================================================================================";
                cout<<"\n\t\t1. Standart";
                cout<<"\n\t\t2. Premium";
                cout<<"\n\t\t3. Deluxe";
                cout<<"\n\t\t4. Suite";
  cout<<"\n\t\t=================================================================================";
                cout<<"\n\t\tMasukan Pilihan : ";cin>>kamar;

                cout<<"\n\n\t\tSilahkan Pilih Tipe Bed Yang Anda Inginkan";
  cout<<"\n\t\t=================================================================================";
                cout<<"\n\t\t1. Single";
                cout<<"\n\t\t2. Double";
  cout<<"\n\t\t=================================================================================";
                cout<<"\n\t\tMasukan Pilihan : ";cin>>ranjang;cout<<endl;

                if(kamar==1 && ranjang==1)
                {
                                cout<<"\n\t\tAnda Memilih Kamar Tipe Standart Dengan Ranjang Single";
                                fixkam="Standart Dengan Single Bed";
                                harga_kamar=200000;
                }
                else if(kamar==1 && ranjang==2)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Standart Dengan Ranjang Double";
                    fixkam="Standart Dengan Double Bed";
                                harga_kamar=250000;
                }
                else if(kamar==2 && ranjang==1)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Premium Dengan Ranjang single";
                    fixkam="Premium Dengan Single Bed";
                                harga_kamar=400000;
                }
                else if(kamar==2 && ranjang==2)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Premium Dengan Ranjang Double";
                    fixkam="Premium Dengan Double Bed";
                                harga_kamar=450000;
                }
                                else if(kamar==3 && ranjang==1)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Deluxe Dengan Ranjang single";
                    fixkam="Deluxe Dengan Single Bed";
                                harga_kamar=800000;
                }
                else if(kamar==3 && ranjang==2)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Deluxe Dengan Ranjang Double";
                    fixkam="Deluxe Dengan Double Bed";
                                harga_kamar=900000;
                }
                                else if(kamar==4 && ranjang==1)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Suite Dengan Ranjang single";
                    fixkam="Suite Dengan Single Bed";
                                harga_kamar=1500000;
                }
                else if(kamar==4 && ranjang==2)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Suite Dengan Ranjang Double";
                    fixkam="Suite Dengan Double Bed";
                                harga_kamar=1800000;
                }
                else
                {
                                cout<<"\n\t\tMaaf Pilihan Anda Tidak Tersedia";
                                cout<<"\n\t\tUntuk Keamanan Silahkan Isi Data Dari Awal";
                                cout<<"\n\t\tApakah Anda Ingin Memulai Lagi ? [Y/N]";cin>>jwb;
                                if(jwb=="Y" || "y")
                                {
                                                goto awal;
                                }
                                else
                                {
                                                cout<<"\n\n\t\tTerima Kasih";
                                }
                }
                system("cls");
                cout<<"\n\n                        === HOTEL ORION === HOTEL ORION === HOTEL ORION === HOTEL ORION ==="<<endl;
                cout<<"\n\n\n\t\tSilahkan Mengisi Form Berikut";
  cout<<"\n\t\t=================================================================================";
                cout<<"\n\t\tPilih No. Kamar [1-100]     : "; cin>>no_kamar;
                cout<<"\n\t\tMenginap Lebih Dari 5 Hari diskon 2% perhari";
                cout<<"\n\t\tLama Menginap               : "; cin>>lama;

                if(lama>=5)
                {
                                diskon=0.2;
                }
                else
                {
                                diskon=0;
                }
                cout<<"\n\t\tTanggal Check In [DDMMYY]   : ";cin>>checkin;
                cout<<"\n\t\tTanggal Check Out [DDMMYY]  : ";cin>>checkout;

      system ("cls");
      byr:
    cout<<endl<<endl;
    cout<<"\n\n\n\t                 Jenis Pembayaran yang Tersedia :"<<endl;
    cout<<"\t   -------------------------------------------------------------";
    cout<<endl<<endl;
    cout<<"\n\t\t               1. Mandiri";
    cout<<"\n\n\t\t               2. BNI";
    cout<<"\n\n\t\t               3. Cash";
    cout<<"\n\n\n\n\tPilihan Anda (1-3)    : "; cin>>a;
    switch (a)
    {
    case 1:
        jp="Mandiri";
        cout<<"\n\n\t Kode Pembayaran Telah dikirim ke Email Anda.";
        break;
    case 2:
        jp="BNI";
        cout<<"\n\n\t Kode Pembayaran Telah dikirim ke Email Anda.";
        break;
    case 3:
        jp="Cash";
        cout<<"\n\n\t Pelunasan Pembayaran maksimal H-1 Check In.";
        break;
    default:
        cout<<"\n\n\t   (Maaf, pilihan anda tidak terdaftar. silahkan pilih 1-3.";
        cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
        getch();

}

        system("cls");
        rincian:
      cout<<"\n\n                        === HOTEL ORION === HOTEL ORION === HOTEL ORION === HOTEL ORION ==="<<endl;
                cout<<"\n\n\n\n\t\tData Pemesanan Kamar"<<endl;
      cout<<"\t\t=================================================================================";
                cout<<"\n\t\tNama Pemesan     : "<<customer;
                cout<<"\n\t\tID Pemesan       : "<<id_customer;
                cout<<"\n\t\tAlamat           : "<<alamat;
                cout<<"\n\t\tNo Telp/HP       : "<<hp;
                cout<<"\n\t\tTipe Kamar       : "<<fixkam;
                cout<<"\n\t\tNo. Kamar        : ";
                if(no_kamar >= 1 && no_kamar <= 100)
                {
                                cout<<no_kamar;
                }
                else
                {
                                cout<<"\n\t\tMaaf Nomer Kamar Belum Tersedia";
                                cout<<"\n\t\tSilahkan Hubungi Resepsionis Untuk Pergantian Nomer";
                }
                cout<<"\n\t\tLama Menginap    : "<<lama<<" Hari";
                cout<<"\n\t\tTanggal Check in : "<<checkin;
                cout<<"\n\t\tTanggal Check out: "<<checkout;
                cout<<"\n\t\tHarga Perhari    : Rp. "<<harga_kamar;
                cout<<"\n\t\tHarga Kamar Total: Rp. "<<lama*harga_kamar;
                cout<<"\n\t\tDiskon           : Rp. "<<diskon*harga_kamar<<endl;
                total=harga_kamar*lama-(diskon*harga_kamar);
      cout<<"\t\t=================================================================================";
                cout<<"\n\n\t\tBiaya Total      : Rp. "<<total;
                cout<<"\n\n\t\tJenis Pembayaran : "<<jp;

  cout<<"\n\t\t=================================================================================";

                cout<<"\n\n\t\tTerima Kasih Telah Memilih Hotel Orion";
                cout<<"\n\t\tSebagai Tempat Peristirahatan Anda";
                cout<<endl;
                cout<<"\n\n\t\tApakah Anda Ingin Memesan Kamar Lagi ? [Y/N]";cin>>jwb;
                if(jwb=="Y" || jwb=="y")
                {
                                goto awal;
                }
                else
                {
                                cout<<"\n\n\t\tTerima Kasih Atas Kunjungannya";
                }
                getch();
}

