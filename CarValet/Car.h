//
//  Car.h
//  CarValet
//
//  Created by Chad on 9/7/14.
//  Copyright (c) 2014 Chad Williams. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Car : NSObject

@property (nonatomic) int year;
@property (nonatomic) NSString *make;
@property (nonatomic) NSString *model;
// @property (nonatomic) float fuelAmount;
@property (nonatomic, getter = isShowingLiters) BOOL showLiters;

@property (nonatomic, setter=setTheFuelAmountTo:) float fuelAmount;
// for above use [aCar setTheFuelAmountTo:20.0f];


//if (aCar.isShowingLiters) {
//    aCar.showLiters = NO;
//}

/*
{
    int _year;
    NSString *_make;
    NSString *_model;
    float _fuelAmount;
}
 */

-(id)initWithMake: (NSString *)make
             model: (NSString *)model
              year: (int)year
        fuelAmount: (float)fuelAmount;

 
-(void)printCarInfo;

- (void)shoutMake;

//removing per Properties page 50
/*
-(float)fuelAmount;
-(void)setFuelAmount:(float)fuelAmount;
-(int)year;
-(NSString*)make;
-(NSString*)model;
*/


@end
