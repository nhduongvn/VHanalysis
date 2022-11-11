import ConfigParser

file = "../Configs/config_peteryou.ini"
config = ConfigParser.ConfigParser()
config.read(file)

print(config.sections())
print(config.get("General", "lumi_16"))
