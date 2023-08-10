void H_dR_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Thu Aug 10 12:20:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(0,0,1,1);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.864031,6.525,12.16393);
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
   st->SetMaximum(1.337936e+10);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(0.001415785);
   st_stack_22->SetMaximum(4.582813e+10);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetLabelSize(0.035);
   st_stack_22->GetXaxis()->SetTitleSize(0.035);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetLabelSize(0.05);
   st_stack_22->GetYaxis()->SetTitleSize(0.057);
   st_stack_22->GetYaxis()->SetTitleOffset(1.2);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetLabelSize(0.035);
   st_stack_22->GetZaxis()->SetTitleSize(0.035);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,9424.879);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,12129.84);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,7943.298);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,6637.894);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,6152.685);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,5879.97);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,4210.851);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,8076.481);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,6870.077);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,8047.213);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,9525.88);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,13363.07);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,10206.28);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,34528.31);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,13883);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,13631.92);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,10297.76);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,8391.205);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,6274.92);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,3383.608);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,3328.26);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,19472.47);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,2449.376);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,1747.374);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,1713.51);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,1442.221);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,1362.056);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,749.0971);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,1155.877);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,1264.108);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,1535.361);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,1251.095);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,1102.865);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,1137.414);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,1059.914);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,716.6737);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,1304.624);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,1082.793);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,1170.599);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,1316.932);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,1628.979);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,1343.051);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,21718.62);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,1662.007);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,1643.932);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,1354.523);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,1911.663);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,1056.079);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,600.9065);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,719.5151);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,15292.02);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,651.3523);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,537.8174);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,503.5904);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,544.2912);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,428.3385);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,351.8592);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,466.3509);
   VbbHcc_tags_H_dR_stack_1->SetEntries(9821);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,-0.0630298);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,31.12261);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,43.508);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,36.49804);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,36.27979);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,35.99395);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,35.56064);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,41.20546);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,44.00403);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,37.79254);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,46.61839);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,49.25119);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,49.4769);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,53.89109);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,66.74112);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,56.61991);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,44.57733);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,46.16051);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,39.28913);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,33.32523);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,28.29657);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,21.90704);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,20.00789);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,16.26087);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,11.94662);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,11.47345);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,8.409047);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,5.680728);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,5.8252);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,4.110069);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.0630298);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,2.485816);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,3.043577);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,2.702603);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,2.70284);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,2.674046);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,2.688341);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,2.856955);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,2.996345);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,2.703082);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,3.074878);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,3.136393);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,3.02869);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,3.228975);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,3.665221);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,3.355971);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,2.74269);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,2.942826);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,2.674141);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,2.516062);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,2.367749);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,2.024296);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,1.876969);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,1.702044);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,1.474543);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,1.53151);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.378913);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.9774109);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,1.027795);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,0.7965456);
   VbbHcc_tags_H_dR_stack_2->SetEntries(11223);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,0.7927776);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,579.1321);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,828.2428);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,829.7644);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,872.4092);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,849.6387);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,834.4871);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,824.0132);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,848.7815);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,912.4531);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,969.3595);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,1048.788);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,1119.717);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,1217.166);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,1266.215);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,1188.534);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,1097.809);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,985.8994);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,854.1595);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,712.4244);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,584.3988);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,474.965);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,398.273);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,314.3248);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,258.9482);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,216.9716);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,174.0072);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,139.5903);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,97.7707);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,84.89661);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.2585072);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,6.528762);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,7.818225);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,7.845585);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,8.055939);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,7.946472);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,7.863109);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,7.802593);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,7.897084);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,8.212999);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,8.459155);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,8.813013);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,9.106246);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,9.530026);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,9.72047);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,9.429575);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,9.085581);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,8.583327);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,7.988713);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,7.274115);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,6.578208);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,5.919647);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,5.408739);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,4.798487);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,4.355534);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,3.989562);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,3.568137);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,3.180238);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,2.661862);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,2.473644);
   VbbHcc_tags_H_dR_stack_3->SetEntries(306587);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,107.8424);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,146.5453);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,124.0161);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,101.3359);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,96.91199);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,92.06174);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,102.5029);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,89.34374);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,99.08786);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,120.4958);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,129.4348);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,143.3178);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,162.9848);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,166.3592);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,167.0046);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,143.2103);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,136.4093);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,119.1087);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,83.87471);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,66.07331);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,59.14042);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,46.4317);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,35.36256);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,29.6442);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,21.59861);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,22.85285);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,17.27091);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,12.50866);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,8.926891);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,6.916715);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,7.509982);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,7.821912);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,5.523056);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,7.569886);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,6.1975);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,8.727442);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,6.285723);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,6.63611);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,9.354479);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,8.280855);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,9.639687);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,8.827156);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,8.523);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,8.772769);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,8.486837);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,9.479345);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,8.281357);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,6.446701);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,5.654937);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,5.257762);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,5.902818);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,4.834566);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,4.235111);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,2.228794);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,3.176456);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,1.957676);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,3.653);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,1.430485);
   VbbHcc_tags_H_dR_stack_4->SetEntries(17505);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,12.17739);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,14.65687);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,12.91626);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,4.86911);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,8.784751);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,17.02711);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,14.6379);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,10.51918);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,8.980628);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,8.505932);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,14.57667);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,12.57225);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,16.38279);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,10.80986);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,14.59889);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,15.01016);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,18.77681);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,10.63116);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,7.436849);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,5.136599);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,6.456765);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,3.557584);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,2.213044);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,1.8778);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,4.174418);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,4.578036);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,2.1235);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,1.242519);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,0.9613336);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,1.877261);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,2.718982);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,2.748873);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,0.7341241);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,2.018964);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,8.366016);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,6.038995);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,1.778956);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,1.617888);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,1.754435);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,2.910441);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,1.594633);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,2.852267);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,2.126247);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,2.435242);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,3.351398);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,3.47686);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,1.879408);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,1.125588);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,1.647757);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,1.940878);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,1.014544);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,0.5902712);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,0.6238683);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,1.650567);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,2.076281);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,1.424703);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,0.3689506);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,0.4087904);
   VbbHcc_tags_H_dR_stack_5->SetEntries(2189);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(3,0.7592397);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,0.3402984);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,0.2466832);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(24,0.268632);
   VbbHcc_tags_H_dR_stack_6->SetBinError(3,0.5375181);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,0.3402984);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.2466832);
   VbbHcc_tags_H_dR_stack_6->SetBinError(24,0.268632);
   VbbHcc_tags_H_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,0.2891015);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,0.3138408);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(8,0.2655071);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.5226544);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.6394203);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,0.3152355);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.3047304);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,1.294581);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.3317125);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.8705032);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.3136654);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,1.050435);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(22,0.1954472);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.2891015);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.3138408);
   VbbHcc_tags_H_dR_stack_7->SetBinError(8,0.2655071);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.3696165);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.4542058);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,0.3152355);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.3047304);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.5923501);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.3317125);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.5031894);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.3136654);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.5314439);
   VbbHcc_tags_H_dR_stack_7->SetBinError(22,0.1954472);
   VbbHcc_tags_H_dR_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,4.507861);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,2.970108);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,3.568421);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,1.792515);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,1.058472);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,0.5658256);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,0.2431056);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,0.2847252);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,1.490724);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,1.464176);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,0.8686598);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,3.188145);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,3.244459);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,4.930905);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,1.939951);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,4.705012);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,4.704667);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,1.978668);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,0.6277368);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,1.628946);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,0.3221278);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,0.8145133);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.5919892);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.217633);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,0.8928957);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(29,0.2427067);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.3133122);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(31,0.2223047);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,1.152393);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,0.9358877);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,1.002428);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,0.7445355);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,0.4964539);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.3306588);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.2305958);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.2847252);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.6752374);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.656064);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.4907173);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,1.013744);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,0.9565981);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,1.194157);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,0.7530987);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,1.15607);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,1.191789);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.812431);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.4439379);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.6753);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.3221278);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.4820568);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.4253291);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.217633);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.5202515);
   VbbHcc_tags_H_dR_stack_8->SetBinError(29,0.2427067);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.3133122);
   VbbHcc_tags_H_dR_stack_8->SetBinError(31,0.2223047);
   VbbHcc_tags_H_dR_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,2.000738);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,3.663858);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,3.626218);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,2.811024);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,1.976769);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,1.210597);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,1.070342);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,1.036573);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,1.289991);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,1.791758);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,2.374618);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,3.061876);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,3.69045);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,4.142653);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,4.086245);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,3.310379);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,2.560593);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,1.81914);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,1.330973);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,0.8887693);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,0.5799561);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.4070739);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.3209518);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.3999168);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.3905849);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.4486312);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.2885107);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.1997379);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.1047271);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.06366807);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.08560051);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.08540422);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.07471955);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.06262506);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.04899167);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.04570554);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.04480213);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.05090175);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.06005867);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.068411);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.07857878);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.08613384);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.09142565);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.09073599);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.08163872);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.07109449);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.06031462);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.05144324);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.04205522);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.03412471);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.027918);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.02520315);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.02795529);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.02789601);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.02967202);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.0238339);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.02001917);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.01389029);
   VbbHcc_tags_H_dR_stack_9->SetEntries(27953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,0.6511917);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,1.2627);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,1.45109);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,1.375377);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,1.06748);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,0.8283411);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,0.6842742);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,0.6509235);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,0.7122656);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,0.8644924);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,1.055947);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,1.204921);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,1.329765);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,1.396163);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,1.367277);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,1.242185);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,0.9566815);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,0.8074937);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,0.6018823);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,0.4363163);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.3109402);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.2843228);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.2298748);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.2324298);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.2132572);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.166819);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.1295898);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.08676471);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.0503695);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.0170601);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.02376762);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.0254994);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.02483207);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.02190296);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.01927327);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.01751849);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.01706004);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.01786857);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.01969733);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.0217784);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.02326543);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.02444751);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.02504985);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.02475765);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.02361156);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.02074254);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.01900176);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.01643438);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.01401109);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.01175493);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.01128037);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.01017439);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.01022738);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.009757294);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.008634864);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.007625536);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.006231685);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.004725435);
   VbbHcc_tags_H_dR_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.003614904);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.02319336);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.01267017);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.0108017);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.01797611);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.005778597);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.008209329);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.002008926);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.004344942);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.007119294);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.002410943);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.003663255);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.001198191);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.003355592);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.01032617);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.00392698);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.006197608);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.002100715);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.001948216);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.005278226);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.00369123);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.001500718);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.004413409);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.0009001677);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(27,0.001696335);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(28,0.00224468);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.003981719);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(31,0.001358122);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.00262964);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.00672946);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.004848403);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.004419394);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.005492411);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.003338186);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.00369872);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.002008926);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.003084468);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.00367499);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.002048195);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.002594274);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.001198191);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.002451698);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.004276586);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.002777514);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.003590711);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.002100715);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.001948216);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.003112859);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.002610097);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.001500718);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.003134811);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.0009001677);
   VbbHcc_tags_H_dR_stack_11->SetBinError(27,0.001696335);
   VbbHcc_tags_H_dR_stack_11->SetBinError(28,0.00224468);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.002815513);
   VbbHcc_tags_H_dR_stack_11->SetBinError(31,0.001358122);
   VbbHcc_tags_H_dR_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.001210083);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.002227872);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.005224442);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.004602551);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.006344997);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.003904722);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.002935144);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.002827407);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.002593625);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.002553012);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.00262985);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.002304397);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.003735964);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.002733778);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.001779599);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.003124986);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.001793351);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.00117851);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.0008030267);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.001093096);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.001196863);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,0.001587538);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.001346662);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.0009249126);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.001580819);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.0008483176);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.0004288239);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(30,0.000661696);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(31,0.0006623257);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.0005468974);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.0007446622);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.001114227);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.001066089);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.001281392);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.0009832397);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.000878131);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.0008057384);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.0007937117);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.0007797109);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.0008025656);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.0007338769);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.00095102);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.0007947094);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.0006373732);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.0008755428);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.0006708153);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.0005318158);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.0004656411);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.0004700142);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.0005379248);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,0.0006086325);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.0005565859);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.0004742501);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.000647628);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.0004350134);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.0003112585);
   VbbHcc_tags_H_dR_stack_12->SetBinError(30,0.0003855539);
   VbbHcc_tags_H_dR_stack_12->SetBinError(31,0.0003908867);
   VbbHcc_tags_H_dR_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__59 = new TH1D("VbbHcc_tags_H_dR__59","",30,0,6);
   VbbHcc_tags_H_dR__59->SetBinContent(2,4);
   VbbHcc_tags_H_dR__59->SetBinContent(3,3123);
   VbbHcc_tags_H_dR__59->SetBinContent(4,3367);
   VbbHcc_tags_H_dR__59->SetBinContent(5,2563);
   VbbHcc_tags_H_dR__59->SetBinContent(6,2413);
   VbbHcc_tags_H_dR__59->SetBinContent(7,2350);
   VbbHcc_tags_H_dR__59->SetBinContent(8,2312);
   VbbHcc_tags_H_dR__59->SetBinContent(9,2314);
   VbbHcc_tags_H_dR__59->SetBinContent(10,2480);
   VbbHcc_tags_H_dR__59->SetBinContent(11,2591);
   VbbHcc_tags_H_dR__59->SetBinContent(12,2842);
   VbbHcc_tags_H_dR__59->SetBinContent(13,3095);
   VbbHcc_tags_H_dR__59->SetBinContent(14,3317);
   VbbHcc_tags_H_dR__59->SetBinContent(15,3622);
   VbbHcc_tags_H_dR__59->SetBinContent(16,3830);
   VbbHcc_tags_H_dR__59->SetBinContent(17,3573);
   VbbHcc_tags_H_dR__59->SetBinContent(18,3353);
   VbbHcc_tags_H_dR__59->SetBinContent(19,2990);
   VbbHcc_tags_H_dR__59->SetBinContent(20,2553);
   VbbHcc_tags_H_dR__59->SetBinContent(21,2278);
   VbbHcc_tags_H_dR__59->SetBinContent(22,1777);
   VbbHcc_tags_H_dR__59->SetBinContent(23,1529);
   VbbHcc_tags_H_dR__59->SetBinContent(24,1241);
   VbbHcc_tags_H_dR__59->SetBinContent(25,976);
   VbbHcc_tags_H_dR__59->SetBinContent(26,811);
   VbbHcc_tags_H_dR__59->SetBinContent(27,705);
   VbbHcc_tags_H_dR__59->SetBinContent(28,539);
   VbbHcc_tags_H_dR__59->SetBinContent(29,514);
   VbbHcc_tags_H_dR__59->SetBinContent(30,368);
   VbbHcc_tags_H_dR__59->SetBinContent(31,313);
   VbbHcc_tags_H_dR__59->SetEntries(63772);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__59->SetLineColor(ci);
   VbbHcc_tags_H_dR__59->SetLineWidth(2);
   VbbHcc_tags_H_dR__59->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__59->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__59->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1043[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1043[30] = {
   0,
   0.7297478,
   10163.08,
   13171.06,
   8955.692,
   7658.782,
   7148.456,
   6861.986,
   5195.219,
   9071.106,
   7931.891,
   9196.845,
   10772.87,
   14695.62,
   11665.29,
   36049.22,
   15318.46,
   14942.12,
   11494.11,
   9419.316,
   7115.595,
   4070.669,
   3891.947,
   19942.52,
   2818.093,
   2051.017,
   1968.553,
   1653.58,
   1527.386,
   867.0447};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1043[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1043[30] = {
   0,
   0.2660803,
   1264.148,
   1535.405,
   1251.151,
   1102.912,
   1137.472,
   1059.998,
   716.8005,
   1304.667,
   1082.849,
   1170.673,
   1316.995,
   1629.036,
   1343.121,
   21718.63,
   1662.062,
   1643.985,
   1354.591,
   1911.701,
   1056.128,
   600.9764,
   719.5642,
   15292.03,
   651.3904,
   537.8542,
   503.6162,
   544.3181,
   428.3584,
   351.8901};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1043,Graph_from_VbbHcc_tags_H_dR_fy1043,Graph_from_VbbHcc_tags_H_dR_fex1043,Graph_from_VbbHcc_tags_H_dR_fey1043);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1043 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1043","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetMinimum(63.54463);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetMaximum(63544.63);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1043);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   H_dR_tags_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__60 = new TH1D("data_mc_ratio__60","",30,0,6);
   data_mc_ratio__60->SetBinContent(2,5.481346);
   data_mc_ratio__60->SetBinContent(3,0.3072888);
   data_mc_ratio__60->SetBinContent(4,0.2556363);
   data_mc_ratio__60->SetBinContent(5,0.2861867);
   data_mc_ratio__60->SetBinContent(6,0.3150631);
   data_mc_ratio__60->SetBinContent(7,0.3287423);
   data_mc_ratio__60->SetBinContent(8,0.3369287);
   data_mc_ratio__60->SetBinContent(9,0.4454095);
   data_mc_ratio__60->SetBinContent(10,0.2733955);
   data_mc_ratio__60->SetBinContent(11,0.326656);
   data_mc_ratio__60->SetBinContent(12,0.309019);
   data_mc_ratio__60->SetBinContent(13,0.2872957);
   data_mc_ratio__60->SetBinContent(14,0.2257136);
   data_mc_ratio__60->SetBinContent(15,0.3104939);
   data_mc_ratio__60->SetBinContent(16,0.1062436);
   data_mc_ratio__60->SetBinContent(17,0.233248);
   data_mc_ratio__60->SetBinContent(18,0.2243992);
   data_mc_ratio__60->SetBinContent(19,0.2601332);
   data_mc_ratio__60->SetBinContent(20,0.2710388);
   data_mc_ratio__60->SetBinContent(21,0.3201419);
   data_mc_ratio__60->SetBinContent(22,0.4365375);
   data_mc_ratio__60->SetBinContent(23,0.3928625);
   data_mc_ratio__60->SetBinContent(24,0.06222886);
   data_mc_ratio__60->SetBinContent(25,0.3463335);
   data_mc_ratio__60->SetBinContent(26,0.3954136);
   data_mc_ratio__60->SetBinContent(27,0.3581311);
   data_mc_ratio__60->SetBinContent(28,0.3259595);
   data_mc_ratio__60->SetBinContent(29,0.3365226);
   data_mc_ratio__60->SetBinContent(30,0.4244303);
   data_mc_ratio__60->SetBinContent(31,0.2493723);
   data_mc_ratio__60->SetBinError(2,2.740673);
   data_mc_ratio__60->SetBinError(3,0.005498709);
   data_mc_ratio__60->SetBinError(4,0.004405558);
   data_mc_ratio__60->SetBinError(5,0.00565295);
   data_mc_ratio__60->SetBinError(6,0.006413852);
   data_mc_ratio__60->SetBinError(7,0.006781437);
   data_mc_ratio__60->SetBinError(8,0.007007193);
   data_mc_ratio__60->SetBinError(9,0.009259292);
   data_mc_ratio__60->SetBinError(10,0.005489914);
   data_mc_ratio__60->SetBinError(11,0.006417369);
   data_mc_ratio__60->SetBinError(12,0.005796598);
   data_mc_ratio__60->SetBinError(13,0.005164149);
   data_mc_ratio__60->SetBinError(14,0.003919087);
   data_mc_ratio__60->SetBinError(15,0.005159158);
   data_mc_ratio__60->SetBinError(16,0.001716736);
   data_mc_ratio__60->SetBinError(17,0.003902127);
   data_mc_ratio__60->SetBinError(18,0.003875293);
   data_mc_ratio__60->SetBinError(19,0.004757296);
   data_mc_ratio__60->SetBinError(20,0.005364213);
   data_mc_ratio__60->SetBinError(21,0.006707576);
   data_mc_ratio__60->SetBinError(22,0.01035566);
   data_mc_ratio__60->SetBinError(23,0.01004701);
   data_mc_ratio__60->SetBinError(24,0.001766469);
   data_mc_ratio__60->SetBinError(25,0.01108586);
   data_mc_ratio__60->SetBinError(26,0.01388485);
   data_mc_ratio__60->SetBinError(27,0.013488);
   data_mc_ratio__60->SetBinError(28,0.01404007);
   data_mc_ratio__60->SetBinError(29,0.01484338);
   data_mc_ratio__60->SetBinError(30,0.02212496);
   data_mc_ratio__60->SetBinError(31,0.09372209);
   data_mc_ratio__60->SetMinimum(0.4);
   data_mc_ratio__60->SetMaximum(1.6);
   data_mc_ratio__60->SetEntries(16.81114);
   data_mc_ratio__60->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__60->SetLineColor(ci);
   data_mc_ratio__60->SetLineWidth(2);
   data_mc_ratio__60->SetMarkerStyle(20);
   data_mc_ratio__60->SetMarkerSize(1.2);
   data_mc_ratio__60->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__60->GetXaxis()->SetRange(1,31);
   data_mc_ratio__60->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__60->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__60->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__60->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__60->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__60->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__60->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__60->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__60->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__60->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__60->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__60->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__60->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__60->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1044[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1044[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1044[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1044[30] = {
   0,
   0.3646195,
   0.1243863,
   0.1165742,
   0.1397045,
   0.1440062,
   0.1591214,
   0.1544739,
   0.1379731,
   0.1438267,
   0.1365185,
   0.1272907,
   0.122251,
   0.1108519,
   0.1151383,
   0.6024715,
   0.1085006,
   0.1100236,
   0.1178509,
   0.2029554,
   0.1484244,
   0.1476358,
   0.1848854,
   0.7668053,
   0.2311458,
   0.2622378,
   0.2558307,
   0.3291756,
   0.2804519,
   0.40585};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1044,Graph_from_mc_statistical_error_fy1044,Graph_from_mc_statistical_error_fex1044,Graph_from_mc_statistical_error_fey1044);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1044 = new TH1F("Graph_Graph_from_mc_statistical_error1044","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1044->SetMinimum(0.07983366);
   Graph_Graph_from_mc_statistical_error1044->SetMaximum(1.920166);
   Graph_Graph_from_mc_statistical_error1044->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1044->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1044);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
