# System setup
SHELL = bash

CC = clang
CXX = clang++
AR = ar
CFLAGS = -mmacosx-version-min=10.9
CXXFLAGS = -std=c++2a -mmacosx-version-min=10.9
LDFLAGS = -lstdc++ -mmacosx-version-min=10.9

.PHONY: default build c install help clean

default:  build ## Run default target

SRCS = point.cpp main.cpp

OBJS = point.o main.o

OBJ_ARCHIVE = libcpplib.a

EXE = main

build:  ## Run goimports to format code
	cd src/ && $(CXX) -c $(CXXFLAGS) $(SRCS)
	cd src/ && $(CXX) $(LDFLAGS) -o $(EXE) $(OBJS)
	cd src/ && $(AR) -ru $(OBJ_ARCHIVE) $(OBJS)

c:  ## Run goimports to format code
	cd src/ && $(CC) -c $(CFLAGS) main.c
	cd src/ && $(CC) $(LDFLAGS) -o main $(OBJS)

install: build c ## Install to lib/ include/, etc.
	mkdir -p include/ lib/
	cp src/*.h src/*.hpp include/
	cp src/*.a lib/

help:  ## Show This Help
	@for line in $$(cat Makefile | grep "##" | grep -v "grep" | sed  "s/:.*##/:/g" | sed "s/\ /!/g"); do verb=$$(echo $$line | cut -d ":" -f 1); desc=$$(echo $$line | cut -d ":" -f 2 | sed "s/!/\ /g"); printf "%-30s--%s\n" "$$verb" "$$desc"; done

clean:  ## Clean up transient (generated) files
	cd src/ && rm -f $(OBJS) $(EXE) $(OBJ_ARCHIVE)
	rm -fr include/ lib/
