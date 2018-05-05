#include <iostream>
#include <stdlib.h>

using namespace std;
#define harga5 50000
#define harga2 20000
#define harga1 100000
#define admin 5000

int main(){
awal:
    int listharga;
    long int harga, total, kali[1], uangtunai, kembalian, jumlah;
    char thanks, belilagi, pesanulang;
    do
    {
        system("cls");
        cout<<" Muhammad Azhar Amirullah :17053040"<<endl;
        cout<<" Ahmad Abdul Hamid        :17053010"<<endl;
        cout<<" Edward Kusumah           :17053015"<<endl;
        cout<<" ________________________________________________________________"<<endl;
        cout<<"             Program Toko Token Listrik Mitra Azhario"<<endl;
        cout<<"                Kedungpring Balongpanggang Gresik"<<endl;
        cout<<" ________________________________________________________________"<<endl;
        cout<<" ** PILIH ** " <<endl;
        cout<<" LIST HARGA TOKEN LISTRIK" << endl;
        cout<<"  ______________________________________________________________"<< endl;
        cout<<" | kode |     daya     |     jumlah kwh     |       harga       |"<<endl;
        cout<<" |______|______________|____________________|___________________|"<<endl;
        cout<<" |   1  | r1/2200      |         22,1       |   (Rp. 20.000)    |"<<endl;
        cout<<" |   2  | r1/2200      |         57,5       |   (Rp. 50.000)    |"<<endl;
        cout<<" |   3  | r1/2200      |         117,9      |   (Rp. 100.000)   |"<<endl;
        cout<<" |   4  | r1/1300      |         9,5        |   (Rp. 50.000)    |"<<endl;
        cout<<" |______|______________|____________________|___________________|"<<endl;
        cout<<endl;
        cout<<" Pilihan Token Listrik Yang Akan Di Beli : "; cin>>listharga;

        if(listharga == 1){
            system("cls");
            cout<<" Muhammad Azhar Amirullah :17053040"<<endl;
            cout<<" Ahmad Abdul Hamid        :17053010"<<endl;
            cout<<" Edward Kusumah           :17053015"<<endl;
            cout<<" _____________________________________________________________________"<<endl;
            cout<<"              Program Toko Token Listrik Mitra Azhario"<<endl;
            cout<<"                  Kedungpring Balongpanggang Gresik"<<endl;
            cout<<" _____________________________________________________________________"<<endl;
            cout<<" ** Paket listrik yang anda pilih ** "<<endl;
            cout<<" daya              = r1/2200"<<endl;
            cout<<" Jumlah kwh        = 22,1"<<endl;
            cout<<" Harga             = Rp. 20.000"<<endl;
            cout<<" Jumlah pembelian  = "; cin>>kali[1];
            harga=harga2;
            total=harga*kali[1];
            jumlah=total+admin;
            cout<<" Total                     = "<<total<<endl;
            cout<<" Admin                     = "<<admin;
            cout<<" \n\n\n";
        }   else

        if (listharga == 2) {
            system("cls");
            cout<<" Muhammad Azhar Amirullah :17053040"<<endl;
            cout<<" Ahmad Abdul Hamid        :17053010"<<endl;
            cout<<" Edward Kusumah           :17053015"<<endl;
            cout<<"____________________________________________________________________________"<<endl;
            cout<<"                           Program Toko Token Listrik Mitra Azhario"<<endl;
            cout<<"                               Kedungpring Balongpanggang Gresik"<<endl;
            cout<<"____________________________________________________________________________"<<endl;
            cout<<"** Paket listrik yang anda pilih ** "<<endl;
            cout<<"daya              = r1/2200"<<endl;
            cout<<"Jumlah kwh        = 57,5"<<endl;
            cout<<"Harga             = Rp. 50.000"<<endl;
            cout<<"Jumlah pembelian  = "; cin>>kali[1];
            harga=harga5;
            total=harga*kali[1];
            jumlah=total+admin;
            cout<<"Total                     = "<<total<<endl;
            cout<<"Admin                     = "<<admin;
            cout<<"\n\n\n";
        }   else

        if (listharga == 3) {
            system("cls");
            cout<<" Muhammad Azhar Amirullah :17053040"<<endl;
            cout<<" Ahmad Abdul Hamid        :17053010"<<endl;
            cout<<" Edward Kusumah           :17053015"<<endl;
            cout<<"____________________________________________________________________________"<<endl;
            cout<<"                           Program Toko Token Listrik Mitra Azhario"<<endl;
            cout<<"                               Kedungpring Balongpanggang Gresik"<<endl;
            cout<<"____________________________________________________________________________"<<endl;
            cout<<"** Paket listrik yang anda pilih ** "<<endl;
            cout<<"daya              = r1/2200"<<endl;
            cout<<"Jumlah kwh        = 117,9"<<endl;
            cout<<"Harga             = Rp. 100.000"<<endl;
            cout<<"Jumlah pembelian  = "; cin>>kali[1];
            harga=harga1;
            total=harga*kali[1];
            jumlah=total+admin;
            cout<<"Total                     = "<<total<<endl;
            cout<<"Admin                     = "<<admin;
            cout<<"\n\n\n";
        }   else

        if (listharga == 4) {
            system("cls");
            cout<<" Muhammad Azhar Amirullah :17053040"<<endl;
            cout<<" Ahmad Abdul Hamid        :17053010"<<endl;
            cout<<" Edward Kusumah           :17053015"<<endl;
            cout<<"____________________________________________________________________________"<<endl;
            cout<<"                           Program Toko Token Listrik Mitra Azhario"<<endl;
            cout<<"                               Kedungpring Balongpanggang Gresik"<<endl;
            cout<<"____________________________________________________________________________"<<endl;
            cout<<"** Paket listrik yang anda pilih ** "<<endl;
            cout<<"daya              = r1/1300"<<endl;
            cout<<"Jumlah kwh        = 9,5"<<endl;
            cout<<"Harga             = Rp. 50.000"<<endl;
            cout<<"Jumlah pembelian  = "; cin>>kali[1];
            harga=harga5;
            total=harga*kali[1];
            jumlah=total+admin;
            cout<<"Total                     = "<<total<<endl;
            cout<<"Admin                     = "<<admin;
            cout<<"\n\n\n";
        }   else
                        if(listharga > 4 ){ //kalau yang diinput lebih dari 4 maka akan muncul pesan seperti dibawah ini
                            exit:
                                system("cls");
                                cout<<endl<<endl;
                                cout<<"\t\t -------------------------------------------------- "<<endl;
                                cout<<"\t\t|   Maaf! kami hanya menyediakan 4 pilihan paket   |"<<endl;
                                cout<<"\t\t|          Anda akan kembali ke menu awal          |"<<endl;
                                cout<<"\t\t -------------------------------------------------- "<<endl;

                                cout<<endl<<endl<<endl;
                                system("pause");
                                goto awal;}

            cout<<"\t*---------------------------------------------------*"<<endl;
            cout<<"\tTotal Yang Harus Dibayar     = Rp. "<<jumlah;
            cout<<"\n";
            cout<<"\tUang Tunai                   = Rp. "; cin>>uangtunai;
            kembalian=uangtunai-jumlah;
            cout<<"\t\t\t             ____________ -"<<endl;
            cout<<"\tKembalian Anda               = Rp. "<<kembalian<<endl<<endl;
            cout<<"\t*---------------------------------------------------*"<<endl;
            cout<<"Ingin Pesan Ulang ? (y/n) = "; cin>>pesanulang;} //mau pesen ulang atau tidak?
            while (pesanulang == 'y' || pesanulang == 'Y');         //kalo y, akaan dilempar kebagian awal:

    system("cls");
       for (thanks=0; thanks<3; thanks++)
        cout<<"\n\n";
       {cout<<"\t\t\t\t|-----------------------------------------------| "<<endl;
       cout<<"\t\t\t\t|:::.. Terimakasih telah datang ditoko kami ..::|"<<endl;
       cout<<"\t\t\t\t|-----------------------------------------------|"<<endl;}

    return 0;
}
