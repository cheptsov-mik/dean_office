function pix_1(file_name){
 var str_img = t.f_img(file_name);
 return '<p align="center" style=" margin-top:12px; '+
        'margin-bottom:12px; margin-left:0px; margin-right:0px; '+
        '-qt-block-indent:0; text-indent:0px;"><img src="data:image/jpeg;base64,'+
        str_img+'" width="106" height="92" /></p>';
}

function table_students_of_group(group_name, form){
//    t.msg_to_log("table_students_of_group started");
    var gr_size = t.student_list_by_group_size(group_name);
    var ret = '<table border="0" style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;" cellspacing="2" cellpadding="0">';
    var num = 1;
    for(i=0;i<gr_size;i++){
        var name = t.get_student_list_by_group(group_name,i);
        var b_c = t.get_student_budget_contract(name);
        if(b_c==form){
        ret = ret+'\n<tr>\n<td>\n<p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-size:14pt;">'+t.to_str(num)+'</span></p></td>'+
        '\n<td>\n<p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-size:14pt;">    '+name+'</span></p></td></tr>'; 
        num=num+1;
        }
    }
    ret = ret+'</table>';
    return ret;
}
