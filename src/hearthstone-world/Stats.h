/*
 * Aspire Hearthstone
 * Copyright (C) 2008 - 2009 AspireDev <http://www.aspiredev.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __STATS_H
#define __STATS_H

#include "Unit.h"
#include "UpdateMask.h"
#include "ItemInterface.h"

enum Stats
{
	STAT_STRENGTH,
	STAT_AGILITY,
	STAT_STAMINA,
	STAT_INTELLECT,
	STAT_SPIRIT,
};

SERVER_DECL uint32 getConColor(uint16 AttackerLvl, uint16 VictimLvl);
SERVER_DECL uint32 CalculateXpToGive(UnitPointer pVictim, UnitPointer pAttacker);
SERVER_DECL uint32 CalculateStat(uint16 level,double a3, double a2, double a1, double a0);
SERVER_DECL uint32 CalculateDamage( UnitPointer pAttacker, UnitPointer pVictim, uint32 weapon_damage_type, SpellEntry* ability);
SERVER_DECL uint32 CalcStatForLevel(uint16 level, uint8 playerclass,uint8 Stat);
SERVER_DECL bool isEven (int num);

#endif
