RESULTS=/tmp/tests_results

test_llvm: test_gcc0.c test_gcc1.c test_libstdcpp.cpp test_threads.cpp test_shared_future.cpp
	@echo "tests for $@"
	@if [ ! -d $(RESULTS) ] ; then mkdir $(RESULTS) ; fi
	. ./set_variables; clang test_gcc0.c -Wall -o $(RESULTS)/test_gcc0 $${LDFLAGS}; $(RESULTS)/test_gcc0
	. ./set_variables; clang test_gcc1.c -Wall -o $(RESULTS)/test_gcc1 $${LDFLAGS}; $(RESULTS)/test_gcc1
	. ./set_variables; clang++ test_libstdcpp.cpp -Wall -lstdc++ -std=c++11 -o $(RESULTS)/test_libstdcpp $${LDFLAGS}; $(RESULTS)/test_libstdcpp
	. ./set_variables; clang++ test_threads.cpp -Wall -lstdc++ -std=c++11 -o $(RESULTS)/test_threads -pthread $${LDFLAGS}; $(RESULTS)/test_threads
	. ./set_variables; clang++ test_chrono.cpp -Wall -std=c++11 -o $(RESULTS)/test_chrono $${LDFLAGS} ; $(RESULTS)/test_chrono
	. ./set_variables; clang test_lm.c -Wall -lm -o $(RESULTS)/test_lm $${LDFLAGS}; $(RESULTS)/test_lm
	. ./set_variables; clang test_backtrace.c -Wall -o $(RESULTS)/test_backtrace $${LDFLAGS}; $(RESULTS)/test_backtrace
	. ./set_variables; clang test_long.c -Wall -o $(RESULTS)/test_long $${LDFLAGS}; $(RESULTS)/test_long
	. ./set_variables; clang++ test_shared_future.cpp -Wall -std=c++11 -o $(RESULTS)/test_shared_future $${LDFLAGS}; ldd $(RESULTS)/test_shared_future
	. ./set_variables; clang -fopenmp=libgomp  test_gcc0.c -Wall -o $(RESULTS)/test_gcc2 $${LDFLAGS}; $(RESULTS)/test_gcc2

