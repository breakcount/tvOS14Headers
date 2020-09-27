/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FLHSA2PasswordResetNotification : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _informativeText;
	NSString* _approveButtonTitle;
	NSString* _dismissButtonTitle;
	NSString* _appleID;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * informativeText;                 //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,copy) NSString * approveButtonTitle;              //@synthesize approveButtonTitle=_approveButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * dismissButtonTitle;              //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * appleID;                         //@synthesize appleID=_appleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setInformativeText:(NSString *)arg1 ;
-(NSString *)informativeText;
-(id)initWithFollowUpItemUserInfo:(id)arg1 ;
-(id)followUpItemUserInfo;
-(NSString *)approveButtonTitle;
-(void)setApproveButtonTitle:(NSString *)arg1 ;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
@end

