// TODO: Описать бестиповую функцию Time24ToTime12 (H, M, S, am), которая преобразует время, заданное в часах H, минутах M и секундах S (H, M и S — целые положительные) из 24-часового формата в 12-часовой, при этом для времени в 12-часовом формате устанавливается признак принадлежности момента времени первой половине суток am (am - логическое). Используя эту функцию, привести к новому формату два заданных временных отрезка: (T1, M1, S1) и (T2, M2, S2).  


#include <iostream>

using namespace std;

void Time24ToTime12(int* H, int* M, int* S, bool* am) {
    // Проверка на корректность входных данных
    if (H == nullptr || M == nullptr || S == nullptr || am == nullptr) {
        cout << "Ошибка: Нулевой указатель." << endl;
        return;
    }

    // Устанавливаем признак принадлежности первой половине суток
    *am = (*H < 12);

    // Преобразуем часы в 12-часовой формат
    *H = (*H % 12 == 0) ? 12 : *H % 12;
}

int main() {
    int T1 = 0, M1 = 0, S1 = 0;
    int T2 = 0, M2 = 0, S2 = 0;

    // Ввод значений
    cin >> T1 >> M1 >> S1;
    cin >> T2 >> M2 >> S2;



    bool am1, am2;

    // Преобразование первого временного отрезка
    int* pT1 = &T1;
    int* pM1 = &M1;
    int* pS1 = &S1;
    bool* pam1 = &am1;
    Time24ToTime12(pT1, pM1, pS1, pam1);

    // Преобразование второго временного отрезка
    int* pT2 = &T2;
    int* pM2 = &M2;
    int* pS2 = &S2;
    bool* pam2 = &am2;
    Time24ToTime12(pT2, pM2, pS2, pam2);

    // Вывод результатов
    cout << "fst time interval: " << T1 << ":" << M1 << ":" << S1;
    if (am1) {
        cout << " AM" << endl;
    } else {
        cout << " PM" << endl;
    }

    cout << "snd time interval: " << T2 << ":" << M2 << ":" << S2;
    if (am2) {
        cout << " AM" << endl;
    } else {
        cout << " PM" << endl;
    }

    return 0;
}
