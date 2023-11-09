# Makefile for Project 1
# Add additional line to build each of the project's .c files.

# Makefiles are used by the make program to automatically build large projects.

# Makefiles consist of a series of rules. Each rule specifies a series of
# commands that complete part of the build process.

# The default rule is called "all"-- running "make" with no other arguments is
# equivalent to running "make all".

# The commands for each rule must be indented by ONE TAB. DO NOT USE SPACES.
# If you get a "missing separator" error, check your editor's settings and turn
# off "soft tabs," which can automatically convert tabs to spaces.

all:
	gcc -Wall -Werror -o problem1 problem1.c
    
clean:
	rm problem1