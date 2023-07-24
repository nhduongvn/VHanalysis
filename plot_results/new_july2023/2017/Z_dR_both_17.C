void Z_dR_both_17()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Mon Jul 24 10:12:09 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(0,0,1,1);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-413.5292,6.314516,413125.7);
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
   st->SetMaximum(354068.3);
   
   TH1F *st_stack_210 = new TH1F("st_stack_210","",30,0,6);
   st_stack_210->SetMinimum(0.01);
   st_stack_210->SetMaximum(371771.8);
   st_stack_210->SetDirectory(0);
   st_stack_210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_210->SetLineColor(ci);
   st_stack_210->GetXaxis()->SetRange(1,30);
   st_stack_210->GetXaxis()->SetLabelFont(42);
   st_stack_210->GetXaxis()->SetLabelSize(0.035);
   st_stack_210->GetXaxis()->SetTitleSize(0.035);
   st_stack_210->GetXaxis()->SetTitleFont(42);
   st_stack_210->GetYaxis()->SetTitle("Events/0.2");
   st_stack_210->GetYaxis()->SetLabelFont(42);
   st_stack_210->GetYaxis()->SetLabelSize(0.05);
   st_stack_210->GetYaxis()->SetTitleSize(0.057);
   st_stack_210->GetYaxis()->SetTitleOffset(1.2);
   st_stack_210->GetYaxis()->SetTitleFont(42);
   st_stack_210->GetZaxis()->SetLabelFont(42);
   st_stack_210->GetZaxis()->SetLabelSize(0.035);
   st_stack_210->GetZaxis()->SetTitleSize(0.035);
   st_stack_210->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_210);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,39.29334);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,144331);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,148286.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,109104.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,87589.45);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,63626.21);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,63881.26);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,60758.85);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,56554.83);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,51821.82);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,51481);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,63823.24);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,62794.44);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,80257.52);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,84498.34);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,74928.61);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,60310.12);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,57200.36);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,45117.69);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,38330.05);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,48326.82);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,29620.56);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,19781.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,16178.91);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,17608.52);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,18444.79);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,17299.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,14739.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,10905.49);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,6329.938);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,13.96522);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,3690.924);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,4417.184);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,4315.269);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,3457.143);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,2699.932);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,3246.938);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,3685.753);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,3096.841);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,2971.012);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,2752.332);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,3729.101);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,3831.331);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,14170.49);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,15404.66);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,11059.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,3166.649);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,3192.704);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,3008.872);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,2969.839);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,17768.08);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,2572.059);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,2038.215);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,1308.074);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,2160.158);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,1703.988);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,1573.042);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,1251.183);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,1110.182);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,852.5138);
   VbbHcc_both_Z_dR_stack_1->SetEntries(166831);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.05375503);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,287.0424);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,517.0226);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,572.3559);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,657.518);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,718.8652);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,766.584);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,840.8065);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,872.3111);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,928.9997);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,1022.572);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,1067.711);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,1073.721);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,1100.757);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,1117.368);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,1009.947);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,928.4143);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,836.233);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,732.6364);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,596.7201);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,512.3398);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,414.0356);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,344.5016);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,265.0021);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,239.3174);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,172.4229);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,130.0394);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,100.1598);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,60.92351);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,57.49653);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.09934472);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,7.654357);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,10.09014);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,10.74645);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,11.51502);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,12.04627);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,12.54707);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,13.15184);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,13.26458);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,13.64706);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,14.3394);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,14.61181);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,14.57135);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,14.76687);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,14.97069);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,14.1156);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,13.52063);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,12.85024);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,12.05244);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,10.89959);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,10.10033);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,9.129009);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,8.48347);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,7.257467);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,7.006223);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,5.932449);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,5.228315);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,4.535578);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,3.55249);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,3.508362);
   VbbHcc_both_Z_dR_stack_2->SetEntries(217888);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_3 = new TH1D("VbbHcc_both_Z_dR_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,2.362041);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,4433.34);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,8290.259);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,9628.95);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,10972.12);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,11914.89);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,12699.63);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,13610.74);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,14772.36);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,16221.08);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,17834.81);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,19680.82);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,21268.4);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,22417.98);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,22769.43);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,21704.37);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,20158.19);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,17748.96);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,15136.99);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,12360.73);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,9860.017);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,7696.487);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,5908.803);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,4524.207);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,3490.79);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,2653.218);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,1992.548);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,1422.737);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,840.5778);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,692.5156);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.4109763);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,18.29606);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,25.10298);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,27.08633);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,28.89768);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,30.11211);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,31.07574);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,32.17234);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,33.54626);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,35.1949);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,36.96319);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,38.90602);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,40.52594);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,41.67243);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,42.06135);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,41.11317);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,39.64421);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,37.19201);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,34.298);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,30.96273);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,27.60023);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,24.3366);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,21.302);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,18.59364);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,16.31757);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,14.19999);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,12.29748);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,10.36314);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,7.968121);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,7.187471);
   VbbHcc_both_Z_dR_stack_3->SetEntries(4843140);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_4 = new TH1D("VbbHcc_both_Z_dR_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(2,0.3841611);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,1004.098);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,1457.165);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,1316.307);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,1057.727);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,756.5146);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,554.3232);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,464.5856);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,405.5479);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,390.7251);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,421.3456);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,432.1386);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,463.4299);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,510.2943);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,502.7076);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,482.269);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,429.2231);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,390.1975);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,318.9194);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,272.9303);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,235.7323);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,209.1407);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,167.1155);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,171.7381);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,150.3045);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,160.0292);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,148.7248);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,130.6078);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,77.78976);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,52.85454);
   VbbHcc_both_Z_dR_stack_4->SetBinError(2,0.1950005);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,14.91898);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,18.79106);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,23.57541);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,24.47393);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,20.28216);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,17.73534);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,17.44319);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,15.18304);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,13.56063);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,16.35567);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,16.17991);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,16.08811);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,16.87071);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,15.2439);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,15.27276);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,14.87563);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,15.12541);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,12.8554);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,10.27911);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,11.888);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,9.915193);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,8.977754);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,10.01864);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,7.445468);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,9.326577);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,8.084026);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,7.835181);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,5.21545);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,5.124095);
   VbbHcc_both_Z_dR_stack_4->SetEntries(99118);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_5 = new TH1D("VbbHcc_both_Z_dR_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(2,0.2919522);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,729.2893);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,732.0739);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,473.8945);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,380.466);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,340.7044);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,269.468);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,272.7702);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,225.709);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,261.1852);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,248.2066);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,237.8661);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,306.6839);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,336.3035);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,334.6845);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,329.2222);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,235.5074);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,254.736);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,227.6297);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,193.1851);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,149.7229);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,118.5532);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,125.7747);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,94.85793);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,64.51377);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,74.71425);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,79.73807);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,85.09702);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,53.669);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,37.57872);
   VbbHcc_both_Z_dR_stack_5->SetBinError(2,0.1686598);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,25.05182);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,28.72542);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,22.22286);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,21.03469);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,22.32734);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,12.72672);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,20.73787);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,15.823);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,20.38395);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,17.73776);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,18.35238);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,23.04598);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,20.98496);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,24.54213);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,24.04003);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,15.85364);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,22.27561);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,18.92144);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,17.46672);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,12.24376);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,14.66531);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,15.56672);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,12.92575);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,5.776623);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,10.53166);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,7.560072);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,13.83734);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,5.617186);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,5.327595);
   VbbHcc_both_Z_dR_stack_5->SetEntries(45557);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(3,3.161869);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(4,2.840858);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(5,2.741136);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(6,1.357257);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(7,2.554792);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(8,1.958822);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(9,1.775806);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(10,1.466611);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(11,0.6751878);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(12,3.085885);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(13,1.155247);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(14,3.071542);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(15,2.66931);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(16,2.08361);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(17,4.027231);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(18,1.413886);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(19,1.712958);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(20,1.444392);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(21,0.2358588);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(22,1.569652);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(23,0.9559977);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(24,0.6207499);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(25,0.235084);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(26,0.3661473);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(27,0.09739163);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(28,0.1369744);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(29,0.3203499);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(31,0.255946);
   VbbHcc_both_Z_dR_stack_6->SetBinError(3,0.8395121);
   VbbHcc_both_Z_dR_stack_6->SetBinError(4,0.821524);
   VbbHcc_both_Z_dR_stack_6->SetBinError(5,0.8017193);
   VbbHcc_both_Z_dR_stack_6->SetBinError(6,0.5567161);
   VbbHcc_both_Z_dR_stack_6->SetBinError(7,0.7594871);
   VbbHcc_both_Z_dR_stack_6->SetBinError(8,0.6323084);
   VbbHcc_both_Z_dR_stack_6->SetBinError(9,0.6423002);
   VbbHcc_both_Z_dR_stack_6->SetBinError(10,0.5318909);
   VbbHcc_both_Z_dR_stack_6->SetBinError(11,0.3913121);
   VbbHcc_both_Z_dR_stack_6->SetBinError(12,0.8647996);
   VbbHcc_both_Z_dR_stack_6->SetBinError(13,0.5240104);
   VbbHcc_both_Z_dR_stack_6->SetBinError(14,0.8170328);
   VbbHcc_both_Z_dR_stack_6->SetBinError(15,0.7835898);
   VbbHcc_both_Z_dR_stack_6->SetBinError(16,0.6702738);
   VbbHcc_both_Z_dR_stack_6->SetBinError(17,0.9894902);
   VbbHcc_both_Z_dR_stack_6->SetBinError(18,0.5916852);
   VbbHcc_both_Z_dR_stack_6->SetBinError(19,0.6208612);
   VbbHcc_both_Z_dR_stack_6->SetBinError(20,0.5995954);
   VbbHcc_both_Z_dR_stack_6->SetBinError(21,0.2358588);
   VbbHcc_both_Z_dR_stack_6->SetBinError(22,0.5971543);
   VbbHcc_both_Z_dR_stack_6->SetBinError(23,0.4855152);
   VbbHcc_both_Z_dR_stack_6->SetBinError(24,0.3593624);
   VbbHcc_both_Z_dR_stack_6->SetBinError(25,0.235084);
   VbbHcc_both_Z_dR_stack_6->SetBinError(26,0.2729713);
   VbbHcc_both_Z_dR_stack_6->SetBinError(27,0.07023776);
   VbbHcc_both_Z_dR_stack_6->SetBinError(28,0.1138058);
   VbbHcc_both_Z_dR_stack_6->SetBinError(29,0.2267219);
   VbbHcc_both_Z_dR_stack_6->SetBinError(31,0.255946);
   VbbHcc_both_Z_dR_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,11.6657);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,19.05175);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,14.38678);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,10.07378);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,4.964264);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,3.563491);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,1.971287);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,1.139339);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(11,2.485481);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(12,1.803128);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,1.232565);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,1.759374);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,3.578346);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,3.228395);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,1.615134);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(18,2.299633);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,1.561697);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(20,2.778789);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,0.9659052);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(22,1.275641);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(23,0.5762288);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,1.680728);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(25,1.45911);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(26,1.200671);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(27,1.163189);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,1.044071);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,1.013128);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(30,0.1211595);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(31,0.4010693);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,1.409558);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,1.784351);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,1.561734);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,1.327501);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.900877);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.770919);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.6173317);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.4459586);
   VbbHcc_both_Z_dR_stack_7->SetBinError(11,0.6648193);
   VbbHcc_both_Z_dR_stack_7->SetBinError(12,0.5746025);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.4492346);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.5413996);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.7773542);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.7412308);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.5327011);
   VbbHcc_both_Z_dR_stack_7->SetBinError(18,0.61208);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.5218435);
   VbbHcc_both_Z_dR_stack_7->SetBinError(20,0.6660426);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.3976808);
   VbbHcc_both_Z_dR_stack_7->SetBinError(22,0.4340146);
   VbbHcc_both_Z_dR_stack_7->SetBinError(23,0.3048346);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.5439626);
   VbbHcc_both_Z_dR_stack_7->SetBinError(25,0.4907552);
   VbbHcc_both_Z_dR_stack_7->SetBinError(26,0.4581181);
   VbbHcc_both_Z_dR_stack_7->SetBinError(27,0.4358608);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.4272271);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.3979398);
   VbbHcc_both_Z_dR_stack_7->SetBinError(30,0.1211595);
   VbbHcc_both_Z_dR_stack_7->SetBinError(31,0.2845854);
   VbbHcc_both_Z_dR_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_8 = new TH1D("VbbHcc_both_Z_dR_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,9.665919);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,15.02306);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,14.17187);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,7.060541);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,5.058406);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,3.694983);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,2.320295);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,1.559514);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,2.289411);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,2.350265);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,2.793784);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,2.851587);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,3.739806);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,4.522987);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,2.397067);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,4.816611);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,3.064304);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,1.68541);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,2.887288);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,1.020387);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,0.646208);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(24,0.4163601);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(25,1.446754);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(26,0.6686421);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,1.649817);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,1.516696);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,1.380338);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(31,0.1416166);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,1.462315);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,1.830915);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.756282);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,1.230525);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,1.088021);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,0.8635326);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,0.740728);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.5602481);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.7311974);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.6947134);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.7806702);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,0.7738374);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,0.8759641);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,0.9807613);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,0.7044653);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,1.03839);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.832643);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.6111593);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.8119163);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.474018);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.326868);
   VbbHcc_both_Z_dR_stack_8->SetBinError(24,0.2972862);
   VbbHcc_both_Z_dR_stack_8->SetBinError(25,0.57667);
   VbbHcc_both_Z_dR_stack_8->SetBinError(26,0.3876784);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.5912732);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.5828729);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.563696);
   VbbHcc_both_Z_dR_stack_8->SetBinError(31,0.1416166);
   VbbHcc_both_Z_dR_stack_8->SetEntries(481);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_9 = new TH1D("VbbHcc_both_Z_dR_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,2.531412);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,5.770706);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,7.148953);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,6.9442);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,6.098505);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,3.949217);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,2.765937);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,2.28361);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,2.060363);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,2.013575);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,2.244585);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,2.498775);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,2.725535);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,2.958784);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,2.730724);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,2.390123);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,1.982282);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,1.619058);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,1.19595);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,0.9195672);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,0.7523891);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,0.8279436);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,0.916773);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,0.9506306);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,0.9255183);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,0.8997574);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.5938531);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.3347522);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.1627058);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.06928997);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.1050062);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.1174022);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.1152491);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.1078921);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.08651742);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.07186026);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.06548027);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.06182267);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.06155067);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.06543462);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.06849433);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.07253187);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.07491873);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.07269583);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.06716575);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.06126786);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.0558272);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.04737591);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.04152641);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.03771811);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.03930451);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.04160173);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.04226744);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.04197873);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.04150004);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.03367974);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.02499334);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.01756705);
   VbbHcc_both_Z_dR_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_10 = new TH1D("VbbHcc_both_Z_dR_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(2,0.001325534);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,2.50463);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,5.007533);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,6.065236);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,6.257208);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,5.491571);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,4.015088);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,2.777899);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,2.019917);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,1.800802);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,1.773247);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,1.791953);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,1.832839);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,1.964876);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,2.004907);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,1.872781);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,1.649966);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,1.462539);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,1.232954);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,1.04303);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.8915157);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.7909188);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.8622017);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.8671121);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.9039049);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.8735597);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.7382266);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.5687195);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.3428784);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.2103348);
   VbbHcc_both_Z_dR_stack_10->SetBinError(2,0.0007695877);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.03321882);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.04698349);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.05177324);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.05263511);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.04936597);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.04221882);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.03507352);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.02987626);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.02824796);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.02802178);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.02816147);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.02849307);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.02948763);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.0298327);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.02884899);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.02706103);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.02548859);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.0233861);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.021442);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.01984468);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.01871957);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.01955528);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.01961257);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.02001671);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.01966334);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.01808709);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.0158768);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.01227694);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.009641031);
   VbbHcc_both_Z_dR_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.1837562);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.3065577);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.3035114);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.2385337);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.08394204);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.07645744);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.03861023);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.03999353);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.02798746);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.05243874);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.04054727);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.03940606);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.04572028);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.04416187);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.06347401);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(18,0.04591143);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.03757483);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(20,0.03667561);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(21,0.01675965);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(22,0.03022706);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.01352968);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(24,0.01457658);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(25,0.01710149);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(26,0.01858057);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.03127273);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(28,0.03922433);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.02627172);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(30,0.01989591);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(31,0.005177705);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.01898414);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.02403052);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.02398343);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.0211927);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.01234685);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.0119835);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.008405689);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.008482682);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.007350035);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.00977728);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.008381652);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.00830928);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.009194098);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.00895224);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.01071858);
   VbbHcc_both_Z_dR_stack_11->SetBinError(18,0.009221625);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.00857113);
   VbbHcc_both_Z_dR_stack_11->SetBinError(20,0.008265126);
   VbbHcc_both_Z_dR_stack_11->SetBinError(21,0.005398634);
   VbbHcc_both_Z_dR_stack_11->SetBinError(22,0.007645651);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.005051367);
   VbbHcc_both_Z_dR_stack_11->SetBinError(24,0.005188601);
   VbbHcc_both_Z_dR_stack_11->SetBinError(25,0.005499787);
   VbbHcc_both_Z_dR_stack_11->SetBinError(26,0.005902196);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.007669852);
   VbbHcc_both_Z_dR_stack_11->SetBinError(28,0.00851534);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.006923254);
   VbbHcc_both_Z_dR_stack_11->SetBinError(30,0.006317148);
   VbbHcc_both_Z_dR_stack_11->SetBinError(31,0.003090762);
   VbbHcc_both_Z_dR_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_12 = new TH1D("VbbHcc_both_Z_dR_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.08027758);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.1639681);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.166927);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.1197231);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.05326495);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.02939002);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.01644647);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.01658202);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.0136861);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.01992397);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.02360383);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.02193278);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.02320465);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(16,0.0247323);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.02354162);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.02106936);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.01824816);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.01788746);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.01431307);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.01124118);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.007968773);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(24,0.006850863);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.007980823);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(26,0.01268134);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.01234755);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(28,0.01625954);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.01448478);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(30,0.005874049);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(31,0.004759205);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.004357939);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.006271712);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.006324334);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.005367637);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.003596164);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.002671476);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.002016564);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.001960194);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.00181033);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.002183413);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.002411205);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.002292259);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.002334798);
   VbbHcc_both_Z_dR_stack_12->SetBinError(16,0.002418061);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.002327733);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.002258275);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.00209759);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.00208473);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.001876435);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.001656279);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.001409386);
   VbbHcc_both_Z_dR_stack_12->SetBinError(24,0.001250888);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.0013503);
   VbbHcc_both_Z_dR_stack_12->SetBinError(26,0.001777311);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.00170125);
   VbbHcc_both_Z_dR_stack_12->SetBinError(28,0.001995396);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.001872613);
   VbbHcc_both_Z_dR_stack_12->SetBinError(30,0.001198062);
   VbbHcc_both_Z_dR_stack_12->SetBinError(31,0.00108154);
   VbbHcc_both_Z_dR_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR__419 = new TH1D("VbbHcc_both_Z_dR__419","",30,0,6);
   VbbHcc_both_Z_dR__419->SetBinContent(2,16);
   VbbHcc_both_Z_dR__419->SetBinContent(3,42138);
   VbbHcc_both_Z_dR__419->SetBinContent(4,46044);
   VbbHcc_both_Z_dR__419->SetBinContent(5,32733);
   VbbHcc_both_Z_dR__419->SetBinContent(6,28025);
   VbbHcc_both_Z_dR__419->SetBinContent(7,25420);
   VbbHcc_both_Z_dR__419->SetBinContent(8,23461);
   VbbHcc_both_Z_dR__419->SetBinContent(9,22544);
   VbbHcc_both_Z_dR__419->SetBinContent(10,22258);
   VbbHcc_both_Z_dR__419->SetBinContent(11,22576);
   VbbHcc_both_Z_dR__419->SetBinContent(12,23267);
   VbbHcc_both_Z_dR__419->SetBinContent(13,23968);
   VbbHcc_both_Z_dR__419->SetBinContent(14,25291);
   VbbHcc_both_Z_dR__419->SetBinContent(15,26543);
   VbbHcc_both_Z_dR__419->SetBinContent(16,26924);
   VbbHcc_both_Z_dR__419->SetBinContent(17,25396);
   VbbHcc_both_Z_dR__419->SetBinContent(18,23338);
   VbbHcc_both_Z_dR__419->SetBinContent(19,20920);
   VbbHcc_both_Z_dR__419->SetBinContent(20,18015);
   VbbHcc_both_Z_dR__419->SetBinContent(21,15442);
   VbbHcc_both_Z_dR__419->SetBinContent(22,12964);
   VbbHcc_both_Z_dR__419->SetBinContent(23,10756);
   VbbHcc_both_Z_dR__419->SetBinContent(24,8844);
   VbbHcc_both_Z_dR__419->SetBinContent(25,7426);
   VbbHcc_both_Z_dR__419->SetBinContent(26,6556);
   VbbHcc_both_Z_dR__419->SetBinContent(27,5578);
   VbbHcc_both_Z_dR__419->SetBinContent(28,5213);
   VbbHcc_both_Z_dR__419->SetBinContent(29,4980);
   VbbHcc_both_Z_dR__419->SetBinContent(30,3154);
   VbbHcc_both_Z_dR__419->SetBinContent(31,2226);
   VbbHcc_both_Z_dR__419->SetEntries(562045);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__419->SetLineColor(ci);
   VbbHcc_both_Z_dR__419->SetLineWidth(2);
   VbbHcc_both_Z_dR__419->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__419->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__419->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__419->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__419->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__419->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__419->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__419->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__419->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__419->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__419->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__419->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__419->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__419->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__419->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__419->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__419->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1419[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1419[30] = {
   0,
   42.38658,
   150814.6,
   159330.8,
   121140.8,
   100689.3,
   77381.49,
   78188.55,
   75959.42,
   72839.29,
   69633.17,
   71019.03,
   85251.07,
   85918.75,
   104637.6,
   109237.4,
   98467.14,
   82074.09,
   76440.33,
   61542.68,
   51759.98,
   59090.35,
   38062.52,
   26332.33,
   21239.66,
   21557.56,
   21509.92,
   19655.24,
   16481.62,
   11939.28};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1419[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1419[30] = {
   0,
   13.97399,
   3691.093,
   4417.401,
   4315.49,
   3457.434,
   2700.296,
   3247.184,
   3686.017,
   3097.128,
   2971.353,
   2752.724,
   3729.413,
   3831.676,
   14170.59,
   15404.75,
   11059.32,
   3167.001,
   3193.06,
   3009.179,
   2970.09,
   17768.11,
   2572.252,
   2038.423,
   1308.329,
   2160.252,
   1704.116,
   1573.138,
   1251.335,
   1110.243};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1419,Graph_from_VbbHcc_both_Z_dR_fy1419,Graph_from_VbbHcc_both_Z_dR_fex1419,Graph_from_VbbHcc_both_Z_dR_fey1419);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1419 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1419","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetMaximum(180123);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1419);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__420 = new TH1D("data_mc_ratio__420","",30,0,6);
   data_mc_ratio__420->SetBinContent(2,0.377478);
   data_mc_ratio__420->SetBinContent(3,0.2794027);
   data_mc_ratio__420->SetBinContent(4,0.2889838);
   data_mc_ratio__420->SetBinContent(5,0.2702061);
   data_mc_ratio__420->SetBinContent(6,0.2783314);
   data_mc_ratio__420->SetBinContent(7,0.3285023);
   data_mc_ratio__420->SetBinContent(8,0.3000567);
   data_mc_ratio__420->SetBinContent(9,0.2967901);
   data_mc_ratio__420->SetBinContent(10,0.3055768);
   data_mc_ratio__420->SetBinContent(11,0.3242133);
   data_mc_ratio__420->SetBinContent(12,0.3276164);
   data_mc_ratio__420->SetBinContent(13,0.281146);
   data_mc_ratio__420->SetBinContent(14,0.2943595);
   data_mc_ratio__420->SetBinContent(15,0.253666);
   data_mc_ratio__420->SetBinContent(16,0.2464724);
   data_mc_ratio__420->SetBinContent(17,0.2579134);
   data_mc_ratio__420->SetBinContent(18,0.2843528);
   data_mc_ratio__420->SetBinContent(19,0.2736775);
   data_mc_ratio__420->SetBinContent(20,0.2927237);
   data_mc_ratio__420->SetBinContent(21,0.2983386);
   data_mc_ratio__420->SetBinContent(22,0.2193929);
   data_mc_ratio__420->SetBinContent(23,0.2825877);
   data_mc_ratio__420->SetBinContent(24,0.3358609);
   data_mc_ratio__420->SetBinContent(25,0.3496289);
   data_mc_ratio__420->SetBinContent(26,0.304116);
   data_mc_ratio__420->SetBinContent(27,0.2593222);
   data_mc_ratio__420->SetBinContent(28,0.2652219);
   data_mc_ratio__420->SetBinContent(29,0.3021548);
   data_mc_ratio__420->SetBinContent(30,0.2641701);
   data_mc_ratio__420->SetBinContent(31,0.3103925);
   data_mc_ratio__420->SetBinError(2,0.0943695);
   data_mc_ratio__420->SetBinError(3,0.001361111);
   data_mc_ratio__420->SetBinError(4,0.00134675);
   data_mc_ratio__420->SetBinError(5,0.00149349);
   data_mc_ratio__420->SetBinError(6,0.001662606);
   data_mc_ratio__420->SetBinError(7,0.002060396);
   data_mc_ratio__420->SetBinError(8,0.00195898);
   data_mc_ratio__420->SetBinError(9,0.001976669);
   data_mc_ratio__420->SetBinError(10,0.002048224);
   data_mc_ratio__420->SetBinError(11,0.002157781);
   data_mc_ratio__420->SetBinError(12,0.002147808);
   data_mc_ratio__420->SetBinError(13,0.001816001);
   data_mc_ratio__420->SetBinError(14,0.001850952);
   data_mc_ratio__420->SetBinError(15,0.001556995);
   data_mc_ratio__420->SetBinError(16,0.001502099);
   data_mc_ratio__420->SetBinError(17,0.00161842);
   data_mc_ratio__420->SetBinError(18,0.00186134);
   data_mc_ratio__420->SetBinError(19,0.001892162);
   data_mc_ratio__420->SetBinError(20,0.002180925);
   data_mc_ratio__420->SetBinError(21,0.00240081);
   data_mc_ratio__420->SetBinError(22,0.001926872);
   data_mc_ratio__420->SetBinError(23,0.002724758);
   data_mc_ratio__420->SetBinError(24,0.003571372);
   data_mc_ratio__420->SetBinError(25,0.004057232);
   data_mc_ratio__420->SetBinError(26,0.00375595);
   data_mc_ratio__420->SetBinError(27,0.003472165);
   data_mc_ratio__420->SetBinError(28,0.003673378);
   data_mc_ratio__420->SetBinError(29,0.004281686);
   data_mc_ratio__420->SetBinError(30,0.004703843);
   data_mc_ratio__420->SetBinError(31,0.03748253);
   data_mc_ratio__420->SetMinimum(0.4);
   data_mc_ratio__420->SetMaximum(1.6);
   data_mc_ratio__420->SetEntries(1828.562);
   data_mc_ratio__420->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__420->SetLineColor(ci);
   data_mc_ratio__420->SetLineWidth(2);
   data_mc_ratio__420->SetMarkerStyle(20);
   data_mc_ratio__420->SetMarkerSize(1.2);
   data_mc_ratio__420->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__420->GetXaxis()->SetRange(1,30);
   data_mc_ratio__420->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__420->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__420->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__420->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__420->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__420->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__420->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__420->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__420->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__420->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__420->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__420->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__420->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__420->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__420->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__420->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__420->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1420[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1420[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1420[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1420[30] = {
   0,
   0.3296797,
   0.02447438,
   0.02772472,
   0.03562374,
   0.03433764,
   0.03489589,
   0.04153017,
   0.04852614,
   0.04252002,
   0.04267152,
   0.03876037,
   0.04374623,
   0.04459651,
   0.1354254,
   0.1410209,
   0.1123149,
   0.03858709,
   0.04177193,
   0.04889581,
   0.05738198,
   0.3006939,
   0.06757965,
   0.07741143,
   0.0615984,
   0.1002085,
   0.07922465,
   0.08003657,
   0.07592309,
   0.09299083};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1420,Graph_from_mc_statistical_error_fy1420,Graph_from_mc_statistical_error_fex1420,Graph_from_mc_statistical_error_fey1420);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1420 = new TH1F("Graph_Graph_from_mc_statistical_error1420","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1420->SetMinimum(0.6043843);
   Graph_Graph_from_mc_statistical_error1420->SetMaximum(1.395616);
   Graph_Graph_from_mc_statistical_error1420->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1420->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1420);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
