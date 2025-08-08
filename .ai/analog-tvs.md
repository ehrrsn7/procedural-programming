Idea for Science Starters/paper pass back in general

* Have an outbox on EACH zone’s table.   
  * Random thought about Zones: I was thinking there could be up to 4 teams/zones?  
* This would not necessarily mean that the zone needs their own paper turn-in box.   
  * This further necessitates finding color-coordinated stamps for each team/zone  
* This slims down the size and “out of the way” nature of the present solution

Classroom Setup

* The way I have my classroom set up is nearly there, but I need some subtle changes for my sanity.  
  * I like my niche but it feels so distant from my students.  
* How much further towards the center can I make my desk?  
  * “Mega desk” maybe? In terms of getting away with extension cords going against regulation.   
* This isn’t a terrible idea because I can use it to widen my surroundings and create an L-shape  
  * I love how simple my setup is now but I kind of need to.   
* Plus I can utilize the standing desk that hopefully isn’t broken.   
  * I was hooked on the idea of setting up the monitor arms on my green desk but I honestly don’t need to when the standing desk already supported this.   
  * Additionally I could use some dongles to encapsulate some of the miscellaneous wiring (Ethernet, some usb, etc) onto a single usb-a dongle or something similar and house that on one desk. 

How well does this new setup lend itself to the ideas that I had?

* see the discussion about reworking the science starters and classroom presentation workflow  
* Could the extra space be conducive to whatever solution I come up with?  
  * Ex: a web server that the smart TV’s default to  
    * Could a raspberry pi hosting this server live on that desk in a drawer hooked up to an Ethernet switch?  
  * Exactly how feasible is this, including the stress of playing synchronized sound/video as per tradition of the science starters  
    * \* definitely some testing required, stability is definitely essential so we don’t have a bail situation halfway through the semester, requiring a half-baked fix or revert   
  * Idea: this could enable “breakout rooms” or team-specific agendas :) the team could even gain access through another custom portal   
    * I get nervous thinking about needing a custom portal. I know how to make it stable but it’s just a lot more demanding than necessary  
    * Also, breakout rooms over zoom even bode poorly for our analogy  
  * Idea: what if there’s a cloud platform that I could use that facilitates this? (I guess we’re bordering on IT permissions) but maybe there can be super simplified controls, and then these screens could handle all the backend with something current, real-time and robust to handle the load of multiple custom pages?   
    * Eh, I’m leaning toward a simple reactjs portal again. Iframe tags for a hybrid solution maybe? I feel like tools like Padlet or anything could solve our dilemma. Literally anything over the internet works with this idea  
  * It just has to work well. Maybe the local web server provides the least latency and is the only feasible solution   
    * Maybe it doesn’t though. IT definitely seems to oppose having “homelab” solutions at an enterprise location.   
  * At that point, what’s to stop me from using a personal router with no internet to serve the portal?  
    * No internet access meaning the raspberry pi needing to proxy and connect to both networks, which honestly seems like a nightmare. Especially if the proxy can’t be virtualized and I need more than one host machine

Continuing this idea: how to stream to multiple devices 

* \*with the most elegant solution for modularity  
* Streaming embedded YouTube videos to multiple smart TV’s in my classroom via a web page that’s hosted in a separate location  
  * How well would they synchronize?  
  * Are there any known issues with this?  
  * Are there any known tools that work with this and are plug-n-play?  
* Maybe some sort of wireless hdmi situation with a raspberry pi situation? (Maybe audio is the only thing that needs to be synced up, the rest can be virtual desktops displaying a slightly different page/“breakout room”)  
  * Network latency \- there would definitely be a need to do some very sophisticated calculation to prevent audio sync drift that an HDMI splitter would fix out of the box  
  * Player login/ads  
  * Playposit offered as an embedded video solution for classrooms. Not the most useful as I can name like 3 others off the top of my head  
* Kiosk mode peaks my interest   
* Multiple raspberry pi’s or Apple tv’s wired together could be powerful too (but that begs the question again, why have smart TV’s?)  
  * Multi-pi software mentioned: omxplayer for precise timing, screenly (has watermark), or multicast/network streaming  
* Local video files (overkill for presentations but technically not an issue at all especially if an under-engineered, automated, built-in alarm is wanted)  
* At bear river, they had a perfect solution using analog tv. Could it really be that simple?? Wait that idea is cooking  
  * Channels have their own input and would pop back up by default. Web pages do too, but I am more wary of this. Plus having analog signals is frankly very badass   
  * there might be a security concern if it reaches outside of campus. Then again, non-hdmi based solutions all will be  
* Solution would be coax cable.   
  * Side note: why consider this if I didn’t like the idea of routing HDMI cables?  
    * Hdmi’s dont have the ability to transmit multiple video options made possible by channels  
  * Ultimately, wireless is also totally an option here  
* Multiple video options can be made possible via signal channels  
  * I.e. 3 or 4  
  * This could allow each team to be designated their own channel  
* How would I implement this?   
  * Gemini mentioned using an RF modulator and coax.  
  * I’d hope wireless is plug-n-play, and that the TV’s get a strong enough signal  
* How did bear river implement this?  
  * An email to Mr. O’Niell is probably in order  
* Weird tangent, but how does 93Q handle their transmissions   
  * Call Pablo F  
  * Call Gary J  
* How cheap can this be?  
  * The simplest implementation involves no wiring (even though that would be minimal/cheap) and a single RF Modulator (only supports analog/single output)  
  * RF modulator $12.95-20.00 each (amount could be 4 for each team or 2 for each class)  
  * (Optional) Coax cable $20 per 100’  
  * (If daisy chaining) 5x$15 for 5 active coax splitters (to prevent signal falloff)  
* How would students commandeer this page?   
  * At this point they can just change the input. When they’re done they can hit windows-P to switch to single monitor mode and I assume it would just fall back. Maybe not \- in this case they’d need a remote. 