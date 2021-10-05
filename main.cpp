#include <iostream>

using namespace std;

int main()
{
    int vek,f,vz;
    string jmeno;
    string prijmeni;

    cout << "jmeno: ";
    cin >> jmeno;
    cout << "prijmeni: ";
    cin >> prijmeni;

    cout << "zadej vek " << endl;
    cin >> vek;
    if (vek<0){
            cout << "vek neni v platnem rozsahu" << endl;
    }
    else if (vek>150){
        cout << "vek neni v platnem rozsahu" << endl;
    }
    else {
        cout << "vek v platnem rozsahu" << endl;
    }

    cout << "zadej vysku " << endl;
    cin >> f;
    if (f<0){
            cout << "vyska neni v platnem rozsahu" << endl;
    }
    else if (f>250){
        cout << "vyska neni v platnem rozsahu" << endl;
    }
    else {
        cout << "vyska v platnem rozsahu" << endl;
    }

cout << "dosazene vzdelani (ZS=1,SS=2,VS=3): ";
    cin >> vz;

     if (vz==1){
            cout << " " << endl;
    }
    else if (vz==2){
        cout << " " << endl;
    }
    else if (vz==3){
        cout << " " << endl;
    }
    else {
        cout << "spatny format" << endl;
    }



    cout << " Jmeno a prijmeni: " << jmeno << " " << prijmeni << endl;
    cout << " Vek: " << vek << endl;
    cout << " Vyska: " << f << endl;
    cout << " Dosazene vzdelani: " << vz << endl;
    return 0; //konec prikazu
}
