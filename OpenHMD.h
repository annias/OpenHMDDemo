/*
* OpenHMD - Free and Open Source API and drivers for immersive technology.
* Copyright (C) 2013 Fredrik Hultin.
* Copyright (C) 2013 Jakob Bornecrantz.
* OpenHMDDemo is designed and written by Joey Ferwerda from Thorworks game development studio.
* Distributed under the Boost 1.0 licence, see LICENSE for full text.
*/
#ifndef _OCULUSMANAGER_H_
#define _OCULUSMANAGER_H_

#include <openhmd/openhmd.h>
#include <OgreMatrix4.h>
#include <OgreMath.h>

class OpenHMD
{
public:
	OpenHMD();
	int init();
	void exit();
	void update();
	void getVerbose();
	Ogre::Quaternion getQuaternion();
	Ogre::Matrix4 getLeftViewMatrix();
	Ogre::Matrix4 getLeftProjectionMatrix();
	Ogre::Matrix4 getRightViewMatrix();
	Ogre::Matrix4 getRightProjectionMatrix();
	float getIPD();
	float fval;
	int ival;

private:
	ohmd_context* ctx;
	ohmd_device* hmd;
};

#endif
