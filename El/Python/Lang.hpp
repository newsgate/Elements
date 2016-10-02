/*
 * product   : Elements - useful abstractions library.
 * copyright : Copyright (c) 2005-2016 Karen Arutyunov
 * licenses  : GNU GPL v2; see accompanying LICENSE file
 *             Commercial; contact karen.arutyunov@gmail.com
 */

/**
 * @file Elements/El/Python/Lang.hpp
 * @author Karen Arutyunov
 * $id:$
 */

#ifndef _ELEMENTS_EL_PYTHON_LANG_HPP_
#define _ELEMENTS_EL_PYTHON_LANG_HPP_

#include <El/Exception.hpp>
#include <El/Lang.hpp>

#include <El/Python/Object.hpp>
#include <El/Python/RefCount.hpp>
#include <El/Python/Sequence.hpp>

namespace El
{
  namespace Python
  {
    class Lang : public El::Python::ObjectImpl,
                 public El::Lang
    {
    public:      
      Lang(PyTypeObject *type, PyObject *args, PyObject *kwds)
        throw(El::Exception);

      Lang(const El::Lang& val) throw(El::Exception);
      Lang() throw(El::Exception);

      virtual ~Lang() throw() {}

      virtual CMP_RESULT eq(ObjectImpl* ob) throw(Exception, El::Exception);
      virtual void write(El::BinaryOutStream& bstr) const throw(El::Exception);
      virtual void read(El::BinaryInStream& bstr) throw(El::Exception);
      
      PyObject* py_el_code() throw(El::Exception);
      PyObject* py_l2_code(PyObject* args) throw(El::Exception);
      PyObject* py_l3_code(PyObject* args) throw(El::Exception);
      PyObject* py_num_code() throw(El::Exception);
      PyObject* py_name() throw(El::Exception);
      PyObject* py_description() throw(El::Exception);
      
      class Type : public El::Python::ObjectTypeImpl<Lang, Lang::Type>
      {
      public:
        Type() throw(El::Python::Exception, El::Exception);
        static Type instance;
        
        PY_TYPE_METHOD_NOARGS(
          py_el_code,
          "el_code",
          "Returns language el-code");

        PY_TYPE_METHOD_VARARGS(
          py_l2_code,
          "l2_code",
          "Returns language in 2-letter form");

        PY_TYPE_METHOD_VARARGS(
          py_l3_code,
          "l3_code",
          "Returns language in 3-letter form");

        PY_TYPE_METHOD_NOARGS(
          py_num_code,
          "num_code",
          "Returns language in numeric form");

        PY_TYPE_METHOD_NOARGS(
          py_name,
          "name",
          "Returns language name");

        PY_TYPE_METHOD_NOARGS(
          py_description,
          "description",
          "Returns language in <int code> (<l3 code>, <name>) form");

        PY_TYPE_STATIC_MEMBER(null_, "null");
        PY_TYPE_STATIC_MEMBER(nonexistent_, "nonexistent");
        PY_TYPE_STATIC_MEMBER(all_, "all");
          
      private:
        SmartPtr<Lang> null_;
        SmartPtr<Lang> nonexistent_;
        El::Python::Sequence_var all_;
      };      
    };

    typedef SmartPtr<Lang> Lang_var;
  }
}

///////////////////////////////////////////////////////////////////////////////
// Inlines
///////////////////////////////////////////////////////////////////////////////

namespace El
{
  namespace Python
  {
    //
    // El::Python::Lang::Type class
    //
    inline
    Lang::Lang(const El::Lang& val) throw(El::Exception)
        : ObjectImpl(&Type::instance)
    {
      *static_cast<El::Lang*>(this) = val;
    }
    
    inline
    Lang::Lang() throw(El::Exception) : ObjectImpl(&Type::instance)
    {
    }
    
    inline
    void
    Lang::write(El::BinaryOutStream& bstr) const throw(El::Exception)
    {
      ::El::Lang::write(bstr);
    }
    
    inline
    void
    Lang::read(El::BinaryInStream& bstr) throw(El::Exception)
    {
      ::El::Lang::read(bstr);
    }    
  }
}

#endif // _ELEMENTS_EL_PYTHON_LANG_HPP_
