#include <iostream>

using namespace std;

int main () {
  int bazar, koroch, isleft;

  cout << "Enter total bazar used Money: ";
  cin >> bazar;

  cout << "Enter total money you come with Bazar: ";
  cin >> koroch;

  isleft = koroch - bazar;

  cout << "The money left after bazer: " << isleft << endl;

  return 0;
}