//
//  PageViewController.h
//  Whats Cookin'
//
//  Created by Tyler Ludka on 10/14/15.
//  Copyright © 2015 Cobalt Studios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageViewController : UIPageViewController
@property NSUInteger pageIndex;
@property NSString *imgFile;
@property NSString *txtTitle;

@end
