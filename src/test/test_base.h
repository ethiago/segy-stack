/*
 * Copyright 2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SEGYSTACK_TESTS_TEST_BASE_H_
#define SEGYSTACK_TESTS_TEST_BASE_H_

#include <string>

#include "stack_file.h"

namespace segystack {
namespace test {

void create_test_segy(
    const std::string& outfile,
    int num_samples,
    int sampling_interval,
    int num_il,
    int il_increment,
    int num_xl,
    int xl_increment,
    const StackFile::SegyOptions& opts = StackFile::SegyOptions());
}
}  // namespace segystack

#endif