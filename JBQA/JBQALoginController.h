//
//  JBQALoginController.h
//  JBQA
//
//  Created by Guillermo Moran on 8/21/12.
//  Modified by Aditya KD (flux) on 8/26/12. xD
//  Copyright © 2012 Fr0st Development. All rights reserved.
//


#import "JBQALinks.h"
#import "JBQATextFieldCell.h"

#import "UIProgressHUD.h"
#import "AJNotificationView.h"

@class JBQADataController, BButton;

@interface JBQALoginController : UITableViewController <UITextFieldDelegate, UIWebViewDelegate>
{
    JBQATextFieldCell *_username;
    JBQATextFieldCell *_password;

    JBQADataController *dataController;
    
    UIWebView *loginWebView;
    NSString *html;
    UIProgressHUD* hud;
    
    NSString *JBQAUsername;
    NSString *JBQAPassword;
    
    UITableView *_tableView;
    
    UINavigationBar *_navBar;
    
    id _activityIndicator; //alright, do whatever you want.
    
    BOOL isAttemptingLogin;
    BOOL isCheckingLogin;
}

@property (nonatomic, getter = isLoggingIn) BOOL loggingIn;
- (void)loginTapped:(UIButton *)tapped;
- (void)cancelTapped:(UIBarButtonItem *)button;
- (void)loginOnWebsite:(NSString *)url username:(NSString *)username password:(NSString *)password;
- (void)dismissModalViewController;
@end

