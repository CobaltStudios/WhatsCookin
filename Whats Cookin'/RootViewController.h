//
//  RootViewController.h
//  Whats Cookin'
//
//  Created by Tyler Ludka on 10/14/15.
//  Copyright © 2015 Cobalt Studios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController<UIPageViewControllerDataSource>

@property (nonatomic,strong) UIPageViewController *PageViewController;
@property (nonatomic,strong) NSArray *arrPageTitles;
@property (nonatomic,strong) NSArray *arrPageImages;

- (PageContentViewController)viewControllerAtIndex:(NSUInteger)index;

- (IBAction)btnStartAgain:(id)sender;

@end
