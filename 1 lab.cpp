#include <iostream>

using namespace std;

int main() {
  cout << "Выполнил Струков Даниил из группы ВПИ21" << endl;

  // Задание 2.1
  cout << "задание 2.1" << endl;
  cout << 123 << endl; // 123,  signed char
  cout << 1E6 << endl; // 1e+06,
  cout << 123456789LU << endl; // 123456789, длинное безнаковое
  cout << -5 << endl; // -5,
  cout << 0XFUL << endl; // 15,
  cout << 0731UL << endl; // 473,
  cout << +0xaf << endl; // 175,
  cout << 0X0 << endl; // 175,
//  cout << ‘0’ << endl; // ошибка
//  cout << 058 << endl; // ошибка
//  cout << ‘\x7’ << endl; // ошибка
//  cout << 0X-1AD << endl; // ошибка
//  cout << ‘\122’ << endl; // ошибка
//  cout << ‘a’U << endl; // ошибка
//  cout << ‘\n’ << endl; // ошибка

  // Задание 2.2
  cout << " " << endl;
  cout << "задание 2.2" << endl;
  cout << 1.71 << endl; // 1.71
  cout << 1E-6 << endl; // 1E-6
  cout << 0.314159E1F << endl; //3.14159
  cout << .005 << endl; //0.005
  cout << 0051E-04 << endl; //0.0051
  cout << 5.E+2 << endl; //500
  cout << 0e0 << endl; //0
  cout << 05.5 << endl; //5.5
  cout << 0 << endl; //0
  cout << 0X1E6 << endl; //486
  cout << 1234.56789L << endl; //1234.57
  cout << 1e-2f << endl; //0.01
  cout << -12.3E-6 << endl; //-1.23e-05
  cout << +10e6 << endl; //1e+07
  cout << 123456L << endl; //123456
//  cout << 0x1A1.5 << endl; //ошибка
//  cout << 0F << endl; //ошибка
//  cout << 1.0E-10D << endl; //ошибка
//  cout << 3.1415U << endl; //ошибка
//  cout << E-6 << endl; //ошибка

  // Задание 2.3
  
  cout << " " << endl;
  cout << "задание 2.3" << endl; 
  int a, b, c, d, e; //вводим переменные из примера
  a = 2;  b = 13;  c = 7;  d = 19;  e = -4; //указываем значения из примера
  cout << b / a / c << endl; //значение операции: 0
  cout << d / a % c << endl; //значение операции: 2 
  cout << c % d-e << endl; //значение операции: 22
  cout << -e % a + b / a *-5+5 << endl; //значение операции: -25
  cout << b % e << endl; //значение операции: 1
  cout << 7-d%+(3-a) << endl; //значение операции: 7
  cout << b % - e * c << endl; //значение операции: 7
  cout << 9 / c - - 20 / d << endl; //значение операции: 2

  // Задание 2.4
 //  cout << " " << endl;
 //  cout << "задание 2.4" << endl; 
 //  int a, c;  
 //  c = 5; //указываем значения из примера
 //  -- c ;	
 //  a = c / 2;	
}
  //   cout <<  << endl; //