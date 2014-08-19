//
//  MyClassController.h
//  iOSLabProj
//
//  Created by itisioslab on 18.08.14.
//  Copyright (c) 2014 kpfu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyClassController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
- (IBAction)pushBut:(id)sender;
@property (weak, nonatomic) IBOutlet UITableView *tableV;


@end
