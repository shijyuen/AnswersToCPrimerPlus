Review Questions for Chapter 5
=====

### 1.假设所有变量的类型都是`int`，下列各项变量的值是多少：

```c
a.  x = (2 + 3) * 6;
b.  x = (12 + 6) / 2 * 3;
c.  y = x = (2 + 3) / 4;
d.  y = 3 + 2 * (x = 7 / 2);
```

a. `x = 30`  
b. `x = 27`  
c. `x = 1, y = 1`  
d. `x = 3, y = 9`


### 2.假设所有变量的类型都是`int`，下列各项变量的值是多少：

```c
a.  x = (int)3.8 + 3.3;
b.  x = (2 + 3) * 10.5;
c.  x = 3 / 5 * 22.0;
d.  x = 22.0 * 3 / 5;
```

a. `x = 6`  
b. `x = 52`  
c. `x = 0`  
d. `x = 13`

* 严格按照**优先级**进行计算。结合律只适用于**共享**同一运算对象运算符。  

### 3.对下列各表达式求值：

```c
a. 30.0 / 4.0 * 5.0;
b. 30.0 / (4.0 * 5.0);
c. 30 / 4 * 5;
d. 30 * 5 / 4;
e. 30 / 4.0 * 5;
f. 30 / 4 * 5.0;
```

a. `37.5`  
b. `1.5`  
c. `35`  
d. `37`  
e. `37.5`  
f. `35.0`


### 4.请找出下面的程序中的错误：

```c
int main(void)
{
	int i = 1,
	float n;
	printf("Watch out! Here come a bunch of fractions!\n");
	while (i < 30)
		n = 1 / i;
		printf(" %f", n);
	printf("That's all, folks!\n");
	return;
}
```

第0行：应增加一行#include <stdio.h>。  
第3行：末尾用分号，而不是逗号。  
第6行：while语句创建了一个无限循环。因为i的值始终为1，所以它总是小于30。推测一下，应该是想写while(i++ < 30)。  
第6～8行：这样的缩进布局不能使第7行和第8行组成一个代码块。由于没有用花括号括起来， while循环只包括第7行，所以要添加花括号。  
第7行：因为1和i都是整数，所以当i为1时，除法的结果是1；当i为更大的数时，除法结果为0。用n = 1.0/i，i在除法运算之前会被转换为浮点数， 这样就能得到非零值。  
第8行：在格式化字符串中没有换行符（\n），这导致数字被打印成一行。  
第10行：应该是return 0;  

```c
#include <stdio.h>
int main(void)
{
	int i = 1;
	float n;
	printf("Watch out! Here come a bunch of fractions!\n");
	while (i++ < 30)
	{
		n = 1.0 / i;
		printf(" %f", n);
	}
	printf("That's all, folks!\n");
	return 0;
}
```

### 5.这是程序清单5.9的另一个版本。从表面上看，该程序只使用了一条`scanf()`语句，比程序清单5.9简单。请找出不如原版之处：

```c
#include <stdio.h>
#define S_TO_M 60
int main(void)
{
	int sec, min, left;
	prinf("This program converts seconds to minutes and ");
	printf("seconds.\n");
	printf("Just enter the number of seconds.\n");
	printf("Enter 0 to end the program.\n");
	while(sec > 0){
		scanf("%d", &sec);
		min = sec / S_TO_M;
		left = sec % S_TO_M;
		printf("%d sec is %d min, %d sec. \n", sec, min, left);
		printf("Next input?\n");
	}
	printf("Bye!\n");
	return 0;
}
```
附程序清单5.9：
```c
//min_sec.c
#include <stdio.h>
#define SEC_PER_MIN 60
int main(void)
{
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");

	return 0;
}
```

1.可读性差。
2.原版程序在循环之前为变量`sec`赋值，修改后的程序在第一次进入循环前，变量`sec`的值是未定义的，用来与0作比较的是正好在sec变量内存位置上的一个垃圾值
> 不过，还有另一个问题。当最后输入0结束程序时，在循环结束之前不会检 查sec，所以0也被打印了出来。

### 6.下面的程序将打印出什么内容？

```c
#include <stdio.h>
#define FORMAT "%s! C is cool!\n"
int main(void)
{
	int num = 10;

	printf(FORMAT, FORMAT);
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", num--);
	printf("%d\n", num);
	return 0;
}
```

> %s! C is cool!  
! C is cool!  
11   
11  
12  
11  

> 第1个printf()语句与下面的语句相同：
printf("%s! C is cool!\n","%s! C is cool!\n");   
第2个printf()语句首先把num递增为11，然后打印该值。  
第3个printf()语 句打印num的值（值为11）。  
第 4个printf()语句打印n当前的值（仍为12）， 然后将其递减为11。  
最后一个printf()语句打印num的当前值（值为11）  

### 7.下面的程序将打印出什么内容？

```c
#include <stdio.h>
int main(void)
{
	char c1, c2;
	int diff;
	float num;

	c1 = 'S';
	c2 = 'O';
	diff = c1 - c2;
	num = diff;
	printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);
	return 0;
}
```

> SOS:4 4.00  

### 8.下面的程序将打印出什么内容？

```c
#include <stdio.h>
#define TEN 10
int main(void)
{
	int n = 0;

	while (n++ < TEN)
		printf("%5d", n);
	printf("\n");
	return 0;
}
```

    1    2    3    4    5    6    7    8    9   10
    

### 9.修改上一个程序，使其可以打印字母a~g

```c
#include <stdio.h>
int main(void)
{
char ch = 'a';
while (ch <= 'g')
printf("%5c", ch++);
printf("\n");

return 0;
}
```
### 10.假设下面是完整程序中的一部分，它们分别打印什么？

```c
a.
	int x = 0;

	while (++x < 3)
		printf("%4d", x);

b.
	int x = 100;

	while (x++ < 103)
		printf("%4d\n", x);
		printf("%4d\n", x);

c.
	char ch = 's';

	while (ch < 'w')
	{
		printf("%c", ch);
		ch++;
	}
	printf("%c\n", ch);
```

a. `1 2`  
> 先递增，在比较    

b.
```
 101
 102
 103
 104
```
1. 这里的x先比较后递增。  
2. **只有第一个**`printf()`在循环里面！虽然第2个`printf()`语句缩进了，但是并不是`while`循环的一部分。  

c. `stuvw`

### 11.下面的程序会打印出什么？

```c
#define MESG "COMPUTER BYTES DOG"
#include <stdio.h>
int main(void)
{
	int n = 0;

	while (n < 5)
		printf("%s\n", MESG);
		n++;
	printf("That's all.\n");
	return 0;
}
```

以该程序一直重复打印消息 COMPUTER BYTES DOG，直到强行关闭程序为止。  
**`n++;`未包含在`while`循环体内**，所以花括号不要省略。

### 12.分别编写一条语句，完成下列各任务（或者说，使其具有以下副作用）：

> a. 将变量`x`的值增加10  
> b. 将变量`x`的值增加1  
> c. 将`a`与`b`之和的两倍赋给`c`  
> d. 将`a`与[`b`的两倍]之和赋给`c`

a. `x = x + 10;`  
b. `x++;`  
c. `c = (a + b) * 2;`  
d. `c = a + b * 2;`

### 13.分别编写一条语句，完成下列各任务：

> a. 将变量`x`的值减少1  
> b. 将`n`除以`k`的余数赋给`m`  
> c. `q`除以[`b`减去`a`]，并将结果赋给`p`  
> d. `a`与`b`之和除以`c`与`d`的乘积，并将结果赋给`x`

a. `x--;`  
b. `m = n % k;`  
c. `p = q / (b - a);`  
d. `x = (a + b) / (c * d);`
