// TODO: �������� ������������� ���, ����������� ������� ������.
//TODO: ������� �� � main, � 2 ������� ������� ������� ����������.
#include <iostream>

enum class MilitaryRank {
    Private,
    LanceCorporal,
    Corporal,
    Sergeant,
    StaffSergeant,
    SergeantMajor,
    WarrantOfficer,
    JuniorLieutenant,
    Lieutenant,
    SeniorLieutenant,
    Captain,
    Major,
    LieutenantColonel,
    Colonel,
    MajorGeneral,
    LieutenantGeneral,
    General,
    Marshal
};

//
int main() {
    setlocale(LC_ALL, "Russian");
    MilitaryRank rank = MilitaryRank::Lieutenant;

    switch (rank) {
        case MilitaryRank::Private:
            std::cout << "�������" << std::endl;
            break;
        case MilitaryRank::LanceCorporal:
            std::cout << "��������" << std::endl;
            break;
        case MilitaryRank::Corporal:
            std::cout << "������" << std::endl;
            break;
        case MilitaryRank::Sergeant:
            std::cout << "�������" << std::endl;
            break;
        case MilitaryRank::StaffSergeant:
            std::cout << "������� �������" << std::endl;
            break;
        case MilitaryRank::SergeantMajor:
            std::cout << "��������" << std::endl;
            break;
        case MilitaryRank::WarrantOfficer:
            std::cout << "���������" << std::endl;
            break;
        case MilitaryRank::JuniorLieutenant:
            std::cout << "������� ���������" << std::endl;
            break;
        case MilitaryRank::Lieutenant:
            std::cout << "���������" << std::endl;
            break;
        case MilitaryRank::SeniorLieutenant:
            std::cout << "������� ���������" << std::endl;
            break;
        case MilitaryRank::Captain:
            std::cout << "�������" << std::endl;
            break;
        case MilitaryRank::Major:
            std::cout << "�����" << std::endl;
            break;
        case MilitaryRank::LieutenantColonel:
            std::cout << "������������" << std::endl;
            break;
        case MilitaryRank::Colonel:
            std::cout << "���������" << std::endl;
            break;
        case MilitaryRank::MajorGeneral:
            std::cout << "�������-�����" << std::endl;
            break;
        case MilitaryRank::LieutenantGeneral:
            std::cout << "�������-���������" << std::endl;
            break;
        case MilitaryRank::General:
            std::cout << "�������-���������" << std::endl;
            break;
        case MilitaryRank::Marshal:
            std::cout << "������ ���������� ���������" << std::endl;
            break;
        default:
            std::cout << "����������� ������" << std::endl;
    }

    return 0;
}
