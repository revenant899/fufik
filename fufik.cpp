//#include <iostream>
//using namespace std;
//
//bool isLeapYear(int year) {
//    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int daysInMonth(int month, int year) {
//    switch (month) {
//    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//        return 31;
//    case 4: case 6: case 9: case 11:
//        return 30;
//    case 2:
//        return isLeapYear(year) ? 29 : 28;
//    default:
//        return 0;
//    }
//}
//
//bool isValidDate(int day, int month, int year) {
//    if (year < 0 || month < 1 || month > 12 || day < 1)
//        return false;
//    return day <= daysInMonth(month, year);
//}
//
//int daysFromStartOfYear(int day, int month, int year) {
//    int days = 0;
//    for (int m = 1; m < month; ++m) {
//        days += daysInMonth(m, year);
//    }
//    days += day;
//    return days;
//}
//
//int daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) {
//    if (!isValidDate(day1, month1, year1) || !isValidDate(day2, month2, year2)) {
//        cout << "���������� ����!" << endl;
//        return -1;
//    }
//
//    if (year1 == year2) {
//        return abs(daysFromStartOfYear(day2, month2, year2) - daysFromStartOfYear(day1, month1, year1));
//    }
//
//    int days1 = (isLeapYear(year1) ? 366 : 365) - daysFromStartOfYear(day1, month1, year1);
//
//    int days2 = daysFromStartOfYear(day2, month2, year2);
//
//    int daysBetweenYears = 0;
//    for (int year = year1 + 1; year < year2; ++year) {
//        daysBetweenYears += isLeapYear(year) ? 366 : 365;
//    }
//
//    return days1 + days2 + daysBetweenYears;
//}
//
//int main() {
//    int day1, month1, year1;
//    int day2, month2, year2;
//
//    cout << "������ ����� ���� ����� Enter (���� ����� ��): ";
//    cin >> day1 >> month1 >> year1;
//
//    cout << "������ ����� ���� ����� Enter (���� ����� ��): ";
//    cin >> day2 >> month2 >> year2;
//
//    int difference = daysBetweenDates(day1, month1, year1, day2, month2, year2);
//
//    if (difference != -1) {
//        cout << "г����� � ����: " << difference << endl;
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//
//#include <iostream>
//using namespace std;
//
//double calculateAverage(int arr[], int size) {
//    if (size == 0) {
//        cout << "����� �������!" << endl;
//        return 0;
//    }
//
//    int sum = 0;
//
//    for (int i = 0; i < size; ++i) {
//        sum += arr[i];
//    }
//
//    return static_cast<double>(sum) / size;
//}
//
//int main() {
//    int size;
//
//    cout << "������ ������� �������� ������: ";
//    cin >> size;
//
//    int arr[size];
//
//    cout << "������ �������� ������: ";
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//
//    double average = calculateAverage(arr, size);
//
//    cout << "������ �����������: " << average << endl;
//
//    return 0;
//}
//
//
//
//
//
//
//
//#include <iostream>
//using namespace std;
//
//void countElements(int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount) {
//    positiveCount = 0;
//    negativeCount = 0;
//    zeroCount = 0;
//
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] > 0) {
//            positiveCount++;
//        }
//        else if (arr[i] < 0) {
//            negativeCount++;
//        }
//        else {
//            zeroCount++;
//        }
//    }
//}
//
//int main() {
//    int size;
//
//    cout << "������ ������� �������� ������: ";
//    cin >> size;
//
//    int arr[size];
//
//    cout << "������ �������� ������: ";
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//
//    int positiveCount, negativeCount, zeroCount;
//
//    countElements(arr, size, positiveCount, negativeCount, zeroCount);
//
//    cout << "ʳ������ �������� ��������: " << positiveCount << endl;
//    cout << "ʳ������ ��'����� ��������: " << negativeCount << endl;
//    cout << "ʳ������ �������� ��������: " << zeroCount << endl;
//
//    return 0;
//}
