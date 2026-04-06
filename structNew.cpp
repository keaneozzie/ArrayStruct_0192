#include <iostream>
using namespace std;

struct orang 
{
    string nama;
    string alamat;
    int umur;
};

int main(){
    orang mhs;
    cout << "nama : ";
    cin >> mhs.nama;
    cout << "alamat : ";
    cin >> mhs.alamat;
    cout << "umur : ";
    cin >> mhs.umur;
    cout << endl;

    // tampilkan 
    cout << "Nama : " << mhs.nama << endl;
    cout << "alamat : " << mhs.alamat << endl;
    cout << "umur : " << mhs.umur << endl;
}