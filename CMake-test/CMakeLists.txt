# Минимальная версия CMake
cmake_minimum_required(VERSION 3.10)

# Название проекта
project(MyProgram)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 14c)

# Указываем исходные и заголовочные файлы
set(SOURCES
    test.cpp
    coutpen.cpp
)

set(HEADERS
    coutpen.h
)

# Создаем исполняемый файл
add_executable(my_program ${SOURCES} ${HEADERS})
