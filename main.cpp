#include <iostream>

using namespace std;

// Эта функция будет искать значение в массиве
int search_distance(int user_range){
    return 0;
}

int main(){
    short user_range = 50;
    cout << "Enter range between 50 and 2900 ";
    cin >> user_range;
    while (user_range >= 50 && user_range <= 2900){
        cout << "True"<< endl;
        search_distance(user_range);
        cin >> user_range;
    }

    // решил массивами записать для начала О-832ДУ фракции (СССР)
    short o_832_du_zero_ring_range[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500};
    short o_832_du_zero_ring_elevation[10] = {1455, 1411, 1365, 1318, 1268, 1217, 1159, 1095, 1023, 922};

    short o_832_du_one_ring_range[8] = {100, 200, 300, 400,500, 600, 700, 800};
    short o_832_du_one_ring_elevation[8] = {1446, 1392, 1335, 1275, 1212, 1141, 1058, 952};

    short o_832_du_two_rings_range[13] = {200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400};
    short o_832_du_two_rings_elevation[13] = {1432, 1397,1362, 1325, 1288, 1248, 1207, 1162, 1114, 1060, 977, 914, 755};

    short o_832_du_three_rings_range[16] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800};
    short o_832_du_three_rings_elevation[16] = {1423, 1397, 1370, 1343, 1315, 1286, 1257, 1226, 1193, 1159, 1123, 1084, 1040, 991, 932, 851};

    short o_832_du_four_rings_range[20] = {400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300};
    short o_832_du_four_rings_elevation[20] = {1418, 1398, 1376, 1355, 1333, 1311, 1288, 1264, 1240, 1215, 1189, 1161, 1133, 1102, 1069, 1034, 995, 950, 896, 820};
}