//
//  JTMCamera.h
//  Astronomy-ObjC
//
//  Created by Jonathan T. Miles on 10/10/18.
//  Copyright © 2018 Jonathan T. Miles. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JTMCamera : NSObject

@property (nonatomic, readonly)int ident;
@property (nonatomic, readonly)NSString *name;
@property (nonatomic, readonly)int roverId;
@property (nonatomic, readonly)NSString *fullName;

@end

NS_ASSUME_NONNULL_END
