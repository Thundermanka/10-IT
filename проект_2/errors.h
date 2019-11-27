//Файл с кодами ошибок и ссылкой на функцию обработки ошибок

#ifndef __ERRORS_H
#define __ERRORS_H

#define HAVE_NO_FUNCTION 1
// когда нет функции в FUNCTIONS
#define HAVE_NO_PEREMENNAYA 2
// когда в Functions() нет переменной, которую залдавали в SET()
#define NY_ZACHEM 3
// ну зачем кто-то пытается задать в SET значение функции
#define CHTO_ETO_TAKOE 4
// когда не можем распознать аргумент консоли

void handleError(int ErrorCode,  char SetArgName);

#include "errors.c"
#endif