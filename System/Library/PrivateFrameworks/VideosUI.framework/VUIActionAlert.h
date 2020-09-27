/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionAlert : VUIAction {

	NSString* _title;
	NSString* _descriptionString;
	NSString* _dismissButtonTitle;

}

@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * descriptionString;               //@synthesize descriptionString=_descriptionString - In the implementation block
@property (nonatomic,retain) NSString * dismissButtonTitle;              //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithContextData:(id)arg1 ;
-(void)setDescriptionString:(NSString *)arg1 ;
-(NSString *)descriptionString;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

