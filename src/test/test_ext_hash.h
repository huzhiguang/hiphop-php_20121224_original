/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __TEST_EXT_HASH_H__
#define __TEST_EXT_HASH_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtHash : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_hash();
  bool test_hash_algos();
  bool test_hash_init();
  bool test_hash_file();
  bool test_hash_final();
  bool test_hash_hmac_file();
  bool test_hash_hmac();
  bool test_hash_update_file();
  bool test_hash_update_stream();
  bool test_hash_update();
  bool test_furchash_hphp_ext();
  bool test_furchash_hphp_ext_supported();
  bool test_hphp_murmurhash();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_HASH_H__
