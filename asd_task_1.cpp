/**
    NAMA  : Abram
    NIM   : 1301154169
    KELAS : If 39-01
**/


#include <iostream>

using namespace std;



int nilai,uass,utss,tubess,a,b,c,d,e,hasil;


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main()
{
    main_menu();
    return 0;
}

void main_menu()
{
    /**
    - fungsi berisi pilihan menu di dalam aplikasi:
    daftar menu:
    1. set standar index nilai
    2. set proporsi nilai
    3. input nilai
    4. keluar
    **/

    int pilihan;
    do

    {
        cout << "      MENU" << endl;
        cout << "1. Set standar index nilai"<<endl;
        cout << "2. Set proporsi nilai"<<endl;
        cout << "3. Input nilai"<<endl;
        cout << "4. Keluar"<<endl;
        cout << "Masukkan pilihan"<< endl;
        cin >> pilihan;
        switch (pilihan)
        {
        case 1 :
            set_standar();
            break;
        case 2 :
            set_proporsi_nilai();
            break;
        case 3 :
            input_nilai();
            break;
        }
    }
    while(pilihan !=4);
    thank_you();
}


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    do
    {
        cout <<"Masukkan prosentase UTS = ";
        cin >> utss;
        cout <<"Masukkan prisentase UAS = ";
        cin >> uass;
        cout <<" Masukkan prosentase TUBES = ";
        cin >> tubess;
        if (utss + uass + tubess != 100)
        {
            cout << "Prosentase max 100, input ulang"<<endl<<endl;
        }
    }
    while (utss + uass + tubess != 100);
}

void set_standar()
{
/**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    do
    {
        cout << "Masukkan nilai minimal A = ";
        cin >> a;
        cout << "Masukkan nilai minimal B = ";
        cin >> b;
        cout << "Masukkan nilai minimal C = ";
        cin >> c;
        cout << "Masukkan nilai minimal D = ";
        cin >> d;

        if ((a<=b)||(b<=c)||(c<=d)||(d<=e))
            cout << "Nilai yang diinputkan salah, input ulang";
    }
    while ((a<=b)||(b<=c)||(c<=d)||(d<=e));
}
char hitung_index(double uts, double uas, double tubes)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    cout << "Nilai anda = ";
    hasil = (utss*uts/100)+(uass*uas/100)+(tubess*tubes/100);
    if (hasil >= a)
        cout <<"A";
    else if (hasil >= b)
        cout <<"B";
    else if (hasil >= c)
        cout <<"C";
    else if (hasil >= d)
        cout <<"D";
    else
        cout << "E";
        cout<<endl<<endl;

    return index;
}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    cout <<"Masukkan nilai UTS = ";
    cin >> uts;
    cout <<"Masukkan nilai UAS = ";
    cin >> uas;
    cout <<"Masukkan nilai TUBES = ";
    cin >> tubes;
    hitung_index(uts,uas,tubes);
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    cout << "THANK YOU";
}
