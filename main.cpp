
#include "clsPrint.h"
#include <iostream>
using namespace std;

int main() {
    clsPrint::Print("=== clsPrint Test ===\n\n");

    cout << "Prime numbers (1-20): ";
    clsPrint::PrintPrimeNumbers(1, 20);

    cout << "Odd numbers (1-10): ";
    clsPrint::PrintOddNumbers(1, 10);

    cout << "Even numbers (1-10): ";
    clsPrint::PrintEvenNumbers(1, 10);

    cout << "\nRandom Key: " << clsPrint::GenerateKey() << endl;

    string txt = "ChatGPT";
    string enc = clsPrint::EncryptText(txt, 3);
    cout << "Original: " << txt << endl;
    cout << "Encrypted: " << enc << endl;
    cout << "Decrypted: " << clsPrint::DecryptText(enc, 3) << endl;

    cout << "\nFibonacci (first 10 numbers): ";
    clsPrint::PrintFibonatchiSerie(10);
    cout << endl;

    cout << "\nFirst letters of words in: 'Hello Open AI World'\n";
    clsPrint::PrintFirstLetterOfWords("Hello Open AI World");

    cout << "\nVowels in: 'Programming'\n";
    clsPrint::PrintVowels("Programming");

    return 0;
}
