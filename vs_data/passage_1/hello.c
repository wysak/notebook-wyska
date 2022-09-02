#include <stdio.h> 
/*
这里的头文件所执行的代码是预处理指令[是后续的学习常接触的一个重要点]
,因此，如果你要调用一些特定的函数，则必须预编译，头文件的作用就显而易见了*/
/*
#include =>表示包括、引用   例如：c的标准库函数stdio.h,一般来说
，标准库函数在\mingw64\x86_64-w64-mingw32\include中，只限需要mingw的编译器中
*/
int main(void) //这是标准main()函数写法，没有其他的。
/*
函数名，这里所表达的含义是说一个叫main()的函数。目前来说，只需要记住int和void在标准ANSI c中常用来
定义main()的一部分
*/
{ //函数体的开始
    printf("hello world"); //调用printf函数
    return 0; //可以给调用方提供（或返回）一个数
} //函数体的结束