/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSString, TVSUITextAlertController;

@interface TVCSPasswordSettingPromptViewController : UIViewController {

	/*^block*/id _didSelect;
	NSString* _username;
	NSString* _firstName;
	TVSUITextAlertController* _alertController;

}

@property (nonatomic,copy) NSString * username;                                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * firstName;                                      //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) TVSUITextAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,copy) id didSelect;                                              //@synthesize didSelect=_didSelect - In the implementation block
-(id)init;
-(NSString *)username;
-(NSString *)firstName;
-(void)setUsername:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setAlertController:(TVSUITextAlertController *)arg1 ;
-(TVSUITextAlertController *)alertController;
-(id)preferredFocusEnvironments;
-(id)didSelect;
-(void)configureWithAccount:(id)arg1 ;
-(void)setDidSelect:(id)arg1 ;
-(id)_alertTextMessage;
-(void)_didSelectWithPasswordSetting:(unsigned long long)arg1 ;
@end
