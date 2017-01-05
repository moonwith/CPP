--城镇列表
 local autoTable = {
	["697001"] = {
		name = "真炎部落",
		type = "town",
		mapId = "697001",
		size = {x = 2500, y = 650},
		born = {x = 200, y = 500},
		describe = "这是一个简单的测试场景。",
		npcList = {
			{npcId = "210001", x = 354, y = 364, init = 1},
			{npcId = "210005", x = 1800, y = 400, init = 1},
			{npcId = "210003", x = 1430, y = 345, init = 1},
			{npcId = "210004", x = 736, y = 380, init = 1},
			{npcId = "210002", x = 1155, y = 340, init = 1},
		},
		transX = 2300,
		transY = 500,
		transType = "normal",
		minCopyId = 600001,
		maxCopyId = 600018,
		nextTown = "697002",
		selectMap = "696001",
		validY = 350,
		copyListId = "697201",
		copyListName = "真炎山脉",
		copyType = "normal",
	},
	["697002"] = {
		name = "古舟城",
		type = "town",
		mapId = "697002",
		size = {x = 2500, y = 650},
		born = {x = 200, y = 500},
		describe = "这是一个简单的测试场景。",
		npcList = {
			{npcId = "210010", x = 1340, y = 365, init = 1},
			{npcId = "210007", x = 260, y = 365, init = 1},
			{npcId = "210008", x = 1032, y = 365, init = 1},
			{npcId = "210009", x = 1600, y = 365, init = 1},
			{npcId = "210006", x = 1854, y = 330, init = 1},
			{npcId = "210023", x = 706, y = 360, init = 1},
		},
		transX = 2300,
		transY = 500,
		transType = "normal",
		minCopyId = 600019,
		maxCopyId = 600069,
		nextTown = "697003",
		selectMap = "696002",
		validY = 360,
		copyListId = "697202",
		copyListName = "古舟城边",
		copyType = "normal",
	},
	["697003"] = {
		name = "熊弋城",
		type = "town",
		mapId = "697003",
		size = {x = 2500, y = 650},
		born = {x = 200, y = 500},
		describe = "这是一个简单的测试场景。",
		npcList = {
			{npcId = "210025", x = 660, y = 400, init = 1},
			{npcId = "210013", x = 420, y = 395, init = 1},
			{npcId = "210011", x = 1500, y = 395, init = 1},
			{npcId = "210031", x = 1236, y = 400, init = 1},
			{npcId = "210016", x = 972, y = 410, init = 1},
			{npcId = "210026", x = 2000, y = 395, init = 1},
			{npcId = "210027", x = 1770, y = 395, init = 1},
		},
		transX = 2300,
		transY = 500,
		transType = "normal",
		minCopyId = 600070,
		maxCopyId = 600114,
		nextTown = "697004",
		selectMap = "696003",
		validY = 395,
		copyListId = "697203",
		copyListName = "熊弋城外",
		copyType = "normal",
	},
	["697004"] = {
		name = "太虚仙境",
		type = "town",
		mapId = "697004",
		size = {x = 2500, y = 650},
		born = {x = 200, y = 500},
		describe = "这是一个简单的测试场景。",
		npcList = {
			{npcId = "210017", x = 380, y = 415, init = 1},
			{npcId = "210019", x = 894, y = 395, init = 1},
			{npcId = "210020", x = 1452, y = 410, init = 1},
			{npcId = "210021", x = 2032, y = 392, init = 1},
			{npcId = "210028", x = 588, y = 395, init = 1},
			{npcId = "210029", x = 1780, y = 395, init = 1},
			{npcId = "210030", x = 1176, y = 395, init = 1},
		},
		transX = 2300,
		transY = 500,
		transType = "normal",
		minCopyId = 600117,
		maxCopyId = 600195,
		nextTown = "697005",
		selectMap = "696004",
		validY = 385,
		copyListId = "697204",
		copyListName = "仙境遗迹",
		copyType = "normal",
	},
	["697015"] = {
		name = "时空裂痕",
		type = "town",
		mapId = "619116",
		size = {x = 2500, y = 650},
		born = {x = 200, y = 500},
		describe = "这是一个简单的测试场景。",
		npcList = {
			{npcId = "210035", x = 354, y = 364, init = 1},
			{npcId = "210032", x = 736, y = 380, init = 1},
			{npcId = "210033", x = 1300, y = 400, init = 1},
			{npcId = "210034", x = 1800, y = 400, init = 1},
		},
		transX = 2300,
		transY = 500,
		transType = "hero",
		minCopyId = 604001,
		maxCopyId = 604002,
		selectMap = "696030",
		validY = 385,
	},
}
function GetTable()
	return autoTable
end