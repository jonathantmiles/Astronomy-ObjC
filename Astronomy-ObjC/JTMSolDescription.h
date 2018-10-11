//
//  JTMSolDescription.h
//  Astronomy-ObjC
//
//  Created by Jonathan T. Miles on 10/10/18.
//  Copyright © 2018 Jonathan T. Miles. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JTMSolDescription : NSObject

@property (nonatomic, readonly)int sol;
@property (nonatomic, readonly)int totalPhotos;
@property (nonatomic, readonly, copy)NSArray<NSString *> *cameras;

@end

NS_ASSUME_NONNULL_END
