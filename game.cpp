#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "\n\t\t\tRaqamni top nomli o'yinimizga Xush Kelibsiz!"<< endl;
    cout << "Siz 1 dan 100 gacha son o'ylashingiz kerak. "
            "Sizda cheklangan tanlash imkoniyatlari bor "
            "tanlagan darajangizga qarab. Omad!"<< endl;
    while (true) {
        cout << "\nQiyinchilik darajasini tanlang: \n";
        cout << "1 oson!\t";
        cout << "2 o'rtacha!\t";
        cout << "3 qiyin!\t";
        cout << "0 o'yinni tugatish!\n" << endl;
        int darajaTanlovi;
        cout << "Raqamni kiriting: ";
        cin >> darajaTanlovi;
        srand(time(0));
        int maxfiySon = 1 + (rand() % 100);
        int oyinchiTanlovi;
        
        //Oson daraja
        if (darajaTanlovi == 1) {
            cout << "\nSizda 10 ta imkoniyat bor "
                    "1 dan 100 gacha bo'lgan maxfiy Sonni topishga.";
            int imkonQoldiq = 10;
            for (int i = 1; i <= 10; i++) {
                cout << "\n\nSonni kiriting: ";
                cin >> oyinchiTanlovi;
                if (oyinchiTanlovi == maxfiySon) {
                    cout << "Ajoyib o'yin! Siz yutdingiz, " << oyinchiTanlovi << " maxfiy son edi" << endl;
                    cout << "\t\t\t O'ynaganingiz uchun rahmat...."<< endl;
                    cout << "O'yinni biz bilan yana"
                            "o'ynang!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Yo'q, " << oyinchiTanlovi << " soni to'g'ri kelmaydi \n";
                    if (oyinchiTanlovi > maxfiySon) {
                        cout << "Maxfiy son "
                                "kichikroq "
                                "siz tanlagan sondan"
                             << endl;
                    }
                    else {
                        cout << "Maxfiy son "
                                "kattaroq "
                                "siz tanlagan sondan"
                             << endl;
                    }
                    imkonQoldiq--;
                    cout << imkonQoldiq << " ta imkoningiz qoldi. " << endl;
                    if (imkonQoldiq == 0) {
                        cout << "Siz topa olmadingiz "
                                "maxfiy sonni, bu "
                             << maxfiySon << "edi "
                             << ", Siz Yutkazdingiz!!\n\n";
                        cout << "O'yinni yutish uchun yana"
                                "o'ynang!!!\n\n";
                    }
                }
            }
        }
 
        // O'rta daraja
        else if (darajaTanlovi == 2) {
            cout << "\nSizda 7 ta imkoniyat bor "
                    "1 dan 100 gacha bo'lgan maxfiy Sonni topishga.";
            int imkonQoldiq = 7;
            for (int i = 1; i <= 7; i++) {
                cout << "\n\nSonni kiriting: ";
                cin >> oyinchiTanlovi;
                if (oyinchiTanlovi == maxfiySon) {
                    cout << "Ajoyib o'yin! Siz yutdingiz, "
                         << oyinchiTanlovi
                         << " maxfiy son edi" << endl;
                    cout << "\t\t\t O'ynaganingiz uchun rahmat...."
                         << endl;
                    cout << "O'yinni biz bilan yana "
                            "o'ynang!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Yo'q' " << oyinchiTanlovi
                         << " soni to'g'ri kelmaydi\n";
                    if (oyinchiTanlovi > maxfiySon) {
                        cout << "Maxfiy son "
                                "kichikroq "
                                "siz tanlagan sondan"
                             << endl;
                    }
                    else {
                        cout << "Maxfiy son "
                                "kattaroq  "
                                "siz tanlagan sondan"
                             << endl;
                    }
                    imkonQoldiq--;
                    cout << imkonQoldiq << " ta imkoningiz qoldi. "
                         << endl;
                    if (imkonQoldiq == 0) {
                        cout << "Siz topa olmadingiz "
                                "maxfiy sonni, bu "
                             << maxfiySon << " edi"
                             << ", Siz Yutkazdingiz!!\n\n";
                        cout << "O'yinni biz bilan yana "
                                "o'ynang!!\n\n";
                    }
                }
            }
        }
        // Qiyin daraja
        else if (darajaTanlovi == 3) {
            cout << "\nSizda 5 ta imkoniyat bor "
                    "1 dan 100 gacha bo'lgan maxfiy Sonni topishga.";
            int imkonQoldiq = 5;
            for (int i = 1; i <= 5; i++) {
                cout << "\n\nSonni kiriting: ";
                cin >> oyinchiTanlovi;
                if (oyinchiTanlovi == maxfiySon) {
                    cout << "Ajoyib o'yin! Siz yutdingiz, "
                         << oyinchiTanlovi
                         << " maxfiy son edi" << endl;
                    cout << "\t\t\t O'ynaganingiz uchun rahmat...."
                         << endl;
                    cout << "O'yinni biz bilan yana "
                            "o'ynang!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Yo'q' " << oyinchiTanlovi
                         << " soni to'g'ri kelmaydi\n";
                    if (oyinchiTanlovi > maxfiySon) {
                        cout << "Maxfiy son "
                                "kichikroq "
                                "siz tanlagan sondan"
                             << endl;
                    }
                    else {
                        cout << "Maxfiy son "
                                "kattaroq  "
                                "siz tanlagan sondan"
                             << endl;
                    }
                    imkonQoldiq--;
                    cout << imkonQoldiq << " ta imkoningiz qoldi. "
                         << endl;
                    if (imkonQoldiq == 0) {
                        cout << "Siz topa olmadingiz "
                                "maxfiy sonni, bu "
                             << maxfiySon << " edi"
                             << ", Siz Yutkazdingiz!!\n\n";
                        cout << "O'yinni biz bilan yana "
                                "o'ynang!!\n\n";
                    }
                }
            }
        }
        // O'yinni tugatish
        else if (darajaTanlovi == 0) {
            exit(0);
        }
        else {
            cout << "Xato tanlov, O'yinni o'ynash uchun "
                    "ushbu raqamlardan birini tanlang! (0,1,2,3)"
                 << endl;
        }
    }
    return 0;
}
