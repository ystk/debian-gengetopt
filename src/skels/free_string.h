/*
 * File automatically generated by
 * gengen 1.4.3rc by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#ifndef FREE_STRING_GEN_CLASS_H
#define FREE_STRING_GEN_CLASS_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class free_string_gen_class
{
 protected:
  bool has_string_type;
  string opt_var;
  string structure;

 public:
  free_string_gen_class() :
    has_string_type (false)
  {
  }
  
  free_string_gen_class(bool _has_string_type, const string &_opt_var, const string &_structure) :
    has_string_type (_has_string_type), opt_var (_opt_var), structure (_structure)
  {
  }

  static void
  generate_string(const string &s, ostream &stream, unsigned int indent)
  {
    if (!indent || s.find('\n') == string::npos)
      {
        stream << s;
        return;
      }

    string::size_type pos;
    string::size_type start = 0;
    string ind (indent, ' ');
    while ( (pos=s.find('\n', start)) != string::npos)
      {
        stream << s.substr (start, (pos+1)-start);
        start = pos+1;
        if (start+1 <= s.size ())
          stream << ind;
      }
    if (start+1 <= s.size ())
      stream << s.substr (start);
  }

  void set_has_string_type(bool _has_string_type)
  {
    has_string_type = _has_string_type;
  }

  void set_opt_var(const string &_opt_var)
  {
    opt_var = _opt_var;
  }

  void set_structure(const string &_structure)
  {
    structure = _structure;
  }

  void generate_free_string(ostream &stream, unsigned int indent = 0);
  
};

#endif // FREE_STRING_GEN_CLASS_H
