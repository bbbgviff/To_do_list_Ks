#include "input.h"

Data InputData(vector <Case> const& case_stock)
{
	string data_case;
	bool correct_data = false;
	Data data;
	do
	{
		cout << "Введите дату исполнения" << endl;
		getline(cin >> ws, data_case);
		string DD = data_case.substr(0, 2);
		string MM = data_case.substr(3, 2);
		string YY = data_case.substr(6, 4);

		int D = atoi(DD.c_str());
		int M = atoi(MM.c_str());
		int Y = atoi(YY.c_str());

		data = { D, M, Y };
		if (D < 0 || D > 31 || M < 0 || M > 12 || Y < 2024 || Y > 2100)
		{
			cout << "Вы ввели неккоректную дату, попробуйте снова." << endl;
		}
		else
		{
			correct_data = true;
		}
	} while (correct_data == false);

	return data;
}

Case InputCase(vector <Case> const& case_stock)
{
	string name_case;
	string preoperet_case;
	string discription_case;
	Data data_case;
	string time_case;

	cout << "Введите название " << endl;
	getline(cin >> ws, name_case);

	cout << "Введите приоритет" << endl;
	getline(cin >> ws, preoperet_case);

	cout << "Введите описание" << endl;
	getline(cin >> ws, discription_case);


	data_case = InputData(case_stock);

	cout << "Введите время исполнения" << endl;
	getline(cin >> ws, time_case);

	return { name_case, preoperet_case, discription_case, data_case, time_case };
}

void InputCaseStock(vector <Case>& case_stock)
{
	int n = 0;
	cout << "Сколько дел Вы хотите добавить?" << endl;
	cin >> n;
	case_stock.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		Case thing = InputCase(case_stock);
		case_stock.push_back(thing);
	}
}

void DeleteStock(vector <Case>& case_stock)
{
	string n;
	cout << "Как называется дело которое Вы хотите удалить?" << endl;
	getline(cin >> ws, n);
	int size = case_stock.size();

	for (int i = 0; i < size; ++i)
	{
		if (case_stock[i].name == n)
		{
			case_stock.erase(case_stock.begin() + i);
			--size;
		}
	}
}

ostream& operator<< (ostream& output, const vector<Case>& mass)
{
	output << "Список всех дел: " << endl;

	for (const auto& s : mass)
	{
		output << s << endl;
	}

	return output;
}