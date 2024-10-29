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

	vector <Case> case_stock = { {"Выучить английский", "1. Главное", "Выучить 50 новых слов", {22,03,2024}, "23:59"}, {"Выучить итальянский", "1. Главное", "Выучить 70 новых слов", {22,03,2025}, "23:59"} };

	while (10 == 10)
	{

		int category = 0;
		cout << "Добавление дел - 1 \n"
			"Удаление дел - 2 \n"
			"Редактирование дел - 3 \n"
			"Поиск дел - 4 \n"
			"Отображение списка дел - 5 \n"
			"Сортировка списка по: - 6 \n"
			"Список всех дел без сортировки - 7 \n";

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
			cout << "По названию - 1 \n"
				"По приоритету - 2 \n"
				"По описанию  - 3 \n"
				"По дате и времени  - 4\n";
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
			cout << "на день - 1 \n"
				"на неделю - 2 \n"
				"на месяц  - 3 \n";
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
			cout << "по приоритету - 1 \n"
				"по дате - 2 \n";
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