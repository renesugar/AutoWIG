#include <boost/python.hpp>
#include <clang/AST/DeclCXX.h>
#include <clang/Basic/OperatorKinds.h>


void export_class_clang__cxxmethod_decl()
{
    std::string clang_7bbff48d_1098_53e8_8270_b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object clang_7bbff48d_1098_53e8_8270_b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d_1098_53e8_8270_b3595c663a99_name.c_str()))));
    boost::python::scope().attr("clang") = clang_7bbff48d_1098_53e8_8270_b3595c663a99_module;
    boost::python::scope clang_7bbff48d_1098_53e8_8270_b3595c663a99_scope = clang_7bbff48d_1098_53e8_8270_b3595c663a99_module;
    boost::python::class_< ::clang::CXXMethodDecl, ::clang::CXXMethodDecl*, boost::python::bases< ::clang::FunctionDecl >, boost::noncopyable >("CXXMethodDecl", boost::python::no_init)
        .def("is_static_overloaded_operator", ::clang::CXXMethodDecl::isStaticOverloadedOperator)
        .def("is_const", &::clang::CXXMethodDecl::isConst)
        .def("is_volatile", &::clang::CXXMethodDecl::isVolatile)
        .def("is_virtual", &::clang::CXXMethodDecl::isVirtual);
}