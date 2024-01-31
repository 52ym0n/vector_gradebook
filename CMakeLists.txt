cmake_minimum_required(VERSION 3.10)
project(gradebook)

include_directories(include)


add_executable(app ./src/class.c ./src/Eval.c ./src/smvector.c ./src/Source.c ./src/student.c ./src/Subject.c) 