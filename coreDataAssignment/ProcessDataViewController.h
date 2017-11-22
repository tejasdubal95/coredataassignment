//
//  ProcessDataViewController.h
//  coreDataAssignment
//
//  Created by Student P_10 on 22/11/17.
//  Copyright © 2017 vaishnavifelixprogram. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProcessDataViewController : UIViewController<UITextFieldDelegate>
@property (strong, nonatomic) IBOutlet UITextField *tf1;
@property (strong, nonatomic) IBOutlet UITextField *tf2;
- (IBAction)deleteItem:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *saveItem;
@property (strong, nonatomic) IBOutlet UIButton *deleteItem;

@property NSArray *allObjects;
@property NSArray *itemNameArray;
@property NSArray *itemRateArray;



@end
