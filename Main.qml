import QtQuick
import com.klonoadesign.excursionview 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ExcursionView{
        onUpdateExcursion: console.log(excursionInfo)
        Text{
            text: parent.excursionInfo.getId();
        }
    }

}
