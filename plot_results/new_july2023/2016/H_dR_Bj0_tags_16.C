void H_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Mon Jul 24 10:11:22 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(0,0,1,1);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetFillStyle(4000);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1056.602,6.314516,1055555);
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
   st->SetMaximum(904661);
   
   TH1F *st_stack_41 = new TH1F("st_stack_41","",30,0,6);
   st_stack_41->SetMinimum(0.01);
   st_stack_41->SetMaximum(949894);
   st_stack_41->SetDirectory(0);
   st_stack_41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_41->SetLineColor(ci);
   st_stack_41->GetXaxis()->SetRange(1,30);
   st_stack_41->GetXaxis()->SetLabelFont(42);
   st_stack_41->GetXaxis()->SetLabelSize(0.035);
   st_stack_41->GetXaxis()->SetTitleSize(0.035);
   st_stack_41->GetXaxis()->SetTitleFont(42);
   st_stack_41->GetYaxis()->SetTitle("Events/0.2");
   st_stack_41->GetYaxis()->SetLabelFont(42);
   st_stack_41->GetYaxis()->SetLabelSize(0.05);
   st_stack_41->GetYaxis()->SetTitleSize(0.057);
   st_stack_41->GetYaxis()->SetTitleOffset(1.2);
   st_stack_41->GetYaxis()->SetTitleFont(42);
   st_stack_41->GetZaxis()->SetLabelFont(42);
   st_stack_41->GetZaxis()->SetLabelSize(0.035);
   st_stack_41->GetZaxis()->SetTitleSize(0.035);
   st_stack_41->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_41);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,81877.63);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,317478.8);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,337917.6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,272179.9);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,237660.8);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,187583.8);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,156147.7);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,132636.1);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,112591);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,103182.6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,82529.98);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,90336.8);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,90737.85);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,71365.33);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,63982.19);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,55883.8);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,46977.33);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,45152.88);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,34210.04);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,29634.5);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,24843.11);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,26733.21);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,16400.28);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,15238.26);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,10237.57);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,7064.709);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,5883.585);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,4301.564);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,22448.7);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,1600.009);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,3759.8);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,3095.58);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,8426.49);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,22510.43);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,9280.965);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,21988.68);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,7841.433);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,6746.48);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,5997.711);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,4670.556);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,5052.237);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,4196.559);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,4851.285);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,5698.486);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,4561.671);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,4434.725);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,3665.906);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,3474.803);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,3977.777);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,2685.803);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,2209.165);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,2688.201);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,3382.27);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,1603.046);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,2738.48);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,1205.484);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,1029.187);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,986.3727);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,822.7531);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,20472.84);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,400.3383);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,819.1085);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(174298);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,837.6795);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,3283.396);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,3843.449);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,3163.011);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,2537.686);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,2063.246);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,1733.38);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,1476.962);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,1317.737);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,1200.614);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,1090.478);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,1005.973);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,931.523);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,846.7525);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,776.8992);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,680.4289);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,562.461);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,468.0821);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,386.5467);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,323.7349);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,261.3024);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,213.3972);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,180.7043);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,132.7557);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,97.72804);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,77.50095);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,59.50415);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,38.16443);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,24.84551);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,17.94795);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,31.77523);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,12.19782);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,23.41207);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,24.86572);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,22.08777);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,19.60277);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,17.54313);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,16.01018);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,14.68832);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,13.86045);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,13.25472);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,12.56621);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,12.03876);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,11.45846);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,10.90397);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,10.43865);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,9.593514);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,8.794571);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,7.863155);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,7.172114);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,6.620547);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,5.7857);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,5.233687);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,4.920641);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,4.131418);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,3.479402);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,3.039397);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,2.721548);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,2.071176);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,1.618975);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,1.352556);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,1.715527);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(391454);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,8627.352);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,44813.44);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,61121.94);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,55876);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,44339.67);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,35093.39);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,28535.42);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,24197.45);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,21308.46);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,19332.7);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,17702.08);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,16371.34);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,14921.03);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,13336.77);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,11718.43);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,10181.12);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,8275.337);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,6817.667);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,5602.537);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,4530.009);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,3592.821);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,2829.872);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,2197.458);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,1682.107);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,1242.188);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,897.1056);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,640.4107);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,439.472);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,291.8029);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,196.3445);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,365.394);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,23.04446);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,52.6495);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,61.67562);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,59.09324);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,52.68252);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,46.87476);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,42.25223);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,38.90276);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,36.51256);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,34.79103);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,33.29634);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,32.02813);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,30.57422);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,28.88843);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,27.05269);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,25.18826);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,22.69805);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,20.59313);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,18.64374);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,16.74371);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,14.89257);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,13.20901);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,11.62826);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,10.16465);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,8.723929);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,7.41512);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,6.261681);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,5.18046);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,4.211805);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,3.458649);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,4.703399);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(7663533);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,732.3334);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,2326.946);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,2548.196);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,2064.005);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,1677.653);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,1378.29);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,1158.855);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,961.3038);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,882.8773);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,786.1121);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,752.2255);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,680.3124);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,626.9264);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,537.3686);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,524.9906);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,463.1399);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,355.4642);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,306.4744);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,259.8591);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,237.389);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,191.9486);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,158.4533);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,120.9682);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,97.84832);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,73.96111);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,55.18675);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,37.25998);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,23.78034);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,15.29652);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,14.3701);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,14.30644);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,10.54444);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,31.61068);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,40.4457);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,37.71857);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,33.84656);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,30.31126);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,26.55688);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,22.54409);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,22.12476);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,20.76462);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,21.09501);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,19.08649);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,18.47678);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,14.34846);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,16.87547);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,16.37186);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,13.78894);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,12.81048);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,11.30144);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,12.64695);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,10.25353);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,10.55481);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,7.26047);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,7.484139);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,6.191554);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,4.654789);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,4.344355);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,3.157523);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,1.421478);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,3.02241);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,1.396478);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(163132);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,550.2955);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,1494.246);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,1588.677);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,1228.601);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,1007.437);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,797.2904);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,628.3462);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,609.1792);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,480.291);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,441.4596);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,384.2877);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,374.3017);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,327.2865);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,326.132);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,244.0328);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,242.9758);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,228.4945);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,157.3863);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,168.5883);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,124.6071);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,105.7256);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,76.18961);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,65.06061);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,54.76799);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,54.38357);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,33.89643);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,20.53536);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,21.11654);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,10.35508);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,6.099836);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,11.25769);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,14.5572);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,36.75316);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,45.54199);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,45.84376);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,40.50739);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,34.21782);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,28.91784);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,33.26091);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,24.18383);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,24.45081);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,22.8333);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,23.54847);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,20.68614);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,21.58787);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,11.78711);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,16.85146);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,19.47067);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,11.73426);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,16.00356);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,12.65437);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,10.78244);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,9.970534);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,7.975801);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,7.452399);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,7.832311);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,3.950654);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,2.266773);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,6.560882);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,2.036945);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,1.651189);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,2.136988);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(113083);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(1,2.74942);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,9.794809);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(3,8.506018);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(4,8.677857);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(5,5.842518);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(6,2.663501);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(7,4.295969);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(8,3.522694);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(9,2.233904);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(10,2.405743);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(11,2.405743);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(12,1.632468);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(13,1.890226);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(14,1.546549);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(15,2.062065);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(16,0.7732744);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(17,0.6014356);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(18,1.031033);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(19,0.3436775);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(20,0.2577581);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(21,0.6014356);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(22,0.9451131);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(23,0.1718388);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(24,0.2577581);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(25,0.2577581);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(26,0.2577581);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(29,0.08591938);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(1,0.4860334);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,0.9173679);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(3,0.854887);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(4,0.863479);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(5,0.7085093);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(6,0.4783788);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(7,0.6075417);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(8,0.5501524);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(9,0.4381046);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(10,0.4546426);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(11,0.4546426);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(12,0.3745139);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(13,0.4029976);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(14,0.364525);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(15,0.4209173);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(16,0.2577581);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(17,0.2273213);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(18,0.2976334);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(19,0.1718388);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(20,0.1488167);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(21,0.2273213);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(22,0.2849623);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(23,0.1215083);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(24,0.1488167);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(25,0.1488167);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(26,0.1488167);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(29,0.08591938);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(1,8.792545);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,25.2945);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,24.21136);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,16.18338);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,12.42425);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(6,8.155404);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(7,7.900548);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(8,5.989125);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(9,6.37141);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(10,5.351984);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(11,4.714843);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,4.523701);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(13,4.587415);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(14,3.822846);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,3.504275);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(16,2.867134);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,2.548564);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(18,2.293707);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(19,1.975137);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(20,1.08314);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(21,1.40171);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(22,1.019426);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(23,1.337996);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(24,0.7645692);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(25,0.5734269);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(26,0.637141);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(27,0.3185705);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(28,0.1911423);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(29,0.1274282);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(31,0.0637141);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(1,0.7484712);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,1.269494);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,1.242016);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,1.015436);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.8897189);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(6,0.7208427);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(7,0.7094901);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(8,0.6177311);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(9,0.637141);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(10,0.5839493);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(11,0.5480894);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.5368645);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(13,0.540632);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(14,0.4935273);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.4725164);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(16,0.4274071);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.4029633);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(18,0.3822846);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(19,0.3547451);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(20,0.2626999);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(21,0.2988456);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(22,0.2548564);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(23,0.2919747);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(24,0.2207121);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(25,0.1911423);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(26,0.2014817);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(27,0.142469);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(28,0.1103561);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(29,0.09010534);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(31,0.0637141);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(2496);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,6.637197);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,22.24358);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,22.42296);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,18.83529);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,12.19809);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,10.22487);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,8.969185);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,5.919662);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,5.740278);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,3.767058);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,6.278429);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,3.587674);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,1.614453);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,3.40829);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,3.228907);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,3.767058);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,1.076302);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,1.43507);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(19,1.43507);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(20,0.8969185);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(21,1.43507);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(22,0.8969185);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.8969185);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(24,0.5381511);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(25,0.8969185);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(26,0.7175348);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(27,0.1793837);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(28,0.1793837);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(31,0.1793837);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,1.091148);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.997532);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,2.005571);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.838136);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,1.479236);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,1.354317);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,1.268434);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,1.030481);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,1.014747);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,0.8220394);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,1.061248);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.8022283);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.5381511);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.7819154);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.7610606);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.8220394);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.4393985);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.5073737);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(19,0.5073737);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(20,0.4011141);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(21,0.5073737);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(22,0.4011141);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.4011141);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(24,0.3107017);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(25,0.4011141);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(26,0.3587674);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(27,0.1793837);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(28,0.1793837);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(31,0.1793837);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(834);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,3.854008);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,14.71806);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,14.98429);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,10.81991);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,7.448692);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,5.743769);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,4.680261);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,3.958842);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,3.572613);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,3.171212);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,3.10776);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,2.738084);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,2.491174);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,2.235987);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,1.877346);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,1.583537);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,1.364214);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.9904002);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.7848714);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.6703823);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.5834809);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.4220925);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.3972636);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.3172591);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.2538073);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.1903555);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.1172479);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.06483121);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.04965795);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.03448469);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.04965795);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.07291207);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.1424848);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.1437676);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.1221673);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.1013639);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.08901058);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.08034858);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.07389707);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.07019984);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.06613871);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.0654737);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.06145631);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.05861991);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.0555364);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.05088799);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.04673661);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.04337949);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.03696141);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.03290352);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.03040916);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.02836981);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.02412942);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.02340898);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.02091945);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.01871092);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.01620413);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.01271732);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.009456604);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.008276324);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.006896937);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.008276324);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(67621);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,1.653099);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,6.623855);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,6.83725);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,5.072083);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,3.558263);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,2.722225);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,2.183724);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,1.977131);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,1.760155);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,1.577552);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,1.461545);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,1.393874);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,1.247791);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,1.122475);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,0.9971587);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,0.8775713);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.7021286);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.5893441);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.4862268);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.4060244);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.3451565);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.2764117);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.2381007);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.1700719);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.1374897);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.1120685);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.06731269);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.04762015);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.02756956);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.01360576);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.02971784);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.02432871);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.04869955);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.04947779);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.04261502);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.03569345);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.0312199);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.02796201);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.02660647);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.02510412);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.02376629);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.02287576);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.0223399);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.02113686);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.02004739);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.01889521);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.017726);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.01585542);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.01452627);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.01319438);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.01205718);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.01111674);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.009948274);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.00923315);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.007803436);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.007016244);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.006334484);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.004909282);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.00412919);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.003141843);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.002207145);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.003261956);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.06837519);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.3008508);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.3856361);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.3965761);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.2762358);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.1832455);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.1066653);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(8,0.09299025);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.08205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.05743516);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(11,0.05196514);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(12,0.05196514);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(13,0.05743516);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.05743516);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.05470015);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.05196514);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(17,0.04102511);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(18,0.02461507);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(19,0.01367504);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(20,0.01094003);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(21,0.01094003);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(22,0.01367504);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(23,0.01367504);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(24,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(25,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(27,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(29,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.01367504);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.028685);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.03247641);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.03293385);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.02748648);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.022387);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.01708012);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(8,0.0159477);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.01498025);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.01253338);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(11,0.01192162);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(12,0.01192162);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(13,0.01253338);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.01253338);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.01223133);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.01192162);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(17,0.01059264);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(18,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(19,0.006115663);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(20,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(21,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(22,0.006115663);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(23,0.006115663);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(24,0.003867885);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(25,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(27,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(29,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.02429408);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.146479);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.1814911);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.1632705);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.1257576);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.07931302);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.05430441);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.04465823);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.03322572);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.03751291);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.028224);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.02500861);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.02643767);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.02465134);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.01786329);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(16,0.0146479);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.01393337);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(18,0.01000344);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.009646178);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.009646178);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(21,0.00857438);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(22,0.003929924);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(23,0.006430785);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(24,0.002858127);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(25,0.003929924);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(26,0.001429063);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(27,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(28,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(29,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(30,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(31,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.00294609);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.007234082);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.008052363);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.007637471);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.006702901);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.005323141);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.004404669);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.003994354);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.003445347);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.003660886);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.003175448);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.002989101);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.003073317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.002967673);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.002526251);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(16,0.002287618);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.002231125);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(18,0.001890473);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.001856408);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.001856408);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(21,0.001750238);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(22,0.001184917);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(23,0.001515751);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(24,0.0010105);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(25,0.001184917);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(26,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(27,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(28,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(29,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(30,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(31,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0__81 = new TH1D("VbbHcc_tags_H_dR_Bj0__81","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(1,62242);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(2,181164);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(3,179522);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(4,147206);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(5,121241);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(6,102025);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(7,86133);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(8,74791);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(9,65920);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(10,60234);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(11,55117);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(12,51100);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(13,47063);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(14,43501);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(15,40043);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(16,35718);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(17,28700);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(18,24472);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(19,20372);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(20,17578);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(21,14365);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(22,11873);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(23,9439);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(24,7750);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(25,6032);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(26,4615);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(27,3374);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(28,2523);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(29,1648);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(30,1073);
   VbbHcc_tags_H_dR_Bj0__81->SetBinContent(31,1841);
   VbbHcc_tags_H_dR_Bj0__81->SetEntries(1508704);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__81->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__81->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__81->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__81->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__81->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__81->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__81->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__81->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__81->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__81->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__81->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__81->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__81->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__81->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__81->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__81->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__81->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__81->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__81->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1081[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1081[30] = {
   92649.07,
   369476,
   407097.4,
   334571.6,
   287265.1,
   226945.8,
   188231.9,
   159902.5,
   136600.2,
   124959.9,
   102477.1,
   108782.7,
   107556.5,
   86424.57,
   77258.28,
   67461.4,
   56405.44,
   52908.87,
   40632.62,
   34853.58,
   28999.29,
   30014.7,
   18967.53,
   17207.79,
   11707.96,
   8130.315,
   6641.987,
   4824.581,
   22791.29,
   1834.82};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1081[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1081[30] = {
   3095.742,
   8426.827,
   22510.61,
   9281.369,
   21988.82,
   7841.727,
   6746.746,
   5997.989,
   4670.835,
   5052.476,
   4196.825,
   4851.501,
   5698.647,
   4561.849,
   4434.867,
   3666.081,
   3474.971,
   3977.876,
   2685.949,
   2209.311,
   2688.29,
   3382.331,
   1603.132,
   2738.522,
   1205.562,
   1029.236,
   986.4085,
   822.8042,
   20472.84,
   400.3704};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1081);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetMinimum(1291.005);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetMaximum(472425.4);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__82 = new TH1D("data_mc_ratio__82","",30,0,6);
   data_mc_ratio__82->SetBinContent(1,0.6718038);
   data_mc_ratio__82->SetBinContent(2,0.4903269);
   data_mc_ratio__82->SetBinContent(3,0.4409804);
   data_mc_ratio__82->SetBinContent(4,0.4399835);
   data_mc_ratio__82->SetBinContent(5,0.4220527);
   data_mc_ratio__82->SetBinContent(6,0.4495567);
   data_mc_ratio__82->SetBinContent(7,0.4575898);
   data_mc_ratio__82->SetBinContent(8,0.4677287);
   data_mc_ratio__82->SetBinContent(9,0.4825762);
   data_mc_ratio__82->SetBinContent(10,0.4820266);
   data_mc_ratio__82->SetBinContent(11,0.537847);
   data_mc_ratio__82->SetBinContent(12,0.4697439);
   data_mc_ratio__82->SetBinContent(13,0.4375653);
   data_mc_ratio__82->SetBinContent(14,0.5033406);
   data_mc_ratio__82->SetBinContent(15,0.5183004);
   data_mc_ratio__82->SetBinContent(16,0.5294583);
   data_mc_ratio__82->SetBinContent(17,0.5088162);
   data_mc_ratio__82->SetBinContent(18,0.4625312);
   data_mc_ratio__82->SetBinContent(19,0.5013706);
   data_mc_ratio__82->SetBinContent(20,0.5043384);
   data_mc_ratio__82->SetBinContent(21,0.4953569);
   data_mc_ratio__82->SetBinContent(22,0.3955729);
   data_mc_ratio__82->SetBinContent(23,0.4976399);
   data_mc_ratio__82->SetBinContent(24,0.4503774);
   data_mc_ratio__82->SetBinContent(25,0.515205);
   data_mc_ratio__82->SetBinContent(26,0.5676287);
   data_mc_ratio__82->SetBinContent(27,0.5079806);
   data_mc_ratio__82->SetBinContent(28,0.5229469);
   data_mc_ratio__82->SetBinContent(29,0.07230832);
   data_mc_ratio__82->SetBinContent(30,0.5847985);
   data_mc_ratio__82->SetBinContent(31,0.4401299);
   data_mc_ratio__82->SetBinError(1,0.002692779);
   data_mc_ratio__82->SetBinError(2,0.001151993);
   data_mc_ratio__82->SetBinError(3,0.001040784);
   data_mc_ratio__82->SetBinError(4,0.001146763);
   data_mc_ratio__82->SetBinError(5,0.00121211);
   data_mc_ratio__82->SetBinError(6,0.001407444);
   data_mc_ratio__82->SetBinError(7,0.001559163);
   data_mc_ratio__82->SetBinError(8,0.001710288);
   data_mc_ratio__82->SetBinError(9,0.001879565);
   data_mc_ratio__82->SetBinError(10,0.001964039);
   data_mc_ratio__82->SetBinError(11,0.002290952);
   data_mc_ratio__82->SetBinError(12,0.002078025);
   data_mc_ratio__82->SetBinError(13,0.002016987);
   data_mc_ratio__82->SetBinError(14,0.002413306);
   data_mc_ratio__82->SetBinError(15,0.00259011);
   data_mc_ratio__82->SetBinError(16,0.002801484);
   data_mc_ratio__82->SetBinError(17,0.003003447);
   data_mc_ratio__82->SetBinError(18,0.002956693);
   data_mc_ratio__82->SetBinError(19,0.003512708);
   data_mc_ratio__82->SetBinError(20,0.003803972);
   data_mc_ratio__82->SetBinError(21,0.004133);
   data_mc_ratio__82->SetBinError(22,0.003630331);
   data_mc_ratio__82->SetBinError(23,0.005122149);
   data_mc_ratio__82->SetBinError(24,0.005115943);
   data_mc_ratio__82->SetBinError(25,0.006633602);
   data_mc_ratio__82->SetBinError(26,0.008355616);
   data_mc_ratio__82->SetBinError(27,0.008745297);
   data_mc_ratio__82->SetBinError(28,0.01041116);
   data_mc_ratio__82->SetBinError(29,0.001781188);
   data_mc_ratio__82->SetBinError(30,0.0178528);
   data_mc_ratio__82->SetBinError(31,0.08679881);
   data_mc_ratio__82->SetMinimum(0.4);
   data_mc_ratio__82->SetMaximum(1.6);
   data_mc_ratio__82->SetEntries(3135.713);
   data_mc_ratio__82->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__82->SetLineColor(ci);
   data_mc_ratio__82->SetLineWidth(2);
   data_mc_ratio__82->SetMarkerStyle(20);
   data_mc_ratio__82->SetMarkerSize(1.2);
   data_mc_ratio__82->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__82->GetXaxis()->SetRange(1,30);
   data_mc_ratio__82->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__82->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__82->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__82->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__82->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__82->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__82->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__82->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__82->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__82->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__82->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__82->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__82->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__82->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__82->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__82->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__82->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1082[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1082[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1082[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1082[30] = {
   0.03341364,
   0.02280751,
   0.05529539,
   0.02774105,
   0.07654537,
   0.0345533,
   0.03584273,
   0.03751028,
   0.03419347,
   0.04043278,
   0.04095379,
   0.0445981,
   0.05298281,
   0.05278416,
   0.05740313,
   0.05434338,
   0.06160702,
   0.07518355,
   0.06610327,
   0.06338836,
   0.09270192,
   0.1126892,
   0.08451979,
   0.1591443,
   0.1029694,
   0.1265924,
   0.1485111,
   0.1705442,
   0.8982747,
   0.2182069};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1082,Graph_from_mc_statistical_error_fy1082,Graph_from_mc_statistical_error_fex1082,Graph_from_mc_statistical_error_fey1082);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1082 = new TH1F("Graph_Graph_from_mc_statistical_error1082","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1082->SetMinimum(0.09155276);
   Graph_Graph_from_mc_statistical_error1082->SetMaximum(2.07793);
   Graph_Graph_from_mc_statistical_error1082->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1082->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1082->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1082);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
