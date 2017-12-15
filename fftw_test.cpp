#include <iostream>
#include <keyfinder/keyfinder.h>
#include <keyfinder/constants.h>
#include <keyfinder/fftadapter.h>

int main(void)
{
    std::cout << "heelo 7"
              << "\n";
    KeyFinder::FftAdapter *fftAdapter = new KeyFinder::FftAdapter(4);
    double n[10] = {0.5057348352023452,
                    0.5814739393180786,
                    0.057877523258875296,
                    0.5645083105402466,
                    0.19422643900648517,
                    0.33551343269112155,
                    0.9929052686408,
                    0.231633714006944,
                    0.5280832258875852,
                    0.5435797861871221};
    for ( int j = 0; j < 10; j++ ) {
      fftAdapter->setInput(j, n[j]);
    }                
    fftAdapter->execute();
    for ( int j = 0; j < 10; j++ ) {
      std::cout << fftAdapter->getOutputReal(j) << "\n"
    } 
    return 0;
}