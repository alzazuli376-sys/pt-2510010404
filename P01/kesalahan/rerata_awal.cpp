#include <iomanip>
#include <iostream>

int main() {
    int tugas1 = 80;
    int tugas2 = 85;
    int tugas3 = 70;
    int uts = 75;
    int uas = 90;

    int jumlah = tugas1 + tugas2 + tugas3 + uts + uas;

    double rerata = jumlah / 5.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Jumlah    : " << jumlah << "\n";
    std::cout << "Rata-rata : " << rerata << "\n";

    return 0;
}