# System setup
SHELL = bash

CC = clang
CXX = clang++
CFLAGS = -mmacosx-version-min=10.9
CXXFLAGS = -std=c++2a -mmacosx-version-min=10.9
LDFLAGS = -lstdc++ -mmacosx-version-min=10.9

.PHONY: default

default:  build ## Run default target

SRCS = point.cpp main.cpp

OBJS = point.o main.o

EXE = ./main

build:  ## Run goimports to format code
	$(CXX) -c $(CXXFLAGS) $(SRCS)
	$(CXX) $(LDFLAGS) -o $(EXE) $(OBJS)

c:  ## Run goimports to format code
	$(CC) -c $(CFLAGS) main.c
	$(CC) $(LDFLAGS) -o main $(OBJS)

help:  ## Show This Help
	@for line in $$(cat Makefile | grep "##" | grep -v "grep" | sed  "s/:.*##/:/g" | sed "s/\ /!/g"); do verb=$$(echo $$line | cut -d ":" -f 1); desc=$$(echo $$line | cut -d ":" -f 2 | sed "s/!/\ /g"); printf "%-30s--%s\n" "$$verb" "$$desc"; done

clean:  ## Clean up transient (generated) files
	rm -f $(OBJS) $(EXE)
