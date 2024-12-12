#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int dimensiBenda, jumlahSisi;
    int pilihBangun, jenisBangun;
    float jarijari, sudutPusat;
    float sisi, sisiA, sisiB, sisiC, alas, tinggi, d1, d2, panjang, lebar, h;
    float luas, volume;

    cout << "=== Welcome to Geometry Land ===" << endl;
    cout << "Pilih dimensi benda: " << endl;
    cout << "1. 2D" << endl;
    cout << "2. 3D" << endl;
    cout << ">> ";
    cin >> dimensiBenda;

    switch(dimensiBenda){
    case 1:{
        cout << "Pilih jumlah sisi: " << endl;
        cout << "1. Sisi tak terhingga" << endl;
        cout << "2. 3 sisi" << endl;
        cout << "3. 4 sisi" << endl;
        cout << ">> ";
        cin >> jumlahSisi;


            switch(jumlahSisi){
            case 1:{
                cout << "Pilih bangun: " << endl;
                cout << "1. Lingkaran" << endl;
                cout << "2. Juring" << endl;
                cout << ">> ";
                cin >> pilihBangun;

                    switch(pilihBangun){
                    case 1:{
                        cout << "Masukkan panjang jari-jari lingkaran: ";
                        cin >> jarijari;

                        if(jarijari <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            luas = M_PI * jarijari * jarijari;
                            cout << "Luas lingkaran: " << luas << " cm2" << endl;
                        }
                        break;
                    }
                    case 2:{
                        cout << "Masukkan sudut pusat juring: ";
                        cin >> sudutPusat;
                        cout << "Masukkan panjang jari-jari juring: ";
                        cin >> jarijari;

                        if(sudutPusat <= 0 || jarijari <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            luas = (sudutPusat/360.0) * M_PI * jarijari * jarijari;
                            cout << "Luas juring: " << luas << " cm2" << endl;
                        }
                        break;
                    }
                    default:{
                        cout << "Pilihan harus angka 1 atau 2!";
                        break;
                    }
                    }
                break;
            }
            case 2:{
                cout << "Pilih bangun: " << endl;
                cout << "1. Segitiga siku-siku" << endl;
                cout << "2. Segitiga sembarang" << endl;
                cout << ">> ";
                cin >> pilihBangun;

                    switch(pilihBangun){
                    case 1:{
                        cout << "Masukkan panjang alas: ";
                        cin >> alas;
                        cout << "Masukkan tinggi: ";
                        cin >> tinggi;

                        if(alas <= 0 || tinggi <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            luas = (alas * tinggi) / 2.0;
                            cout << "Luas segitiga siku-siku: " << luas << " cm2" << endl;
                        }
                        break;
                    }
                    case 2:{
                        cout << "Masukkan panjang sisi a: ";
                        cin >> sisiA;
                        cout << "Masukkan panjang sisi b: ";
                        cin >> sisiB;
                        cout << "Masukkan panjang sisi c: ";
                        cin >> sisiC;

                        if(sisiA <= 0 || sisiB <= 0 || sisiC <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            sisi = (sisiA + sisiB + sisiC) / 2.0;
                            luas = sqrt(sisi*(sisi-sisiA)*(sisi-sisiB)*(sisi-sisiC));
                            cout << "Luas segitiga sembarang: " << luas << " cm2" << endl;
                        }
                        break;
                    }
                    default:{
                        cout << "Pilihan harus angka 1 atau 2!";
                        break;
                    }
                    }
                break;
            }
            case 3:{
                cout << "Pilih bangun: " << endl;
                cout << "1. Persegi/Persegi panjang" << endl;
                cout << "2. Trapesium" << endl;
                cout << "3. Layang-layang" << endl;
                cout << ">> ";
                cin >> pilihBangun;

                    switch(pilihBangun){
                    case 1:{
                        cout << "Masukkan panjang: ";
                        cin >> panjang;
                        cout << "Masukkan lebar: ";
                        cin >> lebar;

                        if(panjang <= 0 || lebar <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            luas = panjang * lebar;
                            cout << "Luas persegi/persegi panjang: " << luas << " cm2" << endl;
                        }
                        break;
                    }
                    case 2:{
                        cout << "Masukkan panjang sisi atas: ";
                        cin >> sisiA;
                        cout << "Masukkan panjang sisi bawah: ";
                        cin >> sisiB;
                        cout << "Masukkan tinggi: ";
                        cin >> tinggi;

                        if(sisiA <= 0 || sisiB <= 0 || tinggi <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            luas = (sisiA + sisiB) / 2.0 * tinggi;
                            cout << "Luas trapesium: " << luas << " cm2" << endl;
                        }
                        break;
                    }
                    case 3:{
                        cout << "Masukkan panjang diagonal 1: ";
                        cin >> d1;
                        cout << "Masukkan panjang diagonal 2: ";
                        cin >> d2;

                        if(d1 <= 0 || d2 <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            luas = (d1*d2) / 2.0;
                            cout << "Luas layang-layang: " << luas << " cm2" << endl;
                        }
                        break;
                    }
                    default:{
                        cout << "Pilihan harus angka 1, 2, atau 3!";
                        break;
                    }
                    }
                break;
            }
            default:{
                cout << "Pilihan harus angka 1, 2, atau 3!";
                break;
            }
            }
        break;
    }
    case 2:{
        cout << "Pilih jenis bangun: " << endl;
        cout << "1. Prisma" << endl;
        cout << "2. Limas" << endl;
        cout << "3. Bangun Putar" << endl;
        cout << ">> ";
        cin >> jenisBangun;

            switch(jenisBangun){
            case 1:{
                cout << "Pilih bangun: " << endl;
                cout << "1. Prisma Segitiga" << endl;
                cout << "2. Prisma Segiempat" << endl;
                cout << ">> ";
                cin >> pilihBangun;

                    switch(pilihBangun){
                    case 1:{
                        cout << "Masukkan panjang alas segitiga: ";
                        cin >> alas;
                        cout << "Masukkan tinggi segitiga: ";
                        cin >> tinggi;
                        cout << "Masukkan tinggi prisma: ";
                        cin >> h;

                        if(alas <= 0 || tinggi <= 0 || h <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            volume = ((alas*tinggi)/2.0) * h;
                            cout << "Volume prisma segitiga: " << volume << " cm3" << endl;
                        }
                        break;
                    }
                    case 2:{
                        cout << "Masukkan panjang alas: ";
                        cin >> alas;
                        cout << "Masukkan lebar alas: ";
                        cin >> lebar;
                        cout << "Masukkan tinggi prisma: ";
                        cin >> h;

                        if(alas <= 0 || lebar <= 0 || h <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            volume = alas * lebar * h;
                            cout << "Volume prisma segiempat: " << volume << " cm3" << endl;
                        }
                        break;
                    }
                    default:{
                        cout << "Pilihan harus angka 1 atau 2!";
                        break;
                    }
                    }
                break;
            }
            case 2:{
                cout << "Pilih bangun: " << endl;
                cout << "1. Limas Segitiga" << endl;
                cout << "2. Limas Segiempat" << endl;
                cout << ">> ";
                cin >> pilihBangun;

                    switch(pilihBangun){
                    case 1:{
                        cout << "Masukkan panjang alas segitiga: ";
                        cin >> alas;
                        cout << "Masukkan tinggi segitiga: ";
                        cin >> tinggi;
                        cout << "Masukkan tinggi limas: ";
                        cin >> h;

                        if(alas <= 0 || tinggi <= 0 || h <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            volume = (1.0/3.0)*((alas*tinggi)/2.0) * h;
                            cout << "Volume limas segitiga: " << volume << " cm3" << endl;
                        }
                        break;
                    }
                    case 2:{
                        cout << "Masukkan panjang alas: ";
                        cin >> alas;
                        cout << "Masukkan lebar alas: ";
                        cin >> lebar;
                        cout << "Masukkan tinggi limas: ";
                        cin >> h;

                        if(alas <= 0 || lebar <= 0 || h <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            volume = (1.0/3.0)*(alas*lebar) * h;
                            cout << "Volume limas segiempat: " << volume << " cm3" << endl;
                        }
                        break;
                    }
                    default:{
                        cout << "Pilihan harus angka 1 atau 2!";
                        break;
                    }
                    }
                break;
            }
            case 3:{
                cout << "Pilih bangun: " << endl;
                cout << "1. Bola" << endl;
                cout << "2. Tabung" << endl;
                cout << "3. Kerucut" << endl;
                cout << ">> ";
                cin >> pilihBangun;

                    switch(pilihBangun){
                    case 1:{
                        cout << "Masukkan panjang jari-jari bola: ";
                        cin >> jarijari;

                        if(jarijari <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            volume = (4.0/3.0)* M_PI * jarijari * jarijari * jarijari;
                            cout << "Volume bola: " << volume << " cm3" << endl;
                        }
                        break;
                    }
                    case 2:{
                        cout << "Masukkan panjang jari-jari tabung: ";
                        cin >> jarijari;
                        cout << "Masukkan tinggi tabung: ";
                        cin >> h;

                        if(jarijari <= 0 || h <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            volume = (M_PI * jarijari * jarijari) * h;
                            cout << "Volume tabung: " << volume << " cm3" << endl;
                        }
                        break;
                    }
                    case 3:{
                        cout << "Masukkan panjang jari-jari kerucut: ";
                        cin >> jarijari;
                        cout << "Masukkan tinggi kerucut: ";
                        cin >> h;

                        if(jarijari <= 0 || h <= 0){
                            cout << "Angka tidak boleh negatif atau nol!" << endl;
                        } else {
                            volume = (1.0/3.0)*(M_PI * jarijari * jarijari) * h;
                            cout << "Volume kerucut: " << volume << " cm3" << endl;
                        }
                        break;
                    }
                    default:{
                        cout << "Pilihan harus angka 1, 2, atau 3!";
                        break;
                    }
                    }
                break;
            }
            default:{
                cout << "Pilihan harus angka 1, 2, atau 3!";
                break;
            }
            }
        break;
    }
    default:{
        cout << "Pilihan harus angka 1 atau 2!";
        break;
    }
    }

    return 0;
}
