#include <vector>

#include "error.h"
#include "SymAlg.h"

#ifndef __RC4__
#define __RC4__
class RC4 : public SymAlg{
    private:
        std::vector <uint8_t> key;
        uint8_t s[256], i_e, j_e, i_d, j_d;
        void ksa(std::vector <uint8_t> & key);
        int prga(uint8_t & i, uint8_t & j);

    public:
        RC4(std::string KEY);
        void setkey(std::string KEY);
        std::string encrypt(std::string DATA);
        std::string decrypt(std::string DATA);
        unsigned int blocksize();
};
#endif
