/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/common/matcher/v3/matcher.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/common/matcher/v3/matcher.upb.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/config/route/v3/route_components.upb.h"
#include "envoy/type/matcher/v3/string.upb.h"
#include "xds/annotations/v3/status.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub envoy_config_common_matcher_v3_Matcher_submsgs[3] = {
  {.submsg = &envoy_config_common_matcher_v3_Matcher_MatcherList_msginit},
  {.submsg = &envoy_config_common_matcher_v3_Matcher_MatcherTree_msginit},
  {.submsg = &envoy_config_common_matcher_v3_Matcher_OnMatch_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_Matcher__fields[3] = {
  {1, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(4, 8), 1, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_Matcher_msginit = {
  &envoy_config_common_matcher_v3_Matcher_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher__fields[0],
  UPB_SIZE(16, 32), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_Matcher_OnMatch_submsgs[2] = {
  {.submsg = &envoy_config_common_matcher_v3_Matcher_msginit},
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_Matcher_OnMatch__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_Matcher_OnMatch_msginit = {
  &envoy_config_common_matcher_v3_Matcher_OnMatch_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_OnMatch__fields[0],
  UPB_SIZE(8, 16), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_Matcher_MatcherList_submsgs[1] = {
  {.submsg = &envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_Matcher_MatcherList__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_Matcher_MatcherList_msginit = {
  &envoy_config_common_matcher_v3_Matcher_MatcherList_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherList__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_submsgs[3] = {
  {.submsg = &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_msginit},
  {.submsg = &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList_msginit},
  {.submsg = &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate__fields[4] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_msginit = {
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate__fields[0],
  UPB_SIZE(8, 16), 4, _UPB_MSGEXT_NONE, 4, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
  {.submsg = &envoy_type_matcher_v3_StringMatcher_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate_msginit = {
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate__fields[0],
  UPB_SIZE(16, 32), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList_submsgs[1] = {
  {.submsg = &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList_msginit = {
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher_submsgs[2] = {
  {.submsg = &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_msginit},
  {.submsg = &envoy_config_common_matcher_v3_Matcher_OnMatch_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher_msginit = {
  &envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher__fields[0],
  UPB_SIZE(16, 24), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_Matcher_MatcherTree_submsgs[2] = {
  {.submsg = &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_msginit},
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_Matcher_MatcherTree__fields[4] = {
  {1, UPB_SIZE(4, 8), 1, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_Matcher_MatcherTree_msginit = {
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherTree__fields[0],
  UPB_SIZE(16, 32), 4, _UPB_MSGEXT_NONE, 4, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_submsgs[1] = {
  {.submsg = &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_MAP | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_msginit = {
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry_submsgs[1] = {
  {.submsg = &envoy_config_common_matcher_v3_Matcher_OnMatch_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry_msginit = {
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_MatchPredicate_submsgs[4] = {
  {.submsg = &envoy_config_common_matcher_v3_HttpGenericBodyMatch_msginit},
  {.submsg = &envoy_config_common_matcher_v3_HttpHeadersMatch_msginit},
  {.submsg = &envoy_config_common_matcher_v3_MatchPredicate_msginit},
  {.submsg = &envoy_config_common_matcher_v3_MatchPredicate_MatchSet_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_MatchPredicate__fields[10] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 3, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 3, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {7, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {8, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {9, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {10, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_MatchPredicate_msginit = {
  &envoy_config_common_matcher_v3_MatchPredicate_submsgs[0],
  &envoy_config_common_matcher_v3_MatchPredicate__fields[0],
  UPB_SIZE(8, 16), 10, _UPB_MSGEXT_NONE, 10, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_MatchPredicate_MatchSet_submsgs[1] = {
  {.submsg = &envoy_config_common_matcher_v3_MatchPredicate_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_MatchPredicate_MatchSet__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_MatchPredicate_MatchSet_msginit = {
  &envoy_config_common_matcher_v3_MatchPredicate_MatchSet_submsgs[0],
  &envoy_config_common_matcher_v3_MatchPredicate_MatchSet__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_HttpHeadersMatch_submsgs[1] = {
  {.submsg = &envoy_config_route_v3_HeaderMatcher_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_HttpHeadersMatch__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_HttpHeadersMatch_msginit = {
  &envoy_config_common_matcher_v3_HttpHeadersMatch_submsgs[0],
  &envoy_config_common_matcher_v3_HttpHeadersMatch__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_config_common_matcher_v3_HttpGenericBodyMatch_submsgs[1] = {
  {.submsg = &envoy_config_common_matcher_v3_HttpGenericBodyMatch_GenericTextMatch_msginit},
};

static const upb_msglayout_field envoy_config_common_matcher_v3_HttpGenericBodyMatch__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 13, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_HttpGenericBodyMatch_msginit = {
  &envoy_config_common_matcher_v3_HttpGenericBodyMatch_submsgs[0],
  &envoy_config_common_matcher_v3_HttpGenericBodyMatch__fields[0],
  UPB_SIZE(8, 16), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_field envoy_config_common_matcher_v3_HttpGenericBodyMatch_GenericTextMatch__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 12, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_common_matcher_v3_HttpGenericBodyMatch_GenericTextMatch_msginit = {
  NULL,
  &envoy_config_common_matcher_v3_HttpGenericBodyMatch_GenericTextMatch__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout *messages_layout[15] = {
  &envoy_config_common_matcher_v3_Matcher_msginit,
  &envoy_config_common_matcher_v3_Matcher_OnMatch_msginit,
  &envoy_config_common_matcher_v3_Matcher_MatcherList_msginit,
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_msginit,
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate_msginit,
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList_msginit,
  &envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher_msginit,
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_msginit,
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_msginit,
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry_msginit,
  &envoy_config_common_matcher_v3_MatchPredicate_msginit,
  &envoy_config_common_matcher_v3_MatchPredicate_MatchSet_msginit,
  &envoy_config_common_matcher_v3_HttpHeadersMatch_msginit,
  &envoy_config_common_matcher_v3_HttpGenericBodyMatch_msginit,
  &envoy_config_common_matcher_v3_HttpGenericBodyMatch_GenericTextMatch_msginit,
};

const upb_msglayout_file envoy_config_common_matcher_v3_matcher_proto_upb_file_layout = {
  messages_layout,
  NULL,
  15,
  0,
};

#include "upb/port_undef.inc"
