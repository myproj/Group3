ALL = main.cpp factorial.cpp hello.cpp

main : $(ALL)
	g++ -o main $(ALL)