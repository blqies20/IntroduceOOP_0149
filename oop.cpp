#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    int nim;
    string nama;
    float nilai;
    void printData(){
        cout << "NIM = " << nim << endl;
        cout << "Nama = " << nama << endl;
        cout << "Nilai = " << nilai << endl;
    }
};

int main()
{
    Mahasiswa mhs;
    mhs.nim = 20210140149;
    mhs.nama = "Balqis Eka Maharani";
    mhs.nilai = 100;

    mhs.printData();
}