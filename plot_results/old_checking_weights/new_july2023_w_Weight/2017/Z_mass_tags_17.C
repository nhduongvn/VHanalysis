void Z_mass_tags_17()
{
//=========Macro generated from canvas: Z_mass_tags_17/Z_mass_tags_17
//=========  (Thu Aug 10 10:40:45 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_17 = new TCanvas("Z_mass_tags_17", "Z_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_17->SetHighLightColor(2);
   Z_mass_tags_17->Range(0,0,1,1);
   Z_mass_tags_17->SetFillColor(0);
   Z_mass_tags_17->SetFillStyle(4000);
   Z_mass_tags_17->SetBorderMode(0);
   Z_mass_tags_17->SetBorderSize(2);
   Z_mass_tags_17->SetFrameFillStyle(1000);
   Z_mass_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.851342,315.7258,11.7156);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(5.423347e+09);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",40,0,400);
   st_stack_2->SetMinimum(0.001456212);
   st_stack_2->SetMaximum(1.815115e+10);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetRange(1,30);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetLabelSize(0.035);
   st_stack_2->GetXaxis()->SetTitleSize(0.035);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/10.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetLabelSize(0.05);
   st_stack_2->GetYaxis()->SetTitleSize(0.057);
   st_stack_2->GetYaxis()->SetTitleOffset(1.2);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetLabelSize(0.035);
   st_stack_2->GetZaxis()->SetTitleSize(0.035);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VbbHcc_tags_Z_mass_stack_1 = new TH1D("VbbHcc_tags_Z_mass_stack_1","",40,0,400);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(3,7.083282);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(4,1058.644);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(5,1849.933);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(6,5352.188);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(7,6476.757);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(8,7519.008);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(9,5791.359);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(10,6067.835);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(11,3110.673);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(12,2541.959);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(13,5117.409);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(14,4129.607);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(15,5257.311);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(16,2849.352);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(17,3633.034);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(18,3939.654);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(19,5636.677);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(20,3345.252);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(21,3495.26);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(22,23603.23);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(23,3084.499);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(24,2735.101);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(25,3487.258);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(26,1959.607);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(27,2511.992);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(28,2287.409);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(29,2422.884);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(30,1417.683);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(31,1469.874);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(32,2023.722);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(33,1542.246);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(34,1861.152);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(35,2445.53);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(36,2643.216);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(37,1302.877);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(38,2915.923);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(39,2604.067);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(40,1987.756);
   VbbHcc_tags_Z_mass_stack_1->SetBinContent(41,90794.37);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(3,7.083282);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(4,435.2242);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(5,482.7881);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(6,1016.709);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(7,1083.456);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(8,1235.333);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(9,1103.477);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(10,1135.099);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(11,634.1978);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(12,531.0804);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(13,1059.737);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(14,911.8937);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(15,1082.24);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(16,683.1339);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(17,798.235);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(18,1738.795);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(19,1136.24);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(20,776.1624);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(21,872.065);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(22,21668.05);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(23,819.6547);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(24,724.5314);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(25,886.2029);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(26,568.0176);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(27,750.3207);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(28,721.2438);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(29,696.0777);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(30,453.778);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(31,439.1428);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(32,670.1459);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(33,483.3799);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(34,557.8386);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(35,590.3838);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(36,800.1031);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(37,466.6683);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(38,831.1077);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(39,734.674);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(40,683.1238);
   VbbHcc_tags_Z_mass_stack_1->SetBinError(41,15667.1);
   VbbHcc_tags_Z_mass_stack_1->SetEntries(9821);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_2 = new TH1D("VbbHcc_tags_Z_mass_stack_2","",40,0,400);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(4,2.220549);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(5,6.490907);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(6,12.94871);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(7,12.66598);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(8,18.76638);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(9,15.2765);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(10,20.15901);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(11,17.1523);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(12,22.67295);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(13,22.67352);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(14,23.84229);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(15,19.21502);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(16,19.03262);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(17,17.81799);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(18,20.12806);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(19,16.09916);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(20,21.70184);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(21,18.91921);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(22,14.35898);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(23,14.59268);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(24,13.71867);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(25,14.77041);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(26,14.77687);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(27,14.97678);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(28,12.7876);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(29,16.27469);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(30,13.08404);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(31,10.80877);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(32,14.63096);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(33,10.00482);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(34,12.40072);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(35,12.23971);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(36,10.15961);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(37,12.39442);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(38,8.790177);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(39,9.962962);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(40,9.452776);
   VbbHcc_tags_Z_mass_stack_2->SetBinContent(41,413.8017);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(4,0.7029583);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(5,0.927758);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(6,1.506543);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(7,1.396103);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(8,1.869838);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(9,1.706184);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(10,2.027895);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(11,1.735612);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(12,2.121105);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(13,2.174232);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(14,2.170513);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(15,1.950174);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(16,1.84322);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(17,1.757297);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(18,2.015205);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(19,1.772905);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(20,2.106379);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(21,1.938767);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(22,1.640672);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(23,1.688276);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(24,1.540484);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(25,1.632045);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(26,1.757346);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(27,1.679569);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(28,1.480746);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(29,1.884296);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(30,1.583784);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(31,1.438442);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(32,1.681018);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(33,1.378768);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(34,1.666609);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(35,1.587826);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(36,1.398549);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(37,1.485723);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(38,1.217863);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(39,1.42732);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(40,1.394288);
   VbbHcc_tags_Z_mass_stack_2->SetBinError(41,9.062548);
   VbbHcc_tags_Z_mass_stack_2->SetEntries(11223);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_3 = new TH1D("VbbHcc_tags_Z_mass_stack_3","",40,0,400);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(3,1.066742);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(4,38.51096);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(5,143.2478);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(6,236.5856);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(7,292.7028);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(8,340.4399);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(9,376.7195);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(10,411.2884);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(11,451.0815);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(12,477.8734);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(13,495.7146);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(14,489.9446);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(15,479.7403);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(16,461.185);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(17,445.0486);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(18,424.1877);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(19,407.3884);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(20,378.9474);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(21,366.7977);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(22,351.8642);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(23,337.3224);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(24,323.7114);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(25,322.4735);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(26,305.0883);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(27,300.4033);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(28,288.5143);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(29,290.8635);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(30,282.486);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(31,263.6764);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(32,268.1923);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(33,266.9982);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(34,253.7596);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(35,243.3265);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(36,244.6902);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(37,230.2467);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(38,225.0613);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(39,224.7473);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(40,217.3331);
   VbbHcc_tags_Z_mass_stack_3->SetBinContent(41,8624.702);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(3,0.259507);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(4,1.67708);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(5,3.229643);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(6,4.149087);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(7,4.600092);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(8,5.005209);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(9,5.276074);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(10,5.506788);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(11,5.778484);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(12,5.948895);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(13,6.065295);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(14,6.028908);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(15,5.949005);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(16,5.82647);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(17,5.73168);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(18,5.611092);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(19,5.476443);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(20,5.289539);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(21,5.197204);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(22,5.08829);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(23,4.979042);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(24,4.880584);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(25,4.857768);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(26,4.734094);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(27,4.725622);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(28,4.601467);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(29,4.636434);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(30,4.577256);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(31,4.409405);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(32,4.450247);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(33,4.45334);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(34,4.333376);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(35,4.258772);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(36,4.282814);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(37,4.142569);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(38,4.090946);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(39,4.091693);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(40,4.018052);
   VbbHcc_tags_Z_mass_stack_3->SetBinError(41,25.37212);
   VbbHcc_tags_Z_mass_stack_3->SetEntries(306587);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_4 = new TH1D("VbbHcc_tags_Z_mass_stack_4","",40,0,400);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(4,3.397793);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(5,16.2127);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(6,28.21206);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(7,42.43226);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(8,72.3848);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(9,127.5799);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(10,178.7449);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(11,133.6893);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(12,78.58615);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(13,61.61396);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(14,53.9089);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(15,42.38589);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(16,44.78013);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(17,47.26275);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(18,35.41065);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(19,35.3623);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(20,34.25044);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(21,34.9462);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(22,38.20162);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(23,39.75748);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(24,33.08385);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(25,32.08421);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(26,44.52864);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(27,28.89272);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(28,34.82135);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(29,27.00357);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(30,27.62648);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(31,33.5432);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(32,27.73348);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(33,24.90941);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(34,25.5434);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(35,42.74523);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(36,27.05373);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(37,24.44859);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(38,27.79463);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(39,19.20406);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(40,21.72055);
   VbbHcc_tags_Z_mass_stack_4->SetBinContent(41,999.8007);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(4,1.031338);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(5,3.052348);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(6,2.893769);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(7,3.330312);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(8,6.291829);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(9,7.525575);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(10,8.178946);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(11,8.128738);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(12,5.988303);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(13,6.255453);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(14,6.421314);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(15,4.629062);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(16,4.099206);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(17,7.109015);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(18,4.402879);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(19,4.450431);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(20,4.572191);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(21,3.039223);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(22,6.168366);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(23,6.35863);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(24,4.435567);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(25,4.180544);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(26,7.65153);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(27,2.724406);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(28,6.062383);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(29,5.294871);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(30,2.638978);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(31,5.664428);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(32,2.720403);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(33,3.900933);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(34,4.019908);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(35,7.811582);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(36,2.777148);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(37,4.083488);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(38,4.269014);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(39,2.338956);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(40,2.540541);
   VbbHcc_tags_Z_mass_stack_4->SetBinError(41,19.92038);
   VbbHcc_tags_Z_mass_stack_4->SetEntries(17505);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_5 = new TH1D("VbbHcc_tags_Z_mass_stack_5","",40,0,400);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(4,0.7097464);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(5,3.623569);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(6,10.13364);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(7,12.03796);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(8,13.54339);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(9,18.07485);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(10,8.969802);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(11,7.269459);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(12,4.938277);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(13,6.570747);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(14,4.377072);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(15,5.03608);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(16,6.758998);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(17,5.152915);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(18,4.891537);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(19,3.243578);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(20,2.793239);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(21,3.836708);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(22,2.982529);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(23,3.963239);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(24,3.995557);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(25,13.90632);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(26,3.489779);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(27,2.852546);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(28,1.916334);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(29,3.500715);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(30,2.602499);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(31,0.9615824);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(32,1.791125);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(33,1.540335);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(34,1.510097);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(35,1.664187);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(36,2.5084);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(37,2.12463);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(38,1.15909);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(39,3.222243);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(40,1.298829);
   VbbHcc_tags_Z_mass_stack_5->SetBinContent(41,87.24056);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(4,0.2456139);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(5,1.603997);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(6,2.600057);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(7,3.128926);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(8,2.997209);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(9,6.287942);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(10,2.022373);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(11,1.623824);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(12,0.9036907);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(13,1.403391);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(14,0.8242467);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(15,1.414183);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(16,2.117361);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(17,2.068888);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(18,1.649673);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(19,0.6347549);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(20,0.7141724);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(21,1.535862);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(22,0.679229);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(23,1.663002);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(24,0.9916976);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(25,8.411863);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(26,1.557265);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(27,1.614942);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(28,0.5887329);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(29,1.510076);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(30,1.452489);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(31,0.3640157);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(32,0.5008795);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(33,0.593872);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(34,0.4397627);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(35,0.607259);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(36,0.5794101);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(37,0.6619333);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(38,0.3929137);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(39,1.484983);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(40,0.4173861);
   VbbHcc_tags_Z_mass_stack_5->SetBinError(41,5.453992);
   VbbHcc_tags_Z_mass_stack_5->SetEntries(2189);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_6 = new TH1D("VbbHcc_tags_Z_mass_stack_6","",40,0,400);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(11,0.3608682);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(12,0.3983715);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(15,0.2466832);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(26,0.3402984);
   VbbHcc_tags_Z_mass_stack_6->SetBinContent(41,0.268632);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(11,0.3608682);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(12,0.3983715);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(15,0.2466832);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(26,0.3402984);
   VbbHcc_tags_Z_mass_stack_6->SetBinError(41,0.268632);
   VbbHcc_tags_Z_mass_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_7 = new TH1D("VbbHcc_tags_Z_mass_stack_7","",40,0,400);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(5,0.597075);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(8,0.3138408);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,0.6076107);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,0.7903064);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.6164134);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(16,0.5839433);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(19,0.2655071);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(25,0.3047304);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(30,0.3152355);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(32,0.294848);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,2.017324);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(5,0.4247946);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(8,0.3138408);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.434652);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.4664096);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.4359384);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(16,0.4129302);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(19,0.2655071);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(25,0.3047304);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(30,0.3152355);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(32,0.294848);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.7247268);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_8 = new TH1D("VbbHcc_tags_Z_mass_stack_8","",40,0,400);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(6,0.7124427);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(7,0.3206516);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(8,2.275186);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(9,2.090516);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(10,7.085998);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(11,2.209756);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(12,2.129658);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(13,0.5195197);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(14,1.231734);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(15,0.3221281);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(16,0.4779894);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(17,0.565358);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(18,0.2999239);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(20,0.6435991);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(21,0.3671896);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(22,0.2185059);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(23,0.1899316);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(24,0.3219535);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(26,0.3086677);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(27,0.5801075);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(30,0.3221285);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(33,1.394775);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(34,0.2923745);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(35,0.6104404);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(36,0.2854158);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(37,1.538023);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(38,0.307137);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(39,0.6413605);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(40,0.3219476);
   VbbHcc_tags_Z_mass_stack_8->SetBinContent(41,20.79614);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(6,0.424216);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(7,0.3206516);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(8,0.8140423);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(9,0.7583246);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(10,1.439812);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(11,0.7914197);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(12,0.8146743);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(13,0.3737791);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(14,0.616132);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(15,0.3221281);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(16,0.3463563);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(17,0.4037455);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(18,0.2999239);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(20,0.4550933);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(21,0.3671896);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(22,0.2185059);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(23,0.1899316);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(24,0.3219535);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(26,0.3086677);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(27,0.4103993);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(30,0.3221285);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(33,0.5838228);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(34,0.2923745);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(35,0.4323605);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(36,0.2854158);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(37,0.6887923);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(38,0.307137);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(39,0.4535103);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(40,0.3219476);
   VbbHcc_tags_Z_mass_stack_8->SetBinError(41,2.46546);
   VbbHcc_tags_Z_mass_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_9 = new TH1D("VbbHcc_tags_Z_mass_stack_9","",40,0,400);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(4,0.02356463);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(5,0.1232741);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(6,0.2215744);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(7,0.3903269);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(8,0.9276175);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(9,2.110693);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(10,2.799401);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(11,2.364101);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(12,1.988195);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(13,2.093002);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(14,1.814809);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(15,1.243877);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(16,0.76753);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(17,0.6151606);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(18,0.5257842);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(19,0.4358935);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(20,0.4900303);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(21,0.4235675);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(22,0.4338146);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(23,0.4438664);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(24,0.4656563);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(25,0.4699651);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(26,0.5188225);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(27,0.4751001);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(28,0.4750761);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(29,0.4931534);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(30,0.4681117);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(31,0.4616969);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(32,0.4603616);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(33,0.552139);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(34,0.5467366);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(35,0.506202);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(36,0.5403861);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(37,0.4410499);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(38,0.5466216);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(39,0.557622);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(40,0.5007164);
   VbbHcc_tags_Z_mass_stack_9->SetBinContent(41,22.16815);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(4,0.006917694);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(5,0.015535);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(6,0.02067916);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(7,0.02778188);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(8,0.04256912);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(9,0.06525612);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(10,0.07456347);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(11,0.06871954);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(12,0.06310502);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(13,0.06443257);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(14,0.06003714);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(15,0.04927254);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(16,0.03930509);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(17,0.03481192);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(18,0.03197346);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(19,0.02947211);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(20,0.03107467);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(21,0.02877085);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(22,0.0294921);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(23,0.02939223);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(24,0.03026504);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(25,0.03071768);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(26,0.03187983);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(27,0.03098612);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(28,0.03118749);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(29,0.03161175);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(30,0.03063459);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(31,0.03058137);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(32,0.03027886);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(33,0.03309995);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(34,0.03358966);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(35,0.03171541);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(36,0.03260084);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(37,0.02969673);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(38,0.03274954);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(39,0.0330778);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(40,0.03169272);
   VbbHcc_tags_Z_mass_stack_9->SetBinError(41,0.2111086);
   VbbHcc_tags_Z_mass_stack_9->SetEntries(27953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_10 = new TH1D("VbbHcc_tags_Z_mass_stack_10","",40,0,400);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(3,0.0004830746);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(4,0.01283839);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(5,0.03960641);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(6,0.09880467);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(7,0.1992287);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(8,0.4591977);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(9,0.9812407);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(10,1.260216);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(11,0.9682181);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(12,0.9461249);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(13,0.9422918);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(14,0.7672868);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(15,0.5199677);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(16,0.3837365);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(17,0.3288115);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(18,0.2798945);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(19,0.2985193);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(20,0.2718287);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(21,0.2541892);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(22,0.2693561);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(23,0.2699465);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(24,0.2350335);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(25,0.2648972);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(26,0.2526676);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(27,0.2646256);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(28,0.2466939);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(29,0.2633377);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(30,0.2488984);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(31,0.2545183);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(32,0.2548868);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(33,0.249022);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(34,0.2378616);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(35,0.2320302);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(36,0.2250141);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(37,0.2268865);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(38,0.219236);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(39,0.2387128);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(40,0.2095326);
   VbbHcc_tags_Z_mass_stack_10->SetBinContent(41,7.975493);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(3,0.0004830746);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(4,0.00243178);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(5,0.00422125);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(6,0.006659003);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(7,0.009420782);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(8,0.01433794);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(9,0.02099887);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(10,0.0237635);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(11,0.02080497);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(12,0.02058019);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(13,0.02057139);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(14,0.01855472);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(15,0.01524825);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(16,0.01311826);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(17,0.01211213);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(18,0.01122749);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(19,0.01159495);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(20,0.01100107);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(21,0.010701);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(22,0.01099771);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(23,0.01099197);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(24,0.01025148);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(25,0.01088026);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(26,0.0106552);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(27,0.01091305);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(28,0.01052707);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(29,0.0108603);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(30,0.01055824);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(31,0.01071599);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(32,0.01073034);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(33,0.01055036);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(34,0.01031883);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(35,0.01019348);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(36,0.01005309);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(37,0.01008214);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(38,0.009937015);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(39,0.01034956);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(40,0.009720275);
   VbbHcc_tags_Z_mass_stack_10->SetBinError(41,0.05982001);
   VbbHcc_tags_Z_mass_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_11 = new TH1D("VbbHcc_tags_Z_mass_stack_11","",40,0,400);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(6,0.003887235);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(7,0.001943023);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(8,0.005666773);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(9,0.0175094);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(10,0.02808263);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(11,0.02648656);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(12,0.003327431);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(13,0.003634073);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(14,0.001848652);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(15,0.00200821);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(16,0.004715288);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(17,0.003539625);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(18,0.004330521);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(19,0.001848652);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(20,0.001925984);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(21,0.003977552);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(24,0.001185265);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(25,0.001819463);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(26,0.001245676);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(30,0.002009147);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(32,0.001550858);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(35,0.001185265);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(36,0.002310481);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(37,0.001997003);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(40,0.001698464);
   VbbHcc_tags_Z_mass_stack_11->SetBinContent(41,0.02617637);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(6,0.002750206);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(7,0.001943023);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(8,0.003336589);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(9,0.00587666);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(10,0.007284824);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(11,0.006761519);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(12,0.002402759);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(13,0.002572604);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(14,0.001848652);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(15,0.00200821);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(16,0.002778076);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(17,0.002525675);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(18,0.00308267);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(19,0.001848652);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(20,0.001925984);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(21,0.002812587);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(24,0.001185265);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(25,0.001819463);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(26,0.001245676);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(30,0.002009147);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(32,0.001550858);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(35,0.001185265);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(36,0.002310481);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(37,0.001997003);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(40,0.001698464);
   VbbHcc_tags_Z_mass_stack_11->SetBinError(41,0.007017407);
   VbbHcc_tags_Z_mass_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_mass_stack_12 = new TH1D("VbbHcc_tags_Z_mass_stack_12","",40,0,400);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(4,0.000299204);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(5,0.000173346);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(7,0.0007051832);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(8,0.003443403);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(9,0.01011885);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(10,0.01118659);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(11,0.007961145);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(12,0.002817603);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(13,0.0004613678);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(14,0.0003108889);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(15,0.0009848988);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(16,0.0006719509);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(17,0.001256926);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(18,0.001171503);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(19,0.0002594135);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(21,0.0005618293);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(22,0.0007300174);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(23,0.0008561746);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(24,0.000897268);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(25,0.0004954946);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(27,0.0007795794);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(29,0.0001893235);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(32,0.0005056547);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(33,0.000721235);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(34,0.0003221409);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(35,0.0005244814);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(36,0.0002432185);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(37,0.0004153818);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(38,0.0005650279);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(39,0.00039852);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(40,0.0005158284);
   VbbHcc_tags_Z_mass_stack_12->SetBinContent(41,0.01429493);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(4,0.000299204);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(5,0.000173346);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(7,0.0004098338);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(8,0.0009372157);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(9,0.001596577);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(10,0.001656322);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(11,0.001408377);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(12,0.0008209813);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(13,0.0003262785);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(14,0.0002356343);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(15,0.0004951935);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(16,0.0003897083);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(17,0.0005635671);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(18,0.0005338114);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(19,0.0002594135);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(21,0.0003292079);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(22,0.000436096);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(23,0.0004331908);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(24,0.0004568993);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(25,0.0003093634);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(27,0.0004501985);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(29,0.0001893235);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(32,0.0003577297);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(33,0.0004164487);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(34,0.0002278467);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(35,0.0003708702);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(36,0.0002432185);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(37,0.0002977158);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(38,0.0004012931);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(39,0.0002821463);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(40,0.0003647828);
   VbbHcc_tags_Z_mass_stack_12->SetBinError(41,0.001837336);
   VbbHcc_tags_Z_mass_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_mass__4 = new TH1D("VbbHcc_tags_Z_mass__4","",40,0,400);
   VbbHcc_tags_Z_mass__4->SetBinContent(3,7);
   VbbHcc_tags_Z_mass__4->SetBinContent(4,255);
   VbbHcc_tags_Z_mass__4->SetBinContent(5,948);
   VbbHcc_tags_Z_mass__4->SetBinContent(6,1492);
   VbbHcc_tags_Z_mass__4->SetBinContent(7,1794);
   VbbHcc_tags_Z_mass__4->SetBinContent(15,1443);
   VbbHcc_tags_Z_mass__4->SetBinContent(16,1346);
   VbbHcc_tags_Z_mass__4->SetBinContent(17,1295);
   VbbHcc_tags_Z_mass__4->SetBinContent(18,1229);
   VbbHcc_tags_Z_mass__4->SetBinContent(19,1199);
   VbbHcc_tags_Z_mass__4->SetBinContent(20,1145);
   VbbHcc_tags_Z_mass__4->SetBinContent(21,1075);
   VbbHcc_tags_Z_mass__4->SetBinContent(22,1000);
   VbbHcc_tags_Z_mass__4->SetBinContent(23,918);
   VbbHcc_tags_Z_mass__4->SetBinContent(24,919);
   VbbHcc_tags_Z_mass__4->SetBinContent(25,867);
   VbbHcc_tags_Z_mass__4->SetBinContent(26,853);
   VbbHcc_tags_Z_mass__4->SetBinContent(27,788);
   VbbHcc_tags_Z_mass__4->SetBinContent(28,820);
   VbbHcc_tags_Z_mass__4->SetBinContent(29,795);
   VbbHcc_tags_Z_mass__4->SetBinContent(30,694);
   VbbHcc_tags_Z_mass__4->SetBinContent(31,745);
   VbbHcc_tags_Z_mass__4->SetBinContent(32,715);
   VbbHcc_tags_Z_mass__4->SetBinContent(33,720);
   VbbHcc_tags_Z_mass__4->SetBinContent(34,659);
   VbbHcc_tags_Z_mass__4->SetBinContent(35,655);
   VbbHcc_tags_Z_mass__4->SetBinContent(36,617);
   VbbHcc_tags_Z_mass__4->SetBinContent(37,668);
   VbbHcc_tags_Z_mass__4->SetBinContent(38,594);
   VbbHcc_tags_Z_mass__4->SetBinContent(39,602);
   VbbHcc_tags_Z_mass__4->SetBinContent(40,577);
   VbbHcc_tags_Z_mass__4->SetBinContent(41,24344);
   VbbHcc_tags_Z_mass__4->SetEntries(63782);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_mass__4->SetLineColor(ci);
   VbbHcc_tags_Z_mass__4->SetLineWidth(2);
   VbbHcc_tags_Z_mass__4->SetMarkerStyle(20);
   VbbHcc_tags_Z_mass__4->SetMarkerSize(1.2);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass__4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass__4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__4->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_mass_fx1003[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fy1003[40] = {
   0,
   0,
   8.150507,
   1103.52,
   2020.268,
   5641.104,
   6837.509,
   7968.127,
   6334.827,
   6698.972,
   3726.419,
   3131.498,
   5707.541,
   4705.496,
   5806.024,
   3383.327,
   4149.83,
   4425.383,
   6099.772,
   3784.353,
   3920.809,
   24011.56,
   3481.04,
   3110.636,
   3871.535,
   2328.912,
   2860.438,
   2626.17,
   2761.283,
   1744.838,
   1779.58,
   2337.082,
   1847.895,
   2155.443,
   2746.856,
   2928.682,
   1574.3,
   3179.802,
   2862.642,
   2238.596};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fex1003[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_tags_Z_mass_fey1003[40] = {
   0,
   0,
   7.088034,
   435.2293,
   482.8123,
   1016.726,
   1083.476,
   1235.364,
   1103.535,
   1135.146,
   634.2814,
   531.1533,
   1059.776,
   911.9394,
   1082.269,
   683.177,
   798.292,
   1738.811,
   1136.264,
   776.1972,
   872.0894,
   21668.05,
   819.6979,
   724.5638,
   886.2676,
   568.0939,
   750.3443,
   721.2857,
   696.1175,
   453.814,
   439.204,
   670.1685,
   483.4189,
   557.8727,
   590.4534,
   800.1208,
   466.7079,
   831.1298,
   734.6921,
   683.1419};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_mass_fx1003,Graph_from_VbbHcc_tags_Z_mass_fy1003,Graph_from_VbbHcc_tags_Z_mass_fex1003,Graph_from_VbbHcc_tags_Z_mass_fey1003);
   gre->SetName("Graph_from_VbbHcc_tags_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_mass1003 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_mass1003","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetMinimum(50.24757);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetMaximum(50247.57);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_mass1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_mass1003);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_mass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_mass_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_mass","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tags_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__5 = new TH1D("data_mc_ratio__5","",40,0,400);
   data_mc_ratio__5->SetBinContent(3,0.8588423);
   data_mc_ratio__5->SetBinContent(4,0.2310788);
   data_mc_ratio__5->SetBinContent(5,0.4692447);
   data_mc_ratio__5->SetBinContent(6,0.2644872);
   data_mc_ratio__5->SetBinContent(7,0.2623763);
   data_mc_ratio__5->SetBinContent(8,0.240709);
   data_mc_ratio__5->SetBinContent(9,0.2808285);
   data_mc_ratio__5->SetBinContent(10,0.2651153);
   data_mc_ratio__5->SetBinContent(11,0.4704248);
   data_mc_ratio__5->SetBinContent(12,0.5361651);
   data_mc_ratio__5->SetBinContent(13,0.2768267);
   data_mc_ratio__5->SetBinContent(14,0.3145258);
   data_mc_ratio__5->SetBinContent(15,0.248535);
   data_mc_ratio__5->SetBinContent(16,0.3978332);
   data_mc_ratio__5->SetBinContent(17,0.312061);
   data_mc_ratio__5->SetBinContent(18,0.277716);
   data_mc_ratio__5->SetBinContent(19,0.1965647);
   data_mc_ratio__5->SetBinContent(20,0.3025617);
   data_mc_ratio__5->SetBinContent(21,0.2741781);
   data_mc_ratio__5->SetBinContent(22,0.04164661);
   data_mc_ratio__5->SetBinContent(23,0.2637143);
   data_mc_ratio__5->SetBinContent(24,0.295438);
   data_mc_ratio__5->SetBinContent(25,0.2239422);
   data_mc_ratio__5->SetBinContent(26,0.3662654);
   data_mc_ratio__5->SetBinContent(27,0.2754823);
   data_mc_ratio__5->SetBinContent(28,0.3122418);
   data_mc_ratio__5->SetBinContent(29,0.2879096);
   data_mc_ratio__5->SetBinContent(30,0.3977446);
   data_mc_ratio__5->SetBinContent(31,0.4186381);
   data_mc_ratio__5->SetBinContent(32,0.3059371);
   data_mc_ratio__5->SetBinContent(33,0.3896325);
   data_mc_ratio__5->SetBinContent(34,0.3057376);
   data_mc_ratio__5->SetBinContent(35,0.2384544);
   data_mc_ratio__5->SetBinContent(36,0.210675);
   data_mc_ratio__5->SetBinContent(37,0.4243156);
   data_mc_ratio__5->SetBinContent(38,0.1868041);
   data_mc_ratio__5->SetBinContent(39,0.2102952);
   data_mc_ratio__5->SetBinContent(40,0.2577509);
   data_mc_ratio__5->SetBinContent(41,0.2410937);
   data_mc_ratio__5->SetBinError(3,0.3246119);
   data_mc_ratio__5->SetBinError(4,0.01447072);
   data_mc_ratio__5->SetBinError(5,0.01524036);
   data_mc_ratio__5->SetBinError(6,0.006847315);
   data_mc_ratio__5->SetBinError(7,0.006194601);
   data_mc_ratio__5->SetBinError(8,0.00549627);
   data_mc_ratio__5->SetBinError(9,0.006658144);
   data_mc_ratio__5->SetBinError(10,0.006290907);
   data_mc_ratio__5->SetBinError(11,0.01123568);
   data_mc_ratio__5->SetBinError(12,0.01308498);
   data_mc_ratio__5->SetBinError(13,0.006964332);
   data_mc_ratio__5->SetBinError(14,0.00817571);
   data_mc_ratio__5->SetBinError(15,0.00654266);
   data_mc_ratio__5->SetBinError(16,0.01084373);
   data_mc_ratio__5->SetBinError(17,0.008671706);
   data_mc_ratio__5->SetBinError(18,0.007921821);
   data_mc_ratio__5->SetBinError(19,0.0056767);
   data_mc_ratio__5->SetBinError(20,0.008941516);
   data_mc_ratio__5->SetBinError(21,0.008362353);
   data_mc_ratio__5->SetBinError(22,0.001316981);
   data_mc_ratio__5->SetBinError(23,0.008703869);
   data_mc_ratio__5->SetBinError(24,0.009745601);
   data_mc_ratio__5->SetBinError(25,0.007605476);
   data_mc_ratio__5->SetBinError(26,0.01254069);
   data_mc_ratio__5->SetBinError(27,0.00981365);
   data_mc_ratio__5->SetBinError(28,0.01090396);
   data_mc_ratio__5->SetBinError(29,0.0102111);
   data_mc_ratio__5->SetBinError(30,0.01509818);
   data_mc_ratio__5->SetBinError(31,0.01533771);
   data_mc_ratio__5->SetBinError(32,0.0114414);
   data_mc_ratio__5->SetBinError(33,0.01452075);
   data_mc_ratio__5->SetBinError(34,0.01190985);
   data_mc_ratio__5->SetBinError(35,0.009317184);
   data_mc_ratio__5->SetBinError(36,0.008481456);
   data_mc_ratio__5->SetBinError(37,0.01641726);
   data_mc_ratio__5->SetBinError(38,0.007664665);
   data_mc_ratio__5->SetBinError(39,0.008570995);
   data_mc_ratio__5->SetBinError(40,0.01073031);
   data_mc_ratio__5->SetBinError(41,0.03744034);
   data_mc_ratio__5->SetMinimum(0.4);
   data_mc_ratio__5->SetMaximum(1.6);
   data_mc_ratio__5->SetEntries(162.7098);
   data_mc_ratio__5->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__5->SetLineColor(ci);
   data_mc_ratio__5->SetLineWidth(2);
   data_mc_ratio__5->SetMarkerStyle(20);
   data_mc_ratio__5->SetMarkerSize(1.2);
   data_mc_ratio__5->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__5->GetXaxis()->SetRange(1,30);
   data_mc_ratio__5->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__5->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__5->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__5->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__5->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__5->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__5->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__5->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__5->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__5->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__5->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__5->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__5->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__5->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__5->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__5->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__5->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1004[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1004[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1004[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1004[40] = {
   0,
   0,
   0.8696433,
   0.3944011,
   0.2389843,
   0.1802352,
   0.1584607,
   0.1550382,
   0.1742012,
   0.1694508,
   0.170212,
   0.1696164,
   0.18568,
   0.193803,
   0.1864045,
   0.2019246,
   0.1923674,
   0.3929177,
   0.1862797,
   0.205107,
   0.2224259,
   0.9024008,
   0.235475,
   0.2329311,
   0.2289189,
   0.243931,
   0.262318,
   0.2746531,
   0.2520992,
   0.2600895,
   0.246802,
   0.2867544,
   0.2616051,
   0.2588204,
   0.2149561,
   0.2732017,
   0.2964542,
   0.2613779,
   0.2566483,
   0.3051654};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1004,Graph_from_mc_statistical_error_fy1004,Graph_from_mc_statistical_error_fex1004,Graph_from_mc_statistical_error_fey1004);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1004 = new TH1F("Graph_Graph_from_mc_statistical_error1004","",100,0,440);
   Graph_Graph_from_mc_statistical_error1004->SetMinimum(0.0878393);
   Graph_Graph_from_mc_statistical_error1004->SetMaximum(2.082881);
   Graph_Graph_from_mc_statistical_error1004->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1004->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1004);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tags_17->cd();
   Z_mass_tags_17->Modified();
   Z_mass_tags_17->cd();
   Z_mass_tags_17->SetSelected(Z_mass_tags_17);
}
