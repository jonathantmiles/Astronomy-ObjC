//
//  JTMCollectionViewCell.m
//  Astronomy-ObjC
//
//  Created by Jonathan T. Miles on 10/10/18.
//  Copyright © 2018 Jonathan T. Miles. All rights reserved.
//

#import "JTMCollectionViewCell.h"
#import <AssetsLibrary/AssetsLibrary.h>

@interface JTMCollectionViewCell ()



@end

@implementation JTMCollectionViewCell

- (void)prepareForReuse
{
    [super prepareForReuse];
    self.photoImageView.image = [[UIImage alloc] initWithContentsOfFile:@"MarsPlaceholder"];
}

@end
