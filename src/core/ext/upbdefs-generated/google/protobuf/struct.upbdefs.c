/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/protobuf/struct.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "google/protobuf/struct.upbdefs.h"

extern const upb_msglayout google_protobuf_Struct_msginit;
extern const upb_msglayout google_protobuf_Struct_FieldsEntry_msginit;
extern const upb_msglayout google_protobuf_Value_msginit;
extern const upb_msglayout google_protobuf_ListValue_msginit;

static const upb_msglayout *layouts[4] = {
  &google_protobuf_Struct_msginit,
  &google_protobuf_Struct_FieldsEntry_msginit,
  &google_protobuf_Value_msginit,
  &google_protobuf_ListValue_msginit,
};

static const char descriptor[741] = {'\n', '\034', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 's', 't', 'r', 'u', 'c', 't', '.', 
'p', 'r', 'o', 't', 'o', '\022', '\017', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '\"', '\230', '\001', 
'\n', '\006', 'S', 't', 'r', 'u', 'c', 't', '\022', ';', '\n', '\006', 'f', 'i', 'e', 'l', 'd', 's', '\030', '\001', ' ', '\003', '(', '\013', '2', 
'#', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'S', 't', 'r', 'u', 'c', 't', '.', 
'F', 'i', 'e', 'l', 'd', 's', 'E', 'n', 't', 'r', 'y', 'R', '\006', 'f', 'i', 'e', 'l', 'd', 's', '\032', 'Q', '\n', '\013', 'F', 'i', 
'e', 'l', 'd', 's', 'E', 'n', 't', 'r', 'y', '\022', '\020', '\n', '\003', 'k', 'e', 'y', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\003', 'k', 
'e', 'y', '\022', ',', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '\026', '.', 'g', 'o', 'o', 'g', 'l', 
'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'V', 'a', 'l', 'u', 'e', 'R', '\005', 'v', 'a', 'l', 'u', 'e', ':', '\002', 
'8', '\001', '\"', '\262', '\002', '\n', '\005', 'V', 'a', 'l', 'u', 'e', '\022', ';', '\n', '\n', 'n', 'u', 'l', 'l', '_', 'v', 'a', 'l', 'u', 
'e', '\030', '\001', ' ', '\001', '(', '\016', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', 
'.', 'N', 'u', 'l', 'l', 'V', 'a', 'l', 'u', 'e', 'H', '\000', 'R', '\t', 'n', 'u', 'l', 'l', 'V', 'a', 'l', 'u', 'e', '\022', '#', 
'\n', '\014', 'n', 'u', 'm', 'b', 'e', 'r', '_', 'v', 'a', 'l', 'u', 'e', '\030', '\002', ' ', '\001', '(', '\001', 'H', '\000', 'R', '\013', 'n', 
'u', 'm', 'b', 'e', 'r', 'V', 'a', 'l', 'u', 'e', '\022', '#', '\n', '\014', 's', 't', 'r', 'i', 'n', 'g', '_', 'v', 'a', 'l', 'u', 
'e', '\030', '\003', ' ', '\001', '(', '\t', 'H', '\000', 'R', '\013', 's', 't', 'r', 'i', 'n', 'g', 'V', 'a', 'l', 'u', 'e', '\022', '\037', '\n', 
'\n', 'b', 'o', 'o', 'l', '_', 'v', 'a', 'l', 'u', 'e', '\030', '\004', ' ', '\001', '(', '\010', 'H', '\000', 'R', '\t', 'b', 'o', 'o', 'l', 
'V', 'a', 'l', 'u', 'e', '\022', '<', '\n', '\014', 's', 't', 'r', 'u', 'c', 't', '_', 'v', 'a', 'l', 'u', 'e', '\030', '\005', ' ', '\001', 
'(', '\013', '2', '\027', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'S', 't', 'r', 'u', 
'c', 't', 'H', '\000', 'R', '\013', 's', 't', 'r', 'u', 'c', 't', 'V', 'a', 'l', 'u', 'e', '\022', ';', '\n', '\n', 'l', 'i', 's', 't', 
'_', 'v', 'a', 'l', 'u', 'e', '\030', '\006', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 
't', 'o', 'b', 'u', 'f', '.', 'L', 'i', 's', 't', 'V', 'a', 'l', 'u', 'e', 'H', '\000', 'R', '\t', 'l', 'i', 's', 't', 'V', 'a', 
'l', 'u', 'e', 'B', '\006', '\n', '\004', 'k', 'i', 'n', 'd', '\"', ';', '\n', '\t', 'L', 'i', 's', 't', 'V', 'a', 'l', 'u', 'e', '\022', 
'.', '\n', '\006', 'v', 'a', 'l', 'u', 'e', 's', '\030', '\001', ' ', '\003', '(', '\013', '2', '\026', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 
'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'V', 'a', 'l', 'u', 'e', 'R', '\006', 'v', 'a', 'l', 'u', 'e', 's', '*', '\033', '\n', 
'\t', 'N', 'u', 'l', 'l', 'V', 'a', 'l', 'u', 'e', '\022', '\016', '\n', '\n', 'N', 'U', 'L', 'L', '_', 'V', 'A', 'L', 'U', 'E', '\020', 
'\000', 'B', '\201', '\001', '\n', '\023', 'c', 'o', 'm', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', 
'B', '\013', 'S', 't', 'r', 'u', 'c', 't', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', '1', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 
'o', 'm', '/', 'g', 'o', 'l', 'a', 'n', 'g', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'p', 't', 'y', 'p', 'e', 's', 
'/', 's', 't', 'r', 'u', 'c', 't', ';', 's', 't', 'r', 'u', 'c', 't', 'p', 'b', '\370', '\001', '\001', '\242', '\002', '\003', 'G', 'P', 'B', 
'\252', '\002', '\036', 'G', 'o', 'o', 'g', 'l', 'e', '.', 'P', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'W', 'e', 'l', 'l', 'K', 'n', 
'o', 'w', 'n', 'T', 'y', 'p', 'e', 's', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[1] = {
  NULL
};

upb_def_init google_protobuf_struct_proto_upbdefinit = {
  deps,
  layouts,
  "google/protobuf/struct.proto",
  UPB_STRVIEW_INIT(descriptor, 741)
};
