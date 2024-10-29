#pragma once
#include "struct.h"
#include <vector>

Data InputData(vector <Case> const& case_stock);
Case InputCase(vector <Case> const& case_stock);
void InputCaseStock(vector <Case>& case_stock);
void DeleteStock(vector <Case>& case_stock);
ostream& operator<< (ostream& output, const vector<Case>& mass);