#include "basic.h"
#pragma once
// display functions
void rewind_screen(unsigned int line); 
void clear_command(void);
void clear_screen(void);

// enum for interpret_command results

// Result 型に応じて出力するメッセージを返す
char *strresult(Result res);

int max(const int a, const int b);
void draw_line(Canvas *c, const int x0, const int y0, const int x1, const int y1);
Result interpret_command(const char *command, History *his, Canvas *c);
void save_history(const char *filename, History *his);

// [*] list.c のpush_backと同じ
Command *push_command(History *his, const char *str);