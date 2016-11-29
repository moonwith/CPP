--副本类场景

---------------------------------

clsScene = CLSSCENE.clsScene:Inherit()

function clsScene:__init__()
	Super(clsScene).__init__(self)
	self.__save = {}
	self.__temp = {}
	self:initsavedata()
	self:inittempdata()
	return true
end

function clsScene:initsavedata()	
end

function clsScene:inittempdata()
	self.__temp.id = 0
	self.__temp.callout = {}
	self.__temp.roleList = {}
end

function clsScene:InitScene(sceneId, type, template, sceneData, autoRelease)
	self:SetId(sceneId)
	self:SetType(type)
	self:SetTemplate(template)
	self:SetSceneData(sceneData)
	self:SetSceneRange(sceneData.size.x, sceneData.size.y)
	if sceneData.transType then
		self:SetTransPos(sceneData.transType, sceneData.transX, sceneData.transY)
	end
	self:SetInitState()
	self:SetAutoRelease(autoRelease)
	lengine.scene.new_scene(sceneId, sceneData.size.x, sceneData.size.y)
	self:InitNpcList()
end

