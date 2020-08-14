# SpaceVagrant

## Contributors
Erik Jastad  
Josh Ray   
Philip Chen   
Will Becker  
Alex Bailey  
Jacob Ferretti  

## Description
An open source starting point for us to learn the starting points of game dev. It's a rogue-like, third person shooter where the player explores preocedurally generated maps, killing enemies and picking up resources to upgrade their abilities.

This is an early project that plans to incorporate level goals, persistent player upgrades such as stats, abilities and equipment; Enemy models, AI and behaviours and a minimap are on the roadmap to be created as well.

## License

This work is released under the "MIT license".
Please see the file [License](https://github.com/esjastad/SpaceVagrant/blob/master/LICENSE) in this distribution for
license terms.


## How to use the source code
Developed with Unreal Engine 4.25
  
The first thing you will need to view this open source project is unreal engine v 4.25 which can be acquired here:  
https://www.unrealengine.com/en-US/get-now/agnostic  
(this is a launcher for unreal where you can then select and install the required version)  

To compile this project for the UE4 editor, you will need MS Visual Studio 2017 (it can be the free community version) with the following packages:
* Desktop Development with C++
* Game Development with C++
* .NET Desktop Development

Once you have the correct environment for MSVS 2017 and UE4.25 annotated above, you can open the spacevagrant.uproject, a prompt about missing modules will occur and select yes to rebuild them now.  After the rebuild finishes the editor will open allowing you access to the blueprints and code through the UE4 editor.

## Demo
A current working demo for windows 64 bit systems can be acquired here under releases!  If you wish to view the results of the work without having to install UE4.25 or MSVS 2017 as listed above, use the following link to download the demo zipfile.  
https://github.com/esjastad/SpaceVagrant/releases/tag/V0.7
  
Simply extract the contents of the zip file and run the executable within.
  
* Movement keys - WASD
* Reset - Q
* Jump - Spacebar
* Aim - Right mouse button
* Fire - Left mouse button
* Quit - Escape key
* Sprint - Left Shift  

## Videos
Here is a video link of Erik Jastad playing and talking about the game demo.  
https://www.youtube.com/watch?v=cVWJCiD8Zzw&feature=youtu.be  
Here is a part 1,2, and 3 video links of Erik Jastad showing how to look around the editor and our UE4 project.  
https://www.youtube.com/watch?v=iQq7qs5rDOw&feature=youtu.be  
https://www.youtube.com/watch?v=K375o11XnNQ&feature=youtu.be


# Sources
* https://docs.unrealengine.com/en-US/index.html  - This is generic documentation used for Uneal engine
* https://answers.unrealengine.com/questions/120392/how-can-i-load-text-from-file-with-blueprint.html   - This code is implemented but not used, under Source/SpaceVagrant
* https://stackoverflow.com/questions/1761626/weighted-random-numbers   -  This is implemented in the function GetPieceIndex in the BP_WorldGenerationManager
* https://freesound.org/people/malatestinic.com/sounds/481584/  - This sound is used for the gunshot
* https://freesound.org/people/InspectorJ/sounds/352513/  - This sound is used for the barrels breaking
* https://freesound.org/people/waveplay./sounds/399933/ - This sound is used for resource pickup
* https://www.mixamo.com/   - All animations for the characters were taken from mixamo
* https://www.youtube.com/watch?v=AivAkA-IliU
* enemy source: SpaceVagrant/Content/Character/Enemies/sources.txt
* All models and textures were created by the contributors, 
* Erik Jastad
