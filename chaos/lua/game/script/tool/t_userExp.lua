function ParseTable(table)
	local CodeString = "--玩家经验表\n local autoTable = {\n"
	for line, Data in ipairs(table[1]) do --只读第一页
		--第一行不读
		if line > 1 then
			CodeString = CodeString .. string.format("\t[%d] = {\n", Data[1])
			CodeString = CodeString .. string.format("\t\tuplimit = %d,\n", Data[2])
			CodeString = CodeString .. string.format("\t\tuniSecretExp = %d,\n", Data[3])
			CodeString = CodeString .. string.format("\t\tmeditate = %d,\n", Data[4])
			if Data[4] then
				CodeString = CodeString .. string.format("\t\tdailyMissExp = %d,\n", Data[4])
			end
			if Data[5] then
				CodeString = CodeString .. string.format("\t\tdailyMissNimbus = %d,\n", Data[5])
			end
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
	local excelfile = "table/userExp.xls"
	local outfile = "autocode/userExpList.lua"
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
