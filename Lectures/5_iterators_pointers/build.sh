#!/bin/bash

# build
g++ -Wall -Werror -std=c++17 iterators_and_pointers.cpp -o iandp

g++ -Wall -Werror -std=c++17 try_iter.cpp -o try_iter

g++ -Wall -Werror -std=c++17 try_pointer.cpp -o try_pointer
