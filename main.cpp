#include <iostream>
using namespace std;
const int f = 256;
bool pal(char t[f], int c) {
    if (c == (strlen(t) - 1) / 2) {
        return true;
    }
    else {
        if (t[c] == t[strlen(t) - c - 1]) {
        pal(t, c + 1);
        }
        else {
        return false;
        }
    }
}
int main() {
    char t[f];
    char h[f];
    cout << "Vvedite predlozenie: ";
    gets (t);
    int k = 0;
    // for убирает пробелы
    for (int i = 0; i < strlen(t); i++) {
        if (t[i] != ' ') {
            h[k] = t[i];
            k++;
        }
    }
    if (pal(t, 0)) {
        cout << "Palindrom";
    }
    else {
        cout << "Ne palindrom";
    }
}
