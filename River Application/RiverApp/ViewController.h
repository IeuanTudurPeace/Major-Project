//
//  ViewController.h
//  RiverApp
//
//  Created by Ieuan Peace on 11/11/2012.
//  Copyright (c) 2012 Ieuan Peace. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

#import "RiverList.h"

@class RiverList;
@interface ViewController : UIViewController <MKMapViewDelegate>{
  //  BOOL _doneInitialZoom;
    NSMutableArray *rivers;
}

@property (nonatomic, strong) RiverList * myRiverListDetail;
@property (nonatomic, retain) NSMutableArray *rivers;
@property (weak, nonatomic) IBOutlet UILabel *River;
@property (weak, nonatomic) IBOutlet UILabel *Section;
@property (weak, nonatomic) IBOutlet UILabel *Grade;
@property (weak, nonatomic) IBOutlet UILabel *Description;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (nonatomic) double GetOnLatitude;
@property (nonatomic) double GetOnLongitude;
@property (weak, nonatomic) IBOutlet UILabel *levelsLabel;


@end
