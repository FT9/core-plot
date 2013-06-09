@class CPTColor;
@class CPTFill;

@interface CPTLineStyle : NSObject<NSCoding, NSCopying, NSMutableCopying>

@property (nonatomic, readonly) CGLineCap lineCap;
@property (nonatomic, readonly) CGLineJoin lineJoin;
@property (nonatomic, readonly) CGFloat miterLimit;
@property (nonatomic, readonly) CGFloat lineWidth;
@property (nonatomic, readonly) NSArray *dashPattern;
@property (nonatomic, readonly) CGFloat patternPhase;
@property (nonatomic, readonly) CPTColor *lineColor;
@property (nonatomic, readonly) CPTFill *lineFill;

/// @name Factory Methods
/// @{
+(id)lineStyle;
/// @}

/// @name Drawing
/// @{
-(void)setLineStyleInContext:(CGContextRef)context;
-(void)strokePathInContext:(CGContextRef)context;
-(void)strokeRect:(CGRect)rect inContext:(CGContextRef)context;
/// @}

@end
