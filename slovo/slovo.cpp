#include <iostream>
#include <string>
#include <algorithm>
#include <random>
using namespace std;
string reverse(const string& word) {
    string reversed_word = word;
    reverse(reversed_word.begin(), reversed_word.end());
    return reversed_word;
}
string removeVowels(const string& word) {
    string result = "";
    for (char c : word) {
        if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
            result += c;
        }
    }
    return result;
}
string removeConsonants(const string& word) {
    string result = "";
    for (char c : word) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            result += c;
        }
    }
    return result;
}
string shuffle(const string& word) {
    string shuffled_word = word;
    random_device rd;
    mt19937 g(rd());
    shuffle(shuffled_word.begin(), shuffled_word.end(), g);
    return shuffled_word;
}
int main() {
    setlocale(LC_ALL, "Russian");
    string word;
    int choice;
    cout << "Введите слово: ";
    cin >> word;
    cout << "Выберите действие:" << endl;
    cout << "1. Перевернуть слово" << endl;
    cout << "2. Без гласных." << endl;
    cout << "3. Без согласных." << endl;
    cout << "4. Рандом" << endl;
    cout << "Выбор: ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "Результат: " << reverse(word) << endl;
        break;
    case 2:
        cout << "Результат: " << removeVowels(word) << endl;
        break;
    case 3:
        cout << "Результат: " << removeConsonants(word) << endl;
        break;
    case 4:
        cout << "Результат: " << shuffle(word) << endl;
        break;
    default:
        cout << "Тут ничего нет" << endl;
        break;
    }
    return 0;
}