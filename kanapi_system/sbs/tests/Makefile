RESULTS=/tmp/tests_results

test_gcc: test_gcc0.c test_gcc1.c test_libstdcpp.cpp test_threads.cpp test_shared_future.cpp
	@echo "tests for $@ for TARGET=$(KANAPI_TARGET_NAME)"
	@if [ ! -d $(RESULTS) ] ; then mkdir $(RESULTS) ; fi
	gcc test_gcc0.c -Wall -o $(RESULTS)/test_gcc0 ; $(RESULTS)/test_gcc0
	gcc test_gcc1.c -Wall -o $(RESULTS)/test_gcc1 ; $(RESULTS)/test_gcc1
	gcc -fopenmp test_gcc0.c -Wall -o $(RESULTS)/test_gcc2 ; $(RESULTS)/test_gcc2
	g++ test_libstdcpp.cpp -Wall -lstdc++ -std=c++11 -o $(RESULTS)/test_libstdcpp ; $(RESULTS)/test_libstdcpp
	g++ test_threads.cpp -Wall -lstdc++ -std=c++11 -o $(RESULTS)/test_threads -pthread ; $(RESULTS)/test_threads
	g++ test_chrono.cpp -Wall -std=c++11 -o $(RESULTS)/test_chrono ; $(RESULTS)/test_chrono
	gcc test_lm.c -Wall -lm -o $(RESULTS)/test_lm ; $(RESULTS)/test_lm
	gcc test_backtrace.c -Wall -o $(RESULTS)/test_backtrace ; $(RESULTS)/test_backtrace
	gcc test_long.c -Wall -o $(RESULTS)/test_long ; $(RESULTS)/test_long
	g++ test_shared_future.cpp -Wall -std=c++11 -o $(RESULTS)/test_shared_future ; ldd $(RESULTS)/test_shared_future

test_%:
	@echo "missing tests for $@"

test_gmp:
	./test_lib gmp

test_mpc:
	./test_lib mpc

test_mpfr:
	./test_lib mpfr

