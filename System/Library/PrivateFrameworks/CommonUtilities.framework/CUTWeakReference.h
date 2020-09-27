/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CUTWeakReference : NSObject {

	id _object;
	unsigned long long _objectAddress;

}

@property (assign,nonatomic,__weak) id object;                              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long objectAddress;              //@synthesize objectAddress=_objectAddress - In the implementation block
+(id)weakRefWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(unsigned long long)objectAddress;
-(void)setObjectAddress:(unsigned long long)arg1 ;
@end

