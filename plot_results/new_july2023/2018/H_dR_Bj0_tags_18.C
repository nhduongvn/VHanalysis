void H_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_18/H_dR_Bj0_tags_18
//=========  (Fri Jul 14 13:38:01 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_18 = new TCanvas("H_dR_Bj0_tags_18", "H_dR_Bj0_tags_18",0,0,600,600);
   H_dR_Bj0_tags_18->SetHighLightColor(2);
   H_dR_Bj0_tags_18->Range(0,0,1,1);
   H_dR_Bj0_tags_18->SetFillColor(0);
   H_dR_Bj0_tags_18->SetFillStyle(4000);
   H_dR_Bj0_tags_18->SetBorderMode(0);
   H_dR_Bj0_tags_18->SetBorderSize(2);
   H_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-919.0041,6.314516,918095.1);
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
   st->SetMaximum(786851.1);
   
   TH1F *st_stack_43 = new TH1F("st_stack_43","",30,0,6);
   st_stack_43->SetMinimum(0.01);
   st_stack_43->SetMaximum(826193.7);
   st_stack_43->SetDirectory(0);
   st_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_43->SetLineColor(ci);
   st_stack_43->GetXaxis()->SetRange(1,30);
   st_stack_43->GetXaxis()->SetLabelFont(42);
   st_stack_43->GetXaxis()->SetLabelSize(0.035);
   st_stack_43->GetXaxis()->SetTitleSize(0.035);
   st_stack_43->GetXaxis()->SetTitleFont(42);
   st_stack_43->GetYaxis()->SetTitle("Events/0.2");
   st_stack_43->GetYaxis()->SetLabelFont(42);
   st_stack_43->GetYaxis()->SetLabelSize(0.05);
   st_stack_43->GetYaxis()->SetTitleSize(0.057);
   st_stack_43->GetYaxis()->SetTitleOffset(1.2);
   st_stack_43->GetYaxis()->SetTitleFont(42);
   st_stack_43->GetZaxis()->SetLabelFont(42);
   st_stack_43->GetZaxis()->SetLabelSize(0.035);
   st_stack_43->GetZaxis()->SetTitleSize(0.035);
   st_stack_43->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_43);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,77760.39);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,210443.6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,198735);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,159700.3);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,122829.9);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,103742.8);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,91131.84);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,80490.77);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,73644.51);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,60623.84);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,62812.66);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,56414.06);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,52646.26);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,48565.3);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,46357.42);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,39722.45);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,33617.69);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,27847.04);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,23606.91);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,18817.85);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,13494.25);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,17058.38);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,12449.6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,7421.525);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,6725.817);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,4403.67);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,4667.37);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,2703.665);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,2339.314);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,1378.768);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,1942.536);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,2415.15);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,5133.264);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,5427.951);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,5887.788);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,4069.252);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,3722.809);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,3831.58);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,3912.623);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,3481.856);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,3051.153);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,3370.697);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,2634.911);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,2600.036);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,3231.394);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,2419.349);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,2606.652);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,2095.338);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,2405.88);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,2272.092);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,2097.095);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,1061.983);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,2294.374);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,1378.146);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,888.7361);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,821.8667);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,433.9159);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,801.1362);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,516.4693);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,697.1793);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,365.9891);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,384.983);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(155876);

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
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,637.1574);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,2438.155);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,2587.96);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,2097.181);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,1650.58);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,1359.209);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,1157.509);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,1004.131);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,910.5217);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,824.4307);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,762.0303);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,686.5211);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,655.4651);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,605.2433);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,518.3668);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,465.187);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,392.4152);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,319.0787);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,260.2812);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,220.8839);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,176.1243);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,147.2405);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,117.5185);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,93.46189);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,71.70563);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,57.03055);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,40.61608);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,24.84061);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,19.08947);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,10.45684);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,18.35918);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,10.92534);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,21.03075);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,21.2933);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,19.02688);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,16.82001);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,15.04522);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,13.80979);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,12.72167);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,12.11063);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,11.49591);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,10.97846);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,10.38015);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,10.12459);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,9.703017);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,8.833649);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,8.326901);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,7.642174);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,6.864353);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,6.096876);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,5.727279);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,4.929008);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,4.615781);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,4.038904);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,3.61794);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,3.21848);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,2.832717);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,2.395654);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,1.75108);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,1.645284);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,1.080138);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,1.397423);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(222347);

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
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,7351.581);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,35744.41);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,45543.34);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,39942.27);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,31750.77);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,25503.08);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,21007.26);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,17989.88);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,16004.92);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,14600.03);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,13473.62);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,12508.61);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,11382.99);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,10167.55);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,8925.05);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,7691.077);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,6230.409);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,5069.832);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,4144.235);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,3373.353);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,2690.217);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,2145.688);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,1672.931);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,1268.377);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,965.488);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,702.6707);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,492.9219);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,327.7537);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,210.3227);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,143.8253);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,255.1784);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,21.30025);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,47.12084);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,53.3907);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,50.10073);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,44.70189);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,40.04118);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,36.3217);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,33.59848);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,31.69594);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,30.28521);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,29.1089);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,28.05286);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,26.7521);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,25.27884);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,23.6557);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,21.92339);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,19.72594);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,17.78286);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,16.06057);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,14.48112);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,12.91607);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,11.51866);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,10.16332);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,8.840472);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,7.706699);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,6.565677);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,5.505862);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,4.474935);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,3.581627);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,2.958202);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,3.946444);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(5745643);

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
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,537.001);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,1664.937);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,1659.268);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,1349.323);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,1132.546);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,915.0151);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,764.2812);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,671.4297);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,588.2293);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,580.6322);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,509.3372);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,479.1543);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,421.8497);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,395.9716);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,359.9919);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,296.7227);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,240.5149);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,209.6982);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,169.2036);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,149.8935);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,122.9189);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,98.74698);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,74.89255);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,54.74251);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,48.44568);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,34.13408);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,28.76352);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,19.58122);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,11.54323);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,7.891232);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,9.401506);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,11.85262);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,26.23026);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,24.91864);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,26.39472);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,24.68138);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,20.99763);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,20.29317);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,16.78324);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,15.0095);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,17.44473);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,13.65955);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,14.96323);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,12.19077);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,11.84231);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,14.50962);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,10.07134);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,7.613519);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,9.015304);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,6.508314);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,7.147484);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,6.84114);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,8.18097);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,5.616597);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,3.550951);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,3.348995);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,2.677466);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,4.643067);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,2.126554);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,1.529296);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,1.173045);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,1.404012);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(86588);

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
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,315.5528);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,927.5961);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,908.3003);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,702.9645);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,604.0341);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,456.2715);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,375.7404);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,338.4742);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,321.6166);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,279.6568);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,263.0146);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,260.162);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,193.1142);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,202.6247);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,194.6378);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,138.848);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,128.268);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,105.3583);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,73.50491);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,87.54001);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,57.69395);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,42.72917);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,52.84453);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,26.12221);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,26.76698);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,23.23078);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,17.56919);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,14.45845);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,5.579469);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,3.0778);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,7.696871);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,10.8823);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,29.04214);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,34.73697);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,31.0335);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,35.2575);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,24.33786);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,20.70249);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,21.71388);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,26.1205);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,15.11809);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,20.73234);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,24.54775);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,11.76223);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,18.62273);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,19.20577);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,9.500819);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,10.761);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,9.75591);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,6.806644);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,13.13721);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,5.859452);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,4.500314);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,12.08417);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,3.032906);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,3.127131);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,3.561705);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,3.909878);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,3.293647);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,1.014909);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,0.7817296);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,2.362086);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(38399);

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
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(1,2.023338);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,5.780967);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(3,5.20287);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(4,3.179532);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(5,2.890483);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(6,1.156193);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(7,2.890483);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(8,2.023338);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(9,2.890483);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(10,2.601435);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(11,2.023338);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(12,0.867145);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(13,2.023338);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(14,0.2890483);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(15,0.5780967);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(16,0.5780967);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(17,0.5780967);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(18,0.5780967);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(19,1.73429);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(20,0.2890483);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(22,0.5780967);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(24,0.5780967);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(28,0.2890483);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(1,0.76475);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,1.292663);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(3,1.226328);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(4,0.9586649);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(5,0.9140511);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(6,0.5780967);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(7,0.9140511);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(8,0.76475);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(9,0.9140511);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(10,0.867145);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(11,0.76475);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(12,0.5006464);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(13,0.76475);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(14,0.2890483);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(15,0.4087761);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(16,0.4087761);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(17,0.4087761);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(18,0.4087761);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(19,0.708021);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(20,0.2890483);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(22,0.4087761);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(24,0.4087761);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(28,0.2890483);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(144);

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
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(1,5.183264);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,17.41577);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,15.34246);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,9.122545);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,6.219917);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(6,4.975934);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(7,5.183264);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(8,4.353942);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(9,4.561272);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(10,3.73195);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(11,4.768603);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,3.317289);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(13,4.975934);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(14,2.280636);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,2.695297);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(16,2.487967);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,1.865975);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(18,1.865975);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(19,2.073306);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(20,0.8293223);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(21,0.2073306);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(22,0.4146611);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(23,0.4146611);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(24,0.8293223);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(25,0.2073306);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(26,0.2073306);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(27,0.4146611);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(28,0.2073306);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(1,1.036653);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,1.900216);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,1.783525);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,1.375275);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,1.135596);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(6,1.015708);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(7,1.036653);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(8,0.950108);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(9,0.9724666);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(10,0.8796291);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(11,0.9943225);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.8293223);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(13,1.015708);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(14,0.6876377);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.747541);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(16,0.7182142);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.6219917);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(18,0.6219917);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(19,0.6556368);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(20,0.4146611);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(21,0.2073306);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(22,0.2932097);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(23,0.2932097);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(24,0.4146611);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(25,0.2073306);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(26,0.2073306);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(27,0.2932097);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(28,0.2073306);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(512);

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
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,4.946142);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,16.69323);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,13.80798);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,10.51055);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,9.067927);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,7.419213);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,4.121785);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,4.740053);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,3.915696);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,3.915696);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,3.503517);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,3.503517);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,2.88525);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,2.473071);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,2.67916);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,2.060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,1.854803);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,2.060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(19,0.6182678);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(20,1.236536);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(21,0.4121785);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(22,0.6182678);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.2060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(24,0.4121785);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(25,0.2060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(26,0.4121785);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(27,0.2060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(28,0.2060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(31,0.2060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,1.009627);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.854803);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.686913);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.471772);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,1.367041);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,1.236536);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.9216592);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.9883693);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.8983222);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,0.8983222);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,0.8497278);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.8497278);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.7711154);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.7139141);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.7430654);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.6517114);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.6182678);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.6517114);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(19,0.3569571);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(20,0.5048135);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(21,0.2914542);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(22,0.3569571);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.2060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(24,0.2914542);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(25,0.2060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(26,0.2914542);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(27,0.2060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(28,0.2060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(31,0.2060893);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(509);

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
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,3.494956);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,12.83008);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,12.09634);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,7.892794);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,5.62073);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,4.171546);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,3.513242);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,3.076658);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,2.784078);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,2.518928);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,2.576073);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,2.429783);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,2.173775);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.794336);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,1.476613);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,1.316608);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,1.07203);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.7931652);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.6674474);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.4777277);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.4525842);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.3222948);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.3108659);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.2468641);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.1988627);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.1622903);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.1005743);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.05714447);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.04800135);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.01600045);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.04342979);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.0893795);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.1712504);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.1662816);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.1343175);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.1133479);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.09764851);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.08961302);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.08386036);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.07977335);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.07587959);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.07673546);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.0745248);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.0704895);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.06404261);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.05809656);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.05485869);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.04950175);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.04257934);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.0390594);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.03304512);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.03216376);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.02714212);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.02665653);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.02375451);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.02132032);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.01926031);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.01516214);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.01142889);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.01047475);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.006047602);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.009963478);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(32696);

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
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,2.7524);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,11.02868);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,11.38398);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,8.444985);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,5.924485);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,4.532488);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,3.635886);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,3.291911);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,2.930647);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,2.626613);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,2.433462);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,2.320791);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,2.077564);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,1.868913);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,1.660263);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,1.461151);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,1.16904);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.9812541);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.8095644);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.676028);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.5746834);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.4602237);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.3964362);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.2831687);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.2289195);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.1865933);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.1120752);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.07928724);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.04590314);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.0226535);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.04948001);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.04050714);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.08108444);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.0823802);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.07095374);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.05942937);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.05198094);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.04655657);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.0442996);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.0417982);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.03957071);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.038088);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.03719579);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.03519274);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.03337878);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.0314604);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.02951368);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.02639918);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.02418614);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.02196856);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.02007512);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.01850931);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.01656381);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.01537314);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.01299267);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.011682);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.01054688);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.008173923);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.006875075);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.005231148);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.003674882);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.005431136);
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
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.07282438);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.3299855);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.373225);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.3163309);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.2048186);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.13427);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.07965167);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(8,0.0773759);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.047791);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.05461829);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(11,0.05461829);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(12,0.0295849);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(13,0.04323948);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.03868795);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.02730914);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.04096371);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(17,0.03868795);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(18,0.0182061);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(19,0.01365457);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(20,0.02048186);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(21,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(22,0.01137881);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(23,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(24,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(26,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(27,0.004551524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(29,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.01287365);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.0274038);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.02914397);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.02683084);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.02158977);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.01748046);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.01346359);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(8,0.01326986);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.01042885);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.01114891);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(11,0.01114891);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(12,0.008205376);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(13,0.009919816);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.009383207);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.00788347);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.00965524);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(17,0.009383207);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(18,0.006436827);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(19,0.005574455);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(20,0.006827286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(21,0.003941735);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(22,0.005088758);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(23,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(24,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(26,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(27,0.003218413);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(28,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(29,0.002275762);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(903);

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
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.02547083);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.1501281);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.1714037);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.1387411);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.1030819);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.07371557);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.0527396);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.0374571);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.02756843);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.02936637);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.02487151);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.0221746);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.0242722);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.01558215);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.01498284);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(16,0.01558215);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.01048799);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(18,0.01018833);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.01078764);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.00749142);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(21,0.00749142);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(22,0.005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(23,0.006892106);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(24,0.003595882);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(25,0.004794509);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(26,0.001198627);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(27,0.002097598);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(28,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(29,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(30,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.002762699);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.006707227);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.007166748);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.006447846);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.005557806);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.004699933);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.003975397);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.003350265);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.002874207);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.002966451);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.002730003);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.002577745);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.002696911);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.002160856);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.002118894);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(16,0.002160856);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.001772794);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(18,0.001747284);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.001797941);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.001498284);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(21,0.001498284);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(22,0.001340106);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(23,0.001437104);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(24,0.001038042);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(25,0.001198627);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(26,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(27,0.0007928174);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(28,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(29,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(30,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(3336);

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
   
   TH1D *VbbHcc_tags_H_dR_Bj0__85 = new TH1D("VbbHcc_tags_H_dR_Bj0__85","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(1,98090);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(2,350771);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(3,354083);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(4,289820);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(5,241076);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(6,201393);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(7,172287);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(8,150332);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(9,134079);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(10,120831);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(11,111047);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(12,103190);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(13,95681);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(14,87023);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(15,79587);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(16,71511);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(17,57658);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(18,48181);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(19,40964);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(20,34532);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(21,28554);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(22,23791);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(23,19613);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(24,15530);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(25,12243);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(26,9370);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(27,6949);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(28,4717);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(29,3292);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(30,2103);
   VbbHcc_tags_H_dR_Bj0__85->SetBinContent(31,3808);
   VbbHcc_tags_H_dR_Bj0__85->SetEntries(2972106);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__85->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__85->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__85->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__85->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__85->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__85->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__85->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__85->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__85->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__85->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__85->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__85->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__85->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__85->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__85->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__85->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__85->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__85->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__85->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1085[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1085[30] = {
   86620.18,
   251282.9,
   249492.3,
   203831.7,
   157997.9,
   131998.8,
   114456.1,
   100512.3,
   91486.95,
   76924.08,
   77836.04,
   70361,
   65313.89,
   59945.45,
   56364.59,
   48322.24,
   40615.89,
   33557.31,
   28260.06,
   22653.06,
   16542.87,
   19495.19,
   14369.13,
   8866.587,
   7839.069,
   5221.708,
   5248.081,
   3091.14,
   2585.945,
   1544.058};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1085[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1085[30] = {
   2415.323,
   5133.674,
   5428.425,
   5888.173,
   4069.761,
   3723.194,
   3831.888,
   3912.884,
   3482.152,
   3051.413,
   3370.932,
   2635.238,
   2600.249,
   3231.583,
   2419.601,
   2606.794,
   2095.486,
   2405.992,
   2272.177,
   2097.207,
   1062.112,
   2294.427,
   1378.253,
   888.8,
   821.922,
   433.9978,
   801.1818,
   516.5067,
   697.1929,
   366.0053};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1085);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetMinimum(1060.248);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetMaximum(281940.5);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__86 = new TH1D("data_mc_ratio__86","",30,0,6);
   data_mc_ratio__86->SetBinContent(1,1.132415);
   data_mc_ratio__86->SetBinContent(2,1.39592);
   data_mc_ratio__86->SetBinContent(3,1.419214);
   data_mc_ratio__86->SetBinContent(4,1.42186);
   data_mc_ratio__86->SetBinContent(5,1.525818);
   data_mc_ratio__86->SetBinContent(6,1.525718);
   data_mc_ratio__86->SetBinContent(7,1.505267);
   data_mc_ratio__86->SetBinContent(8,1.495658);
   data_mc_ratio__86->SetBinContent(9,1.465553);
   data_mc_ratio__86->SetBinContent(10,1.570783);
   data_mc_ratio__86->SetBinContent(11,1.426678);
   data_mc_ratio__86->SetBinContent(12,1.466579);
   data_mc_ratio__86->SetBinContent(13,1.464941);
   data_mc_ratio__86->SetBinContent(14,1.451703);
   data_mc_ratio__86->SetBinContent(15,1.412003);
   data_mc_ratio__86->SetBinContent(16,1.479878);
   data_mc_ratio__86->SetBinContent(17,1.419592);
   data_mc_ratio__86->SetBinContent(18,1.435782);
   data_mc_ratio__86->SetBinContent(19,1.449537);
   data_mc_ratio__86->SetBinContent(20,1.524386);
   data_mc_ratio__86->SetBinContent(21,1.726061);
   data_mc_ratio__86->SetBinContent(22,1.220352);
   data_mc_ratio__86->SetBinContent(23,1.36494);
   data_mc_ratio__86->SetBinContent(24,1.75152);
   data_mc_ratio__86->SetBinContent(25,1.561793);
   data_mc_ratio__86->SetBinContent(26,1.794432);
   data_mc_ratio__86->SetBinContent(27,1.324103);
   data_mc_ratio__86->SetBinContent(28,1.525974);
   data_mc_ratio__86->SetBinContent(29,1.273035);
   data_mc_ratio__86->SetBinContent(30,1.361995);
   data_mc_ratio__86->SetBinContent(31,1.704969);
   data_mc_ratio__86->SetBinError(1,0.003615708);
   data_mc_ratio__86->SetBinError(2,0.002356942);
   data_mc_ratio__86->SetBinError(3,0.002385039);
   data_mc_ratio__86->SetBinError(4,0.002641147);
   data_mc_ratio__86->SetBinError(5,0.003107605);
   data_mc_ratio__86->SetBinError(6,0.00339979);
   data_mc_ratio__86->SetBinError(7,0.003626497);
   data_mc_ratio__86->SetBinError(8,0.003857506);
   data_mc_ratio__86->SetBinError(9,0.004002407);
   data_mc_ratio__86->SetBinError(10,0.004518839);
   data_mc_ratio__86->SetBinError(11,0.004281271);
   data_mc_ratio__86->SetBinError(12,0.004565484);
   data_mc_ratio__86->SetBinError(13,0.004735952);
   data_mc_ratio__86->SetBinError(14,0.004921084);
   data_mc_ratio__86->SetBinError(15,0.005005122);
   data_mc_ratio__86->SetBinError(16,0.005534002);
   data_mc_ratio__86->SetBinError(17,0.005911992);
   data_mc_ratio__86->SetBinError(18,0.006541099);
   data_mc_ratio__86->SetBinError(19,0.007161897);
   data_mc_ratio__86->SetBinError(20,0.008203213);
   data_mc_ratio__86->SetBinError(21,0.01021463);
   data_mc_ratio__86->SetBinError(22,0.007911865);
   data_mc_ratio__86->SetBinError(23,0.00974634);
   data_mc_ratio__86->SetBinError(24,0.01405495);
   data_mc_ratio__86->SetBinError(25,0.01411495);
   data_mc_ratio__86->SetBinError(26,0.01853776);
   data_mc_ratio__86->SetBinError(27,0.01588403);
   data_mc_ratio__86->SetBinError(28,0.02221847);
   data_mc_ratio__86->SetBinError(29,0.02218761);
   data_mc_ratio__86->SetBinError(30,0.02969997);
   data_mc_ratio__86->SetBinError(31,0.295206);
   data_mc_ratio__86->SetMinimum(0.4);
   data_mc_ratio__86->SetMaximum(1.6);
   data_mc_ratio__86->SetEntries(3452.384);
   data_mc_ratio__86->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__86->SetLineColor(ci);
   data_mc_ratio__86->SetLineWidth(2);
   data_mc_ratio__86->SetMarkerStyle(20);
   data_mc_ratio__86->SetMarkerSize(1.2);
   data_mc_ratio__86->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__86->GetXaxis()->SetRange(1,30);
   data_mc_ratio__86->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__86->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__86->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__86->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__86->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__86->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__86->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__86->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__86->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__86->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__86->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__86->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__86->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__86->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__86->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__86->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__86->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1086[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1086[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1086[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1086[30] = {
   0.02788407,
   0.02042985,
   0.02175789,
   0.02888743,
   0.02575833,
   0.02820627,
   0.0334791,
   0.03892941,
   0.03806173,
   0.03966785,
   0.04330811,
   0.0374531,
   0.03981157,
   0.05390873,
   0.04292768,
   0.05394605,
   0.05159277,
   0.07169801,
   0.0804024,
   0.0925794,
   0.0642036,
   0.1176919,
   0.09591767,
   0.1002415,
   0.1048494,
   0.08311416,
   0.1526619,
   0.1670926,
   0.2696085,
   0.2370411};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1086,Graph_from_mc_statistical_error_fy1086,Graph_from_mc_statistical_error_fex1086,Graph_from_mc_statistical_error_fey1086);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1086 = new TH1F("Graph_Graph_from_mc_statistical_error1086","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1086->SetMinimum(0.6764698);
   Graph_Graph_from_mc_statistical_error1086->SetMaximum(1.32353);
   Graph_Graph_from_mc_statistical_error1086->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1086->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1086->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1086);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->SetSelected(H_dR_Bj0_tags_18);
}
