#include <iostream>
using namespace std;

// deklarasi kelas
class FinancialRatio {
   public:
      // member variabel
      double current_assets;
      double current_liabilities;

      // member fungsi
      double current_ratio() {
         return current_assets / current_liabilities;
      }

      double quick_ratio() {
         double quick_assets = current_assets - inventory;
         return quick_assets / current_liabilities;
      }

   private:
      double inventory = 5000;
};

// fungsi utama
int main() {
   // membuat objek dari kelas FinancialRatio
   FinancialRatio ratio1;
   ratio1.current_assets = 10000;
   ratio1.current_liabilities = 5000;

   // menampilkan rasio keuangan
   cout << "Current ratio: " << ratio1.current_ratio() << endl;
   cout << "Quick ratio: " << ratio1.quick_ratio() << endl;

   return 0;
}
