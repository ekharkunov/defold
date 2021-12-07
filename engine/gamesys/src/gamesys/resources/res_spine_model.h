// Copyright 2020 The Defold Foundation
// Licensed under the Defold License version 1.0 (the "License"); you may not use
// this file except in compliance with the License.
//
// You may obtain a copy of the License, together with FAQs at
// https://www.defold.com/license
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#ifndef DM_GAMESYS_RES_SPINE_MODEL_H
#define DM_GAMESYS_RES_SPINE_MODEL_H

#include <stdint.h>

#include <resource/resource.h>
#include "res_rig_scene.h"
#include <gamesys/spine_ddf.h>

namespace dmGameSystem
{
    struct SpineModelResource
    {
        dmGameSystemDDF::SpineModelDesc*    m_Model;
        RigSceneResource*                   m_RigScene;
        dmRender::HMaterial                 m_Material;
    };

    dmResource::Result ResSpineModelPreload(const dmResource::ResourcePreloadParams& params);

    dmResource::Result ResSpineModelCreate(const dmResource::ResourceCreateParams& params);

    dmResource::Result ResSpineModelDestroy(const dmResource::ResourceDestroyParams& params);

    dmResource::Result ResSpineModelRecreate(const dmResource::ResourceRecreateParams& params);
}

#endif // DM_GAMESYS_RES_SPINE_MODEL_H