//
//  Show.h
//  Gilligizer
//
//  Created by Ronald Mulero on 1/4/15.
//  Copyright (c) 2015 Element 84, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Show : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSDate * showTime;
@property (nonatomic, retain) NSNumber * firstRun;
@property (nonatomic, retain) NSNumber * episodeID;
@property (nonatomic, retain) NSString * desc;

@end
