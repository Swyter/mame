// license:BSD-3-Clause
// copyright-holders:Ryan Holtz
//================================================================
//
//  slideruniformreader.h - BGFX chain entry slider mapper reader
//
//================================================================

#pragma once

#ifndef __DRAWBGFX_SLIDER_UNIFORM_READER__
#define __DRAWBGFX_SLIDER_UNIFORM_READER__

#include <string>
#include <map>

#include "entryuniform.h"
#include "statereader.h"

class bgfx_uniform;
class bgfx_slider;

class slider_uniform_reader : public state_reader
{
public:
	static bgfx_entry_uniform* read_from_value(const Value& value, bgfx_uniform* uniform, std::map<std::string, bgfx_slider*>& sliders);

private:
	static void validate_parameters(const Value& value);
};

#endif // __DRAWBGFX_SLIDER_UNIFORM_READER__
