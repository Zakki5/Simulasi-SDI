#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
     string ruas[3]        = {"A (Utara)", "B (Timur)", "C (Barat)"};
     double lebar[3]       = {8.0, 6.0, 5.0};
     double laju_masuk[3]  = {0.813, 0.333, 0.167};
     double laju_keluar[3] = {2.000, 2.333, 0.700};

     double siklus = 48.0;
     double semua_merah = 3.0;
     double total_hijau = siklus - semua_merah;

     double kebutuhan[3];
     double total_kebutuhan = 0.0;
     for (int i = 0; i < 3; i++) {
          kebutuhan[i] = laju_masuk[i] / laju_keluar[i];
          total_kebutuhan += kebutuhan[i];
     }


     double hijau_usulan[3];
     for (int i = 0; i < 3; i++) {
          hijau_usulan[i] = total_hijau * (kebutuhan[i] / total_kebutuhan);
     }

     double batas_stabil = total_hijau / siklus;
     bool stabil = (total_kebutuhan < batas_stabil);


     cout << left << setw(22) << "Ruas" << setw(10) << ruas[0] << setw(10) << ruas[1] << setw(10) << ruas[2] << "\n";

     cout << fixed << setprecision(3);
     cout << left << setw(22) << "Kebutuhan" << setw(10) << kebutuhan[0] << setw(10) << kebutuhan[1] << setw(10) << kebutuhan[2] << "\n";

     cout << fixed << setprecision(1);
     cout << left << setw(22) << "Hijau usulan (detik)" << setw(10) << hijau_usulan[0] << setw(10) << hijau_usulan[1] << setw(10) << hijau_usulan[2] << "\n";

     cout << fixed << setprecision(3);
     cout << "\nStatus Simpang:\n";
     cout << "Total kebutuhan " << total_kebutuhan << (stabil ? " < " : " >= ") << "batas " << batas_stabil << " -> " << (stabil ? "bisa stabil" : "tidak stabil") << "\n";

     return 0;
}