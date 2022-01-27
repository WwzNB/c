//
// Created by Administrator on 2022/1/20.
//

#include "a.h"//头文件
#define wwz "666" //预处理

void main(){//void表示返回值的类型,void是空的意思,表示不返回任何值,但是要求在屏幕上打印内容.
//main表示主方法的意思,他是程序的入口,每一个源文件都必须有一个main方法.
    //$a1
    printf("hello world!\n");//printf()是一个类,用于打印文本,
    int a;
    long b;
    short c;
    float d;
    double e;
    char f;
    char g[5];
    //$a2
    a = 52015201;
    b = 20090601;
    c ='w';
    d =3.1415926;
    e =3.1415926535;
    f = "w";
    g[0] ='H';
    g[1] ='e';
    g[2] ='l';
    g[3] ='l';
    g[4] ='o';

    //$a3
    printf("%d\n",a);
    printf("%c\n",c);
    printf("%.2f\n",d);
    printf("%10.7f\n",e);
    printf(g);
    char h[7]= {' ','w','o','r','l','d','!'};
    printf(h);
    //$a4
    printf(wwz);
    //$a5
    
    

    
}

 