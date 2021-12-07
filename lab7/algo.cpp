#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

int main() {
  ifstream fin("input");
  ifstream fkey("keys");
  ofstream fout("output");
  /* if (!fin or !fkey or !fout)
      cout << "Error of file opening."<< endl;
  else cout << "All right, buddy! Let's f*cking do this!"<<endl; */

  const int len = 100000;
  char line[len];
  int keys[len];
  const char *delims = ".,!? /<>|)(*::\"";
  char *token;
  int r = 0;
  while (fkey.getline(line, len)) {
    token = strtok(line, delims);
    while (token != NULL) {
      for (int i = 0; i < strlen(token); i++) {
        keys[r] += (int)(token[i]);
      }
      keys[r] %= 256;
      r++;
      token = strtok(NULL, delims);
    }
  }

  while (myfile.get(sim) && i < count) {
    cout << sim;
    i++;
  }
  myfile.close();
}

fin.close();
fout.close();
fkey.close();
return 0;
}
