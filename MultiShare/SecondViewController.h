//
//  SecondViewController.h
//  MultiShare
//
//  Created by Alexander Person on 11/16/15.
//  Copyright © 2015 Alexander Person. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SecondViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tblFiles;

@end

