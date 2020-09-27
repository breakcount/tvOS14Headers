/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPropertyDescription;

@interface NSSQLBindVariable : NSObject {

	int _cd_rc;
	unsigned char _sqlType;
	unsigned _index;
	unsigned _flags;
	id _value;
	NSPropertyDescription* _propertyDescription;
	long long _int64;

}
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
-(id)propertyDescription;
-(unsigned char)sqlType;
-(id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2 ;
-(id)initWithUnsignedInt:(unsigned)arg1 sqlType:(unsigned char)arg2 ;
-(id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3 ;
-(id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3 allowCoercion:(BOOL)arg4 ;
-(void)setInt64:(long long)arg1 ;
-(void)setUnsignedInt:(unsigned)arg1 ;
-(long long)int64;
-(unsigned)unsignedInt;
-(void)setSQLType:(unsigned char)arg1 ;
-(BOOL)hasObjectValue;
-(BOOL)allowsCoercion;
@end

