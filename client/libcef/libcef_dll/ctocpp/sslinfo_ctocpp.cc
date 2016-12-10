// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/sslinfo_ctocpp.h"
#include "libcef_dll/ctocpp/x509certificate_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

cef_cert_status_t CefSSLInfoCToCpp::GetCertStatus() {
  cef_sslinfo_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_cert_status))
    return CERT_STATUS_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_cert_status_t _retval = _struct->get_cert_status(_struct);

  // Return type: simple
  return _retval;
}

CefRefPtr<CefX509Certificate> CefSSLInfoCToCpp::GetX509Certificate() {
  cef_sslinfo_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_x509certificate))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_x509certificate_t* _retval = _struct->get_x509certificate(_struct);

  // Return type: refptr_same
  return CefX509CertificateCToCpp::Wrap(_retval);
}


// CONSTRUCTOR - Do not edit by hand.

CefSSLInfoCToCpp::CefSSLInfoCToCpp() {
}

template<> cef_sslinfo_t* CefCToCpp<CefSSLInfoCToCpp, CefSSLInfo,
    cef_sslinfo_t>::UnwrapDerived(CefWrapperType type, CefSSLInfo* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCToCpp<CefSSLInfoCToCpp, CefSSLInfo,
    cef_sslinfo_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefSSLInfoCToCpp, CefSSLInfo,
    cef_sslinfo_t>::kWrapperType = WT_SSLINFO;
