/**
 * mangos-zero is a full featured server for World of Warcraft in its vanilla
 * version, supporting clients for patch 1.12.x.
 *
 * Eluna provides an alternative Lua based scripting which allows your to
 * easily customize game content without the need for compilers or any
 * other development tools.
 *
 * Copyright (C) 2010-2013  Eluna Lua Engine <http://emudevs.com/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#ifndef LUA_INCLUDES_H
#define LUA_INCLUDES_H

#include "AccountMgr.h"
#include "AuctionHouseMgr.h"
#include "Chat.h"
#include "Channel.h"
#include "Creature.h"
#include "GridNotifiers.h"
#include "Group.h"
#include "Guild.h"
#include "GuildMgr.h"
#include "Language.h"
#include "Map.h"
#include "MapManager.h"
#include "ObjectMgr.h"
#include "Pet.h"
#include "QuestDef.h"
#include "GossipDef.h"
#include "ScriptMgr.h"
#include "ReactorAI.h"
#include "SharedDefines.h"
#include "SystemConfig.h"
#include "SpellAuras.h"
#include "ItemPrototype.h"
#include "Item.h"
#include "Spell.h"
#include "GameObject.h"
#include "Weather.h"
#include "World.h"
#include "Weather.h"
#include "CellImpl.h"
#include "GridNotifiers.h"
#include "GridNotifiersImpl.h"
#include "SpellMgr.h"
#include "revision_nr.h"
#include "TemporarySummon.h"
#include "Mail.h"
#include "LuaHookMgr.h"
#include "CreatureEventAI.h"

/**
 * @brief
 *
 */
enum SelectAggroTarget
{
    SELECT_TARGET_RANDOM = 0,                               /**< Just selects a random target */ //
    SELECT_TARGET_TOPAGGRO,                                 /**< Selects targes from top aggro to bottom */ //
    SELECT_TARGET_BOTTOMAGGRO,                              /**< Selects targets from bottom aggro to top */
    SELECT_TARGET_NEAREST,
    SELECT_TARGET_FARTHEST
};

#endif
