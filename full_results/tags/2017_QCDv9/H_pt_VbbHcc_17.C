void H_pt_VbbHcc_17()
{
//=========Macro generated from canvas: H_pt_VbbHcc_17/H_pt_VbbHcc_17
//=========  (Mon Nov 21 09:33:06 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_17 = new TCanvas("H_pt_VbbHcc_17", "H_pt_VbbHcc_17",0,0,600,600);
   H_pt_VbbHcc_17->SetHighLightColor(2);
   H_pt_VbbHcc_17->Range(0,0,1,1);
   H_pt_VbbHcc_17->SetFillColor(0);
   H_pt_VbbHcc_17->SetFillStyle(4000);
   H_pt_VbbHcc_17->SetBorderMode(0);
   H_pt_VbbHcc_17->SetBorderSize(2);
   H_pt_VbbHcc_17->SetFrameFillStyle(1000);
   H_pt_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-27345.61,1562.903,2.731827e+07);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(2.341306e+07);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",40,0,2000);
   st_stack_14->SetMinimum(0.01);
   st_stack_14->SetMaximum(2.458371e+07);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetRange(7,30);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetLabelSize(0.035);
   st_stack_14->GetXaxis()->SetTitleSize(0.035);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Events/50.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetLabelSize(0.05);
   st_stack_14->GetYaxis()->SetTitleSize(0.057);
   st_stack_14->GetYaxis()->SetTitleOffset(1.2);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetLabelSize(0.035);
   st_stack_14->GetZaxis()->SetTitleSize(0.035);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,48037.53);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,85179.48);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,47217.3);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,19210.09);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,8731.057);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,4424.807);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,2472.129);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,1439.669);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,850.8962);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,564.5176);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,355.1534);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,230.7646);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,152.6635);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,101.9145);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,77.17505);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,51.10828);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(17,37.76477);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(18,25.00788);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,20.5757);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(20,13.51595);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(21,8.08368);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(22,9.684155);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(23,5.015509);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(24,4.723817);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(25,4.869864);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(26,4.002777);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(27,2.955921);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(28,1.570011);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(29,-0.006606955);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(30,1.157825);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(31,0.06069466);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(32,0.3338656);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(34,0.1679215);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(35,0.345328);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(36,0.6672472);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(39,0.06014031);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(40,0.3318568);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(41,0.2863162);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,89.59567);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,119.3747);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,90.70135);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,59.44761);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,41.04563);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,29.88881);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,22.78984);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,17.73575);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,13.80275);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,11.49622);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,9.168699);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,7.510133);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,6.104263);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,4.950851);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,4.502407);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,3.616061);
   VbbHcc_tags_H_pt_stack_1->SetBinError(17,3.081826);
   VbbHcc_tags_H_pt_stack_1->SetBinError(18,2.500251);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,2.317778);
   VbbHcc_tags_H_pt_stack_1->SetBinError(20,1.920346);
   VbbHcc_tags_H_pt_stack_1->SetBinError(21,1.460842);
   VbbHcc_tags_H_pt_stack_1->SetBinError(22,1.675198);
   VbbHcc_tags_H_pt_stack_1->SetBinError(23,1.268726);
   VbbHcc_tags_H_pt_stack_1->SetBinError(24,1.174378);
   VbbHcc_tags_H_pt_stack_1->SetBinError(25,1.178076);
   VbbHcc_tags_H_pt_stack_1->SetBinError(26,1.072916);
   VbbHcc_tags_H_pt_stack_1->SetBinError(27,0.9178187);
   VbbHcc_tags_H_pt_stack_1->SetBinError(28,0.6183979);
   VbbHcc_tags_H_pt_stack_1->SetBinError(29,0.07220354);
   VbbHcc_tags_H_pt_stack_1->SetBinError(30,0.5275958);
   VbbHcc_tags_H_pt_stack_1->SetBinError(31,0.06069466);
   VbbHcc_tags_H_pt_stack_1->SetBinError(32,0.2953544);
   VbbHcc_tags_H_pt_stack_1->SetBinError(34,0.09744048);
   VbbHcc_tags_H_pt_stack_1->SetBinError(35,0.2953582);
   VbbHcc_tags_H_pt_stack_1->SetBinError(36,0.4718151);
   VbbHcc_tags_H_pt_stack_1->SetBinError(39,0.06014031);
   VbbHcc_tags_H_pt_stack_1->SetBinError(40,0.3318568);
   VbbHcc_tags_H_pt_stack_1->SetBinError(41,0.2447115);
   VbbHcc_tags_H_pt_stack_1->SetEntries(2959104);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_2 = new TH1D("VbbHcc_tags_H_pt_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,721489.8);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,1274211);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,705433.9);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,255545.3);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,104308);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,49377.76);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,25794.58);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,14307.95);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,8208.867);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,4880.905);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,3095.26);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,1965.339);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,1286.961);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,861.5527);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(15,576.6391);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,394.337);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,276.2183);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(18,190.6513);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,133.1738);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(20,93.30187);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(21,71.5636);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(22,48.1637);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(23,36.83199);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(24,25.60971);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(25,19.56314);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(26,13.25409);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(27,8.587367);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(28,9.129537);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(29,6.237458);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(30,3.734364);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(31,3.922755);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(32,2.308959);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(33,1.476454);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(34,1.058232);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(35,1.188881);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(36,0.6279622);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(37,0.7242129);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(38,0.9794352);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(39,0.3469192);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(40,0.203575);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(41,0.6686388);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,229.6349);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,305.0352);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,226.9183);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,135.7796);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,86.47859);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,59.46038);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,43.03036);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,32.12143);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,24.39446);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,18.80969);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,15.06445);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,12.02669);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,9.746276);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,7.998479);
   VbbHcc_tags_H_pt_stack_2->SetBinError(15,6.556113);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,5.430039);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,4.547011);
   VbbHcc_tags_H_pt_stack_2->SetBinError(18,3.791341);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,3.166028);
   VbbHcc_tags_H_pt_stack_2->SetBinError(20,2.669344);
   VbbHcc_tags_H_pt_stack_2->SetBinError(21,2.316009);
   VbbHcc_tags_H_pt_stack_2->SetBinError(22,1.887102);
   VbbHcc_tags_H_pt_stack_2->SetBinError(23,1.689313);
   VbbHcc_tags_H_pt_stack_2->SetBinError(24,1.390264);
   VbbHcc_tags_H_pt_stack_2->SetBinError(25,1.208013);
   VbbHcc_tags_H_pt_stack_2->SetBinError(26,0.9948681);
   VbbHcc_tags_H_pt_stack_2->SetBinError(27,0.8009411);
   VbbHcc_tags_H_pt_stack_2->SetBinError(28,0.845964);
   VbbHcc_tags_H_pt_stack_2->SetBinError(29,0.6865353);
   VbbHcc_tags_H_pt_stack_2->SetBinError(30,0.5480513);
   VbbHcc_tags_H_pt_stack_2->SetBinError(31,0.5533882);
   VbbHcc_tags_H_pt_stack_2->SetBinError(32,0.4203086);
   VbbHcc_tags_H_pt_stack_2->SetBinError(33,0.3483412);
   VbbHcc_tags_H_pt_stack_2->SetBinError(34,0.292104);
   VbbHcc_tags_H_pt_stack_2->SetBinError(35,0.3169199);
   VbbHcc_tags_H_pt_stack_2->SetBinError(36,0.2157034);
   VbbHcc_tags_H_pt_stack_2->SetBinError(37,0.2473495);
   VbbHcc_tags_H_pt_stack_2->SetBinError(38,0.2879295);
   VbbHcc_tags_H_pt_stack_2->SetBinError(39,0.1591942);
   VbbHcc_tags_H_pt_stack_2->SetBinError(40,0.1260741);
   VbbHcc_tags_H_pt_stack_2->SetBinError(41,0.2172761);
   VbbHcc_tags_H_pt_stack_2->SetEntries(4.843218e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_2,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_3 = new TH1D("VbbHcc_tags_H_pt_stack_3","",40,0,2000);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(1,6969.218);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(2,14979.52);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(3,14877.07);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(4,10209.71);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(5,4569.626);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(6,1054.639);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(7,87.95003);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(8,3.715968);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(9,0.4079818);
   VbbHcc_tags_H_pt_stack_3->SetBinError(1,52.15427);
   VbbHcc_tags_H_pt_stack_3->SetBinError(2,76.43259);
   VbbHcc_tags_H_pt_stack_3->SetBinError(3,76.34231);
   VbbHcc_tags_H_pt_stack_3->SetBinError(4,63.19514);
   VbbHcc_tags_H_pt_stack_3->SetBinError(5,42.34344);
   VbbHcc_tags_H_pt_stack_3->SetBinError(6,20.30874);
   VbbHcc_tags_H_pt_stack_3->SetBinError(7,5.878197);
   VbbHcc_tags_H_pt_stack_3->SetBinError(8,1.191032);
   VbbHcc_tags_H_pt_stack_3->SetBinError(9,0.4079818);
   VbbHcc_tags_H_pt_stack_3->SetEntries(141537);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_3,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_4 = new TH1D("VbbHcc_tags_H_pt_stack_4","",40,0,2000);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(1,3931.243);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(2,8931.846);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(3,8986.984);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(4,6527.105);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(5,3240.65);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(6,793.676);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(7,96.48551);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(8,9.411943);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(11,1.442479);
   VbbHcc_tags_H_pt_stack_4->SetBinError(1,72.11212);
   VbbHcc_tags_H_pt_stack_4->SetBinError(2,108.974);
   VbbHcc_tags_H_pt_stack_4->SetBinError(3,109.12);
   VbbHcc_tags_H_pt_stack_4->SetBinError(4,92.94319);
   VbbHcc_tags_H_pt_stack_4->SetBinError(5,65.62355);
   VbbHcc_tags_H_pt_stack_4->SetBinError(6,32.5928);
   VbbHcc_tags_H_pt_stack_4->SetBinError(7,11.41069);
   VbbHcc_tags_H_pt_stack_4->SetBinError(8,3.502933);
   VbbHcc_tags_H_pt_stack_4->SetBinError(11,1.442479);
   VbbHcc_tags_H_pt_stack_4->SetEntries(25853);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_4,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_5 = new TH1D("VbbHcc_tags_H_pt_stack_5","",40,0,2000);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(1,275.6934);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(2,384.76);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(3,191.7676);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(4,91.32665);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(5,45.67274);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(6,25.0743);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(7,13.14748);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(8,8.896015);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(9,5.586362);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(10,3.637689);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(11,2.010591);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(12,3.065754);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(13,1.318601);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(14,0.9378453);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(15,0.6593075);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(16,0.6209524);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(17,0.717818);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(18,0.2360269);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(20,0.415362);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(21,0.09507898);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(23,0.2562129);
   VbbHcc_tags_H_pt_stack_5->SetBinError(1,8.061842);
   VbbHcc_tags_H_pt_stack_5->SetBinError(2,9.495903);
   VbbHcc_tags_H_pt_stack_5->SetBinError(3,6.697954);
   VbbHcc_tags_H_pt_stack_5->SetBinError(4,4.608212);
   VbbHcc_tags_H_pt_stack_5->SetBinError(5,3.207936);
   VbbHcc_tags_H_pt_stack_5->SetBinError(6,2.412395);
   VbbHcc_tags_H_pt_stack_5->SetBinError(7,1.769315);
   VbbHcc_tags_H_pt_stack_5->SetBinError(8,1.44102);
   VbbHcc_tags_H_pt_stack_5->SetBinError(9,1.14531);
   VbbHcc_tags_H_pt_stack_5->SetBinError(10,0.8700243);
   VbbHcc_tags_H_pt_stack_5->SetBinError(11,0.6848104);
   VbbHcc_tags_H_pt_stack_5->SetBinError(12,0.8765777);
   VbbHcc_tags_H_pt_stack_5->SetBinError(13,0.5466589);
   VbbHcc_tags_H_pt_stack_5->SetBinError(14,0.4532568);
   VbbHcc_tags_H_pt_stack_5->SetBinError(15,0.3833568);
   VbbHcc_tags_H_pt_stack_5->SetBinError(16,0.3661122);
   VbbHcc_tags_H_pt_stack_5->SetBinError(17,0.4146237);
   VbbHcc_tags_H_pt_stack_5->SetBinError(18,0.2360269);
   VbbHcc_tags_H_pt_stack_5->SetBinError(20,0.2945778);
   VbbHcc_tags_H_pt_stack_5->SetBinError(21,0.09507898);
   VbbHcc_tags_H_pt_stack_5->SetBinError(23,0.2562129);
   VbbHcc_tags_H_pt_stack_5->SetEntries(4750);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_5,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_6 = new TH1D("VbbHcc_tags_H_pt_stack_6","",40,0,2000);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(1,479.9759);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(2,689.4803);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(3,346.0206);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(4,178.3636);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(5,93.04855);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(6,54.3691);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(7,32.10099);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(8,17.25438);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(9,9.54834);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(10,6.70495);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(11,4.751315);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(12,1.311252);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(13,0.7768221);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(14,2.018039);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(15,0.5267701);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(16,1.033765);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(17,0.2487814);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(19,0.365159);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(20,0.3514358);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(21,0.1801457);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(22,0.1236251);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(25,0.1336818);
   VbbHcc_tags_H_pt_stack_6->SetBinError(1,9.041484);
   VbbHcc_tags_H_pt_stack_6->SetBinError(2,10.78385);
   VbbHcc_tags_H_pt_stack_6->SetBinError(3,7.620215);
   VbbHcc_tags_H_pt_stack_6->SetBinError(4,5.473055);
   VbbHcc_tags_H_pt_stack_6->SetBinError(5,3.94054);
   VbbHcc_tags_H_pt_stack_6->SetBinError(6,3.031873);
   VbbHcc_tags_H_pt_stack_6->SetBinError(7,2.349431);
   VbbHcc_tags_H_pt_stack_6->SetBinError(8,1.702926);
   VbbHcc_tags_H_pt_stack_6->SetBinError(9,1.242831);
   VbbHcc_tags_H_pt_stack_6->SetBinError(10,1.038373);
   VbbHcc_tags_H_pt_stack_6->SetBinError(11,0.8960742);
   VbbHcc_tags_H_pt_stack_6->SetBinError(12,0.4697417);
   VbbHcc_tags_H_pt_stack_6->SetBinError(13,0.3599854);
   VbbHcc_tags_H_pt_stack_6->SetBinError(14,0.5869865);
   VbbHcc_tags_H_pt_stack_6->SetBinError(15,0.3055384);
   VbbHcc_tags_H_pt_stack_6->SetBinError(16,0.4328804);
   VbbHcc_tags_H_pt_stack_6->SetBinError(17,0.1759153);
   VbbHcc_tags_H_pt_stack_6->SetBinError(19,0.2582211);
   VbbHcc_tags_H_pt_stack_6->SetBinError(20,0.2487649);
   VbbHcc_tags_H_pt_stack_6->SetBinError(21,0.1801457);
   VbbHcc_tags_H_pt_stack_6->SetBinError(22,0.1236251);
   VbbHcc_tags_H_pt_stack_6->SetBinError(25,0.1336818);
   VbbHcc_tags_H_pt_stack_6->SetEntries(11906);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_6,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_7 = new TH1D("VbbHcc_tags_H_pt_stack_7","",40,0,2000);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(1,518.1455);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(2,643.4665);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(3,299.239);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(4,144.5207);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(5,71.86334);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(6,40.11429);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(7,20.65312);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(8,10.15336);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(9,6.965879);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(10,3.963098);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(11,2.811926);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(12,0.8005848);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(13,0.6776915);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(14,0.2363491);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(15,0.2274369);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(16,0.2310328);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(18,0.4330299);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(22,0.2339289);
   VbbHcc_tags_H_pt_stack_7->SetBinError(1,10.67643);
   VbbHcc_tags_H_pt_stack_7->SetBinError(2,11.83493);
   VbbHcc_tags_H_pt_stack_7->SetBinError(3,8.086332);
   VbbHcc_tags_H_pt_stack_7->SetBinError(4,5.60394);
   VbbHcc_tags_H_pt_stack_7->SetBinError(5,4.010547);
   VbbHcc_tags_H_pt_stack_7->SetBinError(6,2.947472);
   VbbHcc_tags_H_pt_stack_7->SetBinError(7,2.100233);
   VbbHcc_tags_H_pt_stack_7->SetBinError(8,1.473258);
   VbbHcc_tags_H_pt_stack_7->SetBinError(9,1.195865);
   VbbHcc_tags_H_pt_stack_7->SetBinError(10,0.921991);
   VbbHcc_tags_H_pt_stack_7->SetBinError(11,0.8040482);
   VbbHcc_tags_H_pt_stack_7->SetBinError(12,0.4032931);
   VbbHcc_tags_H_pt_stack_7->SetBinError(13,0.3979862);
   VbbHcc_tags_H_pt_stack_7->SetBinError(14,0.2363491);
   VbbHcc_tags_H_pt_stack_7->SetBinError(15,0.2274369);
   VbbHcc_tags_H_pt_stack_7->SetBinError(16,0.2310328);
   VbbHcc_tags_H_pt_stack_7->SetBinError(18,0.3157467);
   VbbHcc_tags_H_pt_stack_7->SetBinError(22,0.2339289);
   VbbHcc_tags_H_pt_stack_7->SetEntries(8452);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_7,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_8 = new TH1D("VbbHcc_tags_H_pt_stack_8","",40,0,2000);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(1,130.8543);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(2,210.8468);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(3,120.2713);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(4,58.66706);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(5,31.3595);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(6,17.16227);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(7,10.07163);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(8,6.085838);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(9,3.515664);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(10,1.837629);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(11,1.131312);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(12,0.6316509);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(13,0.389279);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(14,0.2857061);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(15,0.1470487);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(16,0.117575);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(17,0.07782114);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(18,0.0511972);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(19,0.04187873);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(20,0.02787685);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(21,0.01914062);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(22,0.01372779);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(23,0.01181042);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(24,0.003364558);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(25,0.001953322);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(26,0.008927842);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(27,0.001746513);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(28,0.002068506);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(30,0.004340334);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(32,0.001992314);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(33,0.001676022);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(34,0.001911414);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(36,0.001772933);
   VbbHcc_tags_H_pt_stack_8->SetBinError(1,0.5040475);
   VbbHcc_tags_H_pt_stack_8->SetBinError(2,0.6385153);
   VbbHcc_tags_H_pt_stack_8->SetBinError(3,0.4806325);
   VbbHcc_tags_H_pt_stack_8->SetBinError(4,0.3357275);
   VbbHcc_tags_H_pt_stack_8->SetBinError(5,0.2457808);
   VbbHcc_tags_H_pt_stack_8->SetBinError(6,0.1816965);
   VbbHcc_tags_H_pt_stack_8->SetBinError(7,0.1387778);
   VbbHcc_tags_H_pt_stack_8->SetBinError(8,0.1083078);
   VbbHcc_tags_H_pt_stack_8->SetBinError(9,0.08204049);
   VbbHcc_tags_H_pt_stack_8->SetBinError(10,0.05911666);
   VbbHcc_tags_H_pt_stack_8->SetBinError(11,0.04597126);
   VbbHcc_tags_H_pt_stack_8->SetBinError(12,0.0342664);
   VbbHcc_tags_H_pt_stack_8->SetBinError(13,0.02698049);
   VbbHcc_tags_H_pt_stack_8->SetBinError(14,0.02301204);
   VbbHcc_tags_H_pt_stack_8->SetBinError(15,0.01620228);
   VbbHcc_tags_H_pt_stack_8->SetBinError(16,0.01485274);
   VbbHcc_tags_H_pt_stack_8->SetBinError(17,0.01197626);
   VbbHcc_tags_H_pt_stack_8->SetBinError(18,0.009710055);
   VbbHcc_tags_H_pt_stack_8->SetBinError(19,0.008855692);
   VbbHcc_tags_H_pt_stack_8->SetBinError(20,0.007511492);
   VbbHcc_tags_H_pt_stack_8->SetBinError(21,0.006077229);
   VbbHcc_tags_H_pt_stack_8->SetBinError(22,0.005255502);
   VbbHcc_tags_H_pt_stack_8->SetBinError(23,0.004555788);
   VbbHcc_tags_H_pt_stack_8->SetBinError(24,0.002414627);
   VbbHcc_tags_H_pt_stack_8->SetBinError(25,0.001953322);
   VbbHcc_tags_H_pt_stack_8->SetBinError(26,0.004047487);
   VbbHcc_tags_H_pt_stack_8->SetBinError(27,0.001746513);
   VbbHcc_tags_H_pt_stack_8->SetBinError(28,0.002068506);
   VbbHcc_tags_H_pt_stack_8->SetBinError(30,0.003098179);
   VbbHcc_tags_H_pt_stack_8->SetBinError(32,0.001992314);
   VbbHcc_tags_H_pt_stack_8->SetBinError(33,0.001676022);
   VbbHcc_tags_H_pt_stack_8->SetBinError(34,0.001911414);
   VbbHcc_tags_H_pt_stack_8->SetBinError(36,0.001772933);
   VbbHcc_tags_H_pt_stack_8->SetEntries(337563);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_8,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_9 = new TH1D("VbbHcc_tags_H_pt_stack_9","",40,0,2000);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(1,20.30813);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(2,42.65982);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(3,38.09881);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(4,23.83931);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(5,13.28502);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(6,7.530712);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(7,4.383724);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(8,2.771671);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(9,1.687693);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(10,1.083586);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(11,0.7034269);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(12,0.4966946);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(13,0.3407227);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(14,0.2469483);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(15,0.1753977);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(16,0.1180989);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(17,0.09406348);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(18,0.07027216);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(19,0.05513899);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(20,0.03858432);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(21,0.02465868);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(22,0.02359522);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(23,0.01458466);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(24,0.01609578);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(25,0.01154052);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(26,0.01092484);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(27,0.005022946);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(28,0.006073635);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(29,0.004205853);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(30,0.004419335);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(31,0.001818593);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(32,0.001812742);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(33,0.002246452);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(34,0.001324114);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(35,0.0008856872);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(37,0.000449816);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(38,0.000423518);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(41,0.001313887);
   VbbHcc_tags_H_pt_stack_9->SetBinError(1,0.09495873);
   VbbHcc_tags_H_pt_stack_9->SetBinError(2,0.1376095);
   VbbHcc_tags_H_pt_stack_9->SetBinError(3,0.1300306);
   VbbHcc_tags_H_pt_stack_9->SetBinError(4,0.1027982);
   VbbHcc_tags_H_pt_stack_9->SetBinError(5,0.07666467);
   VbbHcc_tags_H_pt_stack_9->SetBinError(6,0.0576825);
   VbbHcc_tags_H_pt_stack_9->SetBinError(7,0.0440112);
   VbbHcc_tags_H_pt_stack_9->SetBinError(8,0.03497405);
   VbbHcc_tags_H_pt_stack_9->SetBinError(9,0.02728532);
   VbbHcc_tags_H_pt_stack_9->SetBinError(10,0.02186604);
   VbbHcc_tags_H_pt_stack_9->SetBinError(11,0.0175971);
   VbbHcc_tags_H_pt_stack_9->SetBinError(12,0.01484582);
   VbbHcc_tags_H_pt_stack_9->SetBinError(13,0.01229517);
   VbbHcc_tags_H_pt_stack_9->SetBinError(14,0.01048535);
   VbbHcc_tags_H_pt_stack_9->SetBinError(15,0.008804616);
   VbbHcc_tags_H_pt_stack_9->SetBinError(16,0.007242831);
   VbbHcc_tags_H_pt_stack_9->SetBinError(17,0.006450806);
   VbbHcc_tags_H_pt_stack_9->SetBinError(18,0.005562792);
   VbbHcc_tags_H_pt_stack_9->SetBinError(19,0.004945555);
   VbbHcc_tags_H_pt_stack_9->SetBinError(20,0.004163285);
   VbbHcc_tags_H_pt_stack_9->SetBinError(21,0.003312125);
   VbbHcc_tags_H_pt_stack_9->SetBinError(22,0.003233221);
   VbbHcc_tags_H_pt_stack_9->SetBinError(23,0.002541721);
   VbbHcc_tags_H_pt_stack_9->SetBinError(24,0.002677255);
   VbbHcc_tags_H_pt_stack_9->SetBinError(25,0.002254187);
   VbbHcc_tags_H_pt_stack_9->SetBinError(26,0.002195664);
   VbbHcc_tags_H_pt_stack_9->SetBinError(27,0.001473103);
   VbbHcc_tags_H_pt_stack_9->SetBinError(28,0.001687784);
   VbbHcc_tags_H_pt_stack_9->SetBinError(29,0.001347866);
   VbbHcc_tags_H_pt_stack_9->SetBinError(30,0.001398067);
   VbbHcc_tags_H_pt_stack_9->SetBinError(31,0.000909516);
   VbbHcc_tags_H_pt_stack_9->SetBinError(32,0.0009067979);
   VbbHcc_tags_H_pt_stack_9->SetBinError(33,0.001006291);
   VbbHcc_tags_H_pt_stack_9->SetBinError(34,0.0007646366);
   VbbHcc_tags_H_pt_stack_9->SetBinError(35,0.000626355);
   VbbHcc_tags_H_pt_stack_9->SetBinError(37,0.000449816);
   VbbHcc_tags_H_pt_stack_9->SetBinError(38,0.000423518);
   VbbHcc_tags_H_pt_stack_9->SetBinError(41,0.000758588);
   VbbHcc_tags_H_pt_stack_9->SetEntries(363165);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_9,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_10 = new TH1D("VbbHcc_tags_H_pt_stack_10","",40,0,2000);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(1,2.052886);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(2,3.311067);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(3,2.001862);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(4,1.05854);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(5,0.4299966);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(6,0.2236403);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(7,0.1093356);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(8,0.08397897);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(9,0.05796892);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(10,0.01770107);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(11,0.01332778);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(12,0.005634108);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(14,0.005383736);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(15,0.001259297);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(16,0.001727301);
   VbbHcc_tags_H_pt_stack_10->SetBinError(1,0.06174075);
   VbbHcc_tags_H_pt_stack_10->SetBinError(2,0.07781205);
   VbbHcc_tags_H_pt_stack_10->SetBinError(3,0.06058163);
   VbbHcc_tags_H_pt_stack_10->SetBinError(4,0.04371786);
   VbbHcc_tags_H_pt_stack_10->SetBinError(5,0.02762623);
   VbbHcc_tags_H_pt_stack_10->SetBinError(6,0.02052573);
   VbbHcc_tags_H_pt_stack_10->SetBinError(7,0.01412955);
   VbbHcc_tags_H_pt_stack_10->SetBinError(8,0.01237749);
   VbbHcc_tags_H_pt_stack_10->SetBinError(9,0.01032844);
   VbbHcc_tags_H_pt_stack_10->SetBinError(10,0.005499821);
   VbbHcc_tags_H_pt_stack_10->SetBinError(11,0.00471908);
   VbbHcc_tags_H_pt_stack_10->SetBinError(12,0.002991408);
   VbbHcc_tags_H_pt_stack_10->SetBinError(14,0.0031892);
   VbbHcc_tags_H_pt_stack_10->SetBinError(15,0.001259297);
   VbbHcc_tags_H_pt_stack_10->SetBinError(16,0.001727301);
   VbbHcc_tags_H_pt_stack_10->SetEntries(6268);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_10,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_11 = new TH1D("VbbHcc_tags_H_pt_stack_11","",40,0,2000);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(1,6336.686);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(2,14203.97);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(3,15242.77);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(4,9854.318);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(5,4944.271);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(6,2200.361);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(7,1252.367);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(8,604.1114);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(9,263.9011);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(10,121.4886);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(11,48.65794);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(12,44.12563);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(13,22.25861);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(14,15.52406);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(15,6.127426);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(16,4.878256);
   VbbHcc_tags_H_pt_stack_11->SetBinError(1,181.9537);
   VbbHcc_tags_H_pt_stack_11->SetBinError(2,272.8556);
   VbbHcc_tags_H_pt_stack_11->SetBinError(3,282.0894);
   VbbHcc_tags_H_pt_stack_11->SetBinError(4,226.7348);
   VbbHcc_tags_H_pt_stack_11->SetBinError(5,159.9701);
   VbbHcc_tags_H_pt_stack_11->SetBinError(6,107.1596);
   VbbHcc_tags_H_pt_stack_11->SetBinError(7,79.45824);
   VbbHcc_tags_H_pt_stack_11->SetBinError(8,56.29884);
   VbbHcc_tags_H_pt_stack_11->SetBinError(9,36.07137);
   VbbHcc_tags_H_pt_stack_11->SetBinError(10,25.36625);
   VbbHcc_tags_H_pt_stack_11->SetBinError(11,14.89851);
   VbbHcc_tags_H_pt_stack_11->SetBinError(12,15.26325);
   VbbHcc_tags_H_pt_stack_11->SetBinError(13,11.08125);
   VbbHcc_tags_H_pt_stack_11->SetBinError(14,9.044982);
   VbbHcc_tags_H_pt_stack_11->SetBinError(15,4.820284);
   VbbHcc_tags_H_pt_stack_11->SetBinError(16,4.878256);
   VbbHcc_tags_H_pt_stack_11->SetEntries(12187);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_11,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_pt__27 = new TH1D("VbbHcc_tags_H_pt__27","",40,0,2000);
   VbbHcc_tags_H_pt__27->SetBinContent(1,6799640);
   VbbHcc_tags_H_pt__27->SetBinContent(2,1.053588e+07);
   VbbHcc_tags_H_pt__27->SetBinContent(3,3679280);
   VbbHcc_tags_H_pt__27->SetBinContent(4,270529.5);
   VbbHcc_tags_H_pt__27->SetBinContent(5,16995.51);
   VbbHcc_tags_H_pt__27->SetBinContent(6,1400.386);
   VbbHcc_tags_H_pt__27->SetBinContent(7,1044.857);
   VbbHcc_tags_H_pt__27->SetBinError(1,94514.84);
   VbbHcc_tags_H_pt__27->SetBinError(2,117376.2);
   VbbHcc_tags_H_pt__27->SetBinError(3,69336.98);
   VbbHcc_tags_H_pt__27->SetBinError(4,18829.46);
   VbbHcc_tags_H_pt__27->SetBinError(5,4641.329);
   VbbHcc_tags_H_pt__27->SetBinError(6,1400.386);
   VbbHcc_tags_H_pt__27->SetBinError(7,1044.857);
   VbbHcc_tags_H_pt__27->SetEntries(17117);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt__27->SetLineColor(ci);
   VbbHcc_tags_H_pt__27->SetLineWidth(2);
   VbbHcc_tags_H_pt__27->SetMarkerStyle(20);
   VbbHcc_tags_H_pt__27->SetMarkerSize(1.2);
   VbbHcc_tags_H_pt__27->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt__27->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__27->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt__27->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt__27->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__27->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__27->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt__27->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt__27->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt__27->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__27->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__27->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt__27->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt__27->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__27->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_pt_fx1027[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_tags_H_pt_fy1027[40] = {
   788191.5,
   1399480,
   792755.4,
   301844.3,
   126049.2,
   57995.72,
   29783.98,
   16410.1,
   9351.434,
   5584.156,
   3511.935,
   2246.54,
   1465.387,
   982.7215,
   661.6788,
   452.4467,
   315.1216,
   216.4497,
   154.2117,
   107.6511,
   79.96631,
   58.24273,
   42.1301,
   30.35299,
   24.58018,
   17.27672,
   11.55006,
   10.70769,
   6.235057,
   4.900949,
   3.985268,
   2.64663,
   1.480376,
   1.229389,
   1.535095,
   1.296982,
   0.7246627,
   0.9798587,
   0.4070595,
   0.5354317};
   Double_t Graph_from_VbbHcc_tags_H_pt_fex1027[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_tags_H_pt_fey1027[40] = {
   319.4494,
   447.0025,
   396.4807,
   293.4171,
   202.2254,
   131.949,
   94.14053,
   67.35541,
   45.72975,
   33.64674,
   23.17261,
   20.86057,
   15.98855,
   13.07306,
   9.315675,
   8.169068,
   5.511443,
   4.558624,
   3.932252,
   3.31087,
   2.745815,
   2.53722,
   2.128172,
   1.819894,
   1.692643,
   1.463192,
   1.218156,
   1.047892,
   0.690323,
   0.7607425,
   0.5567074,
   0.5137104,
   0.3483466,
   0.3079344,
   0.4332148,
   0.5187876,
   0.2473499,
   0.2879299,
   0.1701754,
   0.354998};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_pt_fx1027,Graph_from_VbbHcc_tags_H_pt_fy1027,Graph_from_VbbHcc_tags_H_pt_fex1027,Graph_from_VbbHcc_tags_H_pt_fey1027);
   gre->SetName("Graph_from_VbbHcc_tags_H_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_pt1027 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_pt1027","",100,0,2200);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->SetMinimum(0.1623904);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->SetMaximum(1539920);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_pt1027->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_pt1027);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt","QCD","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_11","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_10","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_9","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_8","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_7","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_6","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_5","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_4","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_3","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_pt","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_pt_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__28 = new TH1D("data_mc_ratio__28","",40,0,2000);
   data_mc_ratio__28->SetBinContent(1,8.626889);
   data_mc_ratio__28->SetBinContent(2,7.528421);
   data_mc_ratio__28->SetBinContent(3,4.641128);
   data_mc_ratio__28->SetBinContent(4,0.8962552);
   data_mc_ratio__28->SetBinContent(5,0.1348323);
   data_mc_ratio__28->SetBinContent(6,0.02414638);
   data_mc_ratio__28->SetBinContent(7,0.03508118);
   data_mc_ratio__28->SetBinError(1,0.1199135);
   data_mc_ratio__28->SetBinError(2,0.08387132);
   data_mc_ratio__28->SetBinError(3,0.08746327);
   data_mc_ratio__28->SetBinError(4,0.06238139);
   data_mc_ratio__28->SetBinError(5,0.03682155);
   data_mc_ratio__28->SetBinError(6,0.02414638);
   data_mc_ratio__28->SetBinError(7,0.03508118);
   data_mc_ratio__28->SetMinimum(0.4);
   data_mc_ratio__28->SetMaximum(1.6);
   data_mc_ratio__28->SetEntries(13251.65);
   data_mc_ratio__28->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__28->SetLineColor(ci);
   data_mc_ratio__28->SetLineWidth(2);
   data_mc_ratio__28->SetMarkerStyle(20);
   data_mc_ratio__28->SetMarkerSize(1.2);
   data_mc_ratio__28->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__28->GetXaxis()->SetRange(7,30);
   data_mc_ratio__28->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__28->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__28->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__28->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__28->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__28->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__28->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__28->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__28->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__28->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__28->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__28->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__28->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__28->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__28->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__28->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__28->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1028[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1028[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1028[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1028[40] = {
   0.0004052942,
   0.0003194061,
   0.00050013,
   0.0009720811,
   0.001604336,
   0.002275151,
   0.003160777,
   0.004104509,
   0.004890132,
   0.006025395,
   0.006598246,
   0.009285641,
   0.0109108,
   0.01330291,
   0.01407885,
   0.01805532,
   0.01748989,
   0.0210609,
   0.02549905,
   0.03075557,
   0.03433714,
   0.04356286,
   0.05051428,
   0.05995765,
   0.06886208,
   0.08469157,
   0.1054675,
   0.09786351,
   0.1107164,
   0.1552235,
   0.1396914,
   0.1940998,
   0.2353096,
   0.2504776,
   0.2822072,
   0.3999959,
   0.341331,
   0.2938483,
   0.4180601,
   0.6630126};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1028,Graph_from_mc_statistical_error_fy1028,Graph_from_mc_statistical_error_fex1028,Graph_from_mc_statistical_error_fey1028);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1028 = new TH1F("Graph_Graph_from_mc_statistical_error1028","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1028->SetMinimum(0.2043848);
   Graph_Graph_from_mc_statistical_error1028->SetMaximum(1.795615);
   Graph_Graph_from_mc_statistical_error1028->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1028->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1028);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_17->cd();
   H_pt_VbbHcc_17->Modified();
   H_pt_VbbHcc_17->cd();
   H_pt_VbbHcc_17->SetSelected(H_pt_VbbHcc_17);
}
