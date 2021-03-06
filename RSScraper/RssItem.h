//
//  RssItem.h
//  RSScraper
//
//  Created by Rose CW on 8/28/12.
//  Copyright (c) 2012 Rose and Ran. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RssItem : NSObject
@property (strong) NSString* title;
@property (strong) NSString* link;
@property (strong) UIImage* image;
-(void)performBlockWithImages:(void (^)(UIImage*)) block;
@end
