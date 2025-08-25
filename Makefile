all:
	g++ -Wall -Wextra -g \
        ./src/main.cpp \
        ./lib/simdjson/simdjson.cpp \
        -o ./Cpp_Json
