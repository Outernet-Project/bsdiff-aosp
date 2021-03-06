// Copyright 2015 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef _BSDIFF_BSDIFF_H_
#define _BSDIFF_BSDIFF_H_

#include <sys/types.h>

namespace bsdiff {

int bsdiff(const char* old_filename,
           const char* new_filename,
           const char* patch_filename);

int bsdiff(const u_char* old_buf,
           off_t oldsize,
           const u_char* new_buf,
           off_t newsize,
           const char* patch_filename);

}  // namespace bsdiff

#endif  // _BSDIFF_BSDIFF_H_
