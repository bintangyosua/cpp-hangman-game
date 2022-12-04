#include <iostream>
#include <time.h>
using namespace std;

void kapital(char* guess);
void stages(int* nyawa);

int main()
{
    system("cls");
    cout << "Game Hangman Menebak Angka dengan Tema Binatang" << endl;
    int jumlah_binatang = 10;
    string word_list[jumlah_binatang] = {"KUCING", "ANJING", "RAKUN", "BERUANG", "PENGUIN", "GAJAH", "HARIMAU", "RUBAH", "BURUNG", "SERIGALA"};

    int seconds = time(NULL);
    int rand_num = seconds % jumlah_binatang;
    string chosen_word = word_list[rand_num];
    // cout << "Psstt! The solution is " << chosen_word << endl;
    int lalala = 0;
    while (chosen_word[lalala])
        lalala++;

    int word_length = lalala;
    char word[word_length];
    for (int i = 0; i < word_length; i++)
        word[i] = '_';
    
    for (int i = 0; i < word_length; i++)
        cout << word[i] << " ";
    cout << endl;

    bool end_of_game = false;

    char guess;
    char letter;
    int counter = 0;
    int nyawa = 6;
    int temp = 0;

    stages(&nyawa);

    while (end_of_game == false)
    {
        counter = 0;
        temp = 0;
        cout << "Guess a letter: ";
        cin >> guess;
        kapital(&guess);
        for (int i = 0; i < word_length; i++)
        {
            letter = chosen_word[i];
            if (guess == letter)
                word[i] = guess;
            else
                temp++;
        }
        if (temp == word_length)
            nyawa--;
        system("cls");
        cout << "Game Hangman Menebak Angka dengan Tema Binatang" << endl;
        for (int i = 0; i < word_length; i++)
            cout << word[i] << " ";
        cout << endl;
        stages(&nyawa);
        if (nyawa == 0){
            cout << "You Lose!" << endl;
            break;
        }
        for (int i = 0; i < word_length; i++)
        {
            if ('_' == word[i])
                counter++;
        }
        if (counter == 0)
        {
            end_of_game = true;
            cout << "You Win!" << endl;
        }    
    }

    cin.get();
    return 0;
}

void kapital(char* guess)
{
    switch (*guess)
        {
            case 'a':
                *guess = 'A';
                break;
            case 'b':
                *guess = 'B';
                break;
            case 'c':
                *guess = 'C';
                break;
            case 'd':
                *guess = 'D';
                break;
            case 'e':
                *guess = 'E';
                break;
            case 'f':
                *guess = 'F';
                break;
            case 'g':
                *guess = 'G';
                break;
            case 'h':
                *guess = 'H';
                break;
            case 'i':
                *guess = 'I';
                break;
            case 'j':
                *guess = 'J';
                break;
            case 'k':
                *guess = 'K';
                break;
            case 'l':
                *guess = 'L';
                break;
            case 'm':
                *guess = 'M';
                break;
            case 'n':
                *guess = 'N';
                break;
            case 'o':
                *guess = 'O';
                break;
            case 'p':
                *guess = 'P';
                break;
            case 'q':
                *guess = 'Q';
                break;
            case 'r':
                *guess = 'R';
                break;
            case 's':
                *guess = 'S';
                break;
            case 't':
                *guess = 'T';
                break;
            case 'u':
                *guess = 'U';
                break;
            case 'v':
                *guess = 'V';
                break;
            case 'w':
                *guess = 'W';
                break;
            case 'x':
                *guess = 'X';
                break;
            case 'y':
                *guess = 'Y';
                break;
            case 'z':
                *guess = 'Z';
                break;
        }
}

void stages(int* nyawa)
{
    if (*nyawa == 0)
    {
        cout << "+-----+"    << endl;
        cout << "  |   |"  << endl;
        cout << "  O   |"  << endl;
        cout << " /|\\  |"  << endl;
        cout << " / \\  |"  << endl;
        cout << "      |"  << endl;
        cout << "========="<< endl;
    } else if (*nyawa == 1)
    {
        cout << "+-----+"    << endl;
        cout << "  |   |"  << endl;
        cout << "  O   |"  << endl;
        cout << " /|\\  |"  << endl;
        cout << " /    |"  << endl;
        cout << "      |"  << endl;
        cout << "========="<< endl;
    } else if (*nyawa == 2)
    {
        cout << "+-----+"    << endl;
        cout << "  |   |"  << endl;
        cout << "  O   |"  << endl;
        cout << " /|\\  |"  << endl;
        cout << "      |"  << endl;
        cout << "      |"  << endl;
        cout << "========="<< endl;
    } else if (*nyawa == 3)
    {
        cout << "+-----+"    << endl;
        cout << "  |   |"  << endl;
        cout << "  O   |"  << endl;
        cout << " /|   |"  << endl;
        cout << "      |"  << endl;
        cout << "      |"  << endl;
        cout << "========="<< endl;
    } else if (*nyawa == 4)
    {
        cout << "+-----+"    << endl;
        cout << "  |   |"  << endl;
        cout << "  O   |"  << endl;
        cout << "  |   |"  << endl;
        cout << "      |"  << endl;
        cout << "      |"  << endl;
        cout << "========="<< endl;
    } else if (*nyawa == 5)
    {
        cout << "+-----+"    << endl;
        cout << "  |   |"  << endl;
        cout << "  O   |"  << endl;
        cout << "      |"  << endl;
        cout << "      |"  << endl;
        cout << "      |"  << endl;
        cout << "========="<< endl;
    } else if (*nyawa == 6)
    {
        cout << "+-----+"    << endl;
        cout << "  |   |"  << endl;
        cout << "      |"  << endl;
        cout << "      |"  << endl;
        cout << "      |"  << endl;
        cout << "      |"  << endl;
        cout << "========="<< endl;
    }
}