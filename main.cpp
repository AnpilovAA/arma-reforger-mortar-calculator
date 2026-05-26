#include <iostream>
#include <vector>

using namespace std;

// Эта функция будет искать значение в массиве
bool search_distance(short user_range){
    return 0;
}

int main(){
    const short ROW = 2;
    const short ZERO_ELEVATION_COL = 10;
    const short ONE_ELEVATION_COL = 8;
    const short TWO_ELEVATION_COL = 13;
    const short THREE_ELEVATION_COL = 16;
    const short FOUR_ELEVATION_COL = 20;

    // решил массивами записать для начала О-832ДУ фракции (СССР)
    
    vector<int> o_832_du_zero = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500};
    vector<int> o_832_du_zero_elevation = {1455, 1411, 1365, 1318, 1268, 1217, 1159, 1095, 1023, 922};
    vector<int> o_832_du_one = {100, 200, 300, 400,500, 600, 700, 800};
    vector<int> o_832_du_one_elevation = {1446, 1392, 1335, 1275, 1212, 1141, 1058, 952};
    vector<int> o_832_du_two = {200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400};
    vector<int> o_832_du_two_elevation = {1432, 1397,1362, 1325, 1288, 1248, 1207, 1162, 1114, 1060, 977, 914, 755};
    vector<int> o_832_du_three = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800};
    vector<int> o_832_du_three_elevation = {1423, 1397, 1370, 1343, 1315, 1286, 1257, 1226, 1193, 1159, 1123, 1084, 1040, 991, 932, 851};
    vector<int> o_832_du_four = {400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300};
    vector<int> o_832_du_four_elevation = {1418, 1398, 1376, 1355, 1333, 1311, 1288, 1264, 1240, 1215, 1189, 1161, 1133, 1102, 1069, 1034, 995, 950, 896, 820};
    
    
    
    vector vector_massiv = {&o_832_du_zero, &o_832_du_one, &o_832_du_two, &o_832_du_three, &o_832_du_four};
    // вот тут прохожу по массиву и достаю ссылки на массивы
    for (const auto vector : vector_massiv){
        std::cout << vector << std::endl;
        // вот тут через указатель на вектор прохожу по значениям
        for (const auto value : *vector){
            std::cout << value << std::endl;
        }
    }
    
    short user_range = 50;
    cout << "Enter range between 50 and 2900 ";
    cin >> user_range;
    while (user_range >= 50 && user_range <= 2900){
        cout << "True"<< endl;
        cin >> user_range;
    }
}