# Chapter 4 Review Questions
=====

### 1.再次运行程序清单4.1，但是在要求输入名时，请输入名和姓，看看会发生什么情况？为什么？

就是多了个空格。
* 空格之后的内容不仅不会被`scanf()`读取，还会存入缓冲区，被下一个`scanf()`错拿，本来需要输入两次，现在只能输入一次。
> 错误结果：

> Hi! What's your first name?  
**shij yuan**  (错误的输入内容)  
Muyuan, what's your weight in pounds?  （这里都不让输入浮点了...）  
Well, Muyuan, your volume is -12345670.00(**这里是乱码，"yuan"被转换成了浮点显示出来**) cubic feet.  
Also, your first name has 6 letters,   
and we have 40 bytes to store it.


### 2.假设下列示例都是完整程序中的一部分，它们打印的结果分别是什么？

```c
a.
    printf("He sold the painting for $%2.2f.\n", 2.345e2);

b.
    printf("%c%c%c\n", 'H', 105, '\41');
    //'\41'为八进制表示方法，对应十进制为33

c.
    #define Q "His Hamlet was funny without being vulgar."
    printf("%s\nhas %d characters.\n", Q, strlen(Q));

d.
    printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);

```
a.
> He sold the painting for $234.50.  
> 小数点后保留两位，不够就加个0。

b.
> Hi!

c.
> His Hamlet was funny without being vulgar.  
> has 42 characters.

d.
> Is 1.20e+003 the same as 1201.00?
>> 之前说过指数部分的 +003 随缘，这个无所谓。注意输出格式。

### 3.在第2题的c中，要输出包含双引号的字符串Q，应如何修改？

加两个`\"`或者在`#define`的地方加上两个`"`。

### 4.找出下面程序中的错误

```c
define B booboo
define X 10
main(int)
{
	int age;
	char name;
	printf("please enter your first name.");
	scanf("%s", name);
	printf("All right, %c, what's your age?\n", name);
	scanf("%f", age);
	xp = age + X;
	printf("That's a %s! You must be at least %d.\n", B, xp);
	rerun 0;
}
```
修改：
```c
#include <stdio.h>
#define B "booboo"
#define X 10
int main(void)
{
	int age;
	char name[40];
	int xp;

	printf("please enter your first name.");
	scanf("%s", name);
	printf("All right, %s, what's your age?\n", name);
	scanf("%d", &age);
	xp = age + X;
	printf("That's a %s! You must be at least %d.\n", B, xp);
	return 0;
}
```

### 5.假设一个程序的开头是这样：

```c
#define BOOK "War and Peace"
int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
}
```

请构造一个使用`BOOK`、`cost`和`percent`的`printf()`语句，打印以下内容：

> This copy of "War and Peace" sells for $12.99.  
> That is 80% of list.

代码：
```c
printf("This copy of \"%s\" sells for $%.2f.\nThat is %.0f%% of list.\n",
 BOOK, cost, percent);
```
> %.0f把80.0这个浮点数的小数部分有效数字改成了0个，也就是80。

### 6.打印下列各项内容要分别使用什么转换说明？

a. 一个字段宽度与位数相同的十进制整数：`%d`
> "字段宽度与位数相同的"这个定语好像没什么卵用...  
b. 一个形如`8A`、字段宽度为4的十六进制整数:`%4X`或`%4x` 
c. 一个形如`232.346`、字段宽度为10的浮点数：`%10.3f`  
d. 一个形如`2.33e+002`、字段宽度为12的浮点数：`%12.2e`  
e. 一个字段宽度为30、左对齐的字符串：`%-30s`

### 7.打印下面各项内容要分别使用什么转换说明？

a. 字段宽度为15的`unsigned long`类型的整数：`%15lu`  
b. 一个形如`0x8a`、字段宽度为4的十六进制整数：`%#4x`  
c. 一个形如`2.33E+02`、字段宽度为12、左对齐的浮点数：`%-12.2E`  
d. 一个形如`+232.346`、字段宽度为10的浮点数：`%+10.3f`  
e. 一个字段宽度为8的字符串的前8个字符：`%8.8s`

### 8.打印下面各项内容要分别使用什么转换说明？

a.  一个字段宽度为6、最少有4位数字的十进制整数：`%6.4d`  
b. 一个在参数列表中给定字段宽度的八进制整数：`%*o`  
> `*`是占位符，后面可以用其他内容替换。  
c. 一个字段宽度为2的字符：`%2c` 
d. 一个形如`+3.13`、字段宽度等于数字中字符数的浮点数：`%+.2f`  
> 又是一个奇怪的定语...
e. 一个字段宽度为7、左对齐字符串中的前5个字符：`%-7.5s`

### 9.分别写出读取下列各输入行的`scanf()`语句，并声明语句中用到的变量和数组

a. 101  
```c
  int a;
  scanf("%d", &a);
```

b. 22.32 8.34E-09
```c
  float a, b;
  scanf("%f %f",&a, &b);
```

c. linguini
```c
  char a[7];
  scanf("%s",a);
```

d. catch 22
```c
  char a[4];
  int b;
  scanf("%s %d", a, &b);
```

e. catch 22 （但是跳过catch）
```c
  int a;
  scanf("%*s %d", &a);
  //P130 table
```

### 10.什么是空白？

换行符、制表符和空格。

### 11.下面的语句有什么问题？如何修正？

```c
  printf("The double type is %z bytes..\n", sizeof(double));
```

`%z`的z是个修饰符，不是正确的转换字符。应该改为`%zd`或`%zo`或`%zx`。

### 12.假设要在程序中用圆括号代替花括号，以下方法是否可行？

```c
  #define ( {
  #define ) }  
```
NO WAY.等着一万个error把。
