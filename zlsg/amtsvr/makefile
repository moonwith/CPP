include ../xxsq.mk

C_FILE = $(wildcard *.cc )
OBJ_FILE = $(patsubst %.cc, %.o, $(C_FILE))
OUT_FILE = ../bin/phonesvr

COMP_INC = $(SERVICE_CHORES_INC) $(SERVICE_AGENT_INC) $(SERVICE_SENDER_INC) $(SERVICE_WATCHDOG_INC) $(SERVICE_GATE_INC) $(SERVICE_GAME_INC) $(SERVICE_CENTER_INC) $(SERVICE_ROLE_INC) $(SERVICE_WRITER_INC) $(SERVICE_LOADER_INC) $(SERVICE_SQLMGR_INC) $(SERVICE_LOGGER_INC) $(SERVICE_NODE_INC) $(CHORES_FARM_INC) $(CENTER_RANDNPC_INC) $(CENTER_MATE_INC) $(CENTER_LOG_INC) $(CENTER_SECT_INC) $(CENTER_ARENA_INC) $(CENTER_SIEGE_INC) $(CENTER_EXPLORE_INC) $(CENTER_RAID_INC) $(CENTER_FAMILY_INC) $(CENTER_TEAM_INC) $(CENTER_CITY_INC) $(CENTER_TIMER_INC) $(CENTER_RANK_INC) $(CENTER_BOSS_INC) $(CENTER_FRIENDS_INC) $(CENTER_CACHE_INC) $(CENTER_MAIL_INC) $(CENTER_POLL_ACTIVITY_INC) $(CENTER_LINK_LUA_INC) $(CENTER_CYCLE_INC) $(CENTER_DEVIL_INC) $(CENTER_NOTICE_INC) $(CENTER_ILLEGAL_WORD_INC) $(SCENE_INC) $(ROLE_INC) $(CONFIG_INC) $(NAVMESH_INC) $(BASE_INC) $(PB_INC) $(PROTOC_INC) $(AMTSVR_INC) $(MYSQL_INC) $(LUA_TINK_INC) 
COMP_LIB = $(SERVICE_CHORES_LIB) $(SERVICE_AGENT_LIB) $(SERVICE_SENDER_LIB) $(SERVICE_WATCHDOG_LIB) $(SERVICE_GATE_LIB) $(SERVICE_GAME_LIB) $(SERVICE_CENTER_LIB) $(SERVICE_ROLE_LIB) $(SERVICE_WRITER_LIB) $(SERVICE_LOADER_LIB) $(SERVICE_SQLMGR_LIB) $(SERVICE_LOGGER_LIB) $(SERVICE_NODE_LIB) $(CHORES_FARM_LIB) $(CENTER_RANDNPC_LIB) $(CENTER_MATE_LIB) $(CENTER_LOG_LIB) $(CENTER_SECT_LIB) $(CENTER_ARENA_LIB) $(CENTER_SIEGE_LIB) $(CENTER_EXPLORE_LIB) $(CENTER_RAID_LIB) $(CENTER_FAMILY_LIB) $(CENTER_TEAM_LIB) $(CENTER_CITY_LIB) $(CENTER_TIMER_LIB) $(CENTER_RANK_LIB) $(CENTER_BOSS_LIB) $(CENTER_FRIENDS_LIB) $(CENTER_CACHE_LIB) $(CENTER_CHAT_LIB) $(CENTER_MAIL_LIB) $(CENTER_POLL_ACTIVITY_LIB) $(CENTER_CYCLE_LIB) $(CENTER_DEVIL_LIB) $(CENTER_NOTICE_LIB) $(CENTER_ILLEGAL_WORD_LIB) $(CENTER_LINK_LUA_LIB) $(SCENE_LIB) $(ROLE_LIB) $(CONFIG_LIB) $(NAVMESH_LIB) $(BASE_LIB) $(PB_LIB) $(PROTOC_LIB) $(MYSQL_LIB)  $(LUA_TINK_LIB) -lpthread -lm -llua -lrt -Wl,-E -ldl -lz /usr/local/lib/liblua.a

all:$(OUT_FILE)
$(OUT_FILE): $(OBJ_FILE)
	g++ $(C_ARGS) -o $(OUT_FILE) $(OBJ_FILE) $(COMP_LIB)
	
%.o:%.cc
	$(CXX) $(C_ARGS) -o $@ $(COMP_INC) -c $<
	
clean:
	rm -f $(OUT_FILE) $(OBJ_FILE)
