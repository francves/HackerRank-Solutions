#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string abcdario = "abcdefghijklmnopqrstuvwxyz";
    string s;
    bool panagrama = true;
    int contador = 0, control = 1;
    getline (cin,s); // getline para tomar la frase completa y no hasta cuando consiga un espacio. Recordar siempre.
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i = 0; i< 26; i ++){
        for(int j = 0; j < s.length(); j++){
            if(abcdario[i] == s[j]){ //incrementar el indice de abcdario a medida q va encontrando letras
                contador++;
                break;
            }
        }
        if(contador != control){
            panagrama = false;
            break;
        }
        control++;
    }
    if(panagrama)
        cout << "pangram";
    else
        cout << "not pangram";
    return 0;
}
