//  From MetaOnKBM (Github)
//  My Github https://github.com/MetaOnKBM

#include <stdio.h>
#pragma once

// ANSI Escape Codes

// Basic Attributes

#define ANSI_RESET "\033[0m"
#define ANSI_BOLD "\033[1m"
#define ANSI_DIM "\033[2m"
#define ANSI_ITALIC "\033[3m"
#define ANSI_UNDERLINE "\033[4m"
#define ANSI_BLINK_SLOW "\033[5m"
#define ANSI_BLINK_RAPID "\033[6m"
#define ANSI_INVERSE "\033[7m"
#define ANSI_HIDDEN "\033[8m"
#define ANSI_STRIKETHROUGH "\033[9m"
#define ANSI_STYLE_RESET "\033[22;23;24;25;27;28;29m"


// Foreground Text Colors (Standard)

#define ANSI_FG_DEFAULT "\033[39m"
#define ANSI_FG_BLACK "\033[30m"
#define ANSI_FG_RED "\033[31m"
#define ANSI_FG_GREEN "\033[32m"
#define ANSI_FG_YELLOW "\033[33m"
#define ANSI_FG_BLUE "\033[34m"
#define ANSI_FG_MAGENTA "\033[35m"
#define ANSI_FG_CYAN "\033[36m"
#define ANSI_FG_WHITE "\033[37m"

// Background Colors (Standard)

#define ANSI_BG_DEFAULT "\033[49m"
#define ANSI_BG_BLACK "\033[40m"
#define ANSI_BG_RED "\033[41m"
#define ANSI_BG_GREEN "\033[42m"
#define ANSI_BG_YELLOW "\033[43m"
#define ANSI_BG_BLUE "\033[44m"
#define ANSI_BG_MAGENTA "\033[45m"
#define ANSI_BG_CYAN "\033[46m"
#define ANSI_BG_WHITE "\033[47m"

// Foreground Text Colors (Bright)

#define ANSI_FG_BLACK_BRIGHT "\033[90m"
#define ANSI_FG_RED_BRIGHT "\033[91m"
#define ANSI_FG_GREEN_BRIGHT "\033[92m"
#define ANSI_FG_YELLOW_BRIGHT "\033[93m"
#define ANSI_FG_BLUE_BRIGHT "\033[94m"
#define ANSI_FG_MAGENTA_BRIGHT "\033[95m"
#define ANSI_FG_CYAN_BRIGHT "\033[96m"
#define ANSI_FG_WHITE_BRIGHT "\033[97m"

// Background Colors (Bright)

#define ANSI_BG_BLACK_BRIGHT "\033[100m"
#define ANSI_BG_RED_BRIGHT "\033[101m"
#define ANSI_BG_GREEN_BRIGHT "\033[102m"
#define ANSI_BG_YELLOW_BRIGHT "\033[103m"
#define ANSI_BG_BLUE_BRIGHT "\033[104m"
#define ANSI_BG_MAGENTA_BRIGHT "\033[105m"
#define ANSI_BG_CYAN_BRIGHT "\033[106m"
#define ANSI_BG_WHITE_BRIGHT "\033[107m"

// Cursor & Screen Control

#define ANSI_SCREEN_CLEAR "\033[2J"
#define ANSI_LINE_CURRENT_CLEAR "\033[2K"

static inline void ANSI_CURSOR_MOVE_FREE(int row, int col)
{
	printf("\033[%d;%dH", row, col);
}

static inline void ANSI_CURSOR_MOVE_UP(int n)
{
	printf("\033[%dA", n);
}

static inline void ANSI_CURSOR_MOVE_DOWN(int n)
{
	printf("\033[%dB", n);
}

static inline void ANSI_CURSOR_MOVE_FORWARD(int n)
{
	printf("\033[%dC", n);
}

static inline void ANSI_CURSOR_MOVE_BACKWARDS(int n)
{
	printf("\033[%dD", n);
}

#define ANSI_CURSOR_POSITION_SAVE "\033[s"
#define ANSI_CURSOR_POSITION_RESTORE "\033[u"
#define ANSI_CURSOR_POSITION_HIDE "\033[?25l"
#define ANSI_CURSOR_POSITION_SHOW "\033[?25h"

// 256-Color

static inline void ANSI_FG_256COLOR(int n) // Where n is 0-255
{
	printf("\033[38;5;%dm", n);
}

static inline void ANSI_BG_256COLOR(int n) // Where n is 0-255
{
	printf("\033[48;5;%dm", n);
}

// Truecolor (RGB)

static inline void ANSI_FG_TRUECOLOR(int r, int g, int b)
{
	printf("\033[38;2;%d;%d;%dm", r, g, b);
}

static inline void ANSI_BG_TRUECOLOR(int r, int g, int b)
{
	printf("\033[48;2;%d;%d;%dm", r, g, b);
}

// Scroll Region Control

static inline void ANSI_REGION_SCROLL_SET(int top, int bottom)
{
	printf("\033[%d;%dr", top, bottom);
}

#define ANSI_REGION_SCROLL_RESET "\033[r"