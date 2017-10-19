//
//  MapKit.h
//
//
//  Created by Victor Zimmer on 09/11/15.
//
//

#import <Cordova/CDV.h>

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

@interface MapKit : CDVPlugin

- (void) test:(CDVInvokedUrlCommand*)command;

// - (void) checkLocationPermission(CDVInvokedUrlCommand*)command;
// - (void) requestLocationAlwaysPermission(CDVInvokedUrlCommand*)command;
// - (void) requestLocationWhenInUsePermission(CDVInvokedUrlCommand*)command;
//
// - (void) createMapView(CDVInvokedUrlCommand*)command;
// - (void) removeMapView(CDVInvokedUrlCommand*)command;
//
// - (void) showMapScale(CDVInvokedUrlCommand*)command;
// - (void) hideMapScale(CDVInvokedUrlCommand*)command;
//
// - (void) showMapCompass(CDVInvokedUrlCommand*)command;
// - (void) hideMapCompass(CDVInvokedUrlCommand*)command;
//
// - (void) showMapTraffic(CDVInvokedUrlCommand*)command;
// - (void) hideMapTraffic(CDVInvokedUrlCommand*)command;
//
// - (void) showMapBuildings(CDVInvokedUrlCommand*)command;
// - (void) hideMapBuildings(CDVInvokedUrlCommand*)command;
//
// - (void) showMapUserLocation(CDVInvokedUrlCommand*)command;
// - (void) hideMapUserLocation(CDVInvokedUrlCommand*)command;
//
// - (void) showMapPointsOfInterest(CDVInvokedUrlCommand*)command;
// - (void) hideMapPointsOfInterest(CDVInvokedUrlCommand*)command;

@end
