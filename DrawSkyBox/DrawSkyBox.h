
#pragma once

#include "header.h"
#include "Camera.h"

class CDrawSkyBox  
{
public:
	LPDIRECT3DDEVICE9          m_pd3dDevice;
	LPDIRECT3DVERTEXBUFFER9    m_pBufferVex;
	LPDIRECT3DTEXTURE9         m_pTexScene[6];
	CCamera                    m_Camera;

public:
	CDrawSkyBox(LPDIRECT3DDEVICE9  pD3DDevice);
	virtual ~CDrawSkyBox();
	HRESULT  InitVB();
	void     RenderPlane();
	void     Render(D3DXVECTOR3 CameraPos);
	bool     SetTexture(const char*  FileTexture,int flag);
	void	 Clearup();

};
