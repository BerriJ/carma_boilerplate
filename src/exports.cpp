#include "include/onion/add.hpp"
#include "include/onion/pet.hpp"

#include <armadillo>

// pybind11
#include <pybind11/numpy.h>
#include <pybind11/stl.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;

// Carma
#include <carma>

PYBIND11_MODULE(onion, m)
{
    m.doc() = "pybind11 onion plugin"; // optional module docstring

    m.def("add", &my_namespace::add, "A function that adds two matrices");

    py::class_<Pet>(m, "Pet")
        .def(py::init<const std::string &>())
        .def("setName", &Pet::setName)
        .def("getName", &Pet::getName)
        .def_readwrite("name", &Pet::name);
}
