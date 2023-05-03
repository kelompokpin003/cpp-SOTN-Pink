#include <iostream>
using namespace std;

// deklarasi kelas
class Person {
   public:
      // member variabel
      string name;
      int age;

      // member fungsi
      void introduce() {
         cout << "Hi, my name is " << name << " and I'm " << age << " years old." << endl;
      }
};

// fungsi utama
int main() {
   // membuat objek dari kelas Person
   Person person1;
   person1.name = "anggun";
   person1.age = 25;
   
   // memanggil fungsi introduce() dari objek person1
   person1.introduce();

   return 0;
}
