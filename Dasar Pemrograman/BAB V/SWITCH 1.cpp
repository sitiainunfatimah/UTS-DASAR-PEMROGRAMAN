#include <iostream>
using namespace std;

int main()
{
    int pilihan;

    cout << " Staf Pengajar Pemrograman C++:" << endl;
    cout << " =====================================" << endl;
    cout << " 1. Nur Alamsyah        \n" << endl;
    cout << " 2. Haldi Budiman      \n" << endl;
    cout << " 3. Yusri Ikhwani     \n" << endl;
    cout << " 4. Desi Wundandari       \n" << endl;
    cout << " 5. Rais Fathony      \n" << endl;
    cout << " 6. Aulia Rahman       \n" << endl;
    cout << " 7. Zainuddin        \n" << endl;
    cout << " 8. Wagino           \n" << endl;
    cout << " 9. Rasyidin         \n" << endl;
    cout << " 10. Ramdhani         \n" << endl;

    cout << " Staf Pemrograman C++ :";
    cin >> pilihan;
    cout << endl;

    switch (pilihan)

    {
    case 1:
        cout << " Pilihan anda benar|\n" << endl;
        break;
    case 2:
        cout << " Pilihan anda benar \n" << endl;
        break;
    case 3:
        cout << " Pilihan anda salah \n" << endl ;
        break;
    case 4:
        cout << " Piliham anda salah \n" << endl;
        break;
    case 5:
        cout << " Pilihan anda benar \n" << endl;
        break;
    case 6:
        cout << " Pilihan anda salah \n" << endl;
        break;
    case 7:
        cout << " Pilihan anda benar \n" << endl;
        break;
    case 8:
        cout << " Pilihan anda benar \n" << endl;
        break;
    case 9:
        cout << " Pilihan anda salah \n" << endl;
        break;
    case 10:
        cout << " Pilihan anda benar \n" << endl;
        break;
    default:
        cout << " Pilihan anda tidak ada salam daftar \n \n";
    }
    return 0;
}
