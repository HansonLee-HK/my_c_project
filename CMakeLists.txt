#指定那个版本的CMake
cmake_minimum_required(VERSION 3.10)

#定义项目名称 和 语言类型
project(MyCProject C)

#设置使用的C语言标准版本，C99比C89新，支持//注释、变量延后声明等
set(CMAKE_C_STANDARD 99)

#告诉编译器，头文件在那些目录中查找
include_directories(include)

#指定要生成的可执行文件名和他的源文件列表
add_executable(my_c_project main.c 
		src/hello.c
		src/test.c
		src/test1.c
)
