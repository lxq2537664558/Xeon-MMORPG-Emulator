ALTER TABLE `quests` ADD COLUMN `ReqCastSpellId1` INTEGER(11) NOT NULL DEFAULT 0 AFTER `ReqKillMobOrGOCount4`;
ALTER TABLE `quests` ADD COLUMN `ReqCastSpellId2` INTEGER(11) NOT NULL DEFAULT 0 AFTER `ReqCastSpellId1`;
ALTER TABLE `quests` ADD COLUMN `ReqCastSpellId3` INTEGER(11) NOT NULL DEFAULT 0 AFTER `ReqCastSpellId2`;
ALTER TABLE `quests` ADD COLUMN `ReqCastSpellId4` INTEGER(11) NOT NULL DEFAULT 0 AFTER `ReqCastSpellId3`;