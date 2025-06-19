//========= Copyright Valve Corporation, All rights reserved. ============//
//
//
//=============================================================================
#ifndef TF_WEAPON_AK_H
#define TF_WEAPON_AK_H
#ifdef _WIN32
#pragma once
#endif

#include "tf_weaponbase_gun.h"

// Client specific.
#ifdef CLIENT_DLL
#define CTFAK C_TFAK
#endif

//=============================================================================
//
// TF Weapon Sub-machine gun.
//
class CTFAK : public CTFWeaponBaseGun
{
public:

	DECLARE_CLASS( CTFAK, CTFWeaponBaseGun );
	DECLARE_NETWORKCLASS(); 
	DECLARE_PREDICTABLE();

// Server specific.
#ifdef GAME_DLL
	DECLARE_DATADESC();
#endif

	CTFAK() {}
	~CTFAK() {}

	virtual int		GetWeaponID( void ) const			{ return TF_WEAPON_AK; }

	virtual int		GetDamageType( void ) const;
	virtual bool	CanFireCriticalShot( bool bIsHeadshot, CBaseEntity *pTarget = NULL ) OVERRIDE;

	bool			CanHeadshot( void ) const { int iMode = 0; CALL_ATTRIB_HOOK_INT( iMode, set_weapon_mode ); return (iMode == 1); };

private:

	CTFAK( const CTFAK & ) {}
};
#endif // TF_WEAPON_AK_H