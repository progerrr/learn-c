#include "algo.h"
#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  ifstream file("dictionary", ios::in | ios::binary);

  int words_num = 100;
  Dictionary dict[words_num];
  int num_w = 0;
  char txt[1000];

  int len = 100;
  const char ch = '\n';
  char mass[len][31];
  int p = 1;
  int h = 0;
  for (int r = 0; !file.eof(); r++)
  {
    file.getline(mass[r], len - 1, ch); //Считываем строки в массив
    if (r % 2 == 0)
    {
      cout << p << ": ";
      p++;
    }
    cout << mass[r];
    if (r % 2 == 0)
    {
      cout << "-";
    }
    else
    {
      cout << endl;
    }
    /*
   if (r%2==0) {
     file.getline(dict[num_w].eng, len - 1, ch);
   }
   if (r%2!=0) {
     file.getline(dict[num_w].rus, len - 1, ch);
     num_w++;
   }
*/
    h++;
  }

  file.close();

  for (int i = 0; i < h; i++)
  {if (i%2==0)
    for (int j = 0; j < strlen(mass[i]); j++)
      dict[num_w].eng[j] = mass[i][j];
  if (i%2!=0) {
    for (int j = 0; j < strlen(mass[i]); j++)
      dict[num_w].eng[j] = mass[i][j];
  num_w++;

  }
  }




  while (true)
  {
    switch (menu())
    {
    case 1:
      add_w(dict, num_w);
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      print_dict(dict, num_w);
      break;
    case 6:
      break;
    case 7:
      return 0;
    }
  }
  file.close();
  return 0;
}
