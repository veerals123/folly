/*
 * Copyright 2016-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <folly/Executor.h>

#include <stdexcept>

#include <glog/logging.h>

namespace folly {

void Executor::addWithPriority(Func, int8_t /* priority */) {
  throw std::runtime_error(
      "addWithPriority() is not implemented for this Executor");
}

void Executor::keepAliveAcquire() {
  LOG(FATAL) << __func__ << "() should not be called for folly::Executor types "
             << "which do not override getKeepAliveToken()";
}

void Executor::keepAliveRelease() {
  LOG(FATAL) << __func__ << "() should not be called for folly::Executor types "
             << "which do not override getKeepAliveToken()";
}
} // namespace folly
