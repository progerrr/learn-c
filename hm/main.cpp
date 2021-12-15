#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
  int k,p, word_length, text_length, j = 0;
  int num[100];
  int length = 1000;
  char *sim = (char *)malloc(length * sizeof(char));
  for (int i = 0; i < length; i++) {
    sim[i] = getchar();
    text_length++;
    if (sim[i] == '.')
      break;
  }
  text_length--;
  p=0;
  for (int i = 0; i < ; i++) {
    for (j = p; j < text_length; j++) {
      if (sim[j] != ' ')
        p++;
      else
        break;
    }
    num[i]=p;
    k++;
    if (num[i]==0) break;
  }

  for (int y=0; y<k; y++) cout<<num[y];

  return 0;
}