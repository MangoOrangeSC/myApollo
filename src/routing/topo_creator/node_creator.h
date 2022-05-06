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

#pragma once

#include <string>
/*
#include "modules/map/proto/map_lane.pb.h"
#include "modules/routing/proto/routing_config.pb.h"
#include "modules/routing/proto/topo_graph.pb.h"
*/

#include "../../../src/proto/protocpp/map_lane.pb.h"
#include "../../../src/proto/protocpp/routing_config.pb.h"
#include "../../../src/proto/protocpp/topo_graph.pb.h"

/*
#include "../../../modules/build/map_lane.pb.h"
#include "../../../modules/build/routing_config.pb.h"
#include "../../../modules/build/topo_graph.pb.h"
*/
namespace apollo {
namespace routing {
namespace node_creator {

void GetPbNode(const hdmap::Lane& lane, const std::string& road_id,
               const RoutingConfig& routingconfig, Node* const node);

}  // namespace node_creator
}  // namespace routing
}  // namespace apollo
