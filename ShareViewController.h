//
//  ShareViewController.h
//  ZevCase
//
//  Created by Yu Li on 12/20/13.
//  Copyright (c) 2013 Yu Li. All rights reserved.
//

#import "ViewController.h"

@class MainViewController;

@interface ShareViewController : ViewController<UITextFieldDelegate, UITextViewDelegate>{
    IBOutlet UITextField *_txtName;
    IBOutlet UITextView *_txtTag;
    IBOutlet UIButton *btnPublish;
    IBOutlet UIButton *btnBuy;
    IBOutlet UIButton *btnShare;
    IBOutlet UIButton *btnClose;
    
    NSString* strName;
    NSString* strPrice;
    NSString* strTag;
    NSMutableArray * originalArray;
    int index;
    
}

@property (nonatomic, assign) NSData *dataForUpload;
@property (nonatomic, assign) UIImage *imageForUpload;
@property (nonatomic, assign) MainViewController *mainVC;

- (IBAction)actionCancel:(id)sender;
- (IBAction)actionDone:(id)sender;
- (IBAction)actionPublish:(id)sender;
- (IBAction)actionBuy:(id)sender;
- (IBAction)actionShare:(id)sender;
- (IBAction)actionClose:(id)sender;

-(void)setOriginalArray:(NSMutableArray *)_originalArray;
-(NSMutableArray *)getOriginalArray;

@end
