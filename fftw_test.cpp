#include <iostream>
#include <keyfinder/keyfinder.h>
#include <keyfinder/constants.h>
#include <keyfinder/fftadapter.h>

int main(void)
{
    std::cout<<"heelo 7"<<"\n";
    KeyFinder::FftAdapter fftAdapter = new KeyFinder::FftAdapter(4);
    fftAdapter->setInput(0,0.12);
    fftAdapter->setInput(1,0.32);
    fftAdapter->setInput(2,0.43);
    fftAdapter->setInput(3,0.56);
    fftAdapter->execute();
    std::cout<<fftAdapter->getOutputReal(0)<<"\n";
    return 0;
}