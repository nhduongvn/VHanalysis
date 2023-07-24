void H_dR_Bj1_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_17/H_dR_Bj1_tags_17
//=========  (Mon Jul 24 10:11:23 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_17 = new TCanvas("H_dR_Bj1_tags_17", "H_dR_Bj1_tags_17",0,0,600,600);
   H_dR_Bj1_tags_17->SetHighLightColor(2);
   H_dR_Bj1_tags_17->Range(0,0,1,1);
   H_dR_Bj1_tags_17->SetFillColor(0);
   H_dR_Bj1_tags_17->SetFillStyle(4000);
   H_dR_Bj1_tags_17->SetBorderMode(0);
   H_dR_Bj1_tags_17->SetBorderSize(2);
   H_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-561.0484,6.314516,560497.3);
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
   st->SetMaximum(480372.8);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",30,0,6);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(504391.5);
   st_stack_46->SetDirectory(0);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->GetXaxis()->SetRange(1,30);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetLabelSize(0.035);
   st_stack_46->GetXaxis()->SetTitleSize(0.035);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.2");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetLabelSize(0.05);
   st_stack_46->GetYaxis()->SetTitleSize(0.057);
   st_stack_46->GetYaxis()->SetTitleOffset(1.2);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetLabelSize(0.035);
   st_stack_46->GetZaxis()->SetTitleSize(0.035);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,56945.19);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,177702.6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,172280.5);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,136007.5);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,111385.3);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,106262.9);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,106830.5);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,66451.78);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,60127.61);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,53168.58);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,51629.98);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,44853.27);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,46630.69);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,42773.75);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,35842.9);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,31278.78);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,25503.69);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,17920.19);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,17984.45);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,17049.7);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,12767.39);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,10028.53);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,23096.55);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,8583.436);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,5687.888);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,5936.252);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,3993.856);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,3098.08);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,1758.59);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,1300.999);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,1560.632);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,1646.253);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,4431.63);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,4712.766);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,4704.289);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,4384.356);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,14849.88);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,20751.75);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,2763.186);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,3062.257);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,2839.375);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,3096.437);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,2667.321);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,3184.986);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,2900.601);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,2227.69);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,2105.115);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,2244.367);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,1209.17);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,1723.737);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,1735.643);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,1155.764);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,976.1031);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,14461.96);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,1463.876);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,1323.535);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,849.6716);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,679.8788);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,625.6644);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,445.2411);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,366.1403);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,281.3216);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(158509);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,625.5873);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,2054.795);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,2313.37);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,1937.759);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,1463.264);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,1186.097);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,984.7217);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,836.3282);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,735.8812);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,659.7181);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,627.7856);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,560.5893);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,513.6593);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,467.54);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,409.7191);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,357.6174);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,288.239);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,259.0959);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,209.9729);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,176.9372);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,144.1313);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,113.613);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,90.01824);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,70.0588);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,59.4729);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,44.42106);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,32.67006);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,21.91169);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,16.14824);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,10.2195);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,19.57362);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,10.75989);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,18.43612);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,19.19553);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,17.55754);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,15.22405);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,13.69928);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,12.46041);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,11.44562);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,10.67234);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,10.02359);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,9.901675);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,9.316998);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,8.862542);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,8.375269);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,7.786614);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,7.194641);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,6.506406);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,6.27257);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,5.609469);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,5.101701);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,4.595302);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,4.023772);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,3.471921);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,3.034852);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,2.940705);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,2.482935);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,2.099278);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,1.591559);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,1.519337);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,1.057322);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,1.519121);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(208682);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,6817.705);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,30133.82);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,39125.02);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,34637.37);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,27279.1);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,21476.87);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,17465.64);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,14698.43);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,12931.14);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,11696.05);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,10745.86);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,9918.749);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,8969.954);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,8015.693);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,7018.09);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,6060.418);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,4912.979);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,4029.327);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,3301.225);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,2655.256);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,2154.815);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,1705.465);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,1350.391);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,1019.711);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,763.0108);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,542.3322);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,387.0223);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,264.3143);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,171.4469);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,123.0753);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,216.5503);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,21.01954);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,44.32199);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,50.73719);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,47.88126);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,42.54535);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,37.75594);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,34.03466);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,31.23501);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,29.29915);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,27.87122);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,26.74191);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,25.69556);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,24.43278);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,23.08811);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,21.59018);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,20.04177);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,18.02894);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,16.30593);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,14.73506);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,13.21452);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,11.87621);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,10.55679);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,9.393704);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,8.146917);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,7.034468);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,5.917143);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,4.99031);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,4.120154);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,3.316318);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,2.80002);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,3.719333);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(4592799);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,538.9461);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,1433.949);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,1486.515);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,1152.767);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,938.4042);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,746.2646);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,625.2414);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,530.1676);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,463.5768);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,426.4617);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,396.826);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,380.5071);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,321.9339);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,282.4604);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,264.125);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,225.7481);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,186.8767);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,173.0444);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,138.2238);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,107.1952);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,95.61108);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,76.72856);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,66.81304);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,43.4441);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,41.43594);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,29.28724);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,26.17712);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,13.65666);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,16.47132);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,5.90692);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,10.56754);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,9.328021);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,20.93093);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,26.014);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,22.11375);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,22.38829);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,20.43424);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,17.04561);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,15.24565);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,13.7101);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,13.13149);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,13.45301);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,14.01644);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,10.85077);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,9.373234);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,9.219649);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,8.433614);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,8.774607);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,9.424777);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,7.790875);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,6.40086);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,6.257842);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,5.401588);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,5.111988);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,2.701642);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,2.837104);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,3.485104);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,3.400045);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,1.536655);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,4.10071);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,1.114123);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,1.419442);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(91213);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,358.4493);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,887.0757);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,909.2559);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,638.2637);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,493.4729);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,419.2744);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,339.5955);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,297.4687);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,261.8577);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,240.5969);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,194.2949);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,198.7786);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,201.5395);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,182.5304);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,139.7295);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,140.2177);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,97.90057);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,105.7552);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,79.22051);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,61.5963);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,59.83222);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,52.70113);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,41.44727);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,24.80115);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,21.1293);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,19.95507);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,10.75985);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,9.430667);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(29,6.385835);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,5.984605);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(31,6.111239);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,9.65319);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,27.52745);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,34.93156);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,26.8472);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,23.29426);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,22.59381);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,21.45858);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,20.24186);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,18.48886);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,18.17715);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,14.59901);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,17.38026);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,17.53852);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,17.36652);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,10.64241);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,13.87811);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,6.783934);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,14.62205);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,9.034483);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,5.76108);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,12.16297);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,10.32048);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,7.806388);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,3.059737);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,2.982505);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,3.464458);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,1.660942);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,2.191132);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(29,1.429509);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,2.09616);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(31,1.800773);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(43154);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(1,2.016151);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,4.838763);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(3,5.846839);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(4,4.838763);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(5,3.427457);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(6,2.217767);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(7,2.016151);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(8,2.620997);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(9,0.8064606);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(10,1.008076);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(11,0.4032303);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(12,1.612921);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(13,1.411306);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(14,0.8064606);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(15,0.8064606);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(16,1.612921);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(17,0.6048454);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(18,0.8064606);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(19,0.4032303);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(20,0.6048454);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(21,0.2016151);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(22,0.2016151);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(23,0.4032303);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(24,0.2016151);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(28,0.2016151);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(1,0.6375631);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,0.9877084);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(3,1.085731);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(4,0.9877084);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(5,0.8312805);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(6,0.6686818);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(7,0.6375631);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(8,0.7269337);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(9,0.4032303);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(10,0.4508252);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(11,0.2851269);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(12,0.5702537);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(13,0.5334235);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(14,0.4032303);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(15,0.4032303);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(16,0.5702537);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(17,0.3492077);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(18,0.4032303);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(19,0.2851269);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(20,0.3492077);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(21,0.2016151);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(22,0.2016151);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(23,0.2851269);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(24,0.2016151);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(28,0.2016151);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(198);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,4.499124);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,13.35224);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,15.8195);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,7.401785);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,6.095588);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,4.499124);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,6.966386);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(8,4.063725);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(9,2.467262);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(10,3.047794);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,1.886729);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(12,3.047794);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(13,2.467262);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(14,1.596463);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,1.741596);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(16,1.886729);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(17,1.015931);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(18,0.8707982);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(19,1.596463);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(20,0.4353991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(21,0.4353991);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(22,0.2902661);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(24,0.2902661);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(25,0.5805321);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(27,0.2902661);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(31,0.145133);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.8080666);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,1.392067);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,1.515233);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,1.036457);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.9405696);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.8080666);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,1.005511);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(8,0.7679718);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(9,0.5983988);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(10,0.6650831);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.5232846);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(12,0.6650831);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(13,0.5983988);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(14,0.4813518);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.5027556);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(16,0.5232846);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(17,0.3839859);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(18,0.3555019);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(19,0.4813518);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(20,0.2513778);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(21,0.2513778);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(22,0.2052491);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(24,0.2052491);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(25,0.2902661);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(27,0.2052491);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(31,0.145133);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(598);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,5.789965);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,12.70057);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,13.26089);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,10.64607);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,6.723831);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,4.8561);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,4.669327);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,2.801596);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,2.614823);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,1.680958);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,1.680958);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,3.175142);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,1.867731);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,1.120638);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,1.494185);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,1.120638);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,0.9338654);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,0.7470923);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,0.5603192);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(20,0.7470923);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(21,0.3735461);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(22,0.9338654);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(23,0.5603192);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(24,0.7470923);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(25,0.1867731);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(27,0.5603192);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(29,0.1867731);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(31,0.3735461);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,1.039908);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.54017);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,1.573778);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,1.410106);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,1.120638);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,0.9523595);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,0.9338654);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,0.723369);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.6988408);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.5603192);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.5603192);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.7700851);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.5906283);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.4574987);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.528274);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.4574987);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.4176373);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.3735461);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.3235004);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(20,0.3735461);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(21,0.264137);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(22,0.4176373);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(23,0.3235004);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(24,0.3735461);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(25,0.1867731);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(27,0.3235004);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(29,0.1867731);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(31,0.264137);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(445);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,3.023499);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,10.06541);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,9.639018);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,6.481464);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,4.315592);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,3.24477);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,2.69886);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,2.196559);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,2.081886);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,1.808931);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,1.744326);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,1.556973);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,1.392231);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.211338);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,1.049826);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,0.9238469);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.6589677);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.55237);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.4990711);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.3601711);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.2971815);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.2794152);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.2261164);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.2002745);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.166357);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.1372849);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.08721631);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.05652909);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.02261164);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.02099652);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.03230234);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.06988064);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.1275022);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.1247724);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.1023148);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.08348764);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.07239256);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.06602253);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.05956257);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.05798697);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.05405215);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.05307816);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.05014671);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.04741957);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.0442318);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.04117756);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.03862798);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.03262376);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.02986875);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.02839116);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.02411884);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.02190851);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.02124355);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.01911032);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.01798518);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.01639165);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.01489064);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.01186864);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.00955516);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.006043214);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.005823387);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.007223022);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(35311);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,2.268416);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,7.708718);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,8.078979);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,6.086288);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,4.269814);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,3.143691);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,2.598873);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,2.240222);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,1.957862);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,1.743915);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,1.645649);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,1.50053);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,1.377386);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,1.230609);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,1.065173);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.9300051);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.7401066);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.6294016);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.5099894);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.4357714);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.3677729);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.2881647);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.2773845);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.1911424);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.161704);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.1185829);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.08002273);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.0422918);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.03607242);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.0211459);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.03482855);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.03066828);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.05653522);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.05787703);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.05023475);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.04207581);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.03610339);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.03282619);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.03047709);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.02849174);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.02688999);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.02612141);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.02494309);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.02389769);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.02258853);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.02101542);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.0196368);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.01751762);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.01615444);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.01454148);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.0134418);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.0123486);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.01093071);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.0107243);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.008902388);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.008188198);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.007011954);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.005760162);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.004187513);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.00386737);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.002961019);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.003800106);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.07901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.282865);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.308149);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.2702229);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.1675066);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.1011361);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.05372854);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.0711113);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.04266678);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(10,0.06004954);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(11,0.04266678);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(12,0.03476553);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.03002477);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(14,0.02528402);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(15,0.02686427);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(16,0.01896301);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(17,0.01264201);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(18,0.01896301);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(19,0.01106176);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(20,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(21,0.006321005);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(22,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.01106176);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(24,0.006321005);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(25,0.009481507);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(26,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(27,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(28,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(31,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.01117406);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.02114232);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.02206701);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.02066447);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.01626968);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.01264201);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.009214368);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.01060065);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.008211226);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(10,0.009741322);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(11,0.008211226);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(12,0.007412035);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.006888155);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(14,0.006321005);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(15,0.006515542);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(16,0.005474151);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(17,0.004469625);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(18,0.005474151);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(19,0.004180952);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(20,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(21,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(22,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.004180952);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(24,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(25,0.003870809);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(26,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(27,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(28,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(31,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.02532789);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.123733);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.1430403);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.1268471);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.08677916);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.06124367);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.03944507);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.03217888);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.02470507);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.02449747);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.01951493);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.01577803);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.01660845);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.01474);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.01204113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.01328676);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.01038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(18,0.009134649);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(19,0.008096621);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.007681409);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.007266198);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.003944507);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(23,0.00477493);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(24,0.00332169);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.001868451);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(26,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(27,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(28,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(29,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.002293079);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.0050683);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.005449401);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.005131683);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.004244508);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.003565744);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.002861646);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.00258467);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.00226471);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.002255175);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.002012812);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.001809864);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.001856881);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.001749316);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.001581078);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.001660845);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.001467994);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(18,0.0013771);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(19,0.001296497);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.001262816);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.001228212);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.0009049321);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(23,0.0009956417);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(24,0.0008304226);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(26,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(27,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(28,0.0003595835);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(29,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(4044);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1__91 = new TH1D("VbbHcc_tags_H_dR_Bj1__91","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(1,22745);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(2,62241);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(3,61465);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(4,50817);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(5,41505);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(6,34302);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(7,28668);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(8,24878);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(9,21481);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(10,19438);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(11,17948);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(12,16303);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(13,15153);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(14,13835);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(15,12554);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(16,11412);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(17,9312);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(18,7850);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(19,6656);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(20,5776);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(21,4975);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(22,4022);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(23,3422);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(24,2694);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(25,2116);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(26,1704);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(27,1297);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(28,872);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(29,630);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(30,430);
   VbbHcc_tags_H_dR_Bj1__91->SetBinContent(31,669);
   VbbHcc_tags_H_dR_Bj1__91->SetEntries(507199);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__91->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__91->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__91->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__91->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__91->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__91->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__91->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__91->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__91->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__91->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__91->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__91->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__91->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__91->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__91->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__91->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__91->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__91->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__91->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1091[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1091[30] = {
   65303.58,
   212261.3,
   216167.8,
   174409.5,
   141584.6,
   130109.6,
   126264.8,
   82828.21,
   74530.06,
   66200.78,
   63602.17,
   55922.83,
   56646.34,
   51727.98,
   43680.76,
   38069.29,
   30993.66,
   22491.04,
   21716.68,
   20053.28,
   15223.47,
   11979.04,
   24646.7,
   9743.091,
   6574.044,
   6572.508,
   4451.508,
   3407.697,
   1969.289,
   1446.227};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1091[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1091[30] = {
   1646.478,
   4432.026,
   4713.28,
   4704.694,
   4384.709,
   14849.97,
   20751.8,
   2763.503,
   3062.502,
   2839.618,
   3096.632,
   2667.555,
   3185.159,
   2900.772,
   2227.853,
   2105.286,
   2244.476,
   1209.422,
   1723.85,
   1735.722,
   1155.915,
   976.2381,
   14461.96,
   1463.908,
   1323.563,
   849.71,
   679.911,
   625.6857,
   445.2772,
   366.1603};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1091);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetMinimum(972.0601);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetMaximum(242861.2);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_tags_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__92 = new TH1D("data_mc_ratio__92","",30,0,6);
   data_mc_ratio__92->SetBinContent(1,0.3482964);
   data_mc_ratio__92->SetBinContent(2,0.2932282);
   data_mc_ratio__92->SetBinContent(3,0.2843393);
   data_mc_ratio__92->SetBinContent(4,0.291366);
   data_mc_ratio__92->SetBinContent(5,0.2931463);
   data_mc_ratio__92->SetBinContent(6,0.2636393);
   data_mc_ratio__92->SetBinContent(7,0.2270467);
   data_mc_ratio__92->SetBinContent(8,0.3003566);
   data_mc_ratio__92->SetBinContent(9,0.2882193);
   data_mc_ratio__92->SetBinContent(10,0.2936219);
   data_mc_ratio__92->SetBinContent(11,0.2821916);
   data_mc_ratio__92->SetBinContent(12,0.2915267);
   data_mc_ratio__92->SetBinContent(13,0.2675018);
   data_mc_ratio__92->SetBinContent(14,0.2674568);
   data_mc_ratio__92->SetBinContent(15,0.2874034);
   data_mc_ratio__92->SetBinContent(16,0.2997692);
   data_mc_ratio__92->SetBinContent(17,0.3004485);
   data_mc_ratio__92->SetBinContent(18,0.3490278);
   data_mc_ratio__92->SetBinContent(19,0.3064925);
   data_mc_ratio__92->SetBinContent(20,0.2880327);
   data_mc_ratio__92->SetBinContent(21,0.3267981);
   data_mc_ratio__92->SetBinContent(22,0.3357531);
   data_mc_ratio__92->SetBinContent(23,0.1388421);
   data_mc_ratio__92->SetBinContent(24,0.2765036);
   data_mc_ratio__92->SetBinContent(25,0.3218719);
   data_mc_ratio__92->SetBinContent(26,0.2592618);
   data_mc_ratio__92->SetBinContent(27,0.291362);
   data_mc_ratio__92->SetBinContent(28,0.2558913);
   data_mc_ratio__92->SetBinContent(29,0.3199125);
   data_mc_ratio__92->SetBinContent(30,0.2973254);
   data_mc_ratio__92->SetBinContent(31,0.3687934);
   data_mc_ratio__92->SetBinError(1,0.002309436);
   data_mc_ratio__92->SetBinError(2,0.001175351);
   data_mc_ratio__92->SetBinError(3,0.001146893);
   data_mc_ratio__92->SetBinError(4,0.001292511);
   data_mc_ratio__92->SetBinError(5,0.001438912);
   data_mc_ratio__92->SetBinError(6,0.001423477);
   data_mc_ratio__92->SetBinError(7,0.001340962);
   data_mc_ratio__92->SetBinError(8,0.001904274);
   data_mc_ratio__92->SetBinError(9,0.001966508);
   data_mc_ratio__92->SetBinError(10,0.002106021);
   data_mc_ratio__92->SetBinError(11,0.002106377);
   data_mc_ratio__92->SetBinError(12,0.002283203);
   data_mc_ratio__92->SetBinError(13,0.002173089);
   data_mc_ratio__92->SetBinError(14,0.002273862);
   data_mc_ratio__92->SetBinError(15,0.00256508);
   data_mc_ratio__92->SetBinError(16,0.002806119);
   data_mc_ratio__92->SetBinError(17,0.003113498);
   data_mc_ratio__92->SetBinError(18,0.003939356);
   data_mc_ratio__92->SetBinError(19,0.003756758);
   data_mc_ratio__92->SetBinError(20,0.003789904);
   data_mc_ratio__92->SetBinError(21,0.00463322);
   data_mc_ratio__92->SetBinError(22,0.005294184);
   data_mc_ratio__92->SetBinError(23,0.002373456);
   data_mc_ratio__92->SetBinError(24,0.005327237);
   data_mc_ratio__92->SetBinError(25,0.006997216);
   data_mc_ratio__92->SetBinError(26,0.006280637);
   data_mc_ratio__92->SetBinError(27,0.008090267);
   data_mc_ratio__92->SetBinError(28,0.008665572);
   data_mc_ratio__92->SetBinError(29,0.01274562);
   data_mc_ratio__92->SetBinError(30,0.0143383);
   data_mc_ratio__92->SetBinError(31,0.05895113);
   data_mc_ratio__92->SetMinimum(0.4);
   data_mc_ratio__92->SetMaximum(1.6);
   data_mc_ratio__92->SetEntries(2004.955);
   data_mc_ratio__92->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__92->SetLineColor(ci);
   data_mc_ratio__92->SetLineWidth(2);
   data_mc_ratio__92->SetMarkerStyle(20);
   data_mc_ratio__92->SetMarkerSize(1.2);
   data_mc_ratio__92->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__92->GetXaxis()->SetRange(1,30);
   data_mc_ratio__92->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__92->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__92->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__92->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__92->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__92->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__92->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__92->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1092[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1092[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1092[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1092[30] = {
   0.02521268,
   0.02088005,
   0.0218038,
   0.02697499,
   0.03096882,
   0.1141343,
   0.1643515,
   0.03336428,
   0.04109083,
   0.04289404,
   0.04868753,
   0.04770064,
   0.05622885,
   0.05607743,
   0.05100307,
   0.05530143,
   0.07241727,
   0.05377349,
   0.07937909,
   0.08655553,
   0.07592982,
   0.08149552,
   0.5867707,
   0.1502509,
   0.2013317,
   0.1292825,
   0.1527372,
   0.1836095,
   0.2261107,
   0.2531831};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1092,Graph_from_mc_statistical_error_fy1092,Graph_from_mc_statistical_error_fex1092,Graph_from_mc_statistical_error_fey1092);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1092 = new TH1F("Graph_Graph_from_mc_statistical_error1092","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(0.2958752);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(1.704125);
   Graph_Graph_from_mc_statistical_error1092->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1092->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1092);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->SetSelected(H_dR_Bj1_tags_17);
}
