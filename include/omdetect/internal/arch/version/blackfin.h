#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__ADSPBLACKFIN__)
    #if defined(__ADSPBF7xx__)
        #if defined(__ADSPBF71x__)
            #if defined(__ADSPBF719__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 1, 9)
            #elif defined(__ADSPBF718__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 1, 8)
            #elif defined(__ADSPBF716__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 1, 6)
            #elif defined(__ADSPBF715__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 1, 5)
            #else
                #define OMD_ARCH_VERSION OMD_VERSION(7, 1, 0)
            #endif
        #elif defined(__ADSPBF70x__)
            #if defined(__ADSPBF707__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 7)
            #elif defined(__ADSPBF706__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 6)
            #elif defined(__ADSPBF705__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 5)
            #elif defined(__ADSPBF704__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 4)
            #elif defined(__ADSPBF703__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 3)
            #elif defined(__ADSPBF702__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 2)
            #elif defined(__ADSPBF701__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 1)
            #elif defined(__ADSPBF700__)
                #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 0)
            #else
                #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 0)
            #endif
        #else
            #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 0)
        #endif
    #elif defined(__ADSPBF60x__) || defined(__ADSPBF6xx__)
        #if defined(__ADSPBF609__)
            #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 9)
        #elif defined(__ADSPBF608__)
            #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 8)
        #elif defined(__ADSPBF607__)
            #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 7)
        #elif defined(__ADSPBF606__)
            #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 6)
        #else
            #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 0)
        #endif
    #elif defined(__ADSPBF5xx__)
        #if defined(__ADSPBF59x__)
            #if defined(__ADSPBF592__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 9, 2)
            #else
                #define OMD_ARCH_VERSION OMD_VERSION(5, 9, 0)
            #endif
        #elif defined(__ADSPBF56x__)
            #if defined(__ADSPBF561__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 6, 1)
            #else
                #define OMD_ARCH_VERSION OMD_VERSION(5, 6, 0)
            #endif
        #elif defined(__ADSPBF54x__)
            #if defined(__ADSPBF549__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 4, 9)
            #elif defined(__ADSPBF548__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 4, 8)
            #elif defined(__ADSPBF547__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 4, 7)
            #elif defined(__ADSPBF544__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 4, 4)
            #elif defined(__ADSPBF542__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 4, 2)
            #else
                #define OMD_ARCH_VERSION OMD_VERSION(5, 4, 0)
            #endif
        #elif defined(__ADSPBF53x__)
            #if defined(__ADSPBF539__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 3, 9)
            #elif defined(__ADSPBF538__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 3, 8)
            #elif defined(__ADSPBF537__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 3, 7)
            #elif defined(__ADSPBF536__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 3, 6)
            #elif defined(__ADSPBF534__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 3, 4)
            #elif defined(__ADSPBF533__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 3, 3)
            #elif defined(__ADSPBF532__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 3, 2)
            #elif defined(__ADSPBF531__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 3, 1)
            #else
                #define OMD_ARCH_VERSION OMD_VERSION(5, 3, 0)
            #endif
        #elif defined(__ADSPBF52x__)
            #if defined(__ADSPBF527__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 2, 7)
            #elif defined(__ADSPBF526__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 2, 6)
            #elif defined(__ADSPBF525__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 2, 5)
            #elif defined(__ADSPBF524__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 2, 4)
            #elif defined(__ADSPBF523__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 2, 3)
            #elif defined(__ADSPBF522__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 2, 2)
            #else
                #define OMD_ARCH_VERSION OMD_VERSION(5, 2, 0)
            #endif
        #elif defined(__ADSPBF51x__)
            #if defined(__ADSPBF518__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 1, 8)
            #elif defined(__ADSPBF516__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 1, 6)
            #elif defined(__ADSPBF514__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 1, 4)
            #elif defined(__ADSPBF512__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 1, 2)
            #else
                #define OMD_ARCH_VERSION OMD_VERSION(5, 1, 0)
            #endif
        #elif defined(__ADSPBF50x__)
            #if defined(__ADSPBF506__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 0, 6)
            #elif defined(__ADSPBF504__)
                #define OMD_ARCH_VERSION OMD_VERSION(5, 0, 4)
            #else
                #define OMD_ARCH_VERSION OMD_VERSION(5, 0, 0)
            #endif
        #else
            #define OMD_ARCH_VERSION OMD_VERSION(5, 0, 0)
        #endif
    #endif
#endif
