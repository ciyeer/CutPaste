
#ifndef CCOMMONHELPER_H
#define CCOMMONHELPER_H
#include <QString>
#include <QRect>

class QWidget;

/**
 * @class : CCommonHelper
 * @brief : 閫氱敤鍔╂墜
 * @note  : 瀹屾垚涓�浜涙瘮杈冨父鐢ㄥ張閫氱敤鐨勫姛鑳�
 */
class CCommonHelper
{
public:

    /**
    * @brief : 璁剧疆QSS鏂囦欢
    * @param : style 鏂囦欢鍚�
    * @author: 闄堥瞾鍕�
    * @date  : 2017骞�4鏈�0鏃�
    * @remark: 濡傛灉鏄痲rc璺緞锛岃甯︿笂 qrc:/
    **/
    static void setStyle(const QString &style);

    /**
    * @brief : 璁剧疆璇█鍖�
    * @param : language 璇█鍖呯殑鏂囦欢鍚�
    * @author: 闄堥瞾鍕�
    * @date  : 2017骞�4鏈�0鏃�
    **/
    static void setLanguagePack(const QString& language);

    /**
    * @brief : 灏嗙獥鍙ｇЩ鍔ㄥ埌涓績
    * @param : widget 瑕佺Щ鍔ㄧ殑绐楀彛
    * @param : parentRect 鐭╁舰鍑犱綍鏁版嵁
    * @author: 闄堥瞾鍕�
    * @date  : 2017骞�4鏈�0鏃�
    **/
    static void moveCenter(QWidget* widget, QRect parentRect = {});


    /**
    * @brief : 鑾峰緱褰撳墠鐣岄潰涓庡紑鍙戞椂鐨勭晫闈箣闂寸殑妯悜鍊嶇巼
    * @return: float 鍊嶇巼
    * @author: 闄堥瞾鍕�
    * @date  : 2017骞�4鏈�0鏃�
    **/
    static const float& getWindowWidthMultiplyingPower(void);


    /**
    * @brief : 鑾峰緱褰撳墠鐣岄潰涓庡紑鍙戞椂鐨勭晫闈箣闂寸殑绾靛悜鍊嶇巼
    * @return: float 鍊嶇巼
    * @author: 闄堥瞾鍕�
    * @date  : 2017骞�4鏈�0鏃�
    **/
    static const float& getWindowHeightMultiplyingPower(void);


    /**
    * @brief : 鑾峰緱褰撳墠榧犳爣浣嶇疆鏈�灏忕殑瀛愮獥鍙�
    * @param : out_rect 鐭╁舰 (杩斿洖)
    * @return: 鎴愬姛:true
    * @author: 闄堥瞾鍕�
    * @date  : 2017骞�4鏈�0鏃�
    **/
    static bool getSmallestWindowFromCursor(QRect &out_rect);

    /**
    * @brief : 鑾峰緱褰撳墠榧犳爣浣嶇疆鐨勭獥鍙�
    * @param : out_rect 鐭╁舰 (杩斿洖)
    * @return: 鎴愬姛:true
    * @author: 闄堥瞾鍕�
    * @date  : 2017骞�4鏈�0鏃�
    **/
    static bool getCurrentWindowFromCursor(QRect &out_rect);

protected:

    /**
    * @brief : 鏇存柊绐楀彛鍊嶇巼
    * @author: 闄堥瞾鍕�
    * @date  : 2017骞�4鏈�0鏃�
    **/
    static void upWindowSizeMultiplyingPower(void);


private:
    /// 绐楀彛妯悜鍊嶇巼
    static float widthMultiplyingPower_;
    /// 绐楀彛绾靛悜鍊嶇巼
    static float heightMultiplyingPower_;
};

#endif /// CCOMMONHELPER_H
