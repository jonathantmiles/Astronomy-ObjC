//
//  JTMMarsPhoto.h
//  Astronomy-ObjC
//
//  Created by Jonathan T. Miles on 10/10/18.
//  Copyright © 2018 Jonathan T. Miles. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JTMCamera.h"

NS_ASSUME_NONNULL_BEGIN

@interface JTMMarsPhoto : NSObject

@property (nonatomic, readonly) int ident;
@property (nonatomic, readonly) int sol;
@property (nonatomic, readonly) JTMCamera *camera;
@property (nonatomic, readonly) NSDate* earthDate;

@property (nonatomic, readonly)NSURL *imageURL;

// enum for codingKeys; codingKeys relevant?

// dateFormatter with defined properties

@end

NS_ASSUME_NONNULL_END
