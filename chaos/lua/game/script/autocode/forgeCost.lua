--锻造消耗
 local autoTable = {
	[1] = {
		inject = 1000,
		promote = 1000,
		attr = {
			strength = 40,
			intellect = 40,
			agility = 40,
			captain = 40,
			hpMax = 400,
			physcAtk = 200,
			physcDef = 200,
			magicAtk = 80,
			magicDef = 80,
		},
		enchase = 2500,
		pick = 2500,
	},
	[2] = {
		inject = 2000,
		promote = 2000,
		attr = {
			strength = 50,
			intellect = 50,
			agility = 50,
			captain = 50,
			hpMax = 600,
			physcAtk = 250,
			physcDef = 250,
			magicAtk = 100,
			magicDef = 100,
		},
		enchase = 5000,
		pick = 5000,
	},
	[3] = {
		inject = 3000,
		promote = 3000,
		attr = {
			strength = 60,
			intellect = 60,
			agility = 60,
			captain = 60,
			hpMax = 800,
			physcAtk = 300,
			physcDef = 300,
			magicAtk = 120,
			magicDef = 120,
		},
		enchase = 10000,
		pick = 10000,
	},
	[4] = {
		inject = 4000,
		promote = 4000,
		attr = {
			strength = 80,
			intellect = 80,
			agility = 80,
			captain = 80,
			hpMax = 1300,
			physcAtk = 400,
			physcDef = 400,
			magicAtk = 160,
			magicDef = 160,
		},
		enchase = 20000,
		pick = 20000,
	},
	[5] = {
		inject = 5000,
		promote = 5000,
		attr = {
			strength = 100,
			intellect = 100,
			agility = 100,
			captain = 100,
			hpMax = 1800,
			physcAtk = 500,
			physcDef = 500,
			magicAtk = 200,
			magicDef = 200,
		},
		enchase = 40000,
		pick = 40000,
	},
	[6] = {
		inject = 6000,
		promote = 6000,
		attr = {
			strength = 120,
			intellect = 120,
			agility = 120,
			captain = 120,
			hpMax = 2300,
			physcAtk = 600,
			physcDef = 600,
			magicAtk = 240,
			magicDef = 240,
		},
		enchase = 80000,
		pick = 80000,
	},
	[7] = {
		inject = 7000,
		promote = 7000,
		attr = {
			strength = 150,
			intellect = 150,
			agility = 150,
			captain = 150,
			hpMax = 2800,
			physcAtk = 750,
			physcDef = 750,
			magicAtk = 300,
			magicDef = 300,
		},
		enchase = 160000,
		pick = 160000,
	},
}
function GetTable()
	return autoTable
end