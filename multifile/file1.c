#include<stdio.h>
int main()
{
  extern void enter_string(char str[]);
  extern void delete_string(char str[], char ch);
  extern void print_string(char str[]);
  char c;
  char str[80];
  printf("Please input a string :\n");
  enter_string(str);
  printf("Please input a char you want to delete:\n");
  scanf("%c",&c);
  delete_string(str, c);
  print_string(str);
  return 0;
}
