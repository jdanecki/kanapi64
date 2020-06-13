include ../scripts/config.kanapi

RESULTS=/tmp/tests_results

test_gcc: test_gcc0.c test_gcc1.c test_gcc3.c test_libstdcpp.cpp test_threads.cpp test_shared_future.cpp
	@echo "tests for $@ for TARGET=$(KANAPI_TARGET_NAME)"
	@if [ ! -d $(RESULTS) ] ; then mkdir $(RESULTS) ; fi
	. ./set_variables; gcc test_gcc0.c -Wall -o $(RESULTS)/test_gcc0 ; $(RESULTS)/test_gcc0
	. ./set_variables; gcc test_gcc1.c -Wall -o $(RESULTS)/test_gcc1 ; $(RESULTS)/test_gcc1
	. ./set_variables; gcc test_gcc3.c -Wall -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D__USE_FILE_OFFSET64 -o $(RESULTS)/test_gcc3 ; $(RESULTS)/test_gcc3
	. ./set_variables; gcc -fopenmp test_gcc0.c -Wall -o $(RESULTS)/test_gcc2 ; $(RESULTS)/test_gcc2
	. ./set_variables; g++ test_libstdcpp.cpp -Wall -lstdc++ -std=c++11 -o $(RESULTS)/test_libstdcpp ; $(RESULTS)/test_libstdcpp
	. ./set_variables; g++ test_threads.cpp -Wall -lstdc++ -std=c++11 -o $(RESULTS)/test_threads -pthread ; $(RESULTS)/test_threads
	. ./set_variables; g++ test_chrono.cpp -Wall -std=c++11 -o $(RESULTS)/test_chrono ; $(RESULTS)/test_chrono
	. ./set_variables; gcc test_lm.c -Wall -lm -o $(RESULTS)/test_lm ; $(RESULTS)/test_lm
	. ./set_variables; gcc test_backtrace.c -Wall -o $(RESULTS)/test_backtrace ; $(RESULTS)/test_backtrace
	. ./set_variables; gcc test_long.c -Wall -o $(RESULTS)/test_long ; $(RESULTS)/test_long
	. ./set_variables; g++ test_shared_future.cpp -Wall -std=c++11 -o $(RESULTS)/test_shared_future ; ldd $(RESULTS)/test_shared_future

test_%:
	@echo "missing tests for $@"

test_gmp:
	./test_lib gmp

test_mpc:
	./test_lib mpc

test_mpfr:
	./test_lib mpfr

