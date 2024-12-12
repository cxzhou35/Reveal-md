---
title: "C程序设计基础学习分享&考前辅导"
separator: <!--s-->
verticalSeparator: <!--v-->
theme: simple
highlightTheme: github
css: custom.css
revealOptions:
    transition: 'slide'
    transitionSpeed: fast
    center: false
    slideNumber: "c/t"
    width: 1000
---


<div class="middle center" style="position: relative;">
  <div style="position: absolute; top: 0; right: 0; transform: translate(-10%, -10%);">
    <img src="./asserts/logo.svg" alt="Logo" style="max-height: 100%; max-width: 100%;">
  </div>
  <div style="width: 90%; display: inline-block; vertical-align: top; transform: translate(8%, 10%);">
    <h1>C程学习和考试经验分享</h1>
    <hr>
    <p>求是学院惟学工作坊</p>
    <p>By <a href="https://github.com/cxzhou35">@Chenxu Zhou</a></p>
    <div style="text-align: right; margin-top: 1em;">
      <p>2024.12.13</p>
      <p>Powered by <a href="https://github.com/webpro/reveal-md">@reveal-md</p>
    </div>
  </div>
</div>

<!--v-->

## Table of Contents

本次分享会我会分享关于C程序设计基础学科的学习经验，以及如何高效备考

<div class="fragment">

1. C程知识点梳理

</div>

<div class="fragment">

2. 考试重点标注

</div>

<div class="fragment">

3. 复习备考建议

</div>

<div class="fragment">

4. 考试经验分享

</div>

<div class="fragment">

5. Q&A

</div>

<div class="fragment">

Misc

- 分享会课件: [Slides link 🔗](https://zicx.top/Reveal-md/zju_c_share/site/slides/#)
- 本人联系方式: 
    - [Email📧 : cxzhou35@zju.edu.cn](mailto:cxzhou35@zju.edu.cn)
    - [微信💬 : cxzhou0305 ](cxzhou0305)

</div>

<!--v-->

## Take Aways

<div class="fragment">

以下内容都不是本次讲座的重点

- 具体的题目讲解 ❌
- 解题代码怎么写 ❌
- 押题 ❌

</div>

<div class="fragment">

值得关注的是这些内容 👇

- 如何有针对性地复习 ✔️
- 如何提高写代码能力 ✔️
- 如何提高调试代码能力 ✔️
- 如何调整做题心态 ✔️

</div>

<!--s-->

<div class="middle center">
<div style="width: 100%">

# Part.1 C程知识点梳理

</div>
</div>

<!--v-->

## C程章节内容 —— 仅供参考

| 章节 | 知识点 | 上机考重点 |
| :---: | --- | --- |
| 1 | 引言 | / |
| 2 | 用C语言编写程序 | / | 
| 3 | 分支结构 | if-else/switch语句⭐ |
| 4 | 循环结构 | for/while循环语句⭐ |
| 5 | 函数 | ⭐ |
| 6 | 回顾数据类型与表达式 | / |
| 7 | 数组 | 字符串和二维数组⭐⭐⭐  |
| 8 | 指针 | / |
| 9 | 结构 | / |
| ... | 剩余章节 | / |

<!--v-->

##  第1章 引言

- 程序与程序设计语言
    - 什么是指令、程序
    - 什么是数据类型，C语言的数据类型有哪些
    - 什么是流程控制
- 程序设计语言的语法
    - 标识符、常量、变量、运算符
    - 表达式、语句、函数、库函数
- 程序的编译
    - 编译过程是怎么实现的?
    - 语法错误和逻辑错误有什么区别
    - 运行和调试程序

<!--v-->

## 第2章 用C语言编写程序

- C语言程序的组成和结构
- 常量、变量、数据类型
- 变量的定义和使用
- 算术运算和赋值运算
- 格式化输入输出函数 *`printf()`* 和 *`scanf()`* 的使用
- 关系运算
- 数学库函数 *`math.h`* 的使用
- 自定义函数（声明、定义、调用）

<!--v-->

## 第3章 分支结构

<div class="mul-cols">

<div class="col">

- 分支结构
    - if-else 语句: 分块规则
    - switch 语句
    - case 后面表达式的类型和要求
    - break 语句的使用
    - **理解运行机制**
- 数据类型：char
- 逻辑运算符、逻辑表达式: **短路机制**

</div>

<div class="col">

```c
// if-else template
if (condition) {
    // commands;
} else {
    // commands;
}

// switch template
switch (expression) {
    case constant-expression:
        // commands;
        break;
    case constant-expression:
        // commands;
        break;
    default:
        // commands;
}
```

</div>

</div>

<!--v-->

## 第4章 循环结构

<div class="mul-cols">

<div class="col">

- 循环结构以及循环执行机制
    - for 循环
    - while 循环
    - do-while 循环
    - break 和 continue 语句的使用
    - **循环语句之间的转换**
- 嵌套循环

</div>

<div class="col">

```c
// for-loop template
for (int i = 0; i < n; i++) {
    // commands;
    // ...
    continue;
}

// while-loop template
while (condition) {
    // commands;
    // ... 
    break;
}

// do-while-loop template
do {
    // commands;
} while (condition);
```

</div>

</div>


<!--v-->

## 第5章 函数

<div class="mul-cols">

<div class="col">

- 函数的定义、声明、调用
    - 函数的声明
    - 函数的定义
    - 函数的参数（形参、实参）和参数传递
    - 函数的调用
    - 函数的返回值
- 函数与变量
    - 局部变量和全局变量
    - 静态变量
    - 作用域和声明周期
- 函数的递归调用

</div>

<div class="col">

```c
// define a function
return_type myfun(params) {
    // commands;
    return value;
}

// declare a function
return_type type myfun(params);

// invoke a function
(return_type)val = myfun(params);
```

</div>

</div>

<!--v-->

## 第6章 回顾数据类型与表达式

- 数据的存储和基本数据类型
    - 数据的存储格式
    - 原码，反码，补码
    - 基本数据类型
- 数据的输入和输出
    - printf() 和 scanf() 函数
    - getchar() 和 putchar() 函数
    - 格式化输入输出
- 类型转换
    - 自动类型转换
    - 强制类型转换
- 表达式和运算符
    - 算术，赋值，关系，逻辑，条件，逗号，位，长度，括号等

<!--v-->

## 第7章 数组

> ⭐**考试的重点内容**: 字符串和二维数组


<div class="mul-cols">

<div class="col">

- 一维数组
    - 定义和初始化
    - 数组元素的访问和赋值
- 二维数组
    - 定义和初始化
    - 数组元素的访问和赋值
    - 矩阵的运算
- 字符串
    - 字符数组与字符串
    - 字符串的存储
    - 字符串的访问和操作

</div>

<div class="col">

```c
// define an array
int arr[10];
int arr2d[10][10];

// initialize an array
int arr[10] = {1, 2, ..., 10};
int arr2d[10][10] = {{0}};

// visit and assign
arr[index] = value;
arr2d[row][col] = value;

// string 
char str[20] = "Hello, World!";
```

</div>

</div>

<!--v-->

## 第8章 指针

> 很重要的内容，但是上机考试不作要求

<div class="mul-cols">

<div class="col">

- 指针的概念与定义
    - 变量、内存单元与地址的关系
    - 指针变量的定义与初始化 
- 指针作为函数参数
    - 通过指针参数使函数返回多个值
- 指针与数组
    - 指针、数组与地址的关系
    - 数组名与指针的关系
- 指针与字符串
- 常用字符串处理函数
 - 指针实现内存动态分配

</div>

<div class="col">

```c
// define a pointer
int var = 10;
int *p = &var;

// visit and assign
var = *p + 1;
p++;

// pointer and array
int arr[10];
int *p = arr;

// pointer and function
void myfun(int *p){ ... }
```

</div>

</div>

<!--v-->

## 第9章 结构


<div class="mul-cols">

<div class="col">

- 结构的概念与定义
- 结构变量
    - 定义和初始化
    - 成员引用、相互赋值、作为函数参数
- 结构数组
    - 定义和初始化
    - 结构数组成员引用
- 结构指针
    - 结构指针的概念
    - 结构指针的引用和赋值
    - 结构指针作为函数参数

</div>

<div class="col">

```c
// define a struct
struct{
    int num；char name[20]；
    double grade;
}s;

// initialize a struct
s = {1, "Tom", 89.5};

// visit and assign
int id = s.num;
char *name = s.name;

// struct pointer
struct *p = &s;
int id = p->num;
char *name = p->name;
```

</div>

</div>

<!--v-->

## 剩下章节

- 第10章 函数与程序结构
    - 多函数程序的组织结构
    - 编译预处理
- 第11章 指针进阶
- 第12章 文件

考试中涉及到的内容很少，了解即可，不作深入要求，常见题型会做就好

<!--s-->

<div class="middle center">
<div style="width: 100%">

# Part.2 考试重点标注

</div>
</div>

<!--v-->

## 章节总览

| 章节 | 知识点 | 上机考重点 |
| :---: | --- | --- |
| 1 | 引言 | / |
| 2 | 用C语言编写程序 | / | 
| 3 | 分支结构 | if-else/switch语句⭐ |
| 4 | 循环结构 | for/while循环语句⭐ |
| 5 | 函数 | ⭐ |
| 6 | 回顾数据类型与表达式 | / |
| 7 | 数组 | 字符串和二维数组⭐⭐⭐  |
| 8 | 指针 | / |
| 9 | 结构 | / |
| ... | 剩余章节 | / |

<!--v-->

## 上机考试复习重点章节

> 1. 明确上机考的范围，以任课老师的要求为准
> 2. 复习下面写的是上机考试重点的章节，其他章节的内容也要关注，比如*格式化输入输出*

| 章节 | 知识点 | 上机考重点 |
| :---: | --- | --- |
| 3 | 分支结构 | if-else/switch语句⭐ |
| 4 | 循环结构 | for/while循环语句⭐ |
| 5 | 函数 | ⭐ |
| 7 | 数组 | 字符串和二维数组⭐⭐⭐  |

<!--v-->

## 其他章节中的易考点

> 1. 这里仅列举了一些常见的易考点，因人而异，需要大家自己整理
> 2. 一些章节的内容可能会在其他章节中有所涉及，需要注意，比如*变量的作用域*

| 章节 | 知识点 | 易考点 |
| :---: | --- | --- |
| 2 | 用C语言编写程序 | C语言的编译过程 |
| 6 | 回顾数据类型与表达式 | 数据类型转换，逻辑运算符的短路 |
| 8 | 指针 | 指针的定义和使用 |
| 9 | 结构 | 结构体的定义和使用 |
| 10 | 函数与程序结构 | 函数的定义和调用|

<!--s-->

<div class="middle center">
<div style="width: 100%">

# Part.3 复习备考建议

</div>
</div>

<!--v-->

## 从哪些方面备考

- 理论复习
    - 回顾课件和书本，细碎的知识点自己整理一下
    - 利用PTA上的作业和小测题，整理自己的错题做好总结
- 上机复习
    - 复习基本的编程模块
        - 输入、输出
        - 条件、选择、循环语句的结构
        - 数组的定义和使用：一维数组、二维数组
        - 字符串的定义和使用
        - 字符串的输入输出，操作
    - 结合 PTA 的编程题目练习
        - 锻炼读题和思考能力
        - 培养手感

<!--v-->

## 理论复习

- 回顾课件和书本
    - 整理知识脉络
    - 做成思维导图
    - 明确整个课程的知识体系
- PTA上的作业和小测题，整理自己的错题做好总结
    - 挑选题目
    - 归纳错题
    - 举一反三

<!--v-->

## 上机实践

- 复习基本的编程模块
    - 写代码的时候不要再看课件和课本样例
    - 不要借助任何工具: LLM/copilot/IDE
- 结合 PTA 的编程题目练习
    - 根据自己的熟练程度选择题目数量和难度
    - 不要尝试太难的题目
    - 重点做章节的题目
    - 对自己要求高的同学可以限时做


<!--s-->

<div class="middle center">
<div style="width: 100%">

# Part4. 考试经验分享


</div>
</div>

<!--v-->

## 理论考试经验

<div class="mul-cols">

<div class="col">

- 看题目的时候要看全题干再做，不要急于做题
- 遇到不确定的题目先跳过，不要太纠结
- 程序填空题要注意格式！
    - 有没有空格
    - 有没有符号(,/")
    - 数据类型(int/float/double)
- 注意语句的结尾，有没有分号

</div>

<div class="col">

```c
// 以下表达式的结果类型是什么
// 1. 数学库函数的运算
>>> srqt(2) * 3

// 三目运算符
int a = 1.2;
>>> (a > 0) ? 1 : 1.5
```

```c
// 以下代码的输出是什么
int i = 10;
while (i != 0); {
    printf("%d\n", i);
    i--;
}
```

</div>
</div>


<!--v-->

## 一道易错题

<div class="fragment">

```c
int main()
{
    int k = 2;
    sizeof(++k);

    printf("%d\n", k);
    return 0;
}
```

</div>

<div class="fragment">

结果应该是什么呢❓ 答案是 3 吗❓

</div>

<div class="fragment">

正确答案是 2❗ Why❓

</div>

<div class="fragment">

> 在C语言中，如果 sizeof 运算符后面跟的是表达式，则这个表达式是<u>不会进行运算的</u>。
> 
> 解答出处：[link 🔗](https://learn.microsoft.com/en-us/cpp/cpp/sizeof-operator?view=msvc-170
)


</div>

<!--v-->

## 上机考试经验

- 读题
    - 先理解题目，输入输出是什么，明确要实现什么，再梳理实现思路
- 实现
    - 根据自己设计的代码思路写
    - 有报错不要慌张，如果是个别测试点可以考虑用 Test
    - 错误的测试点较多说明实现思路有问题
    - 重新调整思路如果来不及可以先看下一题，稳住心态
- 题型分布
    - 简单的格式化输入输出
    - 分支、循环结构
    - 函数题、算法题（较少）
    - 一维数组、二维数组、字符串

<!--v-->

## 上机考试经验

#### 写代码时要注意的地方

- 变量
    - ❌ 不要用单个字符来指代有意义的变量，写到后面容易忘记是什么意思
    - 循环中的局部变量可以用
    - 题目给出的单个字符可以用
- OJ
    - 由于考试用PTA的OJ，不需要特意考虑时间和内存，建议使用简单的语句，尽量简化，❌ 不要用很复杂的语句
- 格式
    - 一定要看清楚题目要求的输入和输出格式
    - 注意缩进、空格和符号，规范代码中的大括号，缩进使用空格，❌ 不要使用Tab


<!--v-->

## 上机考试经验

#### 调试代码

> 在考试的时候，如果自己的代码有问题，该怎么办？

1. 先明确是什么问题，能不能过编译，是 **语法错误** 还是 **逻辑错误**
    - 语法错误：有编译报错信息，根据报错信息的提示定位问题
    - 逻辑错误：能过编译，但是结果不对，代码思路有问题
2. 定位到问题之后，我们开始debug
    - 语法错误：定位到报错行，检查括号，分号，变量名是否正确
    - 逻辑错误：自己写测试样例，逐个测试，找到问题所在
3. 很痛苦的结果是：有报错，解决了编译问题，但是提交代码后答案错误 :(

那我该怎么debug呢？

<!--v-->

## 上机考试经验

#### 调试代码

1. 用devc++的调试功能
    - 可以在代码中加断点，逐步调试
    - 逐步执行代码，查看变量的值
    - 看代码执行的流程是否和自己预期的一样
2. 觉得第一种方法麻烦，可以用printf
    - 在代码中加入printf，输出一些中间变量的值
    - 看输出的结果是否和自己预期的一样
    - 逐步定位问题所在

个人推荐在考试的时候时间紧张，用printf的方式调试

<!--v-->

## 上机考试经验

#### 调试代码示例：冒泡排序

<div class="mul-cols">

<div class="col">

```c
// bubble sort
int i, j, temp;
for (i = 0; i < MAX; i++) {
    scanf("%d", &a[i]);
}
for (i = 0; i < MAX - 1; i++) {
    for (j = 0; j < MAX - 1 - i; j++) {
        if (a[j] > a[j + 1]) {
            a[j]     = a[j + 1];
            temp     = a[j];
            a[j + 1] = temp;
        }
    }
}
```

</div>

<div class="col">

```sh
# test
gcc test.c -o test && ./test
# input
>>> 10 2 5 3 6 8 1 4 9 7
# output
>>> 1 1 1 1 1 1 1 4 7 7 
# What's wrong with my codes❓
```

Code file: [link 🔗](https://raw.githubusercontent.com/cxzhou35/Reveal-md/refs/heads/main/zju_c_share/site/slides/test.c)

</div>

</div>

<!--v-->

## 上机考试经验

#### 代码怎么写的快

- 熟悉键盘布局，不要盯着键盘写代码
- 用英文输入法，不要使用中文输入法，也不要用sougou输入法再切换英文
- 左右分屏写，左边看题目要求，右边可以开始写基础代码模板（头文件，main函数，变量定义）
- 预先设置一些宏函数，比如输入输出的宏函数，可以减少重复代码量

```c
#define IN_INT(a) scanf("%d", &a)
#define OUT_INT(a) printf("%d ", a)
#define IN_ARRAY(a) for (int i = 0; i < MAX; i++) scanf("%d", &a[i])
#define OUT_ARRARY(a) for (int i = 0; i < MAX; i++) printf("%d ", a[i])
```

- 灵活使用快捷键，比如复制粘贴，撤销，保存等
    - C-c, C-v, C-z, C-s, End, Home

<!--s-->

<div class="middle center">
<div style="width: 100%">

# 预祝大家考试顺利！

<hr/>

<div align="center">Q & A</div>


</div>
</div>

