// TODO: ������� ��� Date - � ������ ������ ���� day (����), month (�����) � year (���). ������� ������� leapYear(d) ����������� ���� � ���������� ���� Date, ���������� true, ���� ��� � ���� d �������� ����������, � false � ��������� ������.  ������� ������� daysInMonth(d) ������ ���� � ���������� ���� Date, ������� ���������� ���������� ���� ��� ������, ���������� � ���� d. ������� ������� checkDate(d) ������ ���� � ���������� ���� Date, ������� ��������� ������������ ����,  ��������� � ��������� d. ���� ���� d �������� ����������, �� ������� ���������� 0; ���� � ���� ������ �������� ����� ������, �� ������� ���������� 1; ���� � ���� ������ �������� ���� ��� ������� ������, �� ������������ 2. ������� ������� nextDate(d) � ���������� ���� Date, ������� ����������� ���� d � ��������� ���� (���� ���� d �������� ������������, �� ��� �� ����������). �������� d �������� ������� � �������� ����������. ��������� ������� nextDate � ���� ������ �����.  

#include <iostream>

struct Date {
    int day;
    int month;
    int year;
};

bool leapYear(const Date& d) {
    return (d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0);
}

int daysInMonth(const Date& d) {
    switch (d.month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return leapYear(d) ? 29 : 28;
        default:
            return -1; // Некорректный номер месяца
    }
}

int checkDate(const Date& d) {
    if (d.month < 1 || d.month > 12)
        return 1; // Неверный номер месяца
    if (d.day < 1 || d.day > daysInMonth(d))
        return 2; // Неверный день для данного месяца
    return 0; // Все проверки пройдены успешно
}

void nextDate(Date& d) {
    if (checkDate(d) != 0)
        return; // Не изменяем неправильные даты

    d.day++;
    if (d.day > daysInMonth(d)) {
        d.day = 1;
        d.month++;
        if (d.month > 12) {
            d.month = 1;
            d.year++;
        }
    }
}

void printDate(const Date& d) {
    std::cout << d.day << "." << d.month << "." << d.year << std::endl;
}

int main() {
    Date dates[] = {
        {28, 2, 2020}, // Високосный год
        {31, 12, 2021}, // Последний день года
        {31, 4, 2022}, // Неверный месяц
        {29, 2, 2021}, // Неверный день для февраля
        {31, 8, 2023} // Просто следующая дата
    };

    for (int i = 0; i < 5; ++i) {
        std::cout << "Before: ";
        printDate(dates[i]);

        nextDate(dates[i]);

        std::cout << "After: ";
        printDate(dates[i]);
        std::cout << std::endl;
    }

    return 0;
}
