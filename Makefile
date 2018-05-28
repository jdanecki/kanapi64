# 'test-sbs', 'bbs', 'rebuild', 'install'  targets were prepared for Jenkins config

all test test-sbs bbs bbs_sbs core_cli rebuild install:
	make -C ci-tests $@
