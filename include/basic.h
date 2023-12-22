#include <ctype.h>
#pragma once

typedef struct {
    int width;
    int height;
    char **canvas;
    char pen;
} Canvas;

// Command 構造体と History構造体
// [*]
typedef struct command Command;
struct command{
    char *str;
    size_t bufsize;
    Command *next;
};

typedef struct
{
    Command *begin;
    size_t bufsize; 
} History;

typedef enum res{ EXIT, LINE, UNDO, SAVE, UNKNOWN, ERRNONINT, ERRLACKARGS, NOCOMMAND} Result;