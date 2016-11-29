--场景npc列表
 local autoTable = {
	["210001"] = {
		name = "陌司伏秦",
		mapId = 697001,
		posX = 120,
		posY = 380,
		dialog = {
			"咳咳…老了真的老了，要吃盖中盖了。",
		},
		headId = '810001',
		modelId = '800001',
		degree = '部落酋长',
	},
	["210002"] = {
		name = "武烛",
		type = "equip",
		mapId = 697001,
		posX = 340,
		posY = 380,
		dialog = {
			"你相信吗？你敢相信吗？极品装备只要998.",
			"客官，您已经看了很久了。",
		},
		headId = '810002',
		modelId = '800002',
		degree = '铁匠铺老板',
	},
	["210003"] = {
		name = "刑简",
		type = "admin",
		mapId = 697001,
		posX = 560,
		posY = 380,
		dialog = {
			"咳咳…其实我是深藏不露的高手，真的。",
		},
		headId = '810003',
		modelId = '800003',
		degree = '神秘高手',
	},
	["210004"] = {
		name = "郿娘",
		type = "tavern",
		mapId = 697001,
		posX = 780,
		posY = 380,
		dialog = {
			"怎么样，要不要进来歇息呢，姐姐可以单独陪你喝两杯哦。",
		},
		headId = '810004',
		modelId = '800004',
		degree = '酒馆老板娘',
	},
	["210005"] = {
		name = "炎姬",
		type = "prop",
		mapId = 697001,
		posX = 1100,
		posY = 380,
		dialog = {
			"看够了吗？信不信我一刀砍了你。",
			"客官，您已经看了很久了。",
		},
		headId = '810005',
		modelId = '800005',
		degree = '行商女子',
	},
	["210006"] = {
		name = "邗昊",
		type = "phyDevote",
		mapId = 697002,
		posX = 1320,
		posY = 380,
		dialog = {
			"死亡并不可怕，可怕的是你并不想死。",
		},
		headId = '810006',
		modelId = '800006',
		degree = '势力高手',
	},
	["210007"] = {
		name = "武烛",
		type = "equip",
		mapId = 697002,
		posX = 1540,
		posY = 380,
		dialog = {
			"你相信吗？你敢相信吗？极品装备只要998.",
		},
		headId = '810002',
		modelId = '800002',
		degree = '铁匠铺老板',
	},
	["210008"] = {
		name = "郿娘",
		type = "tavern",
		mapId = 697002,
		posX = 1760,
		posY = 380,
		dialog = {
			"怎么样，要不要进来歇息呢，姐姐可以单独陪你喝两杯哦。",
		},
		headId = '810004',
		modelId = '800004',
		degree = '酒馆老板娘',
	},
	["210009"] = {
		name = "影兀凌",
		type = "bourse",
		mapId = 697002,
		posX = 1980,
		posY = 380,
		dialog = {
			"道法的运用可不只是用来攻击杀敌这点用途。",
		},
		headId = '810007',
		modelId = '800007',
		degree = '交易行老板',
	},
	["210010"] = {
		name = "睿芮",
		mapId = 697002,
		posX = 2200,
		posY = 380,
		dialog = {
			"衰兰送客咸阳道，天若有情天亦老。",
		},
		headId = '810008',
		modelId = '800008',
		degree = '痴情女子',
	},
	["210023"] = {
		name = "炎姬",
		type = "prop",
		mapId = 697002,
		posX = 980,
		posY = 380,
		dialog = {
			"看够了吗？信不信我一刀砍了你。",
		},
		headId = '810005',
		modelId = '800005',
		degree = '行商女子',
	},
	["210011"] = {
		name = "小七",
		mapId = 697003,
		posX = 120,
		posY = 380,
		dialog = {
			"哥哥姐姐们，带小七去抓泥鳅好不好？",
		},
		headId = '810009',
		modelId = '800009',
		degree = '迷糊小女孩',
	},
	["210013"] = {
		name = "郿娘",
		type = "tavern",
		mapId = 697003,
		posX = 340,
		posY = 380,
		dialog = {
			"怎么样，要不要进来歇息呢，姐姐可以单独陪你喝两杯哦。",
		},
		headId = '810004',
		modelId = '800004',
		degree = '酒馆老板娘',
	},
	["210016"] = {
		name = "冉可",
		mapId = 697003,
		posX = 560,
		posY = 380,
		dialog = {
			"身在高处，再坚强的女人也需要一个温暖的港湾。",
		},
		headId = '810010',
		modelId = '800010',
		degree = '大祭司',
	},
	["210031"] = {
		name = "郝大叔",
		mapId = 697003,
		posX = 780,
		posY = 380,
		dialog = {
			"哟，小伙子的身材不错啊，来跟大叔单独聊聊。",
		},
		headId = '810011',
		modelId = '800011',
		degree = '废材大叔',
	},
	["210025"] = {
		name = "武烛",
		type = "equip",
		mapId = 697003,
		posX = 1100,
		posY = 380,
		dialog = {
			"你相信吗？你敢相信吗？极品装备只要998.",
		},
		headId = '810002',
		modelId = '800002',
		degree = '铁匠铺老板',
	},
	["210026"] = {
		name = "炎姬",
		type = "prop",
		mapId = 697003,
		posX = 1320,
		posY = 380,
		dialog = {
			"看够了吗？信不信我一刀砍了你。",
		},
		headId = '810005',
		modelId = '800005',
		degree = '行商女子',
	},
	["210027"] = {
		name = "影兀凌",
		type = "bourse",
		mapId = 697003,
		posX = 1540,
		posY = 380,
		dialog = {
			"道法的运用可不只是用来攻击杀敌这点用途。",
		},
		headId = '810007',
		modelId = '800007',
		degree = '交易行老板',
	},
	["210017"] = {
		name = "狄白",
		mapId = 697004,
		posX = 1760,
		posY = 380,
		dialog = {
			"仙境可真是一个好地方啊！遗憾的就是地价有点贵。",
		},
		headId = '810012',
		modelId = '800012',
		degree = '仙境接引者',
	},
	["210019"] = {
		name = "郿娘",
		type = "tavern",
		mapId = 697004,
		posX = 1980,
		posY = 380,
		dialog = {
			"怎么样，要不要进来歇息呢，姐姐可以单独陪你喝两杯哦。",
		},
		headId = '810004',
		modelId = '800004',
		degree = '酒馆老板娘',
	},
	["210020"] = {
		name = "魃落",
		mapId = 697004,
		posX = 2200,
		posY = 380,
		dialog = {
			"有情？无情？只要一心坚持万法皆通大道。",
		},
		headId = '810013',
		modelId = '800013',
		degree = '仙境高手',
	},
	["210021"] = {
		name = "九霄",
		mapId = 697004,
		posX = 980,
		posY = 380,
		dialog = {
			"唯有无情方能修得无上大道",
		},
		headId = '810014',
		modelId = '800014',
		degree = '仙境高手',
	},
	["210028"] = {
		name = "武烛",
		type = "equip",
		mapId = 697004,
		posX = 120,
		posY = 380,
		dialog = {
			"你相信吗？你敢相信吗？极品装备只要998.",
		},
		headId = '810002',
		modelId = '800002',
		degree = '铁匠铺老板',
	},
	["210029"] = {
		name = "炎姬",
		type = "prop",
		mapId = 697004,
		posX = 340,
		posY = 380,
		dialog = {
			"看够了吗？信不信我一刀砍了你。",
		},
		headId = '810005',
		modelId = '800005',
		degree = '行商女子',
	},
	["210030"] = {
		name = "影兀凌",
		type = "bourse",
		mapId = 697004,
		posX = 560,
		posY = 380,
		dialog = {
			"道法的运用可不只是用来攻击杀敌这点用途。",
		},
		headId = '810007',
		modelId = '800007',
		degree = '交易行老板',
	},
	["210101"] = {
		name = "玄冥",
		type = "uniDeity",
		mapId = 697101,
		posX = 1100,
		posY = 450,
		dialog = {
			"我是玄冥！",
		},
		headId = '810001',
		modelId = '800001',
	},
	["210035"] = {
		name = "玄机道人",
		mapId = 697015,
		posX = 340,
		posY = 380,
		dialog = {
			"空间越来越不稳定了",
		},
		headId = '810007',
		modelId = '800007',
		degree = '未知人士',
	},
	["210032"] = {
		name = "郿娘",
		type = "tavern",
		mapId = 697015,
		posX = 560,
		posY = 380,
		dialog = {
			"怎么样，要不要进来歇息呢，姐姐可以单独陪你喝两杯哦。",
		},
		headId = '810004',
		modelId = '800004',
		degree = '酒馆老板娘',
	},
	["210033"] = {
		name = "武烛",
		type = "equip",
		mapId = 697015,
		posX = 1100,
		posY = 450,
		dialog = {
			"其实我以前也是一高手，直到我媳妇的膝盖中了一箭。。。",
		},
		headId = '810002',
		modelId = '800002',
		degree = '铁匠铺老板',
	},
	["210034"] = {
		name = "炎姬",
		type = "prop",
		mapId = 697015,
		posX = 340,
		posY = 380,
		dialog = {
			"看看就好，别说话了。。。",
		},
		headId = '810005',
		modelId = '800005',
		degree = '行商女子',
	},
}
function GetTable()
	return autoTable
end
