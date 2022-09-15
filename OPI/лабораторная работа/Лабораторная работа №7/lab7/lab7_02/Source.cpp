#include <iostream>
using namespace std;

//функци€ дл€ нахождени€ дн€ недели по году
int get_1st_weekday(int year) {

    int day;
    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return day;
}

void main()
{
    setlocale(LC_CTYPE, "RUSSIAN");
    int year, month, day, daysInMonth, weekDay = 0, startingDay;
    cout << "необходимый год: " << endl;
    cin >> year;
    int monthDay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    const char* months[] = { "\t    €нварь","\t    февраль","\t     март","\t    апрель","\t      май","\t     июнь","\t     июль","\t    август","\t    сент€брь","\t    окт€брь","\t    но€брь","\t    декабрь" };
    //условие на то,€вл€етс€ ли год високосным.≈сли да то количество дней феврал€ замен€етс€ на 29
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        monthDay[1] = 29;

    startingDay = get_1st_weekday(year);

    //цикл дл€ вывода названи€ мес€ца, дн€,даты
    for (month = 0;month < 12;month++) {

        daysInMonth = monthDay[month];
        cout << "\n\n---------------X-------------------\n" << months[month] << endl;
        cout << "\n  вск  пон   вт   ср   чет  п€т  суб\n" << endl;

        for (weekDay = 0;weekDay < startingDay;weekDay++)
            cout << "     ";

        //цикл дл€ вывода даты
        for (day = 1;day <= daysInMonth;day++) {
            printf("%5d", day);
            //условие, при котором происходит переход на другую строку
            if (++weekDay > 6) {
                cout << endl;
                weekDay = 0;
            }
            startingDay = weekDay;
        }

    }


}
