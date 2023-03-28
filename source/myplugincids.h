//------------------------------------------------------------------------
// Copyright(c) 2023 Arvin Plugin.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace MyCompanyName {
//------------------------------------------------------------------------
static const Steinberg::FUID karvin_guitar_amp_vst3ProcessorUID (0x0E68A5D7, 0xB5155B6B, 0x9C11D178, 0x722C69DA);
static const Steinberg::FUID karvin_guitar_amp_vst3ControllerUID (0x86192F2A, 0x0CF155FE, 0xA89E7AE6, 0x6B54F22E);

#define arvin_guitar_amp_vst3VST3Category "Fx"

//------------------------------------------------------------------------
} // namespace MyCompanyName
