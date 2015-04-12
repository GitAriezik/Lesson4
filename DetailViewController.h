//
//  DetailViewController.h
//  Lesson4
//
//  Created by Vasily on 12.04.15.
//  Copyright (c) 2015 Vasily Filippov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *label_MainValue;

@property (strong, nonatomic) IBOutlet UILabel *label_Price;

@property (strong, nonatomic) IBOutlet UITextView *textView_Discr;



@end
