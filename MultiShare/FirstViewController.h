//
//  FirstViewController.h
//  MultiShare
//
//  Created by Alexander Person on 11/16/15.
//  Copyright © 2015 Alexander Person. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *txtMessage;
@property (weak, nonatomic) IBOutlet UITextView *tvChat;

- (IBAction)sendMessage:(id)sender;
- (IBAction)cancelMessage:(id)sender;

@end

