/*
 * File automatically generated by
 * gengen 1.4.3rc by Lorenzo Bettini 
 * http://www.gnu.org/software/gengen
 */

#include "group_option.h"

void
group_option_gen_class::generate_group_option(ostream &stream, unsigned int indent)
{
  string indent_str (indent, ' ');
  indent = 0;

  stream << "if (args_info->";
  generate_string (group_var_name, stream, indent + indent_str.length ());
  stream << "_group_counter ";
  generate_string (Comparison_rule, stream, indent + indent_str.length ());
  stream << ")";
  stream << "\n";
  stream << indent_str;
  stream << "  {";
  stream << "\n";
  stream << indent_str;
  stream << "    fprintf (stderr, \"%s: %d options of group ";
  generate_string (group_name, stream, indent + indent_str.length ());
  stream << " were given. ";
  generate_string (number_required, stream, indent + indent_str.length ());
  stream << " is required%s.\\n\", ";
  generate_string (package_var_name, stream, indent + indent_str.length ());
  stream << ", args_info->";
  generate_string (group_var_name, stream, indent + indent_str.length ());
  stream << "_group_counter, (additional_error ? additional_error : \"\"));";
  stream << "\n";
  stream << indent_str;
  stream << "    error_occurred = 1;";
  stream << "\n";
  stream << indent_str;
  stream << "  }";
  stream << "\n";
  stream << indent_str;
}
