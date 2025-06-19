//========= Copyright Valve Corporation, All rights reserved. ============//
//
//
//=============================================================================
#include "cbase.h"
#include "tf_weapon_ak.h"

static const float DAMAGE_TO_FILL_MINICRIT_METER = 100.0f;

// Client specific.
#ifdef CLIENT_DLL
#include "c_tf_player.h"
// Server specific.
#else
#include "tf_player.h"
#endif
//=============================================================================
//
// Weapon tables.
//

// ---------- Regular SMG -------------

CREATE_SIMPLE_WEAPON_TABLE( TFAK, tf_weapon_ak )

// Server specific.
#ifndef CLIENT_DLL
BEGIN_DATADESC( CTFAK )
END_DATADESC()
#endif


//=============================================================================
//
// Weapon SMG functions.

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
int	CTFAK::GetDamageType( void ) const
{
	if ( CanHeadshot() )
	{
		int iDamageType = BaseClass::GetDamageType() | DMG_USE_HITLOCATIONS;
		return iDamageType;
	}

	return BaseClass::GetDamageType();
}

//-----------------------------------------------------------------------------
// Purpose:
//-----------------------------------------------------------------------------
bool CTFAK::CanFireCriticalShot( bool bIsHeadshot, CBaseEntity *pTarget /*= NULL*/ )
{
	if ( !BaseClass::CanFireCriticalShot( bIsHeadshot, pTarget ) )
		return false;

	CTFPlayer *pPlayer = GetTFPlayerOwner();
	if ( pPlayer && pPlayer->m_Shared.IsCritBoosted() )
		return true;
		
	if ( !bIsHeadshot )
		return !CanHeadshot();

	return true;
}