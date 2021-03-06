/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This portion of source code has been modified by Christian Hadiwinoto (2018), National University of Singapore.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#include "utils.h"

#include <ios>

namespace fasttext {

namespace utils {

  int64_t size(File* f) {
    f->seekg(std::streamoff(0), std::ios::end);
    return f->tellg();
  }

  void seek(File* f, int64_t pos) {
    f->clear();
    f->seekg(std::streampos(pos));
  }

  int64_t size(std::ifstream& ifs) {
    ifs.seekg(std::streamoff(0), std::ios::end);
    return ifs.tellg();
  }

  void seek(std::ifstream& ifs, int64_t pos) {
    ifs.clear();
    ifs.seekg(std::streampos(pos));
  }
}

}
