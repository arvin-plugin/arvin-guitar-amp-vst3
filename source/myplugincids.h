//------------------------------------------------------------------------
// Copyright(c) 2023 Arvin Plugin.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace MyCompanyName {
//------------------------------------------------------------------------
static const Steinberg::FUID kArvinAmpFXProcessorUID (0xA393F33F, 0xF4AE5725, 0xA8B50988, 0x66F4E1CB);
static const Steinberg::FUID kArvinAmpFXControllerUID (0x28DCEDFA, 0x637C5B56, 0x95F303A4, 0x568B4427);

#define ArvinAmpFXVST3Category "Fx"

//------------------------------------------------------------------------
} // namespace MyCompanyName
