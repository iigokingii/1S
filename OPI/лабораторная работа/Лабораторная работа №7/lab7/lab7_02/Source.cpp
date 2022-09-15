#include <iostream>
using namespace std;

//������� ��� ���������� ��� ������ �� ����
int get_1st_weekday(int year) {

    int day;
    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return day;
}

void main()
{
    setlocale(LC_CTYPE, "RUSSIAN");
    int year, month, day, daysInMonth, weekDay = 0, startingDay;
    cout << "����������� ���: " << endl;
    cin >> year;
    int monthDay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    const char* months[] = { "\t    ������","\t    �������","\t     ����","\t    ������","\t      ���","\t     ����","\t     ����","\t    ������","\t    ��������","\t    �������","\t    ������","\t    �������" };
    //������� �� ��,�������� �� ��� ����������.���� �� �� ���������� ���� ������� ���������� �� 29
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        monthDay[1] = 29;

    startingDay = get_1st_weekday(year);

    //���� ��� ������ �������� ������, ���,����
    for (month = 0;month < 12;month++) {

        daysInMonth = monthDay[month];
        cout << "\n\n---------------X-------------------\n" << months[month] << endl;
        cout << "\n  ���  ���   ��   ��   ���  ���  ���\n" << endl;

        for (weekDay = 0;weekDay < startingDay;weekDay++)
            cout << "     ";

        //���� ��� ������ ����
        for (day = 1;day <= daysInMonth;day++) {
            printf("%5d", day);
            //�������, ��� ������� ���������� ������� �� ������ ������
            if (++weekDay > 6) {
                cout << endl;
                weekDay = 0;
            }
            startingDay = weekDay;
        }

    }


}
