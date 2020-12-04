

-- 比较大小的函数
function GetMax(a,b)
	if a > b then
		return a;
	else
		return b;
	end
end


max = GetMax(10,20)
print(max)
