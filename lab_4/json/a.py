import json

x = open("sample-data.json", "r")
y = json.loads(x.read())

print("""
Interface Status
================================================================================
DN                                                 Description           Speed    MTU  
-------------------------------------------------- --------------------  ------  ------"""
)

for i in y["imdata"]:
    if len(i["l1PhysIf"]["attributes"]["dn"])==42:
        print(i["l1PhysIf"]["attributes"]["dn"], "                             ", i["l1PhysIf"]["attributes"]["speed"], i["l1PhysIf"]["attributes"]["mtu"])
    else:
        print(i["l1PhysIf"]["attributes"]["dn"], "                              ", i["l1PhysIf"]["attributes"]["speed"], i["l1PhysIf"]["attributes"]["mtu"])    