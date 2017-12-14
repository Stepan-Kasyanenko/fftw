PREFIX=/usr/local

fftw: fftw_test.cpp
	$(CXX) $< -std=c++11 -Wall -lfftw3-3  -o $@

install: fftw fftw.1
	install -d "${DESTDIR}${PREFIX}/bin"
	install -m 755 fftw "${DESTDIR}${PREFIX}/bin/fftw"
	install -d "${DESTDIR}${PREFIX}/share/man/man1"
	install -m 644 fftw.1 "${DESTDIR}${PREFIX}/share/man/man1/fftw.1"

clean:
	rm fftw
