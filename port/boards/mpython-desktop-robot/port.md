掌控桌面机器人移植自掌控板实验箱
硬件改动：
1、RGB灯改成8个，用作两边信息指示
2、加速度计改为MPU6050
3、外置CODEC芯片
4、无触摸按键
5、无声音传感器
6、显示屏为中景园1.54 OLED。
7、超声波为通用接口
8、增加一路光线输入。
9、去掉按键A
10、增加顶部按键上的状态指示灯。
11、增加从MCU控制（I2C接口）
13、增加MMA5983磁力计
14、增加外置PSRAM。

固件改动
1、增加stm32.py, 控制从MCU。
2、
3、
4、
5、修改RGB灯数为6。
6、

固件修改
1、加入PSRAM支持
    mpconfigboard.mk加入psram配置

2、修改_boot.py中RGBled引脚。
3、1.54 oled驱动：
    新增ssd1309驱动
    修改mpython中oled的父类为ssd1309_i2c
    升压电路受控。

*、1.6寸彩屏驱动
   1）modst7789.c放入builtin文件兲，修改makefile加入本文件的编译。
   2）加大应用分区表
   3）mpconfigboard.h加入模块st7789


2020-05-29
加入esp-adf
1、修改分区表
2、添加子模块esp-adf,
3、需修改的ADF源文件放在mpython-desktop-robot/esp-adf下。
4、修改makefile
5、解决之前固件中已有es8388.c/h文件冲突
6、打上esp-idf补丁。