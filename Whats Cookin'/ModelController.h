//
//  ModelController.h
//  Whats Cookin'
//
//  Created by Tyler Ludka on 10/13/15.
//  Copyright (c) 2015 Cobalt Studios. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

