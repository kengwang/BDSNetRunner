#pragma once
#include<string>

// 实体组件Flag相关

// 操作类型
enum class ActorDataIDs : char {
	FLAGS = 0,
	STRUCTURAL_INTEGRITY = 1,
	VARIANT = 2,
	COLOR_INDEX = 3,
	NAME = 4,
	OWNER = 5,
	TARGET = 6,
	AIR_SUPPLY = 7,
	EFFECT_COLOR = 8,
	EFFECT_AMBIENCE = 9,
	JUMP_DURATION = 0x0A,
	HURT = 0x0B,
	HURT_DIR = 0x0C,
	ROW_TIME_LEFT = 0x0D,
	ROW_TIME_RIGHT = 0x0E,
	VALUE = 0x0F,
	DISPLAY_TILE_RUNTIME_ID = 0x10,
	DISPLAY_OFFSET = 0x11,
	CUSTOM_DISPLAY = 0x12,
	SWELL = 0x13,
	OLD_SWELL = 0x14,
	SWELL_DIR = 0x15,
	CHARGE_AMOUNT = 0x16,
	CARRY_BLOCK_RUNTIME_ID = 0x17,
	CLIENT_EVENT = 0x18,
	USING_ITEM = 0x19,
	PLAYER_FLAGS = 0x1A,
	PLAYER_INDEX = 0x1B,
	BED_POSITION = 0x1C,
	X_POWER = 0x1D,
	Y_POWER = 0x1E,
	Z_POWER = 0x1F,
	AUX_POWER = 0x20,
	FISHX = 0x21,
	FISHZ = 0x22,
	FISHANGLE = 0x23,
	AUX_VALUE_DATA = 0x24,
	LEASH_HOLDER = 0x25,
	SCALE = 0x26,
	HAS_NPC = 0x27,
	NPC_DATA = 0x28,
	ACTIONS = 0x29,
	AIR_SUPPLY_MAX = 0x2A,
	MARK_VARIANT = 0x2B,
	CONTAINER_TYPE = 0x2C,
	CONTAINER_SIZE = 0x2D,
	CONTAINER_STRENGTH_MODIFIER = 0x2E,
	BLOCK_TARGET = 0x2F,
	INV = 0x30,
	TARGET_A = 0x31,
	TARGET_B = 0x32,
	TARGET_C = 0x33,
	AERIAL_ATTACK = 0x34,
	WIDTH = 0x35,
	HEIGHT = 0x36,
	FUSE_TIME = 0x37,
	SEAT_OFFSET = 0x38,
	SEAT_LOCK_RIDER_ROTATION = 0x39,
	SEAT_LOCK_RIDER_ROTATION_DEGREES = 0x3A,
	SEAT_ROTATION_OFFSET = 0x3B,
	DATA_RADIUS = 0x3C,
	DATA_WAITING = 0x3D,
	DATA_PARTICLE = 0x3E,
	PEEK_ID = 0x3F,
	ATTACH_FACE = 0x40,
	ATTACHED = 0x41,
	ATTACH_POS = 0x42,
	TRADE_TARGET = 0x43,
	CAREER = 0x44,
	HAS_COMMAND_BLOCK = 0x45,
	COMMAND_NAME = 0x46,
	LAST_COMMAND_OUTPUT = 0x47,
	TRACK_COMMAND_OUTPUT = 0x48,
	CONTROLLING_SEAT_INDEX = 0x49,
	STRENGTH = 0x4A,
	STRENGTH_MAX = 0x4B,
	DATA_SPELL_CASTING_COLOR = 0x4C,
	DATA_LIFETIME_TICKS = 0x4D,
	POSE_INDEX = 0x4E,
	DATA_TICK_OFFSET = 0x4F,
	NAMETAG_ALWAYS_SHOW = 0x50,
	COLOR_2_INDEX = 0x51,
	NAME_AUTHOR = 0x52,
	SCORE = 0x53,
	BALLOON_ANCHOR = 0x54,
	PUFFED_STATE = 0x55,
	BUBBLE_TIME = 0x56,
	AGENT = 0x57,
	SITTING_AMOUNT = 0x58,
	SITTING_AMOUNT_PREVIOUS = 0x59,
	EATING_COUNTER = 0x5A,
	FLAGS2 = 0x5B,
	LAYING_AMOUNT = 0x5C,
	LAYING_AMOUNT_PREVIOUS = 0x5D,
	DATA_DURATION = 0x5E,
	DATA_SPAWN_TIME = 0x5F,
	DATA_CHANGE_RATE = 0x60,
	DATA_CHANGE_ON_PICKUP = 0x61,
	DATA_PICKUP_COUNT = 0x62,
	INTERACT_TEXT = 0x63,
	TRADE_TIER = 0x64,
	MAX_TRADE_TIER = 0x65,
	TRADE_EXPERIENCE = 0x66,
	SKIN_ID = 0x67,
	SPAWNING_FRAMES = 0x68,
	COMMAND_BLOCK_TICK_DELAY = 0x69,
	COMMAND_BLOCK_EXECUTE_ON_FIRST_TICK = 0x6A,
	AMBIENT_SOUND_INTERVAL = 0x6B,
	AMBIENT_SOUND_INTERVAL_RANGE = 0x6C,
	AMBIENT_SOUND_EVENT_NAME = 0x6D,
	FALL_DAMAGE_MULTIPLIER = 0x6E,
	NAME_RAW_TEXT = 0x6F,
	CAN_RIDE_TARGET = 0x70
};

// 实体类型
enum class ActorType : signed {
	Undefined_2 = 1,
	ItemEntity = 0x40,
	PrimedTnt = 0x41,
	FallingBlock = 0x42,
	MovingBlock = 0x43,
	Experience = 0x45,
	EyeOfEnder = 0x46,
	EnderCrystal = 0x47,
	FireworksRocket = 0x48,
	FishingHook = 0x4D,
	Chalkboard = 0x4E,
	Painting = 0x53,
	LeashKnot = 0x58,
	BoatRideable = 0x5A,
	LightningBolt = 0x5D,
	AreaEffectCloud = 0x5F,
	Balloon = 0x6B,
	Shield = 0x75,
	Lectern = 0x77,
	TypeMask = 0x0FF,
	Mob = 0x100,
	Npc = 0x133,
	Agent = 0x138,
	ArmorStand = 0x13D,
	TripodCamera = 0x13E,
	Player_0 = 0x13F,
	Bee = 0x17A,
	PathfinderMob = 0x300,
	IronGolem = 0x314,
	SnowGolem = 0x315,
	WanderingTrader = 0x376,
	Monster = 0x0B00,
	Creeper = 0x0B21,
	Slime = 0x0B25,
	EnderMan = 0x0B26,
	Ghast = 0x0B29,
	LavaSlime = 0x0B2A,
	Blaze = 0x0B2B,
	Witch = 0x0B2D,
	Guardian = 0x0B31,
	ElderGuardian = 0x0B32,
	Dragon = 0x0B35,
	Shulker = 0x0B36,
	Vindicator = 0x0B39,
	IllagerBeast = 0x0B3B,
	EvocationIllager = 0x0B68,
	Vex = 0x0B69,
	Pillager = 0x0B72,
	ElderGuardianGhost = 0x0B78,
	Animal = 0x1300,
	Chicken = 0x130A,
	Cow = 0x130B,
	Pig = 0x130C,
	Sheep = 0x130D,
	MushroomCow = 0x1310,
	Rabbit = 0x1312,
	PolarBear = 0x131C,
	Llama = 0x131D,
	Turtle = 0x134A,
	Panda = 0x1371,
	Fox = 0x1379,
	WaterAnimal = 0x2300,
	Squid = 0x2311,
	Dolphin = 0x231F,
	Pufferfish = 0x236C,
	Salmon = 0x236D,
	Tropicalfish = 0x236F,
	Fish = 0x2370,
	TamableAnimal = 0x5300,
	Wolf = 0x530E,
	Ocelot = 0x5316,
	Parrot = 0x531E,
	Cat = 0x534B,
	Ambient = 0x8100,
	Bat = 0x8113,
	UndeadMob = 0x10B00,
	PigZombie = 0x10B24,
	WitherBoss = 0x10B34,
	Phantom = 0x10B3A,
	ZombieMonster = 0x30B00,
	Zombie = 0x30B20,
	ZombieVillager = 0x30B2C,
	Husk = 0x30B2F,
	Drowned = 0x30B6E,
	ZombieVillagerV2 = 0x30B74,
	Arthropod = 0x40B00,
	Spider = 0x40B23,
	Silverfish = 0x40B27,
	CaveSpider = 0x40B28,
	Endermite = 0x40B37,
	Minecart = 0x80000,
	MinecartRideable = 0x80054,
	MinecartHopper = 0x80060,
	MinecartTNT = 0x80061,
	MinecartChest = 0x80062,
	MinecartFurnace = 0x80063,
	MinecartCommandBlock = 0x80064,
	SkeletonMonster = 0x110B00,
	Skeleton = 0x110B22,
	Stray = 0x110B2E,
	WitherSkeleton = 0x110B30,
	EquineAnimal = 0x205300,
	Horse = 0x205317,
	Donkey = 0x205318,
	Mule = 0x205319,
	SkeletonHorse = 0x215B1A,
	ZombieHorse = 0x215B1B,
	Projectile = 0x400000,
	ExperiencePotion = 0x400044,
	ShulkerBullet = 0x40004C,
	DragonFireball = 0x40004F,
	Snowball = 0x400051,
	ThrownEgg = 0x400052,
	LargeFireball = 0x400055,
	ThrownPotion = 0x400056,
	Enderpearl = 0x400057,
	WitherSkull = 0x400059,
	WitherSkullDangerous = 0x40005B,
	SmallFireball = 0x40005E,
	LingeringPotion = 0x400065,
	LlamaSpit = 0x400066,
	EvocationFang = 0x400067,
	IceBomb = 0x40006A,
	AbstractArrow = 0x800000,
	Trident = 0x0C00049,
	Arrow = 0x0C00050,
	VillagerBase = 0x1000300,
	Villager = 0x100030F,
	VillagerV2 = 0x1000373
};

// 伤害原因
enum class ActorDamageCause : int {
	Override = 0x0,
	Contact = 0x1,
	EntityAttack = 0x2,
	Projectile = 0x3,
	Suffocation = 0x4,
	Fall = 0x5,
	Fire = 0x6,
	FireTick = 0x7,
	Lava = 0x8,
	Drowning = 0x9,
	BlockExplosion = 0x0A,
	EntityExplosion = 0x0B,
	Void = 0x0C,
	Suicide = 0x0D,
	Magic = 0x0E,
	Wither = 0x0F,
	Starve = 0x10,
	Anvil = 0x11,
	Thorns = 0x12,
	FallingBlock = 0x13,
	Piston = 0x14,
	FlyIntoWall = 0x15,
	Magma = 0x16,
	Fireworks = 0x17,
	Lightning = 0x18,
	Charging = 0x19,
	Temperature = 0x1A,
	All = 0x1F,
	None = -0x01,
};

struct ActorDamageByActorSource {
	char fill[0x50];		// IDA ActorDamageByActorSource::clone
};

// 各类组件获取和设置关键字
struct MCMETHOD {
	const std::string ENTITY_GET_ARMOR_CONTAINER = "entity.get_armor_container";
	const std::string ENTITY_GET_ATTACK = "entity.get_attack";
	const std::string ENTITY_SET_ATTACK = "entity.set_attack";
	const std::string ENTITY_GET_COLLISION_BOX = "entity.get_collision_box";
	const std::string ENTITY_SET_COLLISION_BOX = "entity.set_collision_box";
	const std::string ENTITY_GET_HAND_CONTAINER = "entity.get_hand_container";
	const std::string ENTITY_GET_HEALTH = "entity.get_health";
	const std::string ENTITY_SET_HEALTH = "entity.set_health";
	const std::string ENTITY_GET_INVENTORY_CONTAINER = "entity.get_inventory_container";
	const std::string ENTITY_GET_NAME = "entity.get_name";
	const std::string ENTITY_SET_NAME = "entity.set_name";
	const std::string ENTITY_GET_POSITION = "entity.get_position";
	const std::string ENTITY_SET_POSITION = "entity.set_position";
	const std::string ENTITY_GET_ROTATION = "entity.get_rotation";
	const std::string ENTITY_SET_ROTATION = "entity.set_rotation";
	const std::string ENTITY_GET_DIMENSIONID = "entity.get_dimensionid";
	const std::string ENTITY_GET_TYPEID = "entity.get_typeid";
	const std::string ENTITY_GET_UNIQUEID = "entity.get_uniqueid";
	const std::string ENTITY_REMOVE = "entity.remove";
	const std::string ENTITY_HURT = "entity.hurt";
	const std::string LEVEL_GETFROM_UNIQUEID = "level.getfrom_uniqueid";
	const std::string LEVEL_GETSFROM_AABB = "level.getsfrom_aabb";

	const std::string PLAYER_GET_HOTBAR_CONTAINER = "player.get_hotbar_container";
	const std::string PLAYER_GET_UUID = "player.get_uuid";
	const std::string PLAYER_GET_IPPORT = "player.get_ipport";
	const std::string PLAYER_ADD_LEVEL = "player.add_level";
};
