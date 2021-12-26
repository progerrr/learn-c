#pragma once

const int l_word=31;
struct Dictionary
{
  char* eng=new char[l_word];
  char* rus=new char[l_word];
};

void add_w(Dictionary *, int&);
void print_dict(Dictionary *, int);
int menu();