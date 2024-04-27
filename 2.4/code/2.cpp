// TODO:  �������� ��������� ���������� �� n ����� ������������ ��������������� � �������� (n � ����������� �����): ���, ����, ���������� �����������,  ��������� � �������. ����� ��������� ������������� �������� � ������, ������� ������ ���� �� ��� ������ �� 5%, ����� �������, ���������� ������� � ������� ���� ������ 5 ����. ���������� ����� ������� ������������� ������������ ��������������� � ��������.  


#include <iostream>
#include <vector>
#include <iomanip>

struct Stationery {
    std::string type;
    double price;
    int quantity;
};

int main() {
    int n;
    std::cout << "Enter the number of statioeries: ";
    std::cin >> n;

    std::vector<Stationery> stationeries(n);

    // Ввод информации о канцелярских принадлежностях
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter information about stationery #" << i + 1 << ":" << std::endl;
        std::cout << "Type: ";
        std::cin >> stationeries[i].type;
        std::cout << "Cost: ";
        std::cin >> stationeries[i].price;
        std::cout << "Number of items: ";
        std::cin >> stationeries[i].quantity;
    }

    // Изменение цен в зависимости от количества в наличии
    for (int i = 0; i < n; ++i) {
        if (stationeries[i].quantity >= 5) {
            stationeries[i].price *= 1.05; // Увеличение цены на 5%
        }
    }

    // Вывод новой таблицы характеристик канцелярских принадлежностей
    std::cout << std::setw(10) << "Type" << std::setw(10) << "Cost" << std::setw(20) << "Number of items" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << std::setw(10) << stationeries[i].type << std::setw(10) << std::fixed << std::setprecision(2) << stationeries[i].price << std::setw(15) << stationeries[i].quantity << std::endl;
    }

    return 0;
}
