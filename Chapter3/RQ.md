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

### 使用哪些可移植的数据类型可以获得32位有符号整数？选择的理由是什么？

如果需要正好获得32位的整数，选择`int32_t`类型  
如果要保证至少可以储存32位整数的最小类型，选择`int32_least_t`类型  
如果要为32位整数提供最快的计算速度，选择`int32_fast_t`类型
To get exactly 32 bits, you could use `int32_t`. 
To get the smallest type that could store at least 32 bits, use `int_least32_t`.
To get the type that would provide the fastest computations for 32 bits, choose `int_fast32_t`.
