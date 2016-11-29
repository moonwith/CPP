local autoTable = {
	"老嬉皮旧灵魂","单纯的像条狗","记忆是座荒岛","我觉得是造谣","新世纪囧战士","思念化作思念","十字架的祭奠 ","求虐的小鸡蛋","俺不是九零后","你还有菊花吗 ","住到树叶变黄","牵牵扯扯到死","爱的只剩狼狈","假象都被珍藏","记忆烙成永恒","相观却不相关","不甘败给寂寞","青春给了电脑","想你牵我的手","想陪你一辈子",
	"用情深至无情","开始忽悠心态","你不是我全部 ","努力去躲避你","那扯蛋的爱情","把牛逼还给牛","人未老心苍茫","幸福不会说话","如此这般深情","用电线电死你","心是什么颜色","没有雨的雨天","别试图挑战我","没有人在乎我","三分之二给你","冷漠取代勇气","为爱万死不辞","纠缠扰乱尘世","静已思之愈浓","繁华宛若浮云",
	"行侠仗义","人走茶会凉","倚楼映秋影","倚楼倒夏影","醉酒方知浓","梦醒方如初","夜雨透故人","暗香邀客至","日暮盼归人","月影随念郎","月出撒江河","花飘水自流","背影、狠孤单","消失在黎明","√温暖的初夏","独家式、缠绵","陪你直至末日","春来丶花已落","暧昧的挑衅","出逃旳芭比",
	"安城弥生","单曲循环，","曾经的爱。","我只爱你。","小姐，亲一个 ","仰望45角","半颗心","心照不宣1/m","神一般的男人","hy2B我接受 ","梦是以非hy ","人来疯疯疯","不是梦的梦","醉生梦死","我的歌声里","殇黯影、隨颩","好男人？","中国驰名","单人行〞","尼媽还好嗎/ ",
	"如果不坚强","懦弱给谁看？","此生不换 ","没有对不对 ","你爹临死前","要wo怎么宠你","叼烟想吻你","痛苦的、遗憾","苦逼男er-","我们都怕承担","装可爱,虚伪","他城无她° ","最毒妇人心","试探你的温柔","活着需要借口","被子里的暧昧","喜欢你没道理","爷、嗨爆全城","Jj男人的命根","帅得很内疚",
	"叶繁终唯枯","落花风吹续","君伪红颜醉","光 荣","交白卷","涣散的瞳孔","空洞的眼眸","街头撩初吻","伊人淡雅泪","醉色染红颜","落花无相依","花殇紫吟调","早已删除你","初吻给了烟","白发悲花落","坐愁红颜老","若年华倒带","帅哥在哪里","剪辑着从前","想念的姿态",
	"男娼起义","风，融化于耳","一杯子杯具","究烟弥漫","我是个穷小子","爱生活爱马子","Ttl才是王道","亦久亦旧","毁我所毁","谈钱伤感情","wo还想她","无名指的爱","禁止暧昧","初遇了她","逝去LIU年","扯淡忘记","我们相爱吧","基情不是激情","引领三妓生活","wo卟呸拥有",
	"我们多少辛酸","我们都有心事","你是谁的唯一","在幸福大门外 ","念你千千万万","爱你胜过爱我","最后一个谎言","淡看聚散离合","拥有所拥有的","红颜不如知己","如若相惜不弃 ","何必自演自醉","你好吗对不起","别再为爱受苦","抵挡不住诱惑","欣然接受一切","最怕你会难过","任凭空虚沸腾","活着只为等死","回忆斑驳容颜 ",
	"倒叙的时光","惊艳了时光","矜持的魅惑","月色挂妆容","突然很想你","你爱我像谁","用死亡重生","思绪走了光","动情却是空","浪的虚名°","人荡无罪","物荡心碎 ","无所谓爱。","分手舍不得","无所谓被爱","送花的孩子、","我自是年少","形势比人强丶","问心无愧","死心塌地",
	"大众情人","来时莫徘徊",
	"看心情","姚~唯愛の1人","哥几个，走着","绝望仅此而已","e無限蔓筵","只等你回眸","不贫会死星人","至少还有你∥","现实太残酷","老子太卑微","愛繒經De妳","众所周知","霸爱三千宠丶 ","oo0伤、残","一场玩笑。","着我妳受苦","㎜安然失笑","扣扣去找别人","期待沵、","关心则乱",
	"曲终人散空留","转身再也不见","假象总太温暖","谁说不管结果","我们会爱很久","放纵自己的心","放开你的理由","你的爱给了谁","痴情不是罪过","奢侈不到心里","赠你七尺白绫","放任你去堕落","最终还是沉默","挥霍歇斯底里","仍挥不去想念","欠我一个拥抱","这点伤算什么","拿什么抗拒你","你为她哭红眼","温柔忽近忽远",
	"路人甲的单恋","就不承认酱紫","小弟一笑倾国","斧劈皴穆拉丁","醉后方知酒浓","小疯子的风筝","难以启齿的辱","很旧很旧的风","浪漫的坠崖者","鞋盒里的月亮","阿尔卑斯山雪","腐化掉的纯情","会游泳的兔子","戀上你是倖福","安格鲁巧克力","维多利亚月光","上校门卫","网上近邻","临窗观景","素子花开 ",
	"关于你关于我","我们的无奈","沧桑岁月","我爱她%","撕作业","夜市生活","Ta不爱你、","何必作践自已","亦久亦旧","心在痛’","傻子在付出","骗子在享受","艾弗森高","愛你的人太多","拾貝殼","刻下你的名字","张仪爱你的轩","张小姐我爱你","差吥多先生＂","简爱Simple",
	"有恃无恐、","酷酷的爱你","社会小青年","放纵的笑、","走喝酒去","暗恋得悲剧","網後的悲傷","眼泪你忘了吗","结局后才明白","谁负谁年华","见一个爱一个","临别拥抱 ","结束不是开始","泪爲谁而蓅","看破红尘","不如深深陷入","声嘶力竭,","心里的痛楚","她永远不懂","人去楼空",
	"北凤男飞","老车新路","雾里看吧 ","网间散布","小小水马","一品白衫","森林散布","英英快乐","八仙之人","义不容辞","墨山乡人","漓江渔火","洛水渔翁","飞天蝈蝈","半世晨晓","小沙尘瀑","顺风旋子","逆向锤头","布衣小贩","三羊开菜",
	"生无扎根处","黑色的记忆","丶只因太寂寞","何苦再留念","淡淡的烟草","巴黎彼岸","破碎的回忆","肆无忌惮的哭","身无分文","自甘堕落","无病呻吟","灵魂、沒共鸣","看不惯、","爷、霸气的风范","护花使者","哀莫大于心死","愿得一人心","半岛旧情丶","情绪莫名冷淡","尝透了心酸。",
	"唔似你的王","邯鄲夢","哇塞，美女啊","组织部部长","不发布了","小。帅哥","宁缺勿滥","萌小子,g","影子爱人","说不出口°","萌动小青年","凌若轩&","尼古丁有毒。","肉体摩擦","灰男孩","玩的就是钱 ","男人——难忍","人贱自有天收","丅﹁秒，待續","亲爱的丶想你",
	"“爱我别走/ ","小情调丶伤感","我们说好滴","末日快乐、","累了痛了哭了","自导自演丶 ","谎言狠真实","单人旅途","扯皮筋の爱情","凌晨两点半","霸占妳的妖嬈","恖唸傻傻滴爱","她是梦不是命","等ln糸情","机场控Er","浮浅Superfic ","要玩心吗 ","此生不换","微笑掩饰悲伤","温柔也是罪",
}
function GetTable()
	return autoTable
end
