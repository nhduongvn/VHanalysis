void H_dR_VbbHcc_18()
{
//=========Macro generated from canvas: H_dR_VbbHcc_18/H_dR_VbbHcc_18
//=========  (Tue Nov 22 09:16:00 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_18 = new TCanvas("H_dR_VbbHcc_18", "H_dR_VbbHcc_18",0,0,600,600);
   H_dR_VbbHcc_18->SetHighLightColor(2);
   H_dR_VbbHcc_18->Range(0,0,1,1);
   H_dR_VbbHcc_18->SetFillColor(0);
   H_dR_VbbHcc_18->SetFillStyle(4000);
   H_dR_VbbHcc_18->SetBorderMode(0);
   H_dR_VbbHcc_18->SetBorderSize(2);
   H_dR_VbbHcc_18->SetFrameFillStyle(1000);
   H_dR_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-902.4807,10.52419,901588.2);
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
   st->SetMaximum(772703.9);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",50,0,10);
   st_stack_23->SetMinimum(0.01);
   st_stack_23->SetMaximum(811339.1);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetRange(1,50);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetLabelSize(0.035);
   st_stack_23->GetXaxis()->SetTitleSize(0.035);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetLabelSize(0.05);
   st_stack_23->GetYaxis()->SetTitleSize(0.057);
   st_stack_23->GetYaxis()->SetTitleOffset(1.2);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetLabelSize(0.035);
   st_stack_23->GetZaxis()->SetTitleSize(0.035);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",50,0,10);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,213445);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,246515.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,188103.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,200977.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,232184.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,224251.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,303415.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,286321.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,297794.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,271237.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,330568);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,281237.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,294537.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,264885.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,113177.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,98525.83);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,48650.97);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,36748.34);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,23645.04);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,11704.86);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,6473.121);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,2775.888);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,1624.6);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,20019.66);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,20793.72);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,18065.87);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,18875.86);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,22006.82);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,19866.03);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,34519.91);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,22487.59);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,25498.62);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,21805.75);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,24153.35);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,22168.06);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,23629.44);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,21547.05);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,14075.64);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,13189.95);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,9176.784);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,8095.087);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,6240.212);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,4229.765);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,3284.986);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,1972.731);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,1624.6);
   VbbHcc_algo_H_dR_stack_1->SetEntries(2374);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",50,0,10);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,0.1194176);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,434.4852);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,755.3833);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,962.8078);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,1341.728);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,1662.351);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,1781.323);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,1686.463);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,1629.65);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,1653.318);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,1689.833);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,1728.311);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,1707.545);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,1711.703);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,1579.377);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,1033.963);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,685.4451);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,464.7323);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,305.4355);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,190.1782);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,111.129);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,56.80425);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,26.03399);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,12.54926);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,3.942195);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,1.830974);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.4021097);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.08477039);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,11.33081);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,12.93318);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,14.13874);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,15.61147);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,16.56477);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,18.38166);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,16.97166);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,17.18454);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,17.66855);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,17.15937);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,17.40853);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,16.44054);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,16.53672);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,15.53479);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,12.78699);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,9.14517);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,7.5817);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,5.795214);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,4.545713);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,3.389647);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,2.324681);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,1.656827);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.188284);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.5633408);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.3647488);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1526657);
   VbbHcc_algo_H_dR_stack_2->SetEntries(331043);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",50,0,10);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,2.295269);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,3820.981);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,8375.879);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,12188.38);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,15907.32);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,17421.61);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,17160.55);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,16313.73);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,15605.76);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,15300.9);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,14766.92);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,13926.86);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,12639.32);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,11406.9);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,10032.5);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,5931.309);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,3666.303);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,2248.657);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,1311.525);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,736.3245);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,386.688);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,203.7256);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,92.65167);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,36.15664);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,13.27362);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,3.780057);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,0.5794402);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,0.03785096);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.4024385);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,17.28945);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,25.10646);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,30.51613);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,35.00008);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,36.4935);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,36.95419);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,35.62457);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,35.3713);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,35.73376);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,34.34497);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,33.35383);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,31.81426);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,30.0573);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,27.7534);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,21.97977);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,17.13019);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,13.80387);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,9.727756);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,7.792321);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,5.18803);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,3.915704);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,2.658232);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,1.743737);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,0.9571996);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,0.5282384);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,0.185577);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,0.03785096);
   VbbHcc_algo_H_dR_stack_3->SetEntries(3142446);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",50,0,10);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,371.9564);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,489.2844);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,476.9952);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,453.0937);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,417.0398);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,434.2031);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,475.6828);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,489.6178);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,468.4068);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,508.094);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,514.4435);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,481.6581);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,484.851);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,427.6801);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,255.5331);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,159.4399);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,79.46086);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,49.517);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,34.55052);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,10.68602);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,7.726381);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,3.128736);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,1.70683);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,0.718604);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,17.42247);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,19.09929);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,17.23494);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,16.18731);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,15.57299);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,15.85198);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,16.72297);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,17.61173);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,16.67532);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,17.10107);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,17.20977);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,17.02959);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,16.69704);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,15.84496);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,12.23699);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,9.701856);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,6.773614);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,5.528413);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,4.461607);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,2.468301);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,3.014443);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,1.282709);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,0.9889753);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,0.6416059);
   VbbHcc_algo_H_dR_stack_4->SetEntries(12998);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",50,0,10);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,114.8361);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,306.7023);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,259.2212);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,216.1879);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,158.5342);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,185.1842);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,160.6351);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,188.673);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,229.1566);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,202.0197);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,201.3253);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,264.1848);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,251.0645);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,212.489);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,104.5889);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,33.982);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,34.97593);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,20.05018);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,18.51113);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,7.623794);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,7.116152);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,5.088823);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,3.177305);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,18.00204);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,28.50919);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,25.66197);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,23.50099);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,20.03191);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,21.99249);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,20.27241);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,22.52248);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,24.40816);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,22.93718);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,28.84721);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,25.71995);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,25.07677);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,22.92447);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,16.81585);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,9.258771);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,9.015112);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,7.001793);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,7.055652);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,4.427492);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,3.749);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,3.703547);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,3.177305);
   VbbHcc_algo_H_dR_stack_5->SetEntries(1311);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",50,0,10);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,2.509371);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,4.552006);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,9.846579);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,5.191518);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,8.298544);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,7.157732);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,7.284235);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,8.063123);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(11,7.43508);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,9.944061);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,7.369167);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,7.748733);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,7.232674);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,7.251809);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,2.107239);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,1.268397);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,1.11674);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,1.493642);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,0.3336772);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.9502542);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,1.307494);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,1.991279);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,1.395862);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,1.788169);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,1.591468);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,1.655583);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,1.782269);
   VbbHcc_algo_H_dR_stack_6->SetBinError(11,2.15944);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,1.966303);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,1.968891);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,1.799844);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,1.660377);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,1.726953);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.8608594);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.6683476);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.6465632);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.692562);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,0.3336772);
   VbbHcc_algo_H_dR_stack_6->SetEntries(289);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",50,0,10);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,18.59307);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,31.68973);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,35.88236);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,36.26024);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,35.70067);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,30.76613);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,33.4529);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,23.06805);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,23.89399);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,20.91243);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,24.95512);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,17.48831);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,15.49655);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,11.65655);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,8.179593);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,2.235838);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,3.525857);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,1.379533);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,0.6258753);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,0.6009938);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,0.2981703);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,2.171605);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,2.798951);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,2.917977);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,2.935646);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,2.951199);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,2.727276);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,2.835311);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,2.295293);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,2.408005);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,2.221765);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,2.440082);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,2.06749);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,1.936822);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,1.710714);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,1.434902);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.7394639);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.8762714);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.5396571);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.3708518);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.3508847);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.2981703);
   VbbHcc_algo_H_dR_stack_7->SetEntries(1657);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",50,0,10);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,8.058381);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,23.48579);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,29.68972);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,31.5504);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,35.92143);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,38.16729);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,41.46848);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,38.21828);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,26.50517);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,26.6457);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,26.02013);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,21.5289);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,15.05321);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,11.91081);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,5.731976);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,4.300425);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,1.902076);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,0.8653185);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,0.5207622);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,0.1568058);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,0.2170818);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.372075);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,2.363601);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,3.580111);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,2.749668);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,2.932477);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,3.024656);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,3.177564);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,3.152075);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,2.532636);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,2.513771);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,2.503074);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,2.241038);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.903368);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.686007);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,1.190136);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,1.026183);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,0.6794278);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,0.5425441);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,0.3717381);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.1568058);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.2170818);
   VbbHcc_algo_H_dR_stack_8->SetEntries(1688);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",50,0,10);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(2,0.00910539);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,5.88454);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,9.331333);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,10.05355);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,10.18367);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,9.79292);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,8.560648);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,7.543742);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,7.046207);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,6.533101);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,6.177168);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,5.573292);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,4.649459);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,3.977414);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,3.269616);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,1.530831);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,0.9108263);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,0.5247511);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,0.3255048);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,0.1798547);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,0.1118947);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,0.05966817);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,0.02951334);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,0.009684878);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,0.00468992);
   VbbHcc_algo_H_dR_stack_9->SetBinError(2,0.005303719);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.1342423);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.1980285);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.1754093);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.17442);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.2005498);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.1694767);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.1493753);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.1793686);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.1474652);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.1376024);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.1661272);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.1172388);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.1049283);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.09468742);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.06664188);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.04999786);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.03857731);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.0294396);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.02168463);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.01707176);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.01276569);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.01111384);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.004922607);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.003346415);
   VbbHcc_algo_H_dR_stack_9->SetEntries(40744);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",50,0,10);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.000714936);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,1.006154);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,2.157307);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,2.792839);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,3.04785);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,2.62442);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,1.945169);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,1.42238);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,1.240153);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,1.179008);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,1.299408);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,1.259691);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,1.212053);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,1.121257);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,0.957143);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,0.5788672);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,0.3017698);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,0.1941389);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,0.1172261);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,0.07336943);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,0.03487206);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.0215183);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.009875461);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.004620033);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.002916516);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.0006978679);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.000714936);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.02529666);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.03709296);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.04229126);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.04423686);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.04101668);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.03529648);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.03014466);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.02810012);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.02743774);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.0287755);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.0283004);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.02778876);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.02671429);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.02466525);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.01917673);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.01381719);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.01108268);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.008562197);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.006668318);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.004611835);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.003611054);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.002472706);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.001650195);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.001330779);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.0006978679);
   VbbHcc_algo_H_dR_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",50,0,10);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.0289898);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.1348531);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.1094602);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.2473043);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.3150329);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.3329509);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.443196);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.4278642);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.3705408);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.2514308);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.1866339);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.1770182);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.08931476);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.1019144);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.0240657);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.006646031);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.004616078);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.002794086);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.007214736);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.001281373);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.00192394);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.008686138);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.01945275);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.01805844);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.02530551);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.02919485);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.02957577);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.03538684);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.0341786);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.03117273);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.02601242);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.02196433);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.02159007);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.01531084);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.01779437);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.007461091);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.004080327);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.002923361);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.002794086);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.004174966);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.001281373);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.00192394);
   VbbHcc_algo_H_dR_stack_11->SetEntries(1458);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",50,0,10);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,264.0324);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,614.7326);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,951.7274);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,1707.206);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,2478.607);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,2918.453);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,2586.237);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,1823.268);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,1168.736);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,956.2407);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,712.405);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,609.9197);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,605.903);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,464.4557);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,181.3004);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,111.7087);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,90.35918);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,36.47616);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,19.65748);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,4.812581);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,47.83114);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,64.3576);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,81.67507);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,109.2014);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,132.7094);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,147.7389);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,134.9337);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,112.9599);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,88.64838);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,82.09898);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,70.74947);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,66.32277);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,66.00838);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,57.37398);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,35.64612);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,28.4822);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,25.16512);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,16.20496);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,10.95378);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,4.812581);
   VbbHcc_algo_H_dR_stack_12->SetEntries(2917);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR__45 = new TH1D("VbbHcc_algo_H_dR__45","",50,0,10);
   VbbHcc_algo_H_dR__45->SetBinContent(2,15);
   VbbHcc_algo_H_dR__45->SetBinContent(3,40046);
   VbbHcc_algo_H_dR__45->SetBinContent(4,44233);
   VbbHcc_algo_H_dR__45->SetBinContent(5,34836);
   VbbHcc_algo_H_dR__45->SetBinContent(6,34519);
   VbbHcc_algo_H_dR__45->SetBinContent(7,35714);
   VbbHcc_algo_H_dR__45->SetBinContent(8,37731);
   VbbHcc_algo_H_dR__45->SetBinContent(9,41102);
   VbbHcc_algo_H_dR__45->SetBinContent(10,45142);
   VbbHcc_algo_H_dR__45->SetBinContent(11,49698);
   VbbHcc_algo_H_dR__45->SetBinContent(12,56807);
   VbbHcc_algo_H_dR__45->SetBinContent(13,63755);
   VbbHcc_algo_H_dR__45->SetBinContent(14,71153);
   VbbHcc_algo_H_dR__45->SetBinContent(15,75668);
   VbbHcc_algo_H_dR__45->SetBinContent(16,73685);
   VbbHcc_algo_H_dR__45->SetBinContent(17,45921);
   VbbHcc_algo_H_dR__45->SetBinContent(18,31237);
   VbbHcc_algo_H_dR__45->SetBinContent(19,21269);
   VbbHcc_algo_H_dR__45->SetBinContent(20,13542);
   VbbHcc_algo_H_dR__45->SetBinContent(21,8587);
   VbbHcc_algo_H_dR__45->SetBinContent(22,5220);
   VbbHcc_algo_H_dR__45->SetBinContent(23,3126);
   VbbHcc_algo_H_dR__45->SetBinContent(24,1595);
   VbbHcc_algo_H_dR__45->SetBinContent(25,746);
   VbbHcc_algo_H_dR__45->SetBinContent(26,292);
   VbbHcc_algo_H_dR__45->SetBinContent(27,103);
   VbbHcc_algo_H_dR__45->SetBinContent(28,15);
   VbbHcc_algo_H_dR__45->SetBinContent(29,4);
   VbbHcc_algo_H_dR__45->SetEntries(835761);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__45->SetLineColor(ci);
   VbbHcc_algo_H_dR__45->SetLineWidth(2);
   VbbHcc_algo_H_dR__45->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__45->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__45->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_H_dR__45->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__45->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__45->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__45->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__45->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__45->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__45->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__45->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__45->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__45->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__45->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__45->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__45->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__45->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1045[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1045[50] = {
   0,
   2.424507,
   218487.4,
   257129,
   203031.2,
   220689.8,
   254415.7,
   246818.1,
   324730.3,
   306136.3,
   316681,
   289426.1,
   347716.8,
   296992.9,
   309040.8,
   277637.1,
   120702.7,
   103191.7,
   51576.42,
   38475.53,
   24646,
   12226.55,
   6748.875,
   2902.988,
   1675.027,
   17.94203,
   8.789034,
   1.198632,
   0.03785096,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1045[50] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1045[50] = {
   0,
   0.4113045,
   20019.74,
   20793.87,
   18066.11,
   18876.24,
   22007.27,
   19866.64,
   34520.21,
   22487.93,
   25498.82,
   21805.96,
   24153.5,
   22168.21,
   23629.58,
   21547.17,
   14075.73,
   13190.01,
   9176.839,
   8095.116,
   6240.234,
   4229.776,
   3284.993,
   1972.737,
   1624.602,
   1.282675,
   3.241504,
   0.3238366,
   0.03785096,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_H_dR_fx1045,Graph_from_VbbHcc_algo_H_dR_fy1045,Graph_from_VbbHcc_algo_H_dR_fex1045,Graph_from_VbbHcc_algo_H_dR_fey1045);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1045 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1045","",100,0,11);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->SetMaximum(409057.3);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1045->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1045);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_VbbHcc_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__46 = new TH1D("data_mc_ratio__46","",50,0,10);
   data_mc_ratio__46->SetBinContent(2,6.186824);
   data_mc_ratio__46->SetBinContent(3,0.1832874);
   data_mc_ratio__46->SetBinContent(4,0.1720265);
   data_mc_ratio__46->SetBinContent(5,0.1715796);
   data_mc_ratio__46->SetBinContent(6,0.1564141);
   data_mc_ratio__46->SetBinContent(7,0.1403765);
   data_mc_ratio__46->SetBinContent(8,0.1528697);
   data_mc_ratio__46->SetBinContent(9,0.1265727);
   data_mc_ratio__46->SetBinContent(10,0.1474572);
   data_mc_ratio__46->SetBinContent(11,0.1569339);
   data_mc_ratio__46->SetBinContent(12,0.1962746);
   data_mc_ratio__46->SetBinContent(13,0.1833533);
   data_mc_ratio__46->SetBinContent(14,0.2395781);
   data_mc_ratio__46->SetBinContent(15,0.2448479);
   data_mc_ratio__46->SetBinContent(16,0.2654004);
   data_mc_ratio__46->SetBinContent(17,0.3804471);
   data_mc_ratio__46->SetBinContent(18,0.3027084);
   data_mc_ratio__46->SetBinContent(19,0.4123784);
   data_mc_ratio__46->SetBinContent(20,0.3519639);
   data_mc_ratio__46->SetBinContent(21,0.3484136);
   data_mc_ratio__46->SetBinContent(22,0.4269396);
   data_mc_ratio__46->SetBinContent(23,0.4631883);
   data_mc_ratio__46->SetBinContent(24,0.549434);
   data_mc_ratio__46->SetBinContent(25,0.445366);
   data_mc_ratio__46->SetBinContent(26,16.27464);
   data_mc_ratio__46->SetBinContent(27,11.71915);
   data_mc_ratio__46->SetBinContent(28,12.51427);
   data_mc_ratio__46->SetBinContent(29,105.6776);
   data_mc_ratio__46->SetBinError(2,1.597431);
   data_mc_ratio__46->SetBinError(3,0.0009159107);
   data_mc_ratio__46->SetBinError(4,0.0008179412);
   data_mc_ratio__46->SetBinError(5,0.0009192876);
   data_mc_ratio__46->SetBinError(6,0.0008418734);
   data_mc_ratio__46->SetBinError(7,0.0007428058);
   data_mc_ratio__46->SetBinError(8,0.0007869953);
   data_mc_ratio__46->SetBinError(9,0.0006243221);
   data_mc_ratio__46->SetBinError(10,0.0006940257);
   data_mc_ratio__46->SetBinError(11,0.0007039591);
   data_mc_ratio__46->SetBinError(12,0.0008234992);
   data_mc_ratio__46->SetBinError(13,0.0007261586);
   data_mc_ratio__46->SetBinError(14,0.0008981534);
   data_mc_ratio__46->SetBinError(15,0.0008901031);
   data_mc_ratio__46->SetBinError(16,0.0009777144);
   data_mc_ratio__46->SetBinError(17,0.001775369);
   data_mc_ratio__46->SetBinError(18,0.001712733);
   data_mc_ratio__46->SetBinError(19,0.002827628);
   data_mc_ratio__46->SetBinError(20,0.003024522);
   data_mc_ratio__46->SetBinError(21,0.003759883);
   data_mc_ratio__46->SetBinError(22,0.005909235);
   data_mc_ratio__46->SetBinError(23,0.008284439);
   data_mc_ratio__46->SetBinError(24,0.01375736);
   data_mc_ratio__46->SetBinError(25,0.01630601);
   data_mc_ratio__46->SetBinError(26,0.9524011);
   data_mc_ratio__46->SetBinError(27,1.154722);
   data_mc_ratio__46->SetBinError(28,3.23117);
   data_mc_ratio__46->SetBinError(29,52.83881);
   data_mc_ratio__46->SetMinimum(0.4);
   data_mc_ratio__46->SetMaximum(1.6);
   data_mc_ratio__46->SetEntries(1.795476);
   data_mc_ratio__46->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__46->SetLineColor(ci);
   data_mc_ratio__46->SetLineWidth(2);
   data_mc_ratio__46->SetMarkerStyle(20);
   data_mc_ratio__46->SetMarkerSize(1.2);
   data_mc_ratio__46->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__46->GetXaxis()->SetRange(1,50);
   data_mc_ratio__46->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__46->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__46->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__46->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__46->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__46->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1046[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1046[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1046[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1046[50] = {
   0,
   0.1696446,
   0.09162881,
   0.08086939,
   0.08898196,
   0.08553287,
   0.08650123,
   0.08049102,
   0.1063043,
   0.07345724,
   0.08051895,
   0.07534204,
   0.06946315,
   0.07464223,
   0.07646104,
   0.07760911,
   0.1166148,
   0.1278204,
   0.177927,
   0.2103965,
   0.2531946,
   0.34595,
   0.4867467,
   0.6795541,
   0.9698958,
   0.07148996,
   0.3688123,
   0.2701719,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1046,Graph_from_mc_statistical_error_fy1046,Graph_from_mc_statistical_error_fex1046,Graph_from_mc_statistical_error_fey1046);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1046 = new TH1F("Graph_Graph_from_mc_statistical_error1046","",100,0,11);
   Graph_Graph_from_mc_statistical_error1046->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1046->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1046->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1046->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1046);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_18->cd();
   H_dR_VbbHcc_18->Modified();
   H_dR_VbbHcc_18->cd();
   H_dR_VbbHcc_18->SetSelected(H_dR_VbbHcc_18);
}
