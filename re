spawn(function()
    while true do
        while wait() do  
while wait() do  
while wait() do  
while wait() do  
while wait() do  
while wait() do  
game:GetService("RunService").RenderStepped:Connect(function()  
    while true do  
        game:GetService("ReplicatedStorage").Remotes.Rebirth:InvokeServer()  
    end  
end)  
end  
end  
end  
end  
end  
end
    end
end)

wait(5.4)

local TeleportService = game:GetService("TeleportService")
local Players = game:GetService("Players")
TeleportService:Teleport(game.PlaceId, Players.LocalPlayer)
