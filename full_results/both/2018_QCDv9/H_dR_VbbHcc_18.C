void H_dR_VbbHcc_18()
{
//=========Macro generated from canvas: H_dR_VbbHcc_18/H_dR_VbbHcc_18
//=========  (Mon Nov 21 13:07:00 2022) by ROOT version 6.14/09
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
   topPad->Range(-1.532254,-7445.603,10.52419,7438167);
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
   st->SetMaximum(6374862);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",50,0,10);
   st_stack_23->SetMinimum(0.01);
   st_stack_23->SetMaximum(6693605);
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
   
   
   TH1D *VbbHcc_duong_H_dR_stack_1 = new TH1D("VbbHcc_duong_H_dR_stack_1","",50,0,10);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(3,1072920);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(4,1383884);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(5,1104209);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(6,997589.9);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(7,1035380);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(8,1174597);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(9,1174072);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(10,1396829);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(11,1525691);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(12,1708951);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(13,1774554);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(14,2067632);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(15,2295482);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(16,2434924);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(17,1595647);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(18,1251795);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(19,948961.9);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(20,782501.5);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(21,565338.6);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(22,439894.8);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(23,332313.6);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(24,182161);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(25,144349.9);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(26,97813.7);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(27,22377.96);
   VbbHcc_duong_H_dR_stack_1->SetBinContent(28,8634.957);
   VbbHcc_duong_H_dR_stack_1->SetBinError(3,48005.03);
   VbbHcc_duong_H_dR_stack_1->SetBinError(4,84949.03);
   VbbHcc_duong_H_dR_stack_1->SetBinError(5,43774.05);
   VbbHcc_duong_H_dR_stack_1->SetBinError(6,42324.59);
   VbbHcc_duong_H_dR_stack_1->SetBinError(7,43758.54);
   VbbHcc_duong_H_dR_stack_1->SetBinError(8,45281.6);
   VbbHcc_duong_H_dR_stack_1->SetBinError(9,52471.17);
   VbbHcc_duong_H_dR_stack_1->SetBinError(10,52488.45);
   VbbHcc_duong_H_dR_stack_1->SetBinError(11,88258.08);
   VbbHcc_duong_H_dR_stack_1->SetBinError(12,87940.94);
   VbbHcc_duong_H_dR_stack_1->SetBinError(13,58629.84);
   VbbHcc_duong_H_dR_stack_1->SetBinError(14,60589.88);
   VbbHcc_duong_H_dR_stack_1->SetBinError(15,65979.85);
   VbbHcc_duong_H_dR_stack_1->SetBinError(16,65657.2);
   VbbHcc_duong_H_dR_stack_1->SetBinError(17,53138.09);
   VbbHcc_duong_H_dR_stack_1->SetBinError(18,47378.17);
   VbbHcc_duong_H_dR_stack_1->SetBinError(19,40642.86);
   VbbHcc_duong_H_dR_stack_1->SetBinError(20,37045.81);
   VbbHcc_duong_H_dR_stack_1->SetBinError(21,31492.77);
   VbbHcc_duong_H_dR_stack_1->SetBinError(22,28261.84);
   VbbHcc_duong_H_dR_stack_1->SetBinError(23,23996.45);
   VbbHcc_duong_H_dR_stack_1->SetBinError(24,17442.45);
   VbbHcc_duong_H_dR_stack_1->SetBinError(25,15890.36);
   VbbHcc_duong_H_dR_stack_1->SetBinError(26,18163.26);
   VbbHcc_duong_H_dR_stack_1->SetBinError(27,6278.857);
   VbbHcc_duong_H_dR_stack_1->SetBinError(28,3682.472);
   VbbHcc_duong_H_dR_stack_1->SetEntries(16494);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_1,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_2 = new TH1D("VbbHcc_duong_H_dR_stack_2","",50,0,10);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(2,6.86312);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(3,7483.851);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(4,11493.18);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(5,13003.47);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(6,15381.95);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(7,17136.97);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(8,17972.4);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(9,18208.31);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(10,18456.79);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(11,19199.18);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(12,20313.31);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(13,21789.46);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(14,23600.45);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(15,25472.57);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(16,25666.36);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(17,15871.95);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(18,11110.06);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(19,8164.369);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(20,6025.975);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(21,4329.668);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(22,3047.521);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(23,2090.738);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(24,1354.301);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(25,763.7449);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(26,397.4999);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(27,174.9059);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(28,50.99882);
   VbbHcc_duong_H_dR_stack_2->SetBinContent(29,4.592383);
   VbbHcc_duong_H_dR_stack_2->SetBinError(2,1.310484);
   VbbHcc_duong_H_dR_stack_2->SetBinError(3,42.4277);
   VbbHcc_duong_H_dR_stack_2->SetBinError(4,51.5939);
   VbbHcc_duong_H_dR_stack_2->SetBinError(5,55.51387);
   VbbHcc_duong_H_dR_stack_2->SetBinError(6,59.92269);
   VbbHcc_duong_H_dR_stack_2->SetBinError(7,60.58851);
   VbbHcc_duong_H_dR_stack_2->SetBinError(8,64.14724);
   VbbHcc_duong_H_dR_stack_2->SetBinError(9,59.77089);
   VbbHcc_duong_H_dR_stack_2->SetBinError(10,61.82582);
   VbbHcc_duong_H_dR_stack_2->SetBinError(11,63.7555);
   VbbHcc_duong_H_dR_stack_2->SetBinError(12,66.17372);
   VbbHcc_duong_H_dR_stack_2->SetBinError(13,68.5473);
   VbbHcc_duong_H_dR_stack_2->SetBinError(14,71.84154);
   VbbHcc_duong_H_dR_stack_2->SetBinError(15,75.4219);
   VbbHcc_duong_H_dR_stack_2->SetBinError(16,72.27077);
   VbbHcc_duong_H_dR_stack_2->SetBinError(17,58.63718);
   VbbHcc_duong_H_dR_stack_2->SetBinError(18,44.15498);
   VbbHcc_duong_H_dR_stack_2->SetBinError(19,39.10447);
   VbbHcc_duong_H_dR_stack_2->SetBinError(20,31.64298);
   VbbHcc_duong_H_dR_stack_2->SetBinError(21,25.06598);
   VbbHcc_duong_H_dR_stack_2->SetBinError(22,20.92786);
   VbbHcc_duong_H_dR_stack_2->SetBinError(23,17.92383);
   VbbHcc_duong_H_dR_stack_2->SetBinError(24,13.23732);
   VbbHcc_duong_H_dR_stack_2->SetBinError(25,9.615781);
   VbbHcc_duong_H_dR_stack_2->SetBinError(26,6.845849);
   VbbHcc_duong_H_dR_stack_2->SetBinError(27,5.22753);
   VbbHcc_duong_H_dR_stack_2->SetBinError(28,2.411152);
   VbbHcc_duong_H_dR_stack_2->SetBinError(29,1.150251);
   VbbHcc_duong_H_dR_stack_2->SetEntries(3869618);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_2,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_3 = new TH1D("VbbHcc_duong_H_dR_stack_3","",50,0,10);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(2,84.3621);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(3,94762.25);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(4,168419.1);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(5,204838.1);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(6,245823.2);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(7,268633.9);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(8,276852.9);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(9,279724.1);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(10,285751.6);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(11,297789.6);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(12,317001);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(13,341273.2);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(14,368310.1);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(15,394819.8);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(16,390573);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(17,223624);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(18,143116.1);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(19,96326.28);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(20,65417.66);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(21,44082.8);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(22,29011.14);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(23,18476.59);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(24,11084.62);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(25,5957.884);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(26,2934.588);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(27,1217.871);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(28,333.1509);
   VbbHcc_duong_H_dR_stack_3->SetBinContent(29,24.55151);
   VbbHcc_duong_H_dR_stack_3->SetBinError(2,4.055645);
   VbbHcc_duong_H_dR_stack_3->SetBinError(3,89.90563);
   VbbHcc_duong_H_dR_stack_3->SetBinError(4,118.4879);
   VbbHcc_duong_H_dR_stack_3->SetBinError(5,131.1814);
   VbbHcc_duong_H_dR_stack_3->SetBinError(6,142.9579);
   VbbHcc_duong_H_dR_stack_3->SetBinError(7,149.2766);
   VbbHcc_duong_H_dR_stack_3->SetBinError(8,152.703);
   VbbHcc_duong_H_dR_stack_3->SetBinError(9,152.9462);
   VbbHcc_duong_H_dR_stack_3->SetBinError(10,155.2573);
   VbbHcc_duong_H_dR_stack_3->SetBinError(11,158.244);
   VbbHcc_duong_H_dR_stack_3->SetBinError(12,163.0852);
   VbbHcc_duong_H_dR_stack_3->SetBinError(13,169.6108);
   VbbHcc_duong_H_dR_stack_3->SetBinError(14,176.3682);
   VbbHcc_duong_H_dR_stack_3->SetBinError(15,182.6191);
   VbbHcc_duong_H_dR_stack_3->SetBinError(16,181.4876);
   VbbHcc_duong_H_dR_stack_3->SetBinError(17,137.624);
   VbbHcc_duong_H_dR_stack_3->SetBinError(18,110.0594);
   VbbHcc_duong_H_dR_stack_3->SetBinError(19,89.78568);
   VbbHcc_duong_H_dR_stack_3->SetBinError(20,73.3178);
   VbbHcc_duong_H_dR_stack_3->SetBinError(21,59.58113);
   VbbHcc_duong_H_dR_stack_3->SetBinError(22,48.76444);
   VbbHcc_duong_H_dR_stack_3->SetBinError(23,38.57077);
   VbbHcc_duong_H_dR_stack_3->SetBinError(24,29.78925);
   VbbHcc_duong_H_dR_stack_3->SetBinError(25,21.27731);
   VbbHcc_duong_H_dR_stack_3->SetBinError(26,15.79542);
   VbbHcc_duong_H_dR_stack_3->SetBinError(27,9.5787);
   VbbHcc_duong_H_dR_stack_3->SetBinError(28,5.49607);
   VbbHcc_duong_H_dR_stack_3->SetBinError(29,1.319242);
   VbbHcc_duong_H_dR_stack_3->SetEntries(6.805031e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_3,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_4 = new TH1D("VbbHcc_duong_H_dR_stack_4","",50,0,10);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(2,2.277818);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(3,2643.148);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(4,3450.854);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(5,3364.701);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(6,3457.803);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(7,3426.439);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(8,3493.17);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(9,3657.806);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(10,3843.176);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(11,4078.418);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(12,4667.45);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(13,5143.059);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(14,5845.34);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(15,6588.262);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(16,6671.879);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(17,4280.477);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(18,2902.754);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(19,2058.666);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(20,1593.721);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(21,1076.172);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(22,766.2162);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(23,549.9631);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(24,341.2237);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(25,194.8505);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(26,78.89782);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(27,43.95435);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(28,8.407723);
   VbbHcc_duong_H_dR_stack_4->SetBinContent(29,1.402916);
   VbbHcc_duong_H_dR_stack_4->SetBinError(2,1.151988);
   VbbHcc_duong_H_dR_stack_4->SetBinError(3,41.5272);
   VbbHcc_duong_H_dR_stack_4->SetBinError(4,46.70387);
   VbbHcc_duong_H_dR_stack_4->SetBinError(5,45.27973);
   VbbHcc_duong_H_dR_stack_4->SetBinError(6,45.55911);
   VbbHcc_duong_H_dR_stack_4->SetBinError(7,45.74605);
   VbbHcc_duong_H_dR_stack_4->SetBinError(8,46.26456);
   VbbHcc_duong_H_dR_stack_4->SetBinError(9,52.84341);
   VbbHcc_duong_H_dR_stack_4->SetBinError(10,49.04159);
   VbbHcc_duong_H_dR_stack_4->SetBinError(11,49.28969);
   VbbHcc_duong_H_dR_stack_4->SetBinError(12,52.85664);
   VbbHcc_duong_H_dR_stack_4->SetBinError(13,57.54891);
   VbbHcc_duong_H_dR_stack_4->SetBinError(14,60.14349);
   VbbHcc_duong_H_dR_stack_4->SetBinError(15,68.25545);
   VbbHcc_duong_H_dR_stack_4->SetBinError(16,68.11618);
   VbbHcc_duong_H_dR_stack_4->SetBinError(17,56.44116);
   VbbHcc_duong_H_dR_stack_4->SetBinError(18,42.84482);
   VbbHcc_duong_H_dR_stack_4->SetBinError(19,35.87205);
   VbbHcc_duong_H_dR_stack_4->SetBinError(20,32.91401);
   VbbHcc_duong_H_dR_stack_4->SetBinError(21,25.79129);
   VbbHcc_duong_H_dR_stack_4->SetBinError(22,21.72517);
   VbbHcc_duong_H_dR_stack_4->SetBinError(23,18.11433);
   VbbHcc_duong_H_dR_stack_4->SetBinError(24,14.20507);
   VbbHcc_duong_H_dR_stack_4->SetBinError(25,10.47761);
   VbbHcc_duong_H_dR_stack_4->SetBinError(26,6.568931);
   VbbHcc_duong_H_dR_stack_4->SetBinError(27,5.02071);
   VbbHcc_duong_H_dR_stack_4->SetBinError(28,2.202643);
   VbbHcc_duong_H_dR_stack_4->SetBinError(29,0.9922542);
   VbbHcc_duong_H_dR_stack_4->SetEntries(135370);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_4,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_5 = new TH1D("VbbHcc_duong_H_dR_stack_5","",50,0,10);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(3,1338.164);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(4,2480.291);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(5,2400.257);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(6,2251.725);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(7,2068.598);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(8,2114.553);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(9,2160.375);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(10,2163.145);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(11,2343.671);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(12,2654.573);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(13,2845.889);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(14,3246.847);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(15,3520.923);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(16,3531.499);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(17,2085.647);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(18,1485.77);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(19,1084.273);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(20,737.1814);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(21,589.2742);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(22,402.4583);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(23,301.8908);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(24,222.4357);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(25,111.7917);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(26,65.45104);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(27,29.27644);
   VbbHcc_duong_H_dR_stack_5->SetBinContent(28,7.200765);
   VbbHcc_duong_H_dR_stack_5->SetBinError(3,59.04052);
   VbbHcc_duong_H_dR_stack_5->SetBinError(4,80.54854);
   VbbHcc_duong_H_dR_stack_5->SetBinError(5,79.24587);
   VbbHcc_duong_H_dR_stack_5->SetBinError(6,87.84466);
   VbbHcc_duong_H_dR_stack_5->SetBinError(7,72.62731);
   VbbHcc_duong_H_dR_stack_5->SetBinError(8,77.49923);
   VbbHcc_duong_H_dR_stack_5->SetBinError(9,80.99843);
   VbbHcc_duong_H_dR_stack_5->SetBinError(10,73.91853);
   VbbHcc_duong_H_dR_stack_5->SetBinError(11,77.29128);
   VbbHcc_duong_H_dR_stack_5->SetBinError(12,81.92006);
   VbbHcc_duong_H_dR_stack_5->SetBinError(13,87.64102);
   VbbHcc_duong_H_dR_stack_5->SetBinError(14,93.78736);
   VbbHcc_duong_H_dR_stack_5->SetBinError(15,94.3894);
   VbbHcc_duong_H_dR_stack_5->SetBinError(16,95.42065);
   VbbHcc_duong_H_dR_stack_5->SetBinError(17,77.29563);
   VbbHcc_duong_H_dR_stack_5->SetBinError(18,64.67119);
   VbbHcc_duong_H_dR_stack_5->SetBinError(19,52.24573);
   VbbHcc_duong_H_dR_stack_5->SetBinError(20,42.57111);
   VbbHcc_duong_H_dR_stack_5->SetBinError(21,38.36332);
   VbbHcc_duong_H_dR_stack_5->SetBinError(22,31.77464);
   VbbHcc_duong_H_dR_stack_5->SetBinError(23,27.31298);
   VbbHcc_duong_H_dR_stack_5->SetBinError(24,23.80616);
   VbbHcc_duong_H_dR_stack_5->SetBinError(25,16.44331);
   VbbHcc_duong_H_dR_stack_5->SetBinError(26,12.71359);
   VbbHcc_duong_H_dR_stack_5->SetBinError(27,8.391875);
   VbbHcc_duong_H_dR_stack_5->SetBinError(28,4.263719);
   VbbHcc_duong_H_dR_stack_5->SetEntries(17571);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_5,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_6 = new TH1D("VbbHcc_duong_H_dR_stack_6","",50,0,10);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(3,38.37659);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(4,52.22871);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(5,65.2119);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(6,60.35165);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(7,76.59236);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(8,69.34533);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(9,72.24473);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(10,82.29121);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(11,79.56202);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(12,89.83051);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(13,101.2003);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(14,104.827);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(15,118.8687);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(16,125.3759);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(17,70.31857);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(18,39.7193);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(19,31.13792);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(20,16.63949);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(21,17.50498);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(22,10.18137);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(23,3.916449);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(24,5.742847);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(25,3.469248);
   VbbHcc_duong_H_dR_stack_6->SetBinContent(26,1.501683);
   VbbHcc_duong_H_dR_stack_6->SetBinError(3,3.786836);
   VbbHcc_duong_H_dR_stack_6->SetBinError(4,4.477197);
   VbbHcc_duong_H_dR_stack_6->SetBinError(5,4.952481);
   VbbHcc_duong_H_dR_stack_6->SetBinError(6,4.833256);
   VbbHcc_duong_H_dR_stack_6->SetBinError(7,5.617726);
   VbbHcc_duong_H_dR_stack_6->SetBinError(8,5.12);
   VbbHcc_duong_H_dR_stack_6->SetBinError(9,5.307996);
   VbbHcc_duong_H_dR_stack_6->SetBinError(10,5.737546);
   VbbHcc_duong_H_dR_stack_6->SetBinError(11,5.718852);
   VbbHcc_duong_H_dR_stack_6->SetBinError(12,5.950947);
   VbbHcc_duong_H_dR_stack_6->SetBinError(13,6.215113);
   VbbHcc_duong_H_dR_stack_6->SetBinError(14,6.53045);
   VbbHcc_duong_H_dR_stack_6->SetBinError(15,7.197092);
   VbbHcc_duong_H_dR_stack_6->SetBinError(16,6.913628);
   VbbHcc_duong_H_dR_stack_6->SetBinError(17,5.157981);
   VbbHcc_duong_H_dR_stack_6->SetBinError(18,3.910399);
   VbbHcc_duong_H_dR_stack_6->SetBinError(19,3.417605);
   VbbHcc_duong_H_dR_stack_6->SetBinError(20,2.432922);
   VbbHcc_duong_H_dR_stack_6->SetBinError(21,2.593483);
   VbbHcc_duong_H_dR_stack_6->SetBinError(22,1.88814);
   VbbHcc_duong_H_dR_stack_6->SetBinError(23,1.277182);
   VbbHcc_duong_H_dR_stack_6->SetBinError(24,1.506798);
   VbbHcc_duong_H_dR_stack_6->SetBinError(25,1.101797);
   VbbHcc_duong_H_dR_stack_6->SetBinError(26,0.7614863);
   VbbHcc_duong_H_dR_stack_6->SetEntries(3697);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_6,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_7 = new TH1D("VbbHcc_duong_H_dR_stack_7","",50,0,10);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(3,83.97475);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(4,124.006);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(5,135.0119);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(6,143.3798);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(7,145.2032);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(8,133.7469);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(9,150.04);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(10,148.831);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(11,154.3152);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(12,160.8156);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(13,169.5535);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(14,200.4622);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(15,215.6566);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(16,218.3337);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(17,115.9711);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(18,77.83317);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(19,56.9982);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(20,40.15823);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(21,32.17164);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(22,21.36125);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(23,11.70228);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(24,5.725432);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(25,3.146856);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(26,2.343227);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(27,1.468949);
   VbbHcc_duong_H_dR_stack_7->SetBinContent(28,0.3993601);
   VbbHcc_duong_H_dR_stack_7->SetBinError(3,4.942519);
   VbbHcc_duong_H_dR_stack_7->SetBinError(4,5.500669);
   VbbHcc_duong_H_dR_stack_7->SetBinError(5,5.714153);
   VbbHcc_duong_H_dR_stack_7->SetBinError(6,5.899831);
   VbbHcc_duong_H_dR_stack_7->SetBinError(7,6.844215);
   VbbHcc_duong_H_dR_stack_7->SetBinError(8,5.71096);
   VbbHcc_duong_H_dR_stack_7->SetBinError(9,6.062366);
   VbbHcc_duong_H_dR_stack_7->SetBinError(10,6.455157);
   VbbHcc_duong_H_dR_stack_7->SetBinError(11,6.587999);
   VbbHcc_duong_H_dR_stack_7->SetBinError(12,6.176667);
   VbbHcc_duong_H_dR_stack_7->SetBinError(13,6.372411);
   VbbHcc_duong_H_dR_stack_7->SetBinError(14,7.104605);
   VbbHcc_duong_H_dR_stack_7->SetBinError(15,7.457687);
   VbbHcc_duong_H_dR_stack_7->SetBinError(16,7.330186);
   VbbHcc_duong_H_dR_stack_7->SetBinError(17,5.279691);
   VbbHcc_duong_H_dR_stack_7->SetBinError(18,4.567772);
   VbbHcc_duong_H_dR_stack_7->SetBinError(19,3.7309);
   VbbHcc_duong_H_dR_stack_7->SetBinError(20,3.142355);
   VbbHcc_duong_H_dR_stack_7->SetBinError(21,2.769958);
   VbbHcc_duong_H_dR_stack_7->SetBinError(22,2.27159);
   VbbHcc_duong_H_dR_stack_7->SetBinError(23,1.658073);
   VbbHcc_duong_H_dR_stack_7->SetBinError(24,1.154795);
   VbbHcc_duong_H_dR_stack_7->SetBinError(25,0.8456377);
   VbbHcc_duong_H_dR_stack_7->SetBinError(26,0.7525706);
   VbbHcc_duong_H_dR_stack_7->SetBinError(27,0.6579333);
   VbbHcc_duong_H_dR_stack_7->SetBinError(28,0.2851525);
   VbbHcc_duong_H_dR_stack_7->SetEntries(11097);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_7,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_8 = new TH1D("VbbHcc_duong_H_dR_stack_8","",50,0,10);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(2,0.2191845);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(3,66.60728);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(4,97.80053);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(5,105.5949);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(6,128.4931);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(7,146.3232);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(8,154.0165);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(9,141.8313);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(10,165.774);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(11,158.6529);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(12,183.3535);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(13,191.1744);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(14,204.7399);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(15,230.6244);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(16,219.9131);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(17,105.8412);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(18,72.50513);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(19,47.55012);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(20,29.15184);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(21,20.62684);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(22,11.79425);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(23,9.553362);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(24,6.33885);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(25,2.842528);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(26,0.843363);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(27,1.334753);
   VbbHcc_duong_H_dR_stack_8->SetBinContent(28,0.2170818);
   VbbHcc_duong_H_dR_stack_8->SetBinError(2,0.2191845);
   VbbHcc_duong_H_dR_stack_8->SetBinError(3,4.045551);
   VbbHcc_duong_H_dR_stack_8->SetBinError(4,4.83204);
   VbbHcc_duong_H_dR_stack_8->SetBinError(5,5.646243);
   VbbHcc_duong_H_dR_stack_8->SetBinError(6,5.849762);
   VbbHcc_duong_H_dR_stack_8->SetBinError(7,6.03761);
   VbbHcc_duong_H_dR_stack_8->SetBinError(8,7.415763);
   VbbHcc_duong_H_dR_stack_8->SetBinError(9,5.847033);
   VbbHcc_duong_H_dR_stack_8->SetBinError(10,6.840591);
   VbbHcc_duong_H_dR_stack_8->SetBinError(11,6.197141);
   VbbHcc_duong_H_dR_stack_8->SetBinError(12,11.50572);
   VbbHcc_duong_H_dR_stack_8->SetBinError(13,6.837958);
   VbbHcc_duong_H_dR_stack_8->SetBinError(14,7.581798);
   VbbHcc_duong_H_dR_stack_8->SetBinError(15,7.639915);
   VbbHcc_duong_H_dR_stack_8->SetBinError(16,7.437106);
   VbbHcc_duong_H_dR_stack_8->SetBinError(17,5.533351);
   VbbHcc_duong_H_dR_stack_8->SetBinError(18,4.177385);
   VbbHcc_duong_H_dR_stack_8->SetBinError(19,3.913568);
   VbbHcc_duong_H_dR_stack_8->SetBinError(20,2.717911);
   VbbHcc_duong_H_dR_stack_8->SetBinError(21,2.224583);
   VbbHcc_duong_H_dR_stack_8->SetBinError(22,1.671581);
   VbbHcc_duong_H_dR_stack_8->SetBinError(23,1.516454);
   VbbHcc_duong_H_dR_stack_8->SetBinError(24,1.22972);
   VbbHcc_duong_H_dR_stack_8->SetBinError(25,0.8114879);
   VbbHcc_duong_H_dR_stack_8->SetBinError(26,0.4243227);
   VbbHcc_duong_H_dR_stack_8->SetBinError(27,0.5582674);
   VbbHcc_duong_H_dR_stack_8->SetBinError(28,0.2170818);
   VbbHcc_duong_H_dR_stack_8->SetEntries(10770);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_8,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_9 = new TH1D("VbbHcc_duong_H_dR_stack_9","",50,0,10);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(2,0.01945902);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(3,32.54195);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(4,48.84595);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(5,52.9752);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(6,57.78121);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(7,57.59276);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(8,56.45481);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(9,55.16885);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(10,54.67288);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(11,54.88827);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(12,57.7792);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(13,61.60879);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(14,65.93177);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(15,71.53784);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(16,70.21901);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(17,33.75431);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(18,19.83356);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(19,13.26474);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(20,8.891684);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(21,6.310067);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(22,4.314787);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(23,2.885663);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(24,1.824874);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(25,1.029257);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(26,0.5129774);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(27,0.2033342);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(28,0.06710276);
   VbbHcc_duong_H_dR_stack_9->SetBinContent(29,0.007527908);
   VbbHcc_duong_H_dR_stack_9->SetBinError(2,0.007501333);
   VbbHcc_duong_H_dR_stack_9->SetBinError(3,0.3161598);
   VbbHcc_duong_H_dR_stack_9->SetBinError(4,0.4108674);
   VbbHcc_duong_H_dR_stack_9->SetBinError(5,0.4306107);
   VbbHcc_duong_H_dR_stack_9->SetBinError(6,0.4148999);
   VbbHcc_duong_H_dR_stack_9->SetBinError(7,0.4119724);
   VbbHcc_duong_H_dR_stack_9->SetBinError(8,0.428981);
   VbbHcc_duong_H_dR_stack_9->SetBinError(9,0.4281701);
   VbbHcc_duong_H_dR_stack_9->SetBinError(10,0.4069832);
   VbbHcc_duong_H_dR_stack_9->SetBinError(11,0.4101645);
   VbbHcc_duong_H_dR_stack_9->SetBinError(12,0.4439923);
   VbbHcc_duong_H_dR_stack_9->SetBinError(13,0.4788253);
   VbbHcc_duong_H_dR_stack_9->SetBinError(14,0.4581183);
   VbbHcc_duong_H_dR_stack_9->SetBinError(15,0.4622155);
   VbbHcc_duong_H_dR_stack_9->SetBinError(16,0.4540925);
   VbbHcc_duong_H_dR_stack_9->SetBinError(17,0.3153588);
   VbbHcc_duong_H_dR_stack_9->SetBinError(18,0.2357232);
   VbbHcc_duong_H_dR_stack_9->SetBinError(19,0.1966134);
   VbbHcc_duong_H_dR_stack_9->SetBinError(20,0.1596809);
   VbbHcc_duong_H_dR_stack_9->SetBinError(21,0.1317773);
   VbbHcc_duong_H_dR_stack_9->SetBinError(22,0.1091217);
   VbbHcc_duong_H_dR_stack_9->SetBinError(23,0.09183637);
   VbbHcc_duong_H_dR_stack_9->SetBinError(24,0.07300494);
   VbbHcc_duong_H_dR_stack_9->SetBinError(25,0.05992791);
   VbbHcc_duong_H_dR_stack_9->SetBinError(26,0.03706173);
   VbbHcc_duong_H_dR_stack_9->SetBinError(27,0.02359085);
   VbbHcc_duong_H_dR_stack_9->SetBinError(28,0.0134197);
   VbbHcc_duong_H_dR_stack_9->SetBinError(29,0.004347588);
   VbbHcc_duong_H_dR_stack_9->SetEntries(353785);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_9,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_10 = new TH1D("VbbHcc_duong_H_dR_stack_10","",50,0,10);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(2,0.005625357);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(3,9.572256);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(4,15.52102);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(5,17.73668);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(6,19.08542);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(7,16.98368);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(8,14.16891);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(9,12.65788);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(10,12.34738);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(11,12.95469);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(12,14.48452);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(13,15.87891);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(14,17.85389);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(15,19.677);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(16,19.53448);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(17,11.14133);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(18,7.33283);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(19,5.076322);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(20,3.711704);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(21,2.617135);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(22,1.784562);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(23,1.26063);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(24,0.8144137);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(25,0.4584757);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(26,0.2442501);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(27,0.1125702);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(28,0.03606041);
   VbbHcc_duong_H_dR_stack_10->SetBinContent(29,0.002638357);
   VbbHcc_duong_H_dR_stack_10->SetBinError(2,0.001889605);
   VbbHcc_duong_H_dR_stack_10->SetBinError(3,0.07810054);
   VbbHcc_duong_H_dR_stack_10->SetBinError(4,0.09953704);
   VbbHcc_duong_H_dR_stack_10->SetBinError(5,0.1065122);
   VbbHcc_duong_H_dR_stack_10->SetBinError(6,0.110589);
   VbbHcc_duong_H_dR_stack_10->SetBinError(7,0.1042562);
   VbbHcc_duong_H_dR_stack_10->SetBinError(8,0.09516709);
   VbbHcc_duong_H_dR_stack_10->SetBinError(9,0.08987165);
   VbbHcc_duong_H_dR_stack_10->SetBinError(10,0.0887593);
   VbbHcc_duong_H_dR_stack_10->SetBinError(11,0.09089487);
   VbbHcc_duong_H_dR_stack_10->SetBinError(12,0.09608719);
   VbbHcc_duong_H_dR_stack_10->SetBinError(13,0.1005949);
   VbbHcc_duong_H_dR_stack_10->SetBinError(14,0.1066739);
   VbbHcc_duong_H_dR_stack_10->SetBinError(15,0.1119413);
   VbbHcc_duong_H_dR_stack_10->SetBinError(16,0.1115572);
   VbbHcc_duong_H_dR_stack_10->SetBinError(17,0.08416045);
   VbbHcc_duong_H_dR_stack_10->SetBinError(18,0.0681777);
   VbbHcc_duong_H_dR_stack_10->SetBinError(19,0.05663852);
   VbbHcc_duong_H_dR_stack_10->SetBinError(20,0.04835235);
   VbbHcc_duong_H_dR_stack_10->SetBinError(21,0.04048319);
   VbbHcc_duong_H_dR_stack_10->SetBinError(22,0.03337827);
   VbbHcc_duong_H_dR_stack_10->SetBinError(23,0.02802868);
   VbbHcc_duong_H_dR_stack_10->SetBinError(24,0.02245925);
   VbbHcc_duong_H_dR_stack_10->SetBinError(25,0.01673187);
   VbbHcc_duong_H_dR_stack_10->SetBinError(26,0.01215008);
   VbbHcc_duong_H_dR_stack_10->SetBinError(27,0.008196801);
   VbbHcc_duong_H_dR_stack_10->SetBinError(28,0.004619749);
   VbbHcc_duong_H_dR_stack_10->SetBinError(29,0.001227646);
   VbbHcc_duong_H_dR_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_10,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_11 = new TH1D("VbbHcc_duong_H_dR_stack_11","",50,0,10);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(3,0.2553393);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(4,0.5305992);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(5,0.708727);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(6,0.8083914);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(7,0.9432473);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(8,1.099096);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(9,1.16057);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(10,1.148618);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(11,1.192154);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(12,1.112874);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(13,1.174218);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(14,1.243143);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(15,1.196608);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(16,1.275555);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(17,0.54019);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(18,0.2918875);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(19,0.156383);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(20,0.09013505);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(21,0.06899573);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(22,0.04929481);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(23,0.01858142);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(24,0.01114059);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(25,0.002496094);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(26,0.005683742);
   VbbHcc_duong_H_dR_stack_11->SetBinContent(27,0.002177811);
   VbbHcc_duong_H_dR_stack_11->SetBinError(3,0.02513061);
   VbbHcc_duong_H_dR_stack_11->SetBinError(4,0.03712752);
   VbbHcc_duong_H_dR_stack_11->SetBinError(5,0.04350203);
   VbbHcc_duong_H_dR_stack_11->SetBinError(6,0.04583014);
   VbbHcc_duong_H_dR_stack_11->SetBinError(7,0.05062567);
   VbbHcc_duong_H_dR_stack_11->SetBinError(8,0.05408255);
   VbbHcc_duong_H_dR_stack_11->SetBinError(9,0.05727508);
   VbbHcc_duong_H_dR_stack_11->SetBinError(10,0.05520239);
   VbbHcc_duong_H_dR_stack_11->SetBinError(11,0.056625);
   VbbHcc_duong_H_dR_stack_11->SetBinError(12,0.05439964);
   VbbHcc_duong_H_dR_stack_11->SetBinError(13,0.05518434);
   VbbHcc_duong_H_dR_stack_11->SetBinError(14,0.05701334);
   VbbHcc_duong_H_dR_stack_11->SetBinError(15,0.05477616);
   VbbHcc_duong_H_dR_stack_11->SetBinError(16,0.05933142);
   VbbHcc_duong_H_dR_stack_11->SetBinError(17,0.03937428);
   VbbHcc_duong_H_dR_stack_11->SetBinError(18,0.02701446);
   VbbHcc_duong_H_dR_stack_11->SetBinError(19,0.02016124);
   VbbHcc_duong_H_dR_stack_11->SetBinError(20,0.01470964);
   VbbHcc_duong_H_dR_stack_11->SetBinError(21,0.01323397);
   VbbHcc_duong_H_dR_stack_11->SetBinError(22,0.01108965);
   VbbHcc_duong_H_dR_stack_11->SetBinError(23,0.006523386);
   VbbHcc_duong_H_dR_stack_11->SetBinError(24,0.004724899);
   VbbHcc_duong_H_dR_stack_11->SetBinError(25,0.002496094);
   VbbHcc_duong_H_dR_stack_11->SetBinError(26,0.003364363);
   VbbHcc_duong_H_dR_stack_11->SetBinError(27,0.002177811);
   VbbHcc_duong_H_dR_stack_11->SetEntries(6741);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_11,"");
   
   TH1D *VbbHcc_duong_H_dR_stack_12 = new TH1D("VbbHcc_duong_H_dR_stack_12","",50,0,10);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(3,2466.387);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(4,4512.101);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(5,5594.539);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(6,7500.567);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(7,8794.157);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(8,9289.322);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(9,7848.301);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(10,7283.227);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(11,6606.075);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(12,6147.079);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(13,6532.637);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(14,6621.8);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(15,7226.621);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(16,6666.848);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(17,3509.632);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(18,2102.532);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(19,1320.818);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(20,811.8098);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(21,646.4464);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(22,339.013);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(23,236.0356);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(24,201.2584);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(25,64.64282);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(26,44.68653);
   VbbHcc_duong_H_dR_stack_12->SetBinContent(27,21.5202);
   VbbHcc_duong_H_dR_stack_12->SetBinError(3,134.1986);
   VbbHcc_duong_H_dR_stack_12->SetBinError(4,177.4617);
   VbbHcc_duong_H_dR_stack_12->SetBinError(5,198.4041);
   VbbHcc_duong_H_dR_stack_12->SetBinError(6,229.6454);
   VbbHcc_duong_H_dR_stack_12->SetBinError(7,250.0694);
   VbbHcc_duong_H_dR_stack_12->SetBinError(8,257.4872);
   VbbHcc_duong_H_dR_stack_12->SetBinError(9,234.1256);
   VbbHcc_duong_H_dR_stack_12->SetBinError(10,226.1285);
   VbbHcc_duong_H_dR_stack_12->SetBinError(11,214.1999);
   VbbHcc_duong_H_dR_stack_12->SetBinError(12,207.3014);
   VbbHcc_duong_H_dR_stack_12->SetBinError(13,214.3945);
   VbbHcc_duong_H_dR_stack_12->SetBinError(14,215.5789);
   VbbHcc_duong_H_dR_stack_12->SetBinError(15,225.7752);
   VbbHcc_duong_H_dR_stack_12->SetBinError(16,217.343);
   VbbHcc_duong_H_dR_stack_12->SetBinError(17,154.5234);
   VbbHcc_duong_H_dR_stack_12->SetBinError(18,120.0669);
   VbbHcc_duong_H_dR_stack_12->SetBinError(19,95.72224);
   VbbHcc_duong_H_dR_stack_12->SetBinError(20,74.32425);
   VbbHcc_duong_H_dR_stack_12->SetBinError(21,67.19277);
   VbbHcc_duong_H_dR_stack_12->SetBinError(22,47.62933);
   VbbHcc_duong_H_dR_stack_12->SetBinError(23,39.94671);
   VbbHcc_duong_H_dR_stack_12->SetBinError(24,37.96888);
   VbbHcc_duong_H_dR_stack_12->SetBinError(25,20.15676);
   VbbHcc_duong_H_dR_stack_12->SetBinError(26,16.39282);
   VbbHcc_duong_H_dR_stack_12->SetBinError(27,15.95626);
   VbbHcc_duong_H_dR_stack_12->SetEntries(16335);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_H_dR__45 = new TH1D("VbbHcc_duong_H_dR__45","",50,0,10);
   VbbHcc_duong_H_dR__45->SetBinContent(2,531);
   VbbHcc_duong_H_dR__45->SetBinContent(3,584879);
   VbbHcc_duong_H_dR__45->SetBinContent(4,665374);
   VbbHcc_duong_H_dR__45->SetBinContent(5,533592);
   VbbHcc_duong_H_dR__45->SetBinContent(6,531726);
   VbbHcc_duong_H_dR__45->SetBinContent(7,539465);
   VbbHcc_duong_H_dR__45->SetBinContent(8,559307);
   VbbHcc_duong_H_dR__45->SetBinContent(9,593418);
   VbbHcc_duong_H_dR__45->SetBinContent(10,641397);
   VbbHcc_duong_H_dR__45->SetBinContent(11,705422);
   VbbHcc_duong_H_dR__45->SetBinContent(12,783230);
   VbbHcc_duong_H_dR__45->SetBinContent(13,877298);
   VbbHcc_duong_H_dR__45->SetBinContent(14,988931);
   VbbHcc_duong_H_dR__45->SetBinContent(15,1107683);
   VbbHcc_duong_H_dR__45->SetBinContent(16,1160989);
   VbbHcc_duong_H_dR__45->SetBinContent(17,799996);
   VbbHcc_duong_H_dR__45->SetBinContent(18,605648);
   VbbHcc_duong_H_dR__45->SetBinContent(19,471689);
   VbbHcc_duong_H_dR__45->SetBinContent(20,367934);
   VbbHcc_duong_H_dR__45->SetBinContent(21,283381);
   VbbHcc_duong_H_dR__45->SetBinContent(22,212652);
   VbbHcc_duong_H_dR__45->SetBinContent(23,153831);
   VbbHcc_duong_H_dR__45->SetBinContent(24,102878);
   VbbHcc_duong_H_dR__45->SetBinContent(25,61840);
   VbbHcc_duong_H_dR__45->SetBinContent(26,33311);
   VbbHcc_duong_H_dR__45->SetBinContent(27,14857);
   VbbHcc_duong_H_dR__45->SetBinContent(28,4291);
   VbbHcc_duong_H_dR__45->SetBinContent(29,304);
   VbbHcc_duong_H_dR__45->SetEntries(1.338585e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR__45->SetLineColor(ci);
   VbbHcc_duong_H_dR__45->SetLineWidth(2);
   VbbHcc_duong_H_dR__45->SetMarkerStyle(20);
   VbbHcc_duong_H_dR__45->SetMarkerSize(1.2);
   VbbHcc_duong_H_dR__45->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR__45->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR__45->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR__45->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR__45->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR__45->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR__45->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR__45->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR__45->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR__45->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR__45->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR__45->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR__45->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR__45->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR__45->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_H_dR_fx1045[50] = {
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
   Double_t Graph_from_VbbHcc_duong_H_dR_fy1045[50] = {
   0,
   93.74731,
   1181845,
   1574578,
   1333787,
   1272415,
   1335884,
   1484748,
   1486104,
   1714792,
   1856169,
   2060242,
   2152679,
   2475852,
   2733768,
   2868688,
   1845356,
   1412730,
   1058070,
   857186.4,
   616142.3,
   473510.6,
   353998.1,
   195385.3,
   151453.7,
   101340.3,
   23868.61,
   9035.434,
   30.55697,
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
   Double_t Graph_from_VbbHcc_duong_H_dR_fex1045[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_duong_H_dR_fey1045[50] = {
   0,
   4.420498,
   48005.38,
   84949.36,
   43774.83,
   42325.62,
   43759.63,
   45282.72,
   52472.04,
   52489.28,
   88258.55,
   87941.42,
   58630.61,
   60590.67,
   65980.64,
   65657.96,
   53138.61,
   47378.54,
   40643.14,
   37046.01,
   31492.94,
   28261.96,
   23996.55,
   17442.54,
   15890.41,
   18163.28,
   6278.895,
   3682.48,
   2.01198,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_duong_H_dR_fx1045,Graph_from_VbbHcc_duong_H_dR_fy1045,Graph_from_VbbHcc_duong_H_dR_fex1045,Graph_from_VbbHcc_duong_H_dR_fey1045);
   gre->SetName("Graph_from_VbbHcc_duong_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_H_dR1045 = new TH1F("Graph_Graph_from_VbbHcc_duong_H_dR1045","",100,0,11);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->SetMinimum(0);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->SetMaximum(3227781);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_H_dR1045->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_H_dR1045);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_H_dR","MC unc. (stat.)","fl");

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
   data_mc_ratio__46->SetBinContent(2,5.664163);
   data_mc_ratio__46->SetBinContent(3,0.4948863);
   data_mc_ratio__46->SetBinContent(4,0.4225729);
   data_mc_ratio__46->SetBinContent(5,0.4000579);
   data_mc_ratio__46->SetBinContent(6,0.4178873);
   data_mc_ratio__46->SetBinContent(7,0.4038262);
   data_mc_ratio__46->SetBinContent(8,0.3767016);
   data_mc_ratio__46->SetBinContent(9,0.3993112);
   data_mc_ratio__46->SetBinContent(10,0.3740378);
   data_mc_ratio__46->SetBinContent(11,0.3800418);
   data_mc_ratio__46->SetBinContent(12,0.3801642);
   data_mc_ratio__46->SetBinContent(13,0.4075377);
   data_mc_ratio__46->SetBinContent(14,0.3994306);
   data_mc_ratio__46->SetBinContent(15,0.4051855);
   data_mc_ratio__46->SetBinContent(16,0.4047108);
   data_mc_ratio__46->SetBinContent(17,0.4335186);
   data_mc_ratio__46->SetBinContent(18,0.4287076);
   data_mc_ratio__46->SetBinContent(19,0.4458011);
   data_mc_ratio__46->SetBinContent(20,0.4292345);
   data_mc_ratio__46->SetBinContent(21,0.4599278);
   data_mc_ratio__46->SetBinContent(22,0.4490966);
   data_mc_ratio__46->SetBinContent(23,0.4345532);
   data_mc_ratio__46->SetBinContent(24,0.5265392);
   data_mc_ratio__46->SetBinContent(25,0.4083095);
   data_mc_ratio__46->SetBinContent(26,0.3287045);
   data_mc_ratio__46->SetBinContent(27,0.6224493);
   data_mc_ratio__46->SetBinContent(28,0.474908);
   data_mc_ratio__46->SetBinContent(29,9.94863);
   data_mc_ratio__46->SetBinError(2,0.2458037);
   data_mc_ratio__46->SetBinError(3,0.0006471016);
   data_mc_ratio__46->SetBinError(4,0.0005180464);
   data_mc_ratio__46->SetBinError(5,0.000547669);
   data_mc_ratio__46->SetBinError(6,0.0005730799);
   data_mc_ratio__46->SetBinError(7,0.0005498103);
   data_mc_ratio__46->SetBinError(8,0.0005037005);
   data_mc_ratio__46->SetBinError(9,0.0005183596);
   data_mc_ratio__46->SetBinError(10,0.0004670378);
   data_mc_ratio__46->SetBinError(11,0.0004524878);
   data_mc_ratio__46->SetBinError(12,0.0004295626);
   data_mc_ratio__46->SetBinError(13,0.0004351052);
   data_mc_ratio__46->SetBinError(14,0.0004016598);
   data_mc_ratio__46->SetBinError(15,0.0003849871);
   data_mc_ratio__46->SetBinError(16,0.0003756044);
   data_mc_ratio__46->SetBinError(17,0.0004846897);
   data_mc_ratio__46->SetBinError(18,0.0005508725);
   data_mc_ratio__46->SetBinError(19,0.0006491025);
   data_mc_ratio__46->SetBinError(20,0.0007076356);
   data_mc_ratio__46->SetBinError(21,0.0008639813);
   data_mc_ratio__46->SetBinError(22,0.000973879);
   data_mc_ratio__46->SetBinError(23,0.001107952);
   data_mc_ratio__46->SetBinError(24,0.001641608);
   data_mc_ratio__46->SetBinError(25,0.00164193);
   data_mc_ratio__46->SetBinError(26,0.001800992);
   data_mc_ratio__46->SetBinError(27,0.005106677);
   data_mc_ratio__46->SetBinError(28,0.00724987);
   data_mc_ratio__46->SetBinError(29,0.570593);
   data_mc_ratio__46->SetMinimum(0.4);
   data_mc_ratio__46->SetMaximum(1.6);
   data_mc_ratio__46->SetEntries(740.3901);
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
   0.04715333,
   0.04061901,
   0.05395055,
   0.03281996,
   0.033264,
   0.03275706,
   0.03049859,
   0.03530845,
   0.03060971,
   0.04754876,
   0.042685,
   0.02723611,
   0.02447266,
   0.02413542,
   0.0228878,
   0.02879586,
   0.03353687,
   0.03841251,
   0.04321815,
   0.05111309,
   0.059686,
   0.06778722,
   0.08927257,
   0.1049192,
   0.1792307,
   0.2630607,
   0.4075598,
   0.06584357,
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
   Graph_Graph_from_mc_statistical_error1046->SetMinimum(0.5109282);
   Graph_Graph_from_mc_statistical_error1046->SetMaximum(1.489072);
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
