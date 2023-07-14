void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Fri Jul 14 13:38:45 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(0,0,1,1);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-784.1948,6.525,783420.5);
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
   st->SetMaximum(671428.6);
   
   TH1F *st_stack_213 = new TH1F("st_stack_213","",30,0,6);
   st_stack_213->SetMinimum(0.01);
   st_stack_213->SetMaximum(705000.1);
   st_stack_213->SetDirectory(0);
   st_stack_213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_213->SetLineColor(ci);
   st_stack_213->GetXaxis()->SetRange(1,31);
   st_stack_213->GetXaxis()->SetLabelFont(42);
   st_stack_213->GetXaxis()->SetLabelSize(0.035);
   st_stack_213->GetXaxis()->SetTitleSize(0.035);
   st_stack_213->GetXaxis()->SetTitleFont(42);
   st_stack_213->GetYaxis()->SetTitle("Events/0.2");
   st_stack_213->GetYaxis()->SetLabelFont(42);
   st_stack_213->GetYaxis()->SetLabelSize(0.05);
   st_stack_213->GetYaxis()->SetTitleSize(0.057);
   st_stack_213->GetYaxis()->SetTitleOffset(1.2);
   st_stack_213->GetYaxis()->SetTitleFont(42);
   st_stack_213->GetZaxis()->SetLabelFont(42);
   st_stack_213->GetZaxis()->SetLabelSize(0.035);
   st_stack_213->GetZaxis()->SetTitleSize(0.035);
   st_stack_213->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_213);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,80.77705);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,143127.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,138567.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,111254.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,99482.67);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,107895.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,110397);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,119217.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,129546.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,158012.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,184212.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,180738);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,203633.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,236914.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,246789);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,154099);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,130717.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,96458.58);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,74102.69);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,53255.72);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,78023.57);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,34635.94);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,28179.04);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,11366.22);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,7201.328);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,3960.127);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,663.1249);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,3.882321);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,40.25011);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,6056.525);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,5384.463);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,5448.866);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,4835.302);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,5890.459);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,5632.284);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,5629.711);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,6203.675);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,22241.65);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,23224.99);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,7321.684);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,7515.369);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,9072.182);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,9062.309);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,6085.655);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,6451.69);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,4999.511);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,4577.276);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,3806.236);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,23816.89);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,3444.129);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,3294.518);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,1282.307);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,1051.218);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,879.0183);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,266.9683);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,3.027159);
   VbbHcc_both_H_dR_stack_1->SetEntries(182810);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,0.8877163);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,1123.999);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,1521.809);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,1447.609);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,1383.639);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,1271.114);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,1218.093);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,1227.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,1294.085);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,1470.022);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,1683.158);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,1966.619);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,2305.811);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,2565.373);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,2680.916);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,1693.318);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,1167.145);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,833.9978);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,608.7314);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,438.888);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,315.293);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,217.8142);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,143.0042);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,78.44056);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,42.29695);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,19.04543);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,5.065316);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,0.4877057);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,0.4421851);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,15.72998);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,17.84035);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,16.84771);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,16.06649);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,15.18761);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,15.01504);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,15.13988);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,15.46634);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,16.52446);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,17.61203);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,18.95918);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,20.529);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,21.48992);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,21.8929);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,16.61207);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,13.17469);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,10.79333);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,8.926689);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,7.394258);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,5.915809);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,4.881664);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,3.89766);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,2.710922);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,1.937453);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,1.383865);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.6388533);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.2904998);
   VbbHcc_both_H_dR_stack_2->SetEntries(401943);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,10.68472);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,12826.06);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,22147.5);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,25373.97);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,26450.73);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,24783.96);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,23059.09);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,22773.39);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,24262.01);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,27445.14);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,31758.62);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,36974.46);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,42859.27);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,48431.28);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,49525.78);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,28691);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,18282.58);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,12249.79);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,8274.024);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,5591.984);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,3655.743);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,2308.431);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,1430.017);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,774.5743);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,382.5609);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,152.914);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,40.42344);
   VbbHcc_both_H_dR_stack_3->SetBinContent(29,2.868936);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.8364305);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,29.33369);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,38.49599);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,41.18207);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,42.02926);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,40.70404);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,39.28735);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,39.0598);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,40.35391);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,42.96318);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,46.26133);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,49.98915);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,53.88131);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,57.35078);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,58.03358);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,44.04814);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,35.05164);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,28.58991);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,23.37217);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,19.11518);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,15.37989);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,12.14521);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,9.507167);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,6.965132);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,4.849161);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,3.043057);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,1.538972);
   VbbHcc_both_H_dR_stack_3->SetBinError(29,0.4026197);
   VbbHcc_both_H_dR_stack_3->SetEntries(7926175);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(2,1.363284);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,931.8207);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,1074.963);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,1001.964);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,968.8599);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,953.164);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,930.6505);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,1021.305);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,1108.538);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,1163.651);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,1359.932);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,1495.533);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,1733.89);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,1929.597);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,2042.5);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,1250.152);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,845.0633);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,611.5817);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,468.751);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,331.9037);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,239.1763);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,160.4662);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,93.0894);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,55.09529);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,29.81922);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,10.58335);
   VbbHcc_both_H_dR_stack_4->SetBinContent(28,2.074348);
   VbbHcc_both_H_dR_stack_4->SetBinContent(29,0.05585118);
   VbbHcc_both_H_dR_stack_4->SetBinError(2,0.4117408);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,19.86299);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,22.89329);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,24.3939);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,26.0461);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,26.31115);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,25.28152);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,27.56436);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,28.57477);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,27.6058);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,30.93191);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,30.14147);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,32.18505);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,32.63857);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,34.21775);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,25.81972);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,20.48793);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,16.69142);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,16.46902);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,14.17771);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,12.33096);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,8.258245);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,5.496554);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,4.786123);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,4.445321);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,1.378592);
   VbbHcc_both_H_dR_stack_4->SetBinError(28,0.568963);
   VbbHcc_both_H_dR_stack_4->SetBinError(29,0.05585118);
   VbbHcc_both_H_dR_stack_4->SetEntries(171964);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(2,0.4798204);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,615.081);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,770.3733);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,736.6178);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,720.5316);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,592.4174);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,566.5668);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,607.1062);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,617.0032);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,641.8571);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,763.5416);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,807.5354);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,839.9218);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,1000.614);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,1054.638);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,665.7577);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,433.8498);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,319.5465);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,230.9657);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,182.6372);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,114.3716);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,88.88005);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,63.79793);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,45.6317);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,31.61284);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,12.07782);
   VbbHcc_both_H_dR_stack_5->SetBinContent(28,0.8910864);
   VbbHcc_both_H_dR_stack_5->SetBinContent(29,0.1694501);
   VbbHcc_both_H_dR_stack_5->SetBinError(2,0.2282809);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,17.70865);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,25.68175);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,36.70404);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,40.52641);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,30.46589);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,29.90969);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,31.60221);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,29.89759);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,29.75331);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,34.11992);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,33.8255);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,30.00453);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,36.89527);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,39.17652);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,30.16948);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,23.8748);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,19.51045);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,15.99292);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,12.11643);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,9.002423);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,9.01819);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,9.733851);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,10.27392);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,10.31434);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,4.181973);
   VbbHcc_both_H_dR_stack_5->SetBinError(28,0.2623966);
   VbbHcc_both_H_dR_stack_5->SetBinError(29,0.1003008);
   VbbHcc_both_H_dR_stack_5->SetEntries(118385);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(3,3.97079);
   VbbHcc_both_H_dR_stack_6->SetBinContent(4,5.25139);
   VbbHcc_both_H_dR_stack_6->SetBinContent(5,2.731864);
   VbbHcc_both_H_dR_stack_6->SetBinContent(6,3.449561);
   VbbHcc_both_H_dR_stack_6->SetBinContent(7,3.38082);
   VbbHcc_both_H_dR_stack_6->SetBinContent(8,3.027575);
   VbbHcc_both_H_dR_stack_6->SetBinContent(9,3.684663);
   VbbHcc_both_H_dR_stack_6->SetBinContent(10,4.134394);
   VbbHcc_both_H_dR_stack_6->SetBinContent(11,3.623878);
   VbbHcc_both_H_dR_stack_6->SetBinContent(12,3.391964);
   VbbHcc_both_H_dR_stack_6->SetBinContent(13,4.578125);
   VbbHcc_both_H_dR_stack_6->SetBinContent(14,5.567593);
   VbbHcc_both_H_dR_stack_6->SetBinContent(15,5.922577);
   VbbHcc_both_H_dR_stack_6->SetBinContent(16,7.447754);
   VbbHcc_both_H_dR_stack_6->SetBinContent(17,2.648161);
   VbbHcc_both_H_dR_stack_6->SetBinContent(18,2.352545);
   VbbHcc_both_H_dR_stack_6->SetBinContent(19,2.075209);
   VbbHcc_both_H_dR_stack_6->SetBinContent(20,0.179937);
   VbbHcc_both_H_dR_stack_6->SetBinContent(21,0.8370797);
   VbbHcc_both_H_dR_stack_6->SetBinContent(22,0.4454445);
   VbbHcc_both_H_dR_stack_6->SetBinContent(23,0.2629302);
   VbbHcc_both_H_dR_stack_6->SetBinContent(24,0.1414632);
   VbbHcc_both_H_dR_stack_6->SetBinContent(25,0.2651306);
   VbbHcc_both_H_dR_stack_6->SetBinContent(26,0.166054);
   VbbHcc_both_H_dR_stack_6->SetBinContent(27,0.09016585);
   VbbHcc_both_H_dR_stack_6->SetBinError(3,0.6015108);
   VbbHcc_both_H_dR_stack_6->SetBinError(4,0.6841962);
   VbbHcc_both_H_dR_stack_6->SetBinError(5,0.5017301);
   VbbHcc_both_H_dR_stack_6->SetBinError(6,0.5603696);
   VbbHcc_both_H_dR_stack_6->SetBinError(7,0.5494143);
   VbbHcc_both_H_dR_stack_6->SetBinError(8,0.5234673);
   VbbHcc_both_H_dR_stack_6->SetBinError(9,0.583855);
   VbbHcc_both_H_dR_stack_6->SetBinError(10,0.6133919);
   VbbHcc_both_H_dR_stack_6->SetBinError(11,0.5694972);
   VbbHcc_both_H_dR_stack_6->SetBinError(12,0.5568578);
   VbbHcc_both_H_dR_stack_6->SetBinError(13,0.6452895);
   VbbHcc_both_H_dR_stack_6->SetBinError(14,0.713919);
   VbbHcc_both_H_dR_stack_6->SetBinError(15,0.7375977);
   VbbHcc_both_H_dR_stack_6->SetBinError(16,0.8253603);
   VbbHcc_both_H_dR_stack_6->SetBinError(17,0.4927012);
   VbbHcc_both_H_dR_stack_6->SetBinError(18,0.4629554);
   VbbHcc_both_H_dR_stack_6->SetBinError(19,0.4338769);
   VbbHcc_both_H_dR_stack_6->SetBinError(20,0.1273728);
   VbbHcc_both_H_dR_stack_6->SetBinError(21,0.2794627);
   VbbHcc_both_H_dR_stack_6->SetBinError(22,0.1993812);
   VbbHcc_both_H_dR_stack_6->SetBinError(23,0.1518671);
   VbbHcc_both_H_dR_stack_6->SetBinError(24,0.1015329);
   VbbHcc_both_H_dR_stack_6->SetBinError(25,0.1532598);
   VbbHcc_both_H_dR_stack_6->SetBinError(26,0.1184663);
   VbbHcc_both_H_dR_stack_6->SetBinError(27,0.09016585);
   VbbHcc_both_H_dR_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,13.67608);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,17.40819);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,13.58888);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,10.23047);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,7.405289);
   VbbHcc_both_H_dR_stack_7->SetBinContent(8,6.735481);
   VbbHcc_both_H_dR_stack_7->SetBinContent(9,4.998342);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,6.30848);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,7.981227);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,8.845767);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,12.19452);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,11.32442);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,12.63677);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,14.89367);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,7.223419);
   VbbHcc_both_H_dR_stack_7->SetBinContent(18,5.382774);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,3.269569);
   VbbHcc_both_H_dR_stack_7->SetBinContent(20,2.55024);
   VbbHcc_both_H_dR_stack_7->SetBinContent(21,1.217022);
   VbbHcc_both_H_dR_stack_7->SetBinContent(22,1.143732);
   VbbHcc_both_H_dR_stack_7->SetBinContent(23,0.7623153);
   VbbHcc_both_H_dR_stack_7->SetBinContent(24,0.8523323);
   VbbHcc_both_H_dR_stack_7->SetBinContent(25,0.3876042);
   VbbHcc_both_H_dR_stack_7->SetBinContent(26,0.03428863);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.9654104);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,1.093503);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.9656799);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.8401428);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.7119757);
   VbbHcc_both_H_dR_stack_7->SetBinError(8,0.6828525);
   VbbHcc_both_H_dR_stack_7->SetBinError(9,0.5790054);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.6517778);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.7354751);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.7709752);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.9118373);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,0.8837238);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.9302501);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,1.007635);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.7028387);
   VbbHcc_both_H_dR_stack_7->SetBinError(18,0.6018095);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.4663716);
   VbbHcc_both_H_dR_stack_7->SetBinError(20,0.4120734);
   VbbHcc_both_H_dR_stack_7->SetBinError(21,0.28251);
   VbbHcc_both_H_dR_stack_7->SetBinError(22,0.276182);
   VbbHcc_both_H_dR_stack_7->SetBinError(23,0.2206416);
   VbbHcc_both_H_dR_stack_7->SetBinError(24,0.2372499);
   VbbHcc_both_H_dR_stack_7->SetBinError(25,0.1586002);
   VbbHcc_both_H_dR_stack_7->SetBinError(26,0.03428863);
   VbbHcc_both_H_dR_stack_7->SetEntries(2557);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,10.0856);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,13.97959);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,14.22711);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,11.31773);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,7.936901);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,7.553126);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,4.701562);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,5.287101);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,7.18942);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,8.843905);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,10.2604);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,10.91978);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,14.21715);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,13.75995);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,8.051151);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,6.430134);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,3.861366);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,1.552945);
   VbbHcc_both_H_dR_stack_8->SetBinContent(21,0.9738397);
   VbbHcc_both_H_dR_stack_8->SetBinContent(22,0.7862298);
   VbbHcc_both_H_dR_stack_8->SetBinContent(23,0.5809898);
   VbbHcc_both_H_dR_stack_8->SetBinContent(24,0.3715694);
   VbbHcc_both_H_dR_stack_8->SetBinContent(25,0.1859482);
   VbbHcc_both_H_dR_stack_8->SetBinContent(27,0.1974535);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.382354);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.656822);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.652603);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,1.482358);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,1.241505);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,1.19957);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.9537339);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.9949495);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,1.163416);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,1.307786);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,1.383921);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,1.445014);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.647973);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.624605);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,1.247035);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,1.106904);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.8472647);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.5497732);
   VbbHcc_both_H_dR_stack_8->SetBinError(21,0.419488);
   VbbHcc_both_H_dR_stack_8->SetBinError(22,0.3934865);
   VbbHcc_both_H_dR_stack_8->SetBinError(23,0.3355838);
   VbbHcc_both_H_dR_stack_8->SetBinError(24,0.263128);
   VbbHcc_both_H_dR_stack_8->SetBinError(25,0.1859482);
   VbbHcc_both_H_dR_stack_8->SetBinError(27,0.1974535);
   VbbHcc_both_H_dR_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(2,0.01003985);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,6.659629);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,9.462773);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,8.754597);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,7.155666);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,5.337601);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,4.377186);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,4.048892);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,4.159128);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,4.597002);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,5.358223);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,6.40091);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,7.680018);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,9.306184);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,9.347678);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,4.237674);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,2.305647);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,1.436855);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.979912);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.6678367);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.4990214);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.3465915);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.1993628);
   VbbHcc_both_H_dR_stack_9->SetBinContent(25,0.0932197);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.05684227);
   VbbHcc_both_H_dR_stack_9->SetBinContent(27,0.02644342);
   VbbHcc_both_H_dR_stack_9->SetBinContent(28,0.01236337);
   VbbHcc_both_H_dR_stack_9->SetBinError(2,0.003827421);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.1012852);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.1206421);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.1157443);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.1045889);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.09012911);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.08091597);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.07771812);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.07869804);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.08261855);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.08938779);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.09773041);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.1071596);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.1179919);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.1187363);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.07942909);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.05843935);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.04604569);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.03771689);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.0310651);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.02688441);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.0223405);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.01686613);
   VbbHcc_both_H_dR_stack_9->SetBinError(25,0.01139456);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.008872797);
   VbbHcc_both_H_dR_stack_9->SetBinError(27,0.006093408);
   VbbHcc_both_H_dR_stack_9->SetBinError(28,0.004129629);
   VbbHcc_both_H_dR_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(2,0.0004324426);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,2.486132);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,4.051024);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,4.19233);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,3.796781);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,2.764084);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,2.072105);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,1.968723);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,2.07504);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,2.424649);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,2.79796);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,3.312536);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,3.881203);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,4.323981);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,4.387722);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,2.368369);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,1.524377);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,1.017972);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.7099129);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.5115759);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.3199613);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.2135347);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.1456249);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.07109613);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.04467351);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.01824245);
   VbbHcc_both_H_dR_stack_10->SetBinContent(28,0.003998255);
   VbbHcc_both_H_dR_stack_10->SetBinError(2,0.0004324426);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.0308611);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.0394236);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.04015829);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.0382274);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.0325833);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.02815718);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.02741855);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.02817507);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.03043836);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.03267882);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.03558482);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.03850752);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.04065703);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.04095858);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.03007);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.02403019);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.01963316);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.01636143);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.01383281);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.01090248);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.008893148);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.007342299);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.00506672);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.003998614);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.002542323);
   VbbHcc_both_H_dR_stack_10->SetBinError(28,0.001166672);
   VbbHcc_both_H_dR_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.07156024);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.1679831);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.2637168);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.2534457);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.2429079);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.212324);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.171673);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.1292958);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.1210597);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.1126265);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.1307911);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.1432499);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.1471852);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.1942825);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.08718897);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.06468613);
   VbbHcc_both_H_dR_stack_11->SetBinContent(19,0.02762654);
   VbbHcc_both_H_dR_stack_11->SetBinContent(20,0.008674116);
   VbbHcc_both_H_dR_stack_11->SetBinContent(21,0.005776459);
   VbbHcc_both_H_dR_stack_11->SetBinContent(22,0.008659748);
   VbbHcc_both_H_dR_stack_11->SetBinContent(23,0.01178391);
   VbbHcc_both_H_dR_stack_11->SetBinContent(26,0.002891781);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.01462371);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.0223423);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.02786146);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.02736742);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.0271345);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.0248773);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.02301117);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.02005859);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.01854524);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.01813949);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.01947664);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.02019488);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.02151369);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.02412504);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.01604318);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.01364272);
   VbbHcc_both_H_dR_stack_11->SetBinError(19,0.008768965);
   VbbHcc_both_H_dR_stack_11->SetBinError(20,0.005008053);
   VbbHcc_both_H_dR_stack_11->SetBinError(21,0.004085047);
   VbbHcc_both_H_dR_stack_11->SetBinError(22,0.0050153);
   VbbHcc_both_H_dR_stack_11->SetBinError(23,0.005922906);
   VbbHcc_both_H_dR_stack_11->SetBinError(26,0.002891781);
   VbbHcc_both_H_dR_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.02677219);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.05386599);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.09531122);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.1189334);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.1412629);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.1100628);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.06736746);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.06932113);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.05575644);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.06574453);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.0614145);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.06784773);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.07881255);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.06875779);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.03852699);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.02022837);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.01385379);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.006811889);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.009216427);
   VbbHcc_both_H_dR_stack_12->SetBinContent(22,0.004208676);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.002595587);
   VbbHcc_both_H_dR_stack_12->SetBinContent(24,0.001078224);
   VbbHcc_both_H_dR_stack_12->SetBinContent(25,0.001397764);
   VbbHcc_both_H_dR_stack_12->SetBinContent(26,0.001478452);
   VbbHcc_both_H_dR_stack_12->SetBinContent(27,0.0003574024);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.003132165);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.00451504);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.006020051);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.006751839);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.007366275);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.006447904);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.005083779);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.005124972);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.004602547);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.00501307);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.004839231);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.005090877);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.005490675);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.005115296);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0038375);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.002767395);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.002283094);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.001578321);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.001851137);
   VbbHcc_both_H_dR_stack_12->SetBinError(22,0.001225662);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0009872183);
   VbbHcc_both_H_dR_stack_12->SetBinError(24,0.0006230928);
   VbbHcc_both_H_dR_stack_12->SetBinError(25,0.0007011825);
   VbbHcc_both_H_dR_stack_12->SetBinError(26,0.0007407301);
   VbbHcc_both_H_dR_stack_12->SetBinError(27,0.0003574024);
   VbbHcc_both_H_dR_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__425 = new TH1D("VbbHcc_both_H_dR__425","",30,0,6);
   VbbHcc_both_H_dR__425->SetBinContent(2,72);
   VbbHcc_both_H_dR__425->SetBinContent(3,70197);
   VbbHcc_both_H_dR__425->SetBinContent(4,78770);
   VbbHcc_both_H_dR__425->SetBinContent(5,64360);
   VbbHcc_both_H_dR__425->SetBinContent(6,63189);
   VbbHcc_both_H_dR__425->SetBinContent(7,62700);
   VbbHcc_both_H_dR__425->SetBinContent(8,64705);
   VbbHcc_both_H_dR__425->SetBinContent(9,68895);
   VbbHcc_both_H_dR__425->SetBinContent(10,74909);
   VbbHcc_both_H_dR__425->SetBinContent(11,83624);
   VbbHcc_both_H_dR__425->SetBinContent(12,94096);
   VbbHcc_both_H_dR__425->SetBinContent(13,106492);
   VbbHcc_both_H_dR__425->SetBinContent(14,120785);
   VbbHcc_both_H_dR__425->SetBinContent(15,137143);
   VbbHcc_both_H_dR__425->SetBinContent(16,143761);
   VbbHcc_both_H_dR__425->SetBinContent(17,96545);
   VbbHcc_both_H_dR__425->SetBinContent(18,71084);
   VbbHcc_both_H_dR__425->SetBinContent(19,54930);
   VbbHcc_both_H_dR__425->SetBinContent(20,42028);
   VbbHcc_both_H_dR__425->SetBinContent(21,31911);
   VbbHcc_both_H_dR__425->SetBinContent(22,24077);
   VbbHcc_both_H_dR__425->SetBinContent(23,17580);
   VbbHcc_both_H_dR__425->SetBinContent(24,11939);
   VbbHcc_both_H_dR__425->SetBinContent(25,7162);
   VbbHcc_both_H_dR__425->SetBinContent(26,3725);
   VbbHcc_both_H_dR__425->SetBinContent(27,1751);
   VbbHcc_both_H_dR__425->SetBinContent(28,540);
   VbbHcc_both_H_dR__425->SetBinContent(29,32);
   VbbHcc_both_H_dR__425->SetEntries(1597002);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__425->SetLineColor(ci);
   VbbHcc_both_H_dR__425->SetLineWidth(2);
   VbbHcc_both_H_dR__425->SetMarkerStyle(20);
   VbbHcc_both_H_dR__425->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__425->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__425->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__425->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__425->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__425->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__425->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__425->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__425->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__425->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__425->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__425->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__425->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__425->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__425->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__425->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1425[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fy1425[30] = {
   0,
   94.20306,
   158661.7,
   164132.9,
   139858.1,
   129042.8,
   135523.6,
   136195.5,
   144866,
   156850.3,
   188759.2,
   219806.8,
   222019,
   251412.1,
   290887.6,
   302142.9,
   186423.9,
   151464,
   110485.2,
   83691.15,
   59805.35,
   82351.36,
   37413.71,
   29910.66,
   12320.96,
   7687.924,
   4155.08,
   711.5955,
   7.464264,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1425[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_fey1425[30] = {
   0,
   40.26398,
   6056.675,
   5384.74,
   5449.226,
   4835.752,
   5890.757,
   5632.577,
   5630.023,
   6203.963,
   22241.73,
   23225.09,
   7322.02,
   7515.719,
   9072.522,
   9062.671,
   6085.967,
   6451.876,
   4999.671,
   4577.402,
   3806.337,
   23816.9,
   3444.176,
   3294.553,
   1282.378,
   1051.291,
   879.0357,
   266.9743,
   3.069749,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1425,Graph_from_VbbHcc_both_H_dR_fy1425,Graph_from_VbbHcc_both_H_dR_fex1425,Graph_from_VbbHcc_both_H_dR_fey1425);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1425 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1425","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetMaximum(342326.1);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1425->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1425->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1425);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   H_dR_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__426 = new TH1D("data_mc_ratio__426","",30,0,6);
   data_mc_ratio__426->SetBinContent(2,0.7643064);
   data_mc_ratio__426->SetBinContent(3,0.442432);
   data_mc_ratio__426->SetBinContent(4,0.4799161);
   data_mc_ratio__426->SetBinContent(5,0.4601807);
   data_mc_ratio__426->SetBinContent(6,0.4896749);
   data_mc_ratio__426->SetBinContent(7,0.46265);
   data_mc_ratio__426->SetBinContent(8,0.4750891);
   data_mc_ratio__426->SetBinContent(9,0.4755774);
   data_mc_ratio__426->SetBinContent(10,0.4775827);
   data_mc_ratio__426->SetBinContent(11,0.4430196);
   data_mc_ratio__426->SetBinContent(12,0.4280851);
   data_mc_ratio__426->SetBinContent(13,0.4796526);
   data_mc_ratio__426->SetBinContent(14,0.4804264);
   data_mc_ratio__426->SetBinContent(15,0.4714639);
   data_mc_ratio__426->SetBinContent(16,0.4758047);
   data_mc_ratio__426->SetBinContent(17,0.5178789);
   data_mc_ratio__426->SetBinContent(18,0.469313);
   data_mc_ratio__426->SetBinContent(19,0.4971707);
   data_mc_ratio__426->SetBinContent(20,0.5021797);
   data_mc_ratio__426->SetBinContent(21,0.533581);
   data_mc_ratio__426->SetBinContent(22,0.2923692);
   data_mc_ratio__426->SetBinContent(23,0.4698812);
   data_mc_ratio__426->SetBinContent(24,0.3991554);
   data_mc_ratio__426->SetBinContent(25,0.5812856);
   data_mc_ratio__426->SetBinContent(26,0.4845261);
   data_mc_ratio__426->SetBinContent(27,0.4214119);
   data_mc_ratio__426->SetBinContent(28,0.7588581);
   data_mc_ratio__426->SetBinContent(29,4.287094);
   data_mc_ratio__426->SetBinError(2,0.09007437);
   data_mc_ratio__426->SetBinError(3,0.001669888);
   data_mc_ratio__426->SetBinError(4,0.001709956);
   data_mc_ratio__426->SetBinError(5,0.001813929);
   data_mc_ratio__426->SetBinError(6,0.001947992);
   data_mc_ratio__426->SetBinError(7,0.001847646);
   data_mc_ratio__426->SetBinError(8,0.001867696);
   data_mc_ratio__426->SetBinError(9,0.001811871);
   data_mc_ratio__426->SetBinError(10,0.001744945);
   data_mc_ratio__426->SetBinError(11,0.001531995);
   data_mc_ratio__426->SetBinError(12,0.001395547);
   data_mc_ratio__426->SetBinError(13,0.001469834);
   data_mc_ratio__426->SetBinError(14,0.001382357);
   data_mc_ratio__426->SetBinError(15,0.001273097);
   data_mc_ratio__426->SetBinError(16,0.001254897);
   data_mc_ratio__426->SetBinError(17,0.001666723);
   data_mc_ratio__426->SetBinError(18,0.001760259);
   data_mc_ratio__426->SetBinError(19,0.002121293);
   data_mc_ratio__426->SetBinError(20,0.00244957);
   data_mc_ratio__426->SetBinError(21,0.002986965);
   data_mc_ratio__426->SetBinError(22,0.001884215);
   data_mc_ratio__426->SetBinError(23,0.003543877);
   data_mc_ratio__426->SetBinError(24,0.00365307);
   data_mc_ratio__426->SetBinError(25,0.006868667);
   data_mc_ratio__426->SetBinError(26,0.007938785);
   data_mc_ratio__426->SetBinError(27,0.01007079);
   data_mc_ratio__426->SetBinError(28,0.03265605);
   data_mc_ratio__426->SetBinError(29,0.7578582);
   data_mc_ratio__426->SetMinimum(0.4);
   data_mc_ratio__426->SetMaximum(1.6);
   data_mc_ratio__426->SetEntries(78.33797);
   data_mc_ratio__426->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__426->SetLineColor(ci);
   data_mc_ratio__426->SetLineWidth(2);
   data_mc_ratio__426->SetMarkerStyle(20);
   data_mc_ratio__426->SetMarkerSize(1.2);
   data_mc_ratio__426->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__426->GetXaxis()->SetRange(1,31);
   data_mc_ratio__426->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__426->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__426->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__426->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__426->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__426->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__426->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__426->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__426->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__426->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__426->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__426->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__426->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__426->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1426[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1426[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1426[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1426[30] = {
   0,
   0.4274169,
   0.03817352,
   0.0328072,
   0.03896253,
   0.03747403,
   0.04346665,
   0.04135656,
   0.03886366,
   0.0395534,
   0.1178313,
   0.1056614,
   0.03297924,
   0.02989402,
   0.0311891,
   0.02999465,
   0.03264585,
   0.04259677,
   0.04525195,
   0.05469398,
   0.06364542,
   0.2892108,
   0.09205652,
   0.1101465,
   0.104081,
   0.1367458,
   0.2115569,
   0.375177,
   0.4112595,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1426,Graph_from_mc_statistical_error_fy1426,Graph_from_mc_statistical_error_fex1426,Graph_from_mc_statistical_error_fey1426);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1426 = new TH1F("Graph_Graph_from_mc_statistical_error1426","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1426->SetMinimum(0.4870998);
   Graph_Graph_from_mc_statistical_error1426->SetMaximum(1.5129);
   Graph_Graph_from_mc_statistical_error1426->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1426->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1426->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1426->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1426->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1426);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
