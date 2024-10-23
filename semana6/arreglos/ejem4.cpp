#include <iostream>

using namespace std;

bool isalpha(char car) {
    //65 a 90 mayusculas
    //97 a 122 minusculas
    int val = static_cast < int > (car);
    if ((val >= 65 && val <= 90) || (val >= 97 && val <= 122 ))
        return true;
    return false;
}

bool isupper(char car) {
    int val = static_cast<int>(car);
    if((val>=65)&&(val<=90))
        return true;
    return false;

}

char tolower(char car) {
    int val = static_cast<int> (car);
    val += 32;
    return static_cast<char>(val);
}

bool ispunct(char car) {
    int val= static_cast <int> (car);
    return ( (val==44)||(val==46)||(val==58)||(val==59) );        
}

int main() {
    char cadenaDesordenada[] = "e6s0T9e6.eS.99u9n5a.CADENA";
    char actual = cadenaDesordenada[0];
    for(int i = 0; actual != '\0'; actual = cadenaDesordenada[++i]) {
        if( isalpha(actual) )
            cout << (char)(isupper(actual) ? tolower(actual) :actual);
        else if(ispunct(actual))
            cout << ' ';
    }
    cout << endl;
    return 0;
}