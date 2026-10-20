cmake_minimum_required(VERSION 3.24)
project(Clearning C)

# 设置编码，解决中文乱码
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -finput-charset=UTF-8 -fexec-charset=GBK")

set(CMAKE_C_STANDARD 99)

# 【关键修改】这里必须只写一个文件名，且名字要和你想运行的程序对应
# 既然你现在在写 switch.c，我们就只编译它
add_executable(switch switch.c
        随机数.c)
