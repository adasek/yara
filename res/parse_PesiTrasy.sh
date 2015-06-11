#!/usr/bin/awk -f
BEGIN {
#Load layers file to be consistent
 RS="\n"
 FS=","
 getline < "layersAWK"
 layerId=0;
 for(layerId=1;layerId<=NF;layerId++){
    layer[$layerId]=layerId;
  }


RS="<"
FS=">"
inMember=0
}


/^gml:featureMember/ {
 inMember=1
 #initialize data
 delete data;
}

/^\/gml:featureMember/ {
 inMember=0
 #flush out the data
  if(layer[ data["fme:VRSTVA"] ]==0){
  #First use of this LAYER type = assign id
   layer[ data["fme:VRSTVA"] ]=layer_id++;
  }
  data["LAYER"]=layer[ data ["fme:VRSTVA"] ];

 
 printf("%d %s %s %s\n",data["LAYER"],data["fme:MIN"],data["fme:Shape_Length"],data["gml:posList"]);

}

(inMember==1){
data[$1]=$2;
}

END{
first=1
printf("enum layerTypes {") > "layers_new"
printf ("") > "layersAWK_new"
for(val in layer){
if(first==1){first=0;}else{
	printf(",") >> "layers_new"
	printf(",") >> "layersAWK_new"
	}
 printf("\"%s\"",val) >> "layers_new";
 printf("%s",val) >> "layersAWK_new";
 }
printf("}\n") >> "layers_new"; 
}
