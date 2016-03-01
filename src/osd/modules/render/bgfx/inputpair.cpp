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

#include "inputpair.h"
#include "texture.h"
#include "effect.h"
#include "uniform.h"
#include "texturemanager.h"

bgfx_input_pair::bgfx_input_pair(int index, std::string sampler, std::string texture)
	: m_index(index)
	, m_sampler(sampler)
	, m_texture(texture)
{
}

void bgfx_input_pair::bind(bgfx_effect *effect, texture_manager& textures)
{
	printf("Binding texture %s to uniform %s\n", m_texture.c_str(), m_sampler.c_str());
	bgfx_uniform *uniform = effect->uniform(m_sampler);
	bgfx::UniformHandle u_handle = uniform->handle();
	bgfx::TextureHandle t_handle = textures.texture(m_texture)->handle();
	bgfx::setTexture(m_index, u_handle, t_handle);
}
