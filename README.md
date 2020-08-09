# SRPTWorkaround
this project is a way for you to use Steam Remote Play Together with any and all progams on your computer.

## Usage
- Download the exe from releases or compile this program the normal cmake way
- Install a Steam Remote Play Together compatible game through steam.
  - I recommend Broforce as it is available on all steam platfroms, supports 4 player Steam Remote Play Together and is not too big
  - If you dont own Broforce and dont want to spend money then use Expendabros instead (this game doesnt support linux)
- Create a list of all the games/programs you want to be able to launch with Steam Remote Play Together.
  - this list should have the format specified in the format section of this README
- Copy the program and list into the folder of the Steam Remote Play Together game you installed in step 2
- Backup the game executable somewhere by copying it to the same folder with a diffrent name
- Replace the original game executable with this workaround exeutable (just make sure they have Identical names)
- go into steam and change the game launch options and input the file name of the game list you created in step 3
- add a space after that name and then input the name of the program from that list you want to launch
- now save the config and start the game through steam. you should be able to get the steam overlay open and invite people to Steam Remote Play Together

## Format
the format for the game list file should be
```
[program name in one word] [path to program executable]
[program name in one word] [path to program executable]
[program name in one word] [path to program executable]
.
.
.
```
see exampleconf.txt for an example
