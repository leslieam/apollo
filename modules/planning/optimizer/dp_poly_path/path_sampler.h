/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file sampler.h
 **/

#ifndef MODULES_PLANNING_OPTIMIZER_DP_POLY_PATH_SAMPLER_H
#define MODULES_PLANNING_OPTIMIZER_DP_POLY_PATH_SAMPLER_H

#include <vector>

#include "modules/common/status/status.h"
#include "modules/planning/proto/dp_poly_path_config.pb.h"
#include "modules/planning/reference_line/reference_line.h"

namespace apollo {
namespace planning {

class PathSampler {
 public:
  explicit PathSampler(const DpPolyPathConfig &config);
  ~PathSampler() = default;
  bool sample(const ReferenceLine &reference_line,
              const common::TrajectoryPoint &init_point,
              std::vector<std::vector<common::SLPoint>> *const points);

 private:
  DpPolyPathConfig config_;
};

}  // namespace planning
}  // namespace apollo

#endif  // MODULES_PLANNING_OPTIMIZER_DP_POLY_PATH_SAMPLER_H
