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
	. ./set_variables; gcc test_headers.c -Wall -o $(RESULTS)/test_headers ; $(RESULTS)/test_headers
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

check:
	. ./set_variables ; echo "PATH=${PATH}"; echo "LD_LIBRARY_PATH=${LD_LIBRARY_PATH}"

headers:
#	. ./set_variables; gcc -E test_headers.c -Wall -o $(RESULTS)/test_headers.i ; cat $(RESULTS)/test_headers.i
	. ./set_variables; gcc test_headers.c -Wall -o $(RESULTS)/test_headers ; $(RESULTS)/test_headers

test_clang:
	@if [ ! -d $(RESULTS) ] ; then mkdir $(RESULTS) ; fi
	clang test_gcc0.c -o $(RESULTS)/test_clang0; $(RESULTS)/test_clang0
	clang++ test_libstdcpp.cpp -Wall -lstdc++ -std=c++11 -o $(RESULTS)/test_libstdcpp_clang ; $(RESULTS)/test_libstdcpp_clang


CFLAGS:=$(shell pkg-config --cflags gl x11)
LDFLAGS:=$(shell pkg-config --libs gl x11) -lstdc++

test_gl: test_gl.c
	 @if [ ! -d $(RESULTS) ] ; then mkdir $(RESULTS) ; fi
	@echo "CFLAGS=$(CFLAGS)"
	@echo "LDFLAGS=$(LDFLAGS)"
	gcc test_gl.c -Wall -o $(RESULTS)/test_gl $(CFLAGS) $(LDFLAGS) ; $(RESULTS)/test_gl

test_flags:	
	gcc test_gcc0.c -Wall -Wno-error-implicit-function-declaration -o $(RESULTS)/test_flags ; $(RESULTS)/test_flags

FLAGS:=$(shell pkg-config --cflags --libs gtk+-3.0)

test_gtk: test_gtk.c
	 gcc -g test_gtk.c $(FLAGS) -o test_gtk

check_compiler:
	clang++ -dM -E -x c++ /dev/null | grep __cplusplus
	g++ -dM -E -x c++ /dev/null | grep __cplusplus

