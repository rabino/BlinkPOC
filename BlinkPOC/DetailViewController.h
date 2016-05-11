//
//  DetailViewController.h
//  BlinkPOC
//
//  Created by Bruno Rabino on 11/05/16.
//  Copyright © 2016 Liberty Seguros S.A. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

