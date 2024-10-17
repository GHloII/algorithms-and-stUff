### tags: #cmake #cpp 
___
### Папка с проектом
```plaintext
project/
│
├── test.cpp
├── coutpen.cpp
├── coutpen.h
├── CMakeLists.txt
└── build/ (эта папка будет создана после сборки)

```

### CMakeLists.txt
```cmake
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

```
#### Дополнение:
- если используем std::string то никуда это писать не надо потому что указали стандарт плюсов




### Выполнение:
```bash
# из папки билд в терминале
cmake ..
make
```
## bash script для выполнения:
### Создание скрипта:

1.  **Создай файл** скрипта, например, назови его `build.sh` в корневой директории проекта.
2. **Сделай скрипт исполняемым**: чтобы сделать файл скрипта исполняемым, выполни команду в терминале: 
```bash
chmod +x build.sh
```
### bash скрипт:
```bash
#!/bin/bash

  

# Создаем папку для сборки, если её нет

if [ ! -d "build" ]; then

mkdir build

fi
# Переходим в папку build

cd build
# Генерируем сборочные файлы с помощью CMake

cmake ..
# Запускаем сборку с помощью make

make

# Проверяем, успешна ли сборка (0 - успех)

if [ $? -eq 0 ]; then

# Если сборка успешна, запускаем программу

echo "Сборка завершена. Запуск программы..."

./my_program

else

echo "Ошибка сборки."

fi

```

### Для исполнения скрипта:

```bash
./build.sh
```
в терминале

