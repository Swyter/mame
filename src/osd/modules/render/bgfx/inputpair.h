// license:BSD-3-Clause
// copyright-holders:Ryan Holtz
//============================================================
//
//  inputpair.h - BGFX sampler-and-texture pair
//
//  Keeps track of the texture which is bound to the sampler
//  which is bound to the specified stage index.
//
//============================================================

#pragma once

#ifndef __DRAWBGFX_INPUT_PAIR__
#define __DRAWBGFX_INPUT_PAIR__

#include <string>

class bgfx_effect;
class texture_manager;

class bgfx_input_pair
{
public:
	bgfx_input_pair(int index, std::string sampler, std::string texture);

	void bind(bgfx_effect *effect, texture_manager& textures);

private:
	int         m_index;
	std::string m_sampler;
	std::string m_texture;
};

#endif // __DRAWBGFX_INPUT_PAIR__
