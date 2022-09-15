#include <iostream>
using namespace std;

typedef struct date{
    int day;
    int month;
    int year;
};

int main()
{
    date d1;
    date d2;
    int value;
    int x;
    int y;
    int z;

    cout << "Masukkan tahun d1: ";
    cin >> d1.year;
    if (d1.year % 4 == 0){
        cout << "Masukkan bulan d1: ";
        cin >> d1.month;
        if (d1.month == 2){
            cout << "Masukkan hari d1: ";
            cin >> d1.day;
            if (d1.day > 29){
                cout << "Maksimal hari = 29" << endl;
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                while (d1.day > 29){
                    cout << "Maksimal hari = 29" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else if (d1.month == 11 || d1.month == 9 || d1.month == 6 || d1.month == 4){
            cout << "Masukkan hari d1: ";
            cin >> d1.day;
            if (d1.day > 30){
                cout << "Maksimal hari = 30" << endl;
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                while (d1.day > 30){
                    cout << "Maksimal hari = 30" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else if (d1.month == 1 || d1.month == 3 || d1.month == 5 || d1.month == 7 || d1.month == 8 || d1.month == 10 || d1.month == 12){
            cout << "Masukkan hari d1: ";
            cin >> d1.day;
            if (d1.day > 31){
                cout << "Maksimal hari = 31" << endl;
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                while (d1.day > 31){
                    cout << "Maksimal hari = 31" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else {
            cout << "Maksimal bulan = 12" << endl;
            cout << "Masukkan bulan d1: ";
            cin >> d1.month;
            while (d1.month > 12){
                cout << "Maksimal bulan = 12" << endl;
                cout << "Masukkan bulan d1: ";
                cin >> d1.month;
            }
            if (d1.month == 2){
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                if (d1.day > 29){
                    cout << "Maksimal hari = 29" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                    while (d1.day > 29){
                        cout << "Maksimal hari = 29" << endl;
                        cout << "Masukkan hari d1: ";
                        cin >> d1.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }else if (d1.month == 11 || d1.month == 9 || d1.month == 6 || d1.month == 4){
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                if (d1.day > 30){
                    cout << "Maksimal hari = 30" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                    while (d1.day > 30){
                        cout << "Maksimal hari = 30" << endl;
                        cout << "Masukkan hari d1: ";
                        cin >> d1.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }else if (d1.month == 1 || d1.month == 3 || d1.month == 5 || d1.month == 7 || d1.month == 8 || d1.month == 10 || d1.month == 12){
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                if (d1.day > 31){
                    cout << "Maksimal hari = 31" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                    while (d1.day > 31){
                        cout << "Maksimal hari = 31" << endl;
                        cout << "Masukkan hari d1: ";
                        cin >> d1.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }
        }
    }else {
        cout << "Masukkan bulan d1: ";
        cin >> d1.month;
        if (d1.month == 2){
            cout << "Masukkan hari d1: ";
            cin >> d1.day;
            if (d1.day > 28){
                cout << "Maksimal hari = 28" << endl;
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                while (d1.day > 28){
                    cout << "Maksimal hari = 28" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else if (d1.month == 11 || d1.month == 9 || d1.month == 6 || d1.month == 4){
            cout << "Masukkan hari d1: ";
            cin >> d1.day;
            if (d1.day > 30){
                cout << "Maksimal hari = 30" << endl;
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                while (d1.day > 30){
                    cout << "Maksimal hari = 30" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else if (d1.month == 1 || d1.month == 3 || d1.month == 5 || d1.month == 7 || d1.month == 8 || d1.month == 10 || d1.month == 12){
            cout << "Masukkan hari d1: ";
            cin >> d1.day;
            if (d1.day > 31){
                cout << "Maksimal hari = 31" << endl;
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                while (d1.day > 31){
                    cout << "Maksimal hari = 31" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else {
            cout << "Maksimal bulan = 12" << endl;
            cout << "Masukkan bulan d1: ";
            cin >> d1.month;
            while (d1.month > 12){
                cout << "Maksimal bulan = 12" << endl;
                cout << "Masukkan bulan d1: ";
                cin >> d1.month;
            }
            if (d1.month == 2){
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                if (d1.day > 28){
                    cout << "Maksimal hari = 28" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                    while (d1.day > 28){
                        cout << "Maksimal hari = 28" << endl;
                        cout << "Masukkan hari d1: ";
                        cin >> d1.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }else if (d1.month == 11 || d1.month == 9 || d1.month == 6 || d1.month == 4){
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                if (d1.day > 30){
                    cout << "Maksimal hari = 30" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                    while (d1.day > 30){
                        cout << "Maksimal hari = 30" << endl;
                        cout << "Masukkan hari d1: ";
                        cin >> d1.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }else if (d1.month == 1 || d1.month == 3 || d1.month == 5 || d1.month == 7 || d1.month == 8 || d1.month == 10 || d1.month == 12){
                cout << "Masukkan hari d1: ";
                cin >> d1.day;
                if (d1.day > 31){
                    cout << "Maksimal hari = 31" << endl;
                    cout << "Masukkan hari d1: ";
                    cin >> d1.day;
                    while (d1.day > 31){
                        cout << "Maksimal hari = 31" << endl;
                        cout << "Masukkan hari d1: ";
                        cin >> d1.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }
        }
    }

    cout << "Masukkan tahun d2: ";
    cin >> d2.year;
    if (d2.year % 4 == 0){
        cout << "Masukkan bulan d2: ";
        cin >> d2.month;
        if (d2.month == 2){
            cout << "Masukkan hari d2: ";
            cin >> d2.day;
            if (d2.day > 29){
                cout << "Maksimal hari = 29" << endl;
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                while (d2.day > 29){
                    cout << "Maksimal hari = 29" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else if (d2.month == 11 || d2.month == 9 || d2.month == 6 || d2.month == 4){
            cout << "Masukkan hari d2: ";
            cin >> d2.day;
            if (d2.day > 30){
                cout << "Maksimal hari = 30" << endl;
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                while (d2.day > 30){
                    cout << "Maksimal hari = 30" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else if (d2.month == 1 || d2.month == 3 || d2.month == 5 || d2.month == 7 || d2.month == 8 || d2.month == 10 || d2.month == 12){
            cout << "Masukkan hari d2: ";
            cin >> d2.day;
            if (d2.day > 31){
                cout << "Maksimal hari = 31" << endl;
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                while (d2.day > 31){
                    cout << "Maksimal hari = 31" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else {
            cout << "Maksimal bulan = 12" << endl;
            cout << "Masukkan bulan d2: ";
            cin >> d2.month;
            while (d2.month > 12){
                cout << "Maksimal bulan = 12" << endl;
                cout << "Masukkan bulan d2: ";
                cin >> d2.month;
            }
            if (d2.month == 2){
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                if (d2.day > 29){
                    cout << "Maksimal hari = 29" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                    while (d2.day > 29){
                        cout << "Maksimal hari = 29" << endl;
                        cout << "Masukkan hari d2: ";
                        cin >> d2.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }else if (d2.month == 11 || d2.month == 9 || d2.month == 6 || d2.month == 4){
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                if (d2.day > 30){
                    cout << "Maksimal hari = 30" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                    while (d2.day > 30){
                        cout << "Maksimal hari = 30" << endl;
                        cout << "Masukkan hari d2: ";
                        cin >> d2.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }else if (d2.month == 1 || d2.month == 3 || d2.month == 5 || d2.month == 7 || d2.month == 8 || d2.month == 10 || d2.month == 12){
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                if (d2.day > 31){
                    cout << "Maksimal hari = 31" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                    while (d2.day > 31){
                        cout << "Maksimal hari = 31" << endl;
                        cout << "Masukkan hari d2: ";
                        cin >> d2.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }
        }
    }else {
        cout << "Masukkan bulan d2: ";
        cin >> d2.month;
        if (d2.month == 2){
            cout << "Masukkan hari d2: ";
            cin >> d2.day;
            if (d2.day > 28){
                cout << "Maksimal hari = 28" << endl;
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                while (d2.day > 28){
                    cout << "Maksimal hari = 28" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else if (d2.month == 11 || d2.month == 9 || d2.month == 6 || d2.month == 4){
            cout << "Masukkan hari d2: ";
            cin >> d2.day;
            if (d2.day > 30){
                cout << "Maksimal hari = 30" << endl;
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                while (d2.day > 30){
                    cout << "Maksimal hari = 30" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else if (d2.month == 1 || d2.month == 3 || d2.month == 5 || d2.month == 7 || d2.month == 8 || d2.month == 10 || d2.month == 12){
            cout << "Masukkan hari d2: ";
            cin >> d2.day;
            if (d2.day > 31){
                cout << "Maksimal hari = 31" << endl;
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                while (d2.day > 31){
                    cout << "Maksimal hari = 31" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                }
                cout << "Inputan benar" << endl;
            }else {
                cout << "Inputan benar" << endl;
            }
        }else {
            cout << "Maksimal bulan = 12" << endl;
            cout << "Masukkan bulan d2: ";
            cin >> d2.month;
            while (d2.month > 12){
                cout << "Maksimal bulan = 12" << endl;
                cout << "Masukkan bulan d2: ";
                cin >> d2.month;
            }
            if (d2.month == 2){
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                if (d2.day > 28){
                    cout << "Maksimal hari = 28" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                    while (d2.day > 28){
                        cout << "Maksimal hari = 28" << endl;
                        cout << "Masukkan hari d2: ";
                        cin >> d2.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }else if (d2.month == 11 || d2.month == 9 || d2.month == 6 || d2.month == 4){
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                if (d2.day > 30){
                    cout << "Maksimal hari = 30" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                    while (d2.day > 30){
                        cout << "Maksimal hari = 30" << endl;
                        cout << "Masukkan hari d2: ";
                        cin >> d2.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }else if (d2.month == 1 || d2.month == 3 || d2.month == 5 || d2.month == 7 || d2.month == 8 || d2.month == 10 || d2.month == 12){
                cout << "Masukkan hari d2: ";
                cin >> d2.day;
                if (d2.day > 31){
                    cout << "Maksimal hari = 31" << endl;
                    cout << "Masukkan hari d2: ";
                    cin >> d2.day;
                    while (d2.day > 31){
                        cout << "Maksimal hari = 31" << endl;
                        cout << "Masukkan hari d2: ";
                        cin >> d2.day;
                    }
                    cout << "Inputan benar" << endl;
                }else {
                    cout << "Inputan benar" << endl;
                }
            }
        }
    }

    if (d1.day > d2.day){
        if (d1.month > d2.month){
            if (d1.year > d2.year){
                value = -1;
            }else if (d1.year < d2.year){
                y = d1.day - d2.day;
                value = d2.year - d1.year;
                x = value / 4;
                value = value - x;
                x = x * 366;
                value = value * 365;
                value = value + x;
                if(d1.year % 4 == 0 || d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value + 1;
                    }
                if(d1.year % 4 == 0 && d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value - 1;
                    }
                }
                }
                while (d2.month < d1.month){
                    if (d1.year % 4 == 0){
                        if (d2.month == 2){
                            value -= 29;
                        }else if (d2.month == 4 || d2.month == 6 || d2.month == 9 || d2.month == 11){
                            value -= 30;
                        }else {
                            value -= 31;
                        }
                    }else {
                        if (d2.month == 2){
                            value -= 28;
                        }else if (d2.month == 4 || d2.month == 6 || d2.month == 9 || d2.month == 11){
                            value -= 30;
                        }else {
                            value -= 31;
                        }
                    }
                    d2.month += 1;
                }
                value = value - y;
            }else if (d1.year == d2.year){
                value = -1;
            }
        }else if (d1.month < d2.month){
            if (d1.year > d2.year){
                value = -1;
            }else if (d1.year < d2.year){
                y = d1.day - d2.day;
                value = d2.year - d1.year;
                x = value / 4;
                value = value - x;
                x = x * 366;
                value = value * 365;
                value = value + x;
                if(d1.year % 4 == 0 || d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value + 1;
                    }
                if(d1.year % 4 == 0 && d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value - 1;
                    }
                }
                }
                while (d1.month < d2.month){
                    if (d1.year % 4 == 0){
                        if (d1.month == 2){
                            value += 29;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }else {
                        if (d1.month == 2){
                            value += 28;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }
                    d1.month += 1;
                }
                value = value - y;
            }else if (d1.year == d2.year){
                y = d1.day - d2.day;
                 while (d1.month < d2.month){
                    if (d1.year % 4 == 0){
                        if (d1.month == 2){
                            value += 29;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }else {
                        if (d1.month == 2){
                            value += 28;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }
                    d1.month += 1;
                }
                value = value - y;
            }
        }else if (d1.month == d2.month){
            if (d1.year > d2.year){
                value = -1;
            }else if (d1.year < d2.year){
                value = d2.year - d1.year;
                x = value / 4;
                value = value - x;
                x = x * 366;
                value = value * 365;
                value = value + x;
                y = d1.day - d2.day;
                value = value - y;
                if(d1.year % 4 == 0 || d2.year % 4 == 0){
                    if(d1.month > 2 && d2.month > 2){
                        value = value + 1;
                        }
                    }
                if(d1.year % 4 == 0 && d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value - 1;
                    }
                }
            }else if (d1.year == d2.year){
                value = -1;
            }
        }
    }else if (d1.day < d2.day){
        if (d1.month > d2.month){
            if (d1.year > d2.year){
                value = -1;
            }else if (d1.year < d2.year){
                z = d2.day - d1.day;
                value = d2.year - d1.year;
                x = value / 4;
                value = value - x;
                x = x * 366;
                value = value * 365;
                value = value + x;
                if(d1.year % 4 == 0 || d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value + 1;
                    }
                if(d1.year % 4 == 0 && d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value - 1;
                    }
                }
                }
                while (d2.month < d1.month){
                    if (d1.year % 4 == 0){
                        if (d2.month == 2){
                            value -= 29;
                        }else if (d2.month == 4 || d2.month == 6 || d2.month == 9 || d2.month == 11){
                            value -= 30;
                        }else {
                            value -= 31;
                        }
                    }else {
                        if (d2.month == 2){
                            value -= 28;
                        }else if (d2.month == 4 || d2.month == 6 || d2.month == 9 || d2.month == 11){
                            value -= 30;
                        }else {
                            value -= 31;
                        }
                    }
                    d2.month += 1;
                }
                value = value + z;
            }else if (d1.year == d2.year){
                value = -1;
            }
        }else if (d1.month < d2.month){
            if (d1.year > d2.year){
                value = -1;
            }else if (d1.year < d2.year){
                z = d2.day - d1.day;
                value = d2.year - d1.year;
                x = value / 4;
                value = value - x;
                x = x * 366;
                value = value * 365;
                value = value + x;
                if(d1.year % 4 == 0 || d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value + 1;
                    }
                if(d1.year % 4 == 0 && d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value - 1;
                    }
                }
                }
                while (d1.month < d2.month){
                    if (d1.year % 4 == 0){
                        if (d1.month == 2){
                            value += 29;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }else {
                        if (d1.month == 2){
                            value += 28;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }
                    d1.month += 1;
                }
                value = value + z;
            }else if (d1.year == d2.year){
                value = d2.day - d1.day;
                while (d1.month < d2.month){
                    if (d1.year % 4 == 0){
                        if (d1.month == 2){
                            value += 29;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }else {
                        if (d1.month == 2){
                            value += 28;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }
                    d1.month += 1;
                }
            }
        }else if (d1.month == d2.month){
            if (d1.year > d2.year){
                value = -1;
            }else if (d1.year < d2.year){
                value = d2.year - d1.year;
                x = value / 4;
                value = value - x;
                x = x * 366;
                value = value * 365;
                value = value + x;
                y = d2.day - d1.day;
                value = value + y;
                if(d1.year % 4 == 0 || d2.year % 4 == 0){
                    if(d1.month > 2 && d2.month > 2){
                        value = value + 1;
                        }
                    }
                if(d1.year % 4 == 0 && d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value - 1;
                    }
                }
            }else if (d1.year == d2.year){
                value = d2.day - d1.day;
            }
        }
    }else if (d1.day == d2.day){
        if (d1.month > d2.month){
            if (d1.year > d2.year){
                value = -1;
            }else if (d1.year < d2.year){
                value = d2.year - d1.year;
                x = value / 4;
                value = value - x;
                x = x * 366;
                value = value * 365;
                value = value + x;
                if(d1.year % 4 == 0 || d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value + 1;
                    }
                if(d1.year % 4 == 0 && d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value - 1;
                    }
                }
                }
                while (d2.month < d1.month){
                    if (d1.year % 4 == 0){
                        if (d2.month == 2){
                            value -= 29;
                        }else if (d2.month == 4 || d2.month == 6 || d2.month == 9 || d2.month == 11){
                            value -= 30;
                        }else {
                            value -= 31;
                        }
                    }else {
                        if (d2.month == 2){
                            value -= 28;
                        }else if (d2.month == 4 || d2.month == 6 || d2.month == 9 || d2.month == 11){
                            value -= 30;
                        }else {
                            value -= 31;
                        }
                    }
                    d2.month += 1;
                }
            }else if (d1.year == d2.year){
                value = -1;
            }
        }else if (d1.month < d2.month){
            if (d1.year > d2.year){
                value = -1;
            }else if (d1.year < d2.year){
                value = d2.year - d1.year;
                x = value / 4;
                value = value - x;
                x = x * 366;
                value = value * 365;
                value = value + x;
                if(d1.year % 4 == 0 || d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value + 1;
                    }
                if(d1.year % 4 == 0 && d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value - 1;
                    }
                }
                }
                while (d1.month < d2.month){
                    if (d1.year % 4 == 0){
                        if (d1.month == 2){
                            value += 29;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }else {
                        if (d1.month == 2){
                            value += 28;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }
                    d1.month += 1;
                }
            }else if (d1.year == d2.year){
                while (d1.month < d2.month){
                    if (d1.year % 4 == 0){
                        if (d1.month == 2){
                            value += 29;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }else {
                        if (d1.month == 2){
                            value += 28;
                        }else if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11){
                            value += 30;
                        }else {
                            value += 31;
                        }
                    }
                    d1.month += 1;
                }
            }
        }else if (d1.month == d2.month){
            if (d1.year > d2.year){
                value = -1;
            }else if (d1.year < d2.year){
                value = d2.year - d1.year;
                x = value / 4;
                value = value - x;
                x = x * 366;
                value = value * 365;
                value = value + x;
                }
                if(d1.year % 4 == 0 || d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value + 1;
                    }
                if(d1.year % 4 == 0 && d2.year % 4 == 0){
                    if (d1.month > 2 && d2.month > 2){
                        value = value - 1;
                    }
                }
            }
            }else if (d1.year == d2.year){
                value = 0;
            }
        }
        cout << value;
    }

