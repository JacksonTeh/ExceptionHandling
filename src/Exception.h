#ifndef Exception_H
#define Exception_H

typedef enum {ERR_NO_ERROR, ERR_DIVIDE_BY_ZERO, ERR_DONT_LIKE_THAT_VALUE, ERR_I_TRY_2_B_NASTY} ErrorCode;

typedef enum {ERR_NO_ERROR, ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE, ERR_NOT_TRIANGLE} ErrorCode2;

int divide(int x, int y);
int doSomethingWhichGeneratesNoException(int value);

#endif // Exception_H
