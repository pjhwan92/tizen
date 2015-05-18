#tizen source code description#

##app-manager##
* Managing all apps in a device
* Handling events when an app is 
  * launched
  * terminated
  * installed
  * uninstalled
  * updated
* Provide some callback functions to handle above events

##application##
* This project has the information about the status of each apps
* app.h provides callback functions.
  This functions are called when the status of an app is changed
