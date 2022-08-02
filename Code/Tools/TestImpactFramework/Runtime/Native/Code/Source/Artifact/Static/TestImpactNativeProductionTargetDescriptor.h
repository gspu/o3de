/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <Artifact/Static/TestImpactNativeTargetDescriptor.h>

namespace TestImpact
{
    //! Artifact produced by the target artifact compiler that represents a production build target in the repository.
    struct NativeProductionTargetDescriptor
        : public NativeTargetDescriptor
    {
        NativeProductionTargetDescriptor() = default;
        NativeProductionTargetDescriptor(NativeTargetDescriptor&& buildTarget);
    };
} // namespace TestImpact