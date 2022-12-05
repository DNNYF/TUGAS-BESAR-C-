#include<iostream>
#include<conio.h>
#include<cstring>
#include<time.h>
#include<string>
#include<fstream>
using namespace std;

//Prototype
int airport();
void garis();
void menu_utama();
void cetak_tiket();
int kereta();
int jam_terbang();



int main()
{
int layanan;
menu_utama();
garis();
system("color f4");
cout << "\nPilih Menu (1..2) 	 " << endl;
cout << "1. Pesan Tiket Pesawat" << endl;
cout << "2. Pesan Tiket Kereta" << endl;
cout << "Pilih Layanan		: "; cin >> layanan;

if (layanan == 1){
	airport();
}else if (layanan == 2){
	kereta();

}

}

void menu_utama(){
	garis();
    cout << "|   # Nama Anggota Kelompok #  	 |   NIM   |" << endl;
    cout << "| 1. Denny Firmansyah Suwardi  	 | 2203067 |" << endl;
    cout << "| 2. Gilang Kurniawansyah      	 | 2203071 |" << endl;
    cout << "| 3. Mochamad Rizky Maulana    	 | 2203077 |" << endl;
    cout << "| 4. Mohamad Rifqi Maulana     	 | 2203079 |" << endl;
}

int airport(){
	char maskapai[20],nama[20],kode_penerbangan,rute[30],jawab;
int jml,cetak_tiket;
long int harga,total;
system("color f4");
system("cls");

awal:

cout << "\n\t      =======# Gapura AirPort #=======";
cout << "\n _________________________________________________________ ";
cout << "\n| KODE PENERBANGAN |          RUTE         |   HARGA      |";
cout << "\n| 1.PDG-JKT        | Padang-Jakarta        | Rp. 500.000  |";
cout << "\n| 2.PDG-SIN        | Padang-Singapura      | Rp. 500.000  |";
cout << "\n| 3.JKT-LOM        | Jakarta-Lombok        | Rp. 700.000  |";
cout << "\n| 4.KL-PDG         | Kuala Lumpur-Padang   | Rp. 500.000  |";
cout << "\n| 5.JKT-SIN        | Jakarta-Singapura     | Rp. 550.000  |";
cout << "\n|_________________________________________________________|";
cout << "\n\n Nama Penumpang 	: ";cin>>nama;
cout << " Kode Penerbangan (1-5) : ";cin>>kode_penerbangan;

if (kode_penerbangan=='1')
{
strcpy(rute,"Padang - Jakarta");
strcpy(maskapai,"Lion Air");
harga=500000;
}

else if (kode_penerbangan=='2')
{
strcpy(rute,"Padang - Singapura");
strcpy(maskapai,"Air Asia");
harga=500000;
}

else if (kode_penerbangan=='3')
{
strcpy(rute,"Jakarta - Lombok");
strcpy(maskapai,"Garuda Indonesia");
harga=700000; }

else if (kode_penerbangan=='4')
{
strcpy(rute,"Kuala Lumpur - Padang");
strcpy(maskapai,"Air Asia");
harga=500000;
}
else if (kode_penerbangan=='5')
{
strcpy(rute,"Jakarta - Singapura");
strcpy(maskapai,"Sriwijata Air");
harga=550000;
}

else if(kode_penerbangan <='0' && kode_penerbangan > '5'){
    cout<<"\n Kode Pesawat yang Anda Masukan Salah"<<endl;
    cout<<"\n Mau Input Data Lagi [Y/T]?"; jawab=getch();
    if (jawab=='Y' || jawab == 'y'){
    system("cls");
    goto awal;
}else{
    return 0;
}
}

cout<<" Jumlah Tiket 		: ";cin>>jml;
garis();
total=jml*harga;
cout<<" Penumpang Yang Bernama\t: "<<nama<<endl;
cout<<" Maskapai\t\t: "<<maskapai<<endl;
cout<<" Rute\t\t\t: "<<rute<<endl;
cout<<" Jadwal Penerbangan\t: "<< jam_terbang()<<endl;
cout<<" Harga Tiket\t\t: "<<harga<<endl;
cout<<" Total Bayar\t\t: "<<total<<endl;
garis();


cout<<" Mau Input Data Lagi [Y/T]?";

jawab=getch();
    if (jawab=='Y' || jawab=='y'){
    system("cls");
    goto awal;

}

}



int kereta(){

struct
{ char kode[3], kelas, nama_orang[20], nama_kereta[15], nama_kelas[20];
  int jumbel, harga;
  long bayar, diskon, pembayaran, tot_bay, uang_kem;
}tiket;
char lagi;

atas:

system("cls");

cout << "\n\t =======# Gapura Station #=======";
cout << "\n ___________________________________ ";
cout << "\n| KODE KERETA      |    TUJUAN      |";
cout << "\n| 1. IMY           | Indramayu      |";
cout << "\n| 2. CRB           | Cirebon        |";
cout << "\n| 3. KNA           | Kuningan       |";
cout << "\n|___________________________________|";

cout<<"\n\nKode kereta[1..3]\t: ";cin>>tiket.kode;
cout<<"Kelas kereta[1..3]\t: ";cin>>tiket.kelas;
cout<<"Nama pemesan\t\t: ";cin>>tiket.nama_orang;
cout<<endl;
system("cls");
garis();
cout << "\t Selamat Datang Di Gapura Station\n";
garis();
cout<<""<<endl;

if (strcmpi(tiket.kode, "1")==0){
	strcpy(tiket.nama_kereta, "Indramayu");
    if(tiket.kelas=='1'){
    	strcpy(tiket.nama_kelas, "Executive");
    	tiket.harga=500000;
    	}
    else if(tiket.kelas=='2'){
    	strcpy(tiket.nama_kelas, "Bisnis");
    	tiket.harga=250000;
    	}
    else if(tiket.kelas=='3'){
    	strcpy(tiket.nama_kelas, "Ekonomi");
    	tiket.harga=100000;
   		 }
	else{
		strcpy(tiket.nama_kelas, "salah kode");
    	}
}
if (strcmpi(tiket.kode, "2")==0){
	strcpy(tiket.nama_kereta, "Cirebon");
    if(tiket.kelas=='1'){
		strcpy(tiket.nama_kelas, "Executive");
    	tiket.harga=500000;
		}
	else if(tiket.kelas=='2'){
		strcpy(tiket.nama_kelas, "Bisnis");
    	tiket.harga=400000;
    	}
	else if(tiket.kelas=='3'){
		strcpy(tiket.nama_kelas, "Ekonomi");
    	tiket.harga=200000;
		}
	else{
		strcpy(tiket.nama_kelas, "salah kode");
    }
}

if (strcmpi(tiket.kode, "3")==0){
	strcpy(tiket.nama_kereta, "Kuningan");
    if(tiket.kelas=='1'){
		strcpy(tiket.nama_kelas, "Executive");
    	tiket.harga=600000;
		}
    else if(tiket.kelas=='2'){
		strcpy(tiket.nama_kelas, "Bisnis");
    	tiket.harga=350000;
		}
    else if(tiket.kelas=='3'){
		strcpy(tiket.nama_kelas, "Ekonomi");
    	tiket.harga=175000;}
    else{
		strcpy(tiket.nama_kelas, "salah kode");
    }
}

cout<<" Nama Pemesan		:"<<tiket.nama_orang<<endl;
cout<<" Nama Kereta		:"<<tiket.nama_kereta<<endl;
cout<<" Kelas kereta		:"<<tiket.kelas<<endl;
cout<<" Nama kelas\t\t:"<<tiket.nama_kelas<<endl;
cout<<" Harga pertiket\t	:"<<tiket.harga<<endl;
cout<<" Jumlah pemesanan\t:";cin>>tiket.jumbel;

tiket.bayar=tiket.jumbel*tiket.harga;



if (tiket.jumbel>=10)
{tiket.diskon=tiket.bayar*0.25;}

else if (tiket.jumbel>5)
{tiket.diskon=tiket.bayar*0.1;}

else
{tiket.diskon=tiket.bayar*0;}


cout<<" Pembayaran\t\t:"<<tiket.bayar<<endl;
cout<<" Diskon\t\t\t:"<<tiket.diskon<<endl;

garis();
cout<<""<<endl;

tiket.tot_bay=tiket.bayar-tiket.diskon;
cout<<"Total pembayaran\t:  "<<tiket.tot_bay<<endl;
bayar:
cout<<"Uang Pembayaran\t\t: ";cin>>tiket.pembayaran;

tiket.uang_kem=tiket.pembayaran-tiket.tot_bay;
if(tiket.pembayaran >= tiket.tot_bay){
	cout<<"Uang kembali\t\t: "<<tiket.uang_kem<<endl;
}else{
	cout << "Uang Anda Tidak Cukup !! " << endl;
	goto bayar;

}
cout<<""<<endl;
cout<<""<<endl;
cout<<"ingin pilih lagi[y/t]        =";cin>>lagi;
if(lagi=='y' || lagi=='Y')
goto atas;
getch();
}


void garis(){
	cout<<" =========================================="<<endl;
}


int jam_terbang(){
int jam,mnt,x;
srand(time(NULL));

jam = (rand()%23);
if(rand()>1 && rand()<=9){
    jam = rand() + 9;
}else {
}
mnt = (rand()%5);
cout << jam << "." << mnt;
return rand()%9;
}


