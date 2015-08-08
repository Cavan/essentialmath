//===============================================================================
// @ IvPointRendererD3D11.h
// 
// D3D11 code for handling sized points
// ------------------------------------------------------------------------------
// Copyright (C) 2015   James M. Van Verth and Lars M. Bishop.
// All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//===============================================================================

#ifndef __IvPointRendererD3D11__h__
#define __IvPointRendererD3D11__h__

//-------------------------------------------------------------------------------
//-- Dependencies ---------------------------------------------------------------
//-------------------------------------------------------------------------------

#include "IvVertexFormats.h"

//-------------------------------------------------------------------------------
//-- Typedefs, Structs ----------------------------------------------------------
//-------------------------------------------------------------------------------

class IvVertexBuffer;

//-------------------------------------------------------------------------------
//-- Classes --------------------------------------------------------------------
//-------------------------------------------------------------------------------

namespace IvPointRendererD3D11
{
    void Setup();
    void Teardown();

    void SetPointSize(float size);

    void SetShaderAndVertexBuffer(ID3D11DeviceContext* context,
                                  IvVertexFormat format, IvVertexBuffer* buffer);
    void Draw(ID3D11DeviceContext* context, int numVertices);
};


//-------------------------------------------------------------------------------
//-- Inlines --------------------------------------------------------------------
//-------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
//-- Externs --------------------------------------------------------------------
//-------------------------------------------------------------------------------

#endif