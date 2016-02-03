# raspberry-code
  This codes are records for my raspberry Pi using wiringPi.Including servos,temperature's sensor and so on.

## first 

you must install wiringPi in your Raspberry Pi.

###download wiringPi:

`git clone git://git.drogon.net/wiringPi`

###make and install: 

```
cd wiringPi

./build
```




# raspberry-code
这些是树莓派上用wiringPi的一些代码记录。

## 首先

你要在树莓派上安装wiringPi。

###下载 wiringPi：

  `git clone git://git.drogon.net/wiringPi`

###安装：

  `cd wiringPi`
  
  `./build`
  
###使用：
用vi或者nano新建一个blink.c的文件：
`vi blink.c`
内容如下：
```
#include <wiringPi.h>
int main( )
{
    // 初始化wiringPi
    wiringPiSetup();
    int i = 0;
    // 设置IO口全部为输出状态
    for( i = 0 ; i < 8 ; i++ )
        pinMode(i, OUTPUT);
       
    for (;;)
    {
        for( i = 0 ; i < 8 ; i++ )
        {
            // 点亮500ms 熄灭500ms
            digitalWrite(i, HIGH); delay(500);
            digitalWrite(i, LOW); delay(500);
        }
    }
   
    return 0;
}
```
编译：
```
blink:blink.o
 gcc blink.c -o blink -lwiringPi
clean:
 rm -f blink blink.o
 ```
