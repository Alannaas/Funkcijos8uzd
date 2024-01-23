//sukuriame bibliotekas
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

//antrinës funkcijos
int number() { //funkcija, kuri sukuria atsitiktiná numerá

ofstream fout("skaiciai.txt", ios_base::app);
int temp = rand() % 10;
fout << temp << " ";
return temp;
}

int isvedimas(int temp) { //funkcija, kuri iðveda informacijà
cout << temp << " ";
}

void istrynimas() { //funkcija, kuri iðvalo failo duomenis

string temp;
cout << "\n\nAr norite isvalyti faila? (t/n): ";
cin >> temp;
if (temp == "t") {
    ofstream fout("skaiciai.txt", ios_base::trunc);
    fout.close();
    cout << "Failas isvalytas";
}

}
//pagrindinë funkcija
int main() {

srand((unsigned) time(NULL)); //atsitiktiniu skaiciu generavimui priskiriam laiko seed'a

for (int i = 0; i < 100; i++) isvedimas(number()); //funkcijà veikiame 100 kartø
istrynimas(); //paklausiae ar reikia iðtrinti failà

return 0;
}

