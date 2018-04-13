# Chapter 3 review questions

### 1.指出下面各种数据使用的合适数据类型（有些可使用多种数据类型）：
> a. East Simpleton的人口  
> b. DVD影碟的价格  
> c. 本章出现次数最多的字母  
> d. 本章出现次数最多的字母次数  

a.`int`, `short` 或`unsigned` 或 `unsigned short`都行，看人口数了。`int`, possibly `short` or `unsigned` or `unsigned short`.

b.`float`就行,精度要求不高。You could use `double` but don't really need the extra precision.

c.`char`没话说。

d.`int`，节省空间可以用`unsigned`。`int`, possibly `unsigned`.


### 2.在什么情况下要用`long`类型的变量代替`int`类型的变量？

数字超出了`int`取值范围，且在`long`取值范围内时，使用`long`。Becasue `long` may accommodate larger numbers than int on the system.

### 3.使用哪些可移植的数据类型可以获得32位有符号整数？选择的理由是什么？

* 如果需要正好获得32位的整数，选择`int32_t`类型  
* 如果要保证至少可以储存32位整数的最小类型，选择`int32_least_t`类型  
* 如果要为32位整数提供最快的计算速度，选择`int32_fast_t`类型

>* To get exactly 32 bits, you could use `int32_t`. 
>* To get the smallest type that could store at least 32 bits, use `int_least32_t`.
>* To get the type that would provide the fastest computations for 32 bits, choose `int_fast32_t`.


### 4.指出下列常量的类型和含义（如果有的话）
> a. '\b'  
> b. 1066  
> c. 99.44  
> d. 0XAA  
> e. 2.0e30

a. `char`类型，储存为`int`类型，含义为转义序列中的*回退符*

b. `int`类型，整型常量

c. `double`类型，双精度浮点型常量

d. `unsigned int`类型，整型常量，用16进制表示
>* 为毛不是`int`？可以的，书里说优先`unsigned int`。

e. `double`，双精度浮点型常量，用指数形式表示

### 5.Dottie Cawm编写了一个程序，请找出程序中的错误。
```c
include <stdio.h>
main
(
    float g; h;
    float tax, rate;

    g = e21;
    tax = rate * g;
)
```

修改版：
```c
#include <stdio.h>
int main(void)
{
    float g, h;
    float tax, rate;

    g = 1e21; 
    tax = race * g;

    return 0;
}
```
*还有啊...没有给`rate`变量赋值，没有使用`h`变量。虽然能通过编译...不过真的是蛋疼...*

### 6.写出下列常量在声明中使用的数据类型和在`printf()`中对应的转换说明：
常量 | 类型 | 转换说明（%转换字符）
:----|:----|:----
12|int|%d
0X3|unsigned int|%#x
'c'|char（实际上是int）|%c
2.34E07|double|%e
'\040'|char（实际上是int）|%c
7.0|double|%f
6L|long|%ld
6.0f|float|%f
0x5.b6p12|float|%a

### 7.写出下列常量在声明中使用的数据类型和在`printf()`中对应的转换说明（假设`int`为16位）
常量 | 类型 | 转换说明（%转换字符）
:---|:-----|:-------------------
012|unsigned int|%#o
2.9e05L|long double|%Le
's'|char（实际上是int）|%c
100000|long|%ld
'\n'|char（实际上是int）|%c
20.0f|float|%f
0x44|unsigned int|%#x
-40|int|%d

### 8.假设程序的开头有下列声明：
```c
int imate = 2;
long shot = 53456;
char grade = 'A';
float log = 2.71828;
```
把下面`printf()`语句中的转换字符补充完整：
```c
printf("The odds against the %d were %ld to 1.\n", imate, shot);
printf("A score of %f is not an %c grade.\n", log, grade);
```

### 9.假设`ch`是`char`类型的变量。分别使用转义序列、十进制值、八进制字符常量和十六进制字符常量把回车字符赋给`ch`（假设使用ASCII编码值）。
```c
ch = '\r';
ch = 13;
ch = '\015';
ch = '\xd'
```

### 10.修正下面的程序（在C中，/表示除以）。
```c
void main(int)  / this program is perfect /
{
    cows, legs integer;
    printf("How many cow legs did you count?\n);
    scanf("%c", legs);
    cows = legs / 4;
    printf("That implies there are %f cows.\n",cows)
}
```

醉了，还“this program is perfect”...
让我来告诉你什么是完美的程序：
```c
int main()  /* let me show you what program is perfect */
{
    int cows, legs;
    printf("How many cow legs did you count?\n")
    scanf("%c", &legs);
    cows = legs / 4;
    printf("That implies there are %d cows.\n", cows);

    return 0;
}
```

### 11.指出下列转义序列的含义：
> a. \n  
> b. \\\  
> c. \"  
> d. \t  

* `\n`为换行符
* `\\`为反斜杠字符（\）本身
* `\"`为双引号字符（"）
* `\t`为制表符

