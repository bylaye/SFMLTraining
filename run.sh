#!/bin/bash

app_name='sfml-app'

g++ -c $1 -o main.o && \
g++ main.o -o $app_name -lsfml-graphics -lsfml-window -lsfml-system && \
./$app_name
