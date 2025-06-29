//====== Copyright � 1996-2005, Valve Corporation, All rights reserved. =======
//
//
//=============================================================================
#ifndef TF_WEAPON_NAILGUN_H
#define TF_WEAPON_NAILGUN_H
#ifdef _WIN32
#pragma once
#endif

#include "tf_weaponbase_gun.h"

// Client specific.
#ifdef CLIENT_DLL
#define CTFNailgun C_TFNailgun
#endif

//=============================================================================
//
// TF Weapon Sub-machine gun.
//
class CTFNailgun : public CTFWeaponBaseGun
{
public:

	DECLARE_CLASS(CTFNailgun, CTFWeaponBaseGun);
	DECLARE_NETWORKCLASS();
	DECLARE_PREDICTABLE();

	CTFNailgun() {}
	~CTFNailgun() {}

	virtual void	Precache();
	virtual int		GetWeaponID(void) const { return TF_WEAPON_NAILGUN; }

private:

	CTFNailgun(const CTFNailgun&) {}
};

#endif // TF_WEAPON_NAILGUN_H