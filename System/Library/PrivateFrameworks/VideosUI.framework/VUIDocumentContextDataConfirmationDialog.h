/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataConfirmationDialog : VUIDocumentContextData {

	NSString* _confirmationDialogType;
	NSString* _name;

}

@property (nonatomic,copy) NSString * confirmationDialogType;              //@synthesize confirmationDialogType=_confirmationDialogType - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)jsonData;
-(NSString *)confirmationDialogType;
-(void)setConfirmationDialogType:(NSString *)arg1 ;
@end
