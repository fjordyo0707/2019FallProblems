# ***
# *** You can modify this file. You do not (should not) submit this file
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 

TESTFALGS = -DTEST_SWAP -DTEST_SORT

SRCS = main.c sort.c
OBJS = $(SRCS:%.c=%.o)

testall: test1 test2 test3 g_case

sort: $(OBJS) 
	$(GCC) $(TESTFALGS) $(OBJS) -o sort

.c.o: 
	$(GCC) $(TESTFALGS) -c $*.c 

test1: sort
	./sort inputs/test1 > output1
	diff output1 expected/expected1

test2: sort
	./sort inputs/test2 > output2
	diff output2 expected/expected2

test3: sort
	./sort inputs/test3 > output3
	diff output3 expected/expected3

g_case: sort
	./sort inputs/g_case_1 > output_g_case_1
	diff output_g_case_1 expected/g_case_1
	./sort inputs/g_case_2 > output_g_case_2
	diff output_g_case_2 expected/g_case_2
	./sort inputs/g_case_3 > output_g_case_3
	diff output_g_case_3 expected/g_case_3
	./sort inputs/g_case_4 > output_g_case_4
	diff output_g_case_4 expected/g_case_4
	./sort inputs/g_case_5 > output_g_case_5
	diff output_g_case_5 expected/g_case_5
	./sort inputs/g_case_6 > output_g_case_6
	diff output_g_case_6 expected/g_case_6
	./sort inputs/g_case_7 > output_g_case_7
	diff output_g_case_7 expected/g_case_7
	./sort inputs/g_case_8 > output_g_case_8
	diff output_g_case_8 expected/g_case_8
	./sort inputs/g_case_9 > output_g_case_9
	diff output_g_case_9 expected/g_case_9
	./sort inputs/g_case_10 > output_g_case_10
	diff output_g_case_10 expected/g_case_10

clean: # remove all machine generated files
	rm -f sort *.o output? output_g_case_?


