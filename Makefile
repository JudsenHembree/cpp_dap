all:
	cd build/release && cmake -DCMAKE_BUILD_TYPE=Release ../../ && make
	cd build/debug && cmake -DCMAKE_BUILD_TYPE=Debug ../../ && make

run:
	cd build/release && ./NVIM*
