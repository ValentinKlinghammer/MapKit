# cordova-plugin-mapkit
cordova-plugin-mapkit is a plugin that allows you to use maps built with Apple MapKit in Cordova iOS apps.

## Installation
`$ cordova plugin add https://github.com/ValentinKlinghammer/cordova-plugin-mapkit.git`

MapKit uses the identifier `cordova-plugin-mapkit`

## Usage
MapKit exposes itself thru the global object `MKInterface` that is attached to the `window` object.
This can be accessed globally as just `MKInterface`.

### Example
```javascript
var map = new MKInterface.MKMap();  // Creates a new map
map.setBounds(500, 250);            // Sets the map to be 500 high and 250 wide
map.setPosition(50,200);            // Sets the maps position to be 50 from the left and 200 from the top
map.createMap();                    // Creates the MapView and shows it on the screen
```

### Full Documentation
`MKInterface` contains several different MapKit related functions.

#### MKMap
`MKInterface.MKMap` (Prototype Function / Class) Initialized as `yourMapVariable = new MKInterface.MKMap(mapId)`. There is no limit to the amount of maps that can be created and when created it can be treated as any other object. `mapId` is optional, if not set MapKit will automatically assign a unique id formatted like "map_someNumber".

Returns a new object of the type `MKMap`.

##### Variables
- `MKMap.locationManager` (Object) a reference to the same locationManager you can access thru `MKInterface.locationManager`.
- `MKMap.created` (read-only Boolean) Whether or not the MapView has been created.
- `MKMap.mapId` (read-only String) Alphanumeric unique ID for the map.
- `MKMap.mapArrayId` (read-only Number) Numeric unique ID for the map. Counts from zero, increasing by one for every map initialized.
- `MKMap.options` (read-only Object)

| Value  | Description |
| ------------- | ------------- |
| `MKMap.options.xPos` Number  | The current x position of the MapView.  |
| `MKMap.options.yPos` Number  | The current y position of the MapView.  |
| `MKMap.options.height` Number  | The current height of the MapView.  |
| `MKMap.options.mapScale` Boolean  | Whether or not scale is shown on the map.  |
| `MKMap.options.mapBuildings` Boolean  | Whether or not buidings are shown on the map.  |
| `MKMap.options.mapPointsOfInterest` Boolean  | Whether or not Points of Interest (shops, etc) are shown on the map.
| `MKMap.options.mapTraffic` Boolean  | Whether or not traffic is shown on the map.  ||
| `MKMap.options.mapUserLocation` Boolean  | Whether or not the users location is shown on the map.  |
| `MKMap.options.mapCompass` Boolean  | Whether or not a digital compass is shown on the map.  |


##### View-Manipulation Methods
- `MKMap.setSize(height, width)` (Method) Alias of `MKMap.setBounds()`.
- `MKMap.setPosition` (Method) Used to set the x and y position of the map. Can be called both before and after map creation. Accepts two numeric parameters e.g `(x, y)` or one object e.g `({x: x, y: y})`.
- `MKMap.createMap()` (Method) Used to create the MapView for the map. Only needs to be called once, any call after that will be ignored.
- `MKMap.showMap()` (Method) Used to show the map. (View is automatically shown when created).
- `MKMap.hideMap()` (Method) Used to hide the map. Hidden maps do in interact with the user and touch events will not be captured.
- `MKMap.destroyMap()` (Method) Used to destroy the map. This will remove the map entirely. In most cases hiding the map would make more sense. Destroyed maps CAN NOT be reused or recreated, you'll have to create a new map.

#### Overlay Methods
- `setMapRoute` (Method) Used to display straight lines between multiple points
- `setMapDirectionRoute` (Method) Used to display lines using streets (directions) between multiple points
- `setMapZone` (Method) Used to display a polygon with provided color

#### Map-Manipulation Methods
- `MKMap.showMapScale()` (Method) Shows the distance scale on the map.
- `MKMap.hideMapScale()` (Method) Hides the distance scale from the map.
- `MKMap.showMapBuildings()` (Method) Shows buildings on the map.
- `MKMap.hideMapBuildings()` (Method) Hides buildings from the map.
- `MKMap.showMapTraffic()` (Method) Shows traffic on the map.
- `MKMap.hideMapTraffic()` (Method) Hides traffic from the map.
- `MKMap.showMapPointsOfInterest()` (Method) Shows Points of Interest on the map.
- `MKMap.hideMapPointsOfInterest()` (Method) Hides Points of Interest from the map.
- `MKMap.showMapCompass()` (Method) Shows the compass on the map. _Requires authorization to use the users current location. If authorization is not already given MapKit will automatically try to prompt the user for authorization. Compass will be activated whether authorization is given or not, but will only be visible if authorized._
- `MKMap.hideMapCompass()` (Method) Hides the compass from the map.
- `MKMap.showMapUserLocation()` (Method) Shows the users location on the map. _Requires authorization to use the users current location. If authorization is not already given MapKit will automatically try to prompt the user for authorization. User location will be activated whether authorization is given or not, but will only be visible if authorized._
- `MKMap.hideMapUserLocation()` (Method) Hides the users location from the map.
- `MKMap.userLocationVisible(callback)` (Method) Returns a Boolean representing the visibility of the users current location. If _true_ the users location IS showing on the map, if _false_ its not. If it's enabled and not showing its either because the system is unable to get its current location or because your app is not authorized to recieve location. Callback is **required** or the method call will be ignored.

## Credits
Victor Zimmer from this [MapKit Plugin](https://github.com/victorzimmer/MapKit)
