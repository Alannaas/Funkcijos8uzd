//sukuriame bibliotekas
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

//antrin�s funkcijos
int number() { //funkcija, kuri sukuria atsitiktin� numer�

ofstream fout("skaiciai.txt", ios_base::app);
int temp = rand() % 10;
fout << temp << " ";
return temp;
}

int isvedimas(int temp) { //funkcija, kuri i�veda informacij�
cout << temp << " ";
}

void istrynimas() { //funkcija, kuri i�valo failo duomenis

string temp;
cout << "\n\nAr norite isvalyti faila? (t/n): ";
cin >> temp;
if (temp == "t") {
    ofstream fout("skaiciai.txt", ios_base::trunc);
    fout.close();
    cout << "Failas isvalytas";
}

}
//pagrindin� funkcija
int main() {

srand((unsigned) time(NULL)); //atsitiktiniu skaiciu generavimui priskiriam laiko seed'a

for (int i = 0; i < 100; i++) isvedimas(number()); //funkcij� veikiame 100 kart�
istrynimas(); //paklausiae ar reikia i�trinti fail�

return 0;
}

