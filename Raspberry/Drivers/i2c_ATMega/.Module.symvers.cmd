cmd_/home/chuck/GBA-SPi/Raspberry/Drivers/i2c_ATMega/Module.symvers :=  sed 's/ko$$/o/'  /home/chuck/GBA-SPi/Raspberry/Drivers/i2c_ATMega/modules.order | scripts/mod/modpost -m -a    -o /home/chuck/GBA-SPi/Raspberry/Drivers/i2c_ATMega/Module.symvers -e -i Module.symvers -T - 