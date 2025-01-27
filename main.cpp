#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <ctime>
#include <chrono>

using namespace std;

// Função para verificar se um ano é bissexto
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Função para calcular o número de dias em um mês
int getDaysInMonth(int year, int month)
{
    if (month == 2)
    {
        return isLeapYear(year) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    return 31;
}
// Função para calcular o dia da semana do primeiro dia de um ano
int getFirstDayOfYear(int year)
{
    int day = 1; // 1º de janeiro do ano 1 foi uma segunda-feira
    for (int i = 1; i < year; ++i)
    {
        day += isLeapYear(i) ? 366 : 365;
    }
    return day % 7; // 0 = Domingo, 1 = Segunda, ..., 6 = Sábado
}

// Função para exibir um mês no terminal
void printMonth(int year, int month, int &startDay)
{
    const string months[] = {"January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December"};
    cout << "\n  " << months[month - 1] << " " << year << endl;
    cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

    int days = getDaysInMonth(year, month);

    // Alinhar o primeiro dia do mês
    for (int i = 0; i < startDay; ++i)
    {
        cout << "     ";
    }

    // Imprimir os dias do mês
    for (int day = 1; day <= days; ++day)
    {
        cout << setw(5) << day;
        if ((startDay + day) % 7 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    // Atualizar o primeiro dia da próxima semana
    startDay = (startDay + days) % 7;
}

// Função para exibir um coração no terminal
void printHeart()
{
    const string cor_vermelha = "\033[1;31m";
    const string cor_reset = "\033[0m";
    cout << cor_vermelha;
    cout << "\t\t............****************.........\n";
    cout << "\t\t..........********************.......\n";
    cout << "\t\t.........**********************......\n";
    cout << "\t\t.........***********************.....\n";
    cout << "\t\t..........*********************......\n";
    cout << "\t\t...........*******************.......\n";
    cout << "\t\t............*****************........\n";
    cout << "\t\t.............***************.........\n";
    cout << "\t\t..............*************..........\n";
    cout << "\t\t...............***********...........\n";
    cout << "\t\t................*********............\n";
    cout << "\t\t.................*******.............\n";
    cout << "\t\t..................*****..............\n";
    cout << "\t\t...................***...............\n";
    cout << "\t\t................... *................\n";
    cout << cor_reset;
}


int main()
{
    printHeart();

    // Iniciar o relógio em uma thread separada
    int year;
    std::time_t agora = std::time(nullptr);
    std::tm *tempo_local = std::localtime(&agora);

    const string cor_vermelha = "\033[1;31m";
    const string cor_reset = "\033[0m";
    cout << cor_vermelha;

    std::cout << "\t\n\nProgram aberto as:"
              << tempo_local->tm_hour << ":"
              << tempo_local->tm_min << ":"
              << tempo_local->tm_sec << std::endl;
              cout << cor_reset;
    cout << "Digite um numero maior que 0: ";
    cin >> year;

    if (year < 1)
    {
        cout << "O ano deve ser maior que 0" << endl;
        return 1; // Encerrar o programa com erro
    }

    int startDay = getFirstDayOfYear(year);

    for (int month = 1; month <= 12; ++month)
    {
        printMonth(year, month, startDay);
    }
cout << "Pressione Enter para sair..." << endl;
    cin.ignore(); // Ignorar qualquer nova linha pendente
    cin.get();    // Esperar por uma entrada do usuário
    return 0;
}
