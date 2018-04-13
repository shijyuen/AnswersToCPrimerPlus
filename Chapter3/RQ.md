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
