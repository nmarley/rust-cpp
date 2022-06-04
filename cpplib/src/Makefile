# System setup
SHELL = bash

.PHONY: default

default:  build ## Run default target

SRCS = point.cpp

OBJS = point.o


build:  ## Run goimports to format code
	clang++ -c $(SRCS)

help:  ## Show This Help
	@for line in $$(cat Makefile | grep "##" | grep -v "grep" | sed  "s/:.*##/:/g" | sed "s/\ /!/g"); do verb=$$(echo $$line | cut -d ":" -f 1); desc=$$(echo $$line | cut -d ":" -f 2 | sed "s/!/\ /g"); printf "%-30s--%s\n" "$$verb" "$$desc"; done

clean:  ## Clean up transient (generated) files
	rm $(OBJS)
