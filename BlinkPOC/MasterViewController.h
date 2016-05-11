//
//  MasterViewController.h
//  BlinkPOC
//
//  Created by Bruno Rabino on 11/05/16.
//  Copyright © 2016 Liberty Seguros S.A. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

