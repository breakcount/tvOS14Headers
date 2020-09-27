/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PSIIndexToken : NSObject {

	short _category;
	short _owningCategory;
	NSString* _text;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) short category;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) short owningCategory;                    //@synthesize owningCategory=_owningCategory - In the implementation block
-(id)description;
-(NSString *)identifier;
-(short)category;
-(NSString *)text;
-(id)initWithText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4 ;
-(short)owningCategory;
@end

