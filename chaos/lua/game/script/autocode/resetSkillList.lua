--可重置技能列表
local autoTable = {
	["warrior"] = {
		[1] = {"301001", "301002", "301003", "301004", "301005"},
		[2] = {"302003", "302004", "302005", "302006", "302007"},
		[3] = {"303001", "303002", "303003", "303004", "303005"	},
		[4] = {"303006"},
	},
	["warrior2"] = {
		[1] = {"301001", "301002", "301003", "301004", "301006"},
		[2] = {"302003", "302004", "302005", "302006", "302007"},
		[3] = {"303001", "303002", "303003", "303004", "303005"	},
	},
	["warrior3"] = {
		[1] = {"301001", "301002", "301003", "301004", "301007"},
		[2] = {"302003", "302004", "302005", "302006", "302007"},
		[3] = {"303001", "303002", "303003", "303004", "303005"	},
	},
	["taoist"] = {
		[1] = {"301017", "301018", "301008", "301009", "301011"},
		[2] = {"302008", "302009", "302010", "302011", "302012"},
		[3] = {"303001", "303002", "303007", "303008", "303009"	},
		[4] = {"303010"},
	},
	["taoist2"] = {
		[1] = {"301017", "301018", "301008", "301010", "301011"},
		[2] = {"302008", "302009", "302010", "302011", "302012"},
		[3] = {"303001", "303002", "303007", "303008", "303009"	},
	},
	["taoist3"] = {
		[1] = {"301017", "301018", "301008", "301011"},
		[2] = {"302001", "302002", "302008", "302009", "302010", "302011", "302012"},
		[3] = {"303001", "303002", "303007", "303008", "303009"	},
	},
	["archer"] = {
		[1] = {"301019", "301020", "301012", "301013", "301014"},
		[2] = {"302013", "302014", "302015", "302016", "302017"},
		[3] = {"303001", "303002", "303011", "303012", "303013"	},
		[4] = {"303014"},
	},
	["archer2"] = {
		[1] = {"301019", "301020", "301012", "301013", "301015"},
		[2] = {"302013", "302014", "302015", "302016", "302017"},
		[3] = {"303001", "303002", "303011", "303012", "303013"	},
	},
	["archer3"] = {
		[1] = {"301019", "301020", "301012", "301013", "301016"},
		[2] = {"302013", "302014", "302015", "302016", "302017"},
		[3] = {"303001", "303002", "303011", "303012", "303013"	},
	},
}

function GetTable()
	return autoTable
end