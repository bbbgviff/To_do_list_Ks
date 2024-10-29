#include "sort.h"
#include "find.h"
#include "input.h"

#include <Windows.h> 
#include <chrono>
#include <format>

//void View_on_day(const vector <Case>& case_stock)
//{
//	std::string s1 = std::format("{:%F}", std::chrono::system_clock::now());
//
//	string YY = s1.substr(0, 4);
//	string MM = s1.substr(5, 2);
//	string DD = s1.substr(8, 2);
//
//	int D = atoi(DD.c_str());
//	int M = atoi(MM.c_str());
//	int Y = atoi(YY.c_str());
//
//	Data data_today = { D, M, Y };
//
//	for (const Case& p : case_stock)
//	{
//		if (data_today == p.data)
//		{
//			cout << p << endl;
//		}
//	}
//}
//
//void View_on_week(const vector <Case>& case_stock)
//{
//	string s1 = format("{:%F}", chrono::system_clock::now());
//
//	string YY = s1.substr(0, 4);
//	string MM = s1.substr(5, 2);
//	string DD = s1.substr(8, 2);
//
//
//	int D = atoi(DD.c_str());
//	int M = atoi(MM.c_str());
//	int Y = atoi(YY.c_str());
//
//	Data data_today = { D, M, Y };
//	for (int i = 0; i < 8; ++i)
//	{
//		for (const Case& p : case_stock)
//		{
//			if (data_today == p.data)
//			{
//				cout << p << endl;
//			}
//		}
//		if (D < 23)
//		{
//			++data_today.day;
//		}
//	}
//}
//
//void View_on_mounth(const vector <Case>& case_stock)
//{
//	string s1 = format("{:%F}", chrono::system_clock::now());
//
//	string YY = s1.substr(0, 4);
//	string MM = s1.substr(5, 2);
//	string DD = s1.substr(8, 2);
//
//
//	int D = atoi(DD.c_str());
//	int M = atoi(MM.c_str());
//	int Y = atoi(YY.c_str());
//
//	Data data_today = { D, M, Y };
//
//	for (const Case& p : case_stock)
//	{
//		if ((data_today.month == p.data.month) && (data_today.year == p.data.year))
//		{
//			cout << p << endl;
//		}
//	}
//}

int main()
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	system("color 70");

	vector <Case> case_stock = { {"������� ����������", "1. �������", "������� 50 ����� ����", {22,03,2024}, "23:59"}, {"������� �����������", "1. �������", "������� 70 ����� ����", {22,03,2025}, "23:59"} };

	while (10 == 10)
	{

		int category = 0;
		cout << "���������� ��� - 1 \n"
			"�������� ��� - 2 \n"
			"�������������� ��� - 3 \n"
			"����� ��� - 4 \n"
			"����������� ������ ��� - 5 \n"
			"���������� ������ ��: - 6 \n"
			"������ ���� ��� ��� ���������� - 7 \n";

		cin >> category;

		system("cls");
		switch (category)
		{
		case 1:
		{
			InputCaseStock(case_stock);
			break;
		}
		case 2:
		{
			DeleteStock(case_stock);
			break;

		}
		case 3:
		{
			break;
		}
		case 4:
		{
			int pod_category = 0;
			cout << "�� �������� - 1 \n"
				"�� ���������� - 2 \n"
				"�� ��������  - 3 \n"
				"�� ���� � �������  - 4\n";
			cin >> pod_category;
			if (pod_category == 1)
			{
				Find_Name_Case(case_stock);
			}

			else if (pod_category == 2)
			{
				Find_Preopetet_Case(case_stock);
			}

			else if (pod_category == 3)
			{
				Find_Discription_Case(case_stock);
			}

			else if (pod_category == 4)
			{
				Find_Data_Time_Case(case_stock);
			}
			break;
		}
		/*case 5:
		{
			int pod_category = 0;
			cout << "�� ���� - 1 \n"
				"�� ������ - 2 \n"
				"�� �����  - 3 \n";
			cin >> pod_category;
			if (pod_category == 1)
			{
				View_on_day(case_stock);
			}
			else if (pod_category == 2)
			{
				View_on_week(case_stock);
			}

			else if (pod_category == 3)
			{
				View_on_mounth(case_stock);
			}
			break;
		}*/
		case 6:
		{
			int pod_category = 0;
			cout << "�� ���������� - 1 \n"
				"�� ���� - 2 \n";
			cin >> pod_category;
			if (pod_category == 1)
			{
				Sort_Preopetet(case_stock);
			}
			else if (pod_category == 2)
			{
				Sort_data(case_stock);
			}
			break;
		}

		case 7:
		{
			cout << case_stock << endl;
			break;
		}
		}
	}
}