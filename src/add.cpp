#include "include/onion/add.hpp"

#include <armadillo>

namespace my_namespace
{

    arma::mat add(arma::mat i, arma::mat j)
    {
        return i + j;
    }

};