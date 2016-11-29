function ParseTable(table)
	local CodeString = "--玩家经验表\n local autoTable = {\n"
	for line, Data in ipairs(table[1]) do --只读第一页
		--第一行不读
		if line > 1 then
			CodeString = CodeString .. string.format("\t[%d] = {\n", Data[1])
			if Data[2] then
				CodeString = CodeString .. string.format("\t\texp = %d,\n", Data[2])
			end
			CodeString = CodeString .. "\t\tfuncList = {\n"
			local i = 1
			for i = 1, 18 do
				if Data[i + 2] then
					CodeString = CodeString .. string.format("\t\t\t[%d] = %d, \n", i, Data[i + 2])
				end
			end
			CodeString = CodeString .. "\t\t},\n"
			CodeString = CodeString .. "\t},\n"
		end
	end
	CodeString = CodeString .. "}\n"
	CodeString = CodeString .. "function GetTable()\n\treturn autoTable\nend\n"
	return CodeString
end

function SaveCode(file, Code)
	local fd = io.open(file, "w")
	assert(fd)
	fd:write(Code)
	fd:close()
end

function gen()
	local excelfile = "table/vipList.xls"
	local outfile = "autocode/vipList.lua"
	local cmd = string.format([[python 'tool/xls2table.py' '%s']], excelfile)
	local fd = io.popen(cmd)
	local loadxls = loadstring(fd:read("*a"))
	assert(loadxls)
	loadxls()
	assert(__XLS_END)
	fd:close()
	local Code = ParseTable(xlstable)
	SaveCode(outfile, Code)
end
gen()
