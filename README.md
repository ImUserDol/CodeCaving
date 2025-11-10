The code changes on the fly, outputting to the error stream (highlighted in red) instead of the standard stream as in the code.
Код изменяется на лету, выводя результаты в поток ошибок (выделено красным цветом) вместо стандартного потока, как в коде.


If you compile according to the instructions, don't forget to uncomment a couple of lines in main.cpp and comment out those that are marked there.
В случае, если будете компилировать по инструкции, не забудьте раскомментировать пару строк в main.cpp и закомментировать те, которые там отмечены

# Для компиляции:
# For compile:
```
g++ -O0 -fno-pie -no-pie -fno-asynchronous-unwind-tables -fno-stack-protector -o a.out main.cpp
```
