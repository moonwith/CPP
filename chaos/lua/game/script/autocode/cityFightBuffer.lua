--slg战斗附加属性
 local autoTable = {
	["linkSkill"] = {
		["attack"] = {["340007"] = 1, ["340008"] = 1, ["340009"] = 1, ["340015"] = 1, ["340010"] = 1, ["340011"] = 1, ["340012"] = 1, ["340013"] = 1, ["340014"] = 1},
		["defend"] = {["340001"] = 1, ["340002"] = 1, ["340003"] = 1, ["340004"] = 1, ["340005"] = 1, ["340006"] = 1, ["340008"] = 1, ["340009"] = 1, ["340015"] = 1, ["340010"] = 1, ["340011"] = 1, ["340012"] = 1, ["340013"] = 1, ["340014"] = 1},
	},
	["tactic"] = {
		["attack"] = {["390002"] = 1, ["390003"] = 1, ["390004"] = 1, ["390005"] = 1, ["390006"] = 1, ["390007"] = 1, ["390010"] = 1},
		["defend"] = {["390001"] = 1, ["390004"] = 1, ["390005"] = 1, ["390006"] = 1, ["390007"] = 1, ["390011"] = 1},
	},
}

function GetTable()
	return autoTable
end
