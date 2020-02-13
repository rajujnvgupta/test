#!/bin/bash
for((i = 0; ; ++i)); do
	echo $i
	./gen $i > int
	./c < int > out1
	./editorial_c < int > out2
	 diff -w out1 out2 || break
	# diff -w <(./brute < int) <(./program < int) || break
done
