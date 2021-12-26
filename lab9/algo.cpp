#include <cstring>
#include <fstream>
#include <iostream>
#include <stdio.h>
using namespace std;

const int l_word = 31;

struct Dictionary
{
  char eng[l_word];
  char rus[l_word];
};

int menu()
{
  int n;
  cout << endl
       << "Enter number from 1 to 7" << endl
       << "1. добавление слов в словарь;" << endl
       << "2. удаление слов из словаря;" << endl
       << "3. перевод слов с английского на русский;" << endl
       << "4. перевод слов с русского на английский;" << endl
       << "5. просмотр словаря (вывод на экран словаря из ОП);" << endl
       << "6. вывод словаря в файл;" << endl
       << "7. выход." << endl;
  cin >> n;
  return n;
}

void add_w(Dictionary *dict, int &num_w)
{
  cout << "Enter word (eng): " << endl;
  cin.get();
  cin.getline(dict[num_w].eng, 31);
  cout << "Enter word (rus): " << endl;
  cin.getline(dict[num_w].rus, 31);
  num_w++;
}

void print_dict(Dictionary *dict, int num_w)
{
  cout << "Your recent dictionary(not in file): " << endl;
  for (int j = 0; j < num_w; j++)
  {
    for (int i = 0; i < strlen(dict[j].eng); i++)
    {
      cout << dict[j].eng[i];
    }
    cout << " - ";
    for (int i = 0; i < strlen(dict[j].rus); i++)
    {
      cout << dict[j].rus[i];
    }
    cout << endl;
  }
}
