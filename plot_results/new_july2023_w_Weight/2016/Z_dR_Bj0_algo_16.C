void Z_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Thu Aug 10 10:42:23 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(0,0,1,1);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.946792,6.314516,15.39768);
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
   st->SetMaximum(9.162216e+12);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(0.001179106);
   st_stack_145->SetMaximum(3.657923e+13);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetLabelSize(0.035);
   st_stack_145->GetXaxis()->SetTitleSize(0.035);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Events/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetLabelSize(0.05);
   st_stack_145->GetYaxis()->SetTitleSize(0.057);
   st_stack_145->GetYaxis()->SetTitleOffset(1.2);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetLabelSize(0.035);
   st_stack_145->GetZaxis()->SetTitleSize(0.035);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,127677.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,558272.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,579399.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,511425);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,370457.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,247571.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,198548.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,130573);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,102619.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,101169.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,74925.16);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,89148.54);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,46059.29);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,49936.06);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,41131.25);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,31968.37);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,27280.98);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,21257.43);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,14959.81);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,15178.87);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,10468.62);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,4606.361);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,2800.048);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,1817.143);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,2087.66);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,2252.771);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,351.2348);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(28,186.5983);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,74.90018);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(30,630.1601);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,1198.611);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,3996.445);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,11586.24);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,12940.67);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,13823.98);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,12759.19);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,10446.79);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,29565.01);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,6613.542);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,5866.28);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,20855.39);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,5976.539);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,20816.19);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,3991.938);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,5072.506);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,4312.702);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,3186.233);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,3271.519);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,3052.02);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,2210.145);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,2896.517);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,2376.211);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,980.2356);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,768.217);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,608.2742);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,665.622);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,1470.678);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,271.8944);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(28,62.32006);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,35.08588);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(30,382.9306);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,539.7456);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(131372);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,860.0589);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,4563.624);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,5188.407);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,3825.025);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,2521.105);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,1692.09);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,1173.057);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,881.641);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,677.8019);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,560.9294);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,466.009);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,385.4202);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,340.0639);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,295.57);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,262.467);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,224.5585);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,188.3533);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,166.5599);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,127.8103);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,94.35062);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,57.27604);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,32.38992);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,20.49429);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,10.16312);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,5.465794);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,6.095627);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,3.824303);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,3.410153);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.40321);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,1.110415);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,3.333577);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,11.17628);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,25.03158);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,26.45426);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,22.60599);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,18.35691);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,15.07872);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,12.55886);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,10.82041);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,9.433509);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,8.738771);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,7.890218);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,7.136519);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,6.79845);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,6.253186);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,5.997879);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,5.525563);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,4.93824);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,4.75938);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,4.142474);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,3.622072);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,2.826937);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,2.030172);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.689934);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.9813733);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.743784);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.9059653);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.6471349);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.6290757);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.3528621);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.2323938);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.578355);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(347069);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,13304.41);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,84103.19);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,91515.13);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,61306.65);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,37288.01);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,23940.04);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,16525.39);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,12172.19);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,9480.189);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,7674.318);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,6368.052);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,5412.266);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,4714.047);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,4192.564);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,3814.654);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,3450.953);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,3047.321);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,2623.764);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,2034.569);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,1379.296);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,778.3269);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,361.0195);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,174.7208);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,97.01337);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,62.01274);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,38.88211);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,24.74386);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,17.88267);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,13.5221);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,9.161354);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,21.30717);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,29.51636);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,73.88823);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,76.72014);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,62.53772);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,48.66682);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,38.9699);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,32.35342);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,27.72966);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,24.45028);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,21.9806);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,20.01598);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,18.45109);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,17.23509);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,16.28393);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,15.56153);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,14.83114);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,13.96536);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,12.97904);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,11.43997);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,9.402911);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,7.041418);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,4.767157);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,3.300949);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,2.441316);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,1.941893);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,1.530815);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,1.226969);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,1.0446);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.9028499);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.7481715);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,1.138426);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(6426049);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,844.5641);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,3103.322);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,2956.992);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,2214.071);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,1464.504);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,952.004);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,700.405);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,543.7732);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,423.8654);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,301.4873);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,291.0058);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,215.0481);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,215.9897);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,167.6189);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,171.9695);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,129.2518);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,129.9366);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,94.58703);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,71.88963);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,37.23851);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,23.78953);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,20.11575);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,7.88368);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,7.305644);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,3.216274);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,3.597105);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,1.294564);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,1.206316);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(29,0.8601864);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(30,0.7038267);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,2.513947);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,11.45858);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,39.03058);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,47.90093);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,44.4165);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,37.25454);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,28.64061);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,24.91749);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,21.53734);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,18.57327);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,15.32693);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,15.95865);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,12.86536);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,13.69218);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,11.13648);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,13.32742);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,10.31448);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,12.15137);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,10.40234);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,7.569787);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,4.285586);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,3.933582);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,3.846727);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,1.271312);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,2.612102);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,0.8004779);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,0.853438);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.4590001);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,0.5114686);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(29,0.423123);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(30,0.4084224);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.7298369);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(94081);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,643.702);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,1725.306);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,1449.724);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,1080.249);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,660.0561);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,472.5812);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,328.4319);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,261.1956);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,182.4668);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,174.8587);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,135.9204);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,106.3601);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,88.20104);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,85.05734);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,60.42928);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,78.04418);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,55.62333);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,35.74052);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,48.21966);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,20.56517);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,22.87097);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,8.876559);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,4.112399);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,2.094865);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,1.35887);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(26,3.369844);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(27,0.5290976);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(28,2.877977);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(29,0.5608467);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(30,0.1485579);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.2244613);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,14.7403);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,45.59316);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,51.4219);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,48.38854);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,33.4153);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,31.04685);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,25.62891);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,24.72437);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,17.52315);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,20.04322);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,18.50224);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,14.07372);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,12.16345);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,12.33528);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,11.52951);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,14.67887);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,11.57936);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,9.248717);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,12.80655);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,6.556159);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,8.985256);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,2.2924);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,1.579133);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,1.093495);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,0.4798436);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(26,1.576837);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(27,0.2683119);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(28,1.54862);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(29,0.3584544);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(30,0.1485579);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.1667091);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(65948);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,6.180988);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,16.66179);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,15.58684);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,10.34644);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,7.65905);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,2.687386);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,3.359232);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,2.284278);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,2.284278);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(10,1.478062);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(11,1.209324);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(12,1.478062);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.9405851);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(14,0.8062158);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(15,1.074954);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(16,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(17,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(18,0.4031079);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(19,0.4031079);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(20,0.5374772);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(22,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(24,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.9113369);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,1.496273);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.447202);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.179086);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,1.014466);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.6009178);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.5540188);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.5540188);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(10,0.4456525);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(11,0.4031079);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(12,0.4456525);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.3555077);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(14,0.3291362);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(15,0.3800538);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(16,0.3004589);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(17,0.3004589);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(18,0.2327345);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(19,0.2327345);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(20,0.2687386);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(22,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(24,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,10.57118);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,31.82252);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,23.10402);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,15.80228);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,10.4622);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,6.211931);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,6.320912);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,4.359249);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.61555);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,2.942493);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,2.070644);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,1.089812);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,2.397587);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,0.9808311);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.416756);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(16,1.525737);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(17,0.3269437);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(18,0.9808311);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(19,0.7628687);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(20,0.4359249);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(21,0.2179625);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(22,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(26,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(29,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.073341);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,1.862272);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,1.586791);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.312308);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,1.067794);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,0.8227903);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,0.8299764);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.6892579);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.5338968);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.5662831);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,0.4750382);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.3446289);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.5111673);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.3269437);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.3929374);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(16,0.4077705);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(17,0.188761);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(18,0.3269437);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(19,0.2883373);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(20,0.2179625);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(21,0.1541227);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(22,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(26,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(29,0.1089812);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(1163);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,12.40356);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,42.80446);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,32.83297);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,19.69978);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,14.83564);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,8.269043);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,4.620936);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,5.836972);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,3.891314);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,4.134522);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,1.945657);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,1.216036);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,1.459243);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,0.7296215);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,0.9728286);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,1.945657);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,1.459243);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(19,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(20,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(22,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(23,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.736846);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,3.226507);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.825812);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,2.188864);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.899509);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,1.418129);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.060115);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,1.191467);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.9728286);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,1.002769);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.6878937);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.5438277);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.5957334);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.4212471);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.6878937);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.5957334);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.3439469);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(19,0.3439469);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(20,0.3439469);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(22,0.3439469);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(23,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(27,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,6.37801);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,29.46832);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,21.78726);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,12.26253);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,7.028149);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,4.593942);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,3.392087);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,2.692044);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,2.141714);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,1.778524);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,1.357112);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,1.219876);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,1.043826);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.9329278);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.8636167);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.7402429);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.6501384);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.5489441);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.4144806);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.3035827);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.18714);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.09426314);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.0429729);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(24,0.01524845);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(25,0.01108978);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(26,0.00554489);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(27,0.004158668);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(28,0.002772445);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(29,0.001386223);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(30,0.001386223);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(31,0.00554489);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.09402841);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.202113);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.1737872);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.1303786);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.0987045);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.07980116);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.0685725);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.06108824);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.05448754);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.04965309);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.04337348);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.04112201);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.03803912);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.03596172);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.03460007);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.03203344);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.0300206);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.02758548);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.02397003);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.02051422);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.01610645);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.01143108);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.007718161);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(24,0.00459758);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(25,0.00392083);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(26,0.002772445);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(27,0.002401008);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(28,0.001960415);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(29,0.001386223);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(30,0.001386223);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(31,0.002772445);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(72116);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,1.624775);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,10.15314);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,9.223925);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,5.41125);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,3.160181);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,2.06659);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,1.535048);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,1.252587);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,1.04478);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,0.8086188);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,0.6593132);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.5642027);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.4988815);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.4436098);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.4278178);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.3488582);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.2899973);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.2354434);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.1733524);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.1299245);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.08362547);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.03589076);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.01758647);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(24,0.01292067);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.003230168);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.006101429);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(27,0.002512353);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(28,0.003589076);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(29,0.00143563);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(30,0.002512353);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.003230168);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.02414837);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.06036587);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.05753726);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.0440697);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.03367808);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.02723444);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.02347212);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.0212029);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.01936439);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.01703583);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.01538286);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.01423013);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.01338105);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.01261804);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.01239141);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.01118963);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.01020207);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.009192519);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.007887806);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.006828683);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.005478487);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.003589076);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.002512353);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(24,0.002153446);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.001076723);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.001479814);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(27,0.0009495802);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(28,0.001134965);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(29,0.0007178152);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(30,0.0009495802);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.001076723);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.06837519);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.2762358);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.2297406);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.1394854);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.09299025);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.0355551);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.03008508);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.03282009);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.02188006);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.01641004);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.01367504);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.01641004);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.01641004);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.01094003);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(18,0.01094003);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.01367504);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.02748648);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.02506676);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.01953186);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.0159477);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.00986121);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.009070994);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.009474344);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.007735769);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.006699373);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.006115663);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.006699373);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.004737172);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.006699373);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.003867885);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(18,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01214704);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.100749);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.09110279);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.05108902);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.03179666);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.01964962);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.01429063);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.01857782);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.01286157);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.01071798);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.007859849);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.005001722);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.006073519);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.006073519);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.002143595);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.003929924);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.003929924);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.002858127);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(21,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(22,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.0020832);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.005999514);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.005705078);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.004272278);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.003370439);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.002649554);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.002259548);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.002576281);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.002143595);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.001956826);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.001675725);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.001336766);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.001473045);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.001473045);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.000875119);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.001184917);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.001184917);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0010105);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0006188026);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0006188026);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(21,0.0005052502);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(22,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__397 = new TH1D("VbbHcc_algo_Z_dR_Bj0__397","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(1,65636);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(2,186168);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(3,161367);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(4,118906);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(5,77546);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(6,52348);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(7,37309);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(8,28434);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(9,22472);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(10,18599);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(11,15443);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(12,13256);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(13,11124);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(14,9430);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(15,8290);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(16,7143);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(17,5975);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(18,4865);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(19,3757);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(20,2773);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(21,1772);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(22,1058);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(23,695);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(24,481);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(25,384);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(26,232);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(27,181);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(28,119);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(29,92);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(30,63);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(31,130);
   VbbHcc_algo_Z_dR_Bj0__397->SetEntries(856077);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__397->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__397->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__397->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__397->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__397->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__397->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__397->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__397->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__397->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__397->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__397->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__397->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__397->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__397->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__397->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__397->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__397->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__397->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__397->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1289[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1289[30] = {
   143367.9,
   651898.9,
   680613,
   579914.7,
   412434.7,
   274652,
   217294.9,
   144448.2,
   113396.1,
   109892.3,
   82193.41,
   95273.22,
   51423.95,
   54680.78,
   45445.53,
   35856.41,
   30705.62,
   24180.75,
   17244.54,
   16712.22,
   11351.62,
   5029.623,
   3007.563,
   1933.883,
   2159.728,
   2304.836,
   381.8765,
   211.9818,
   91.35832,
   641.2881};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1289[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1289[30] = {
   3996.613,
   11586.66,
   12941.12,
   13824.29,
   12759.4,
   10446.96,
   29565.05,
   6613.69,
   5866.395,
   20855.42,
   5976.627,
   20816.2,
   3992.023,
   5072.563,
   4312.77,
   3186.323,
   3271.595,
   3052.083,
   2210.228,
   2896.545,
   2376.243,
   980.2596,
   768.2286,
   608.2865,
   665.6259,
   1470.681,
   271.8986,
   62.35332,
   35.10382,
   382.9317};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1289);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetMinimum(50.62906);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetMaximum(762903.9);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__398 = new TH1D("data_mc_ratio__398","",30,0,6);
   data_mc_ratio__398->SetBinContent(1,0.4578151);
   data_mc_ratio__398->SetBinContent(2,0.285578);
   data_mc_ratio__398->SetBinContent(3,0.2370907);
   data_mc_ratio__398->SetBinContent(4,0.2050405);
   data_mc_ratio__398->SetBinContent(5,0.1880201);
   data_mc_ratio__398->SetBinContent(6,0.1905975);
   data_mc_ratio__398->SetBinContent(7,0.1716976);
   data_mc_ratio__398->SetBinContent(8,0.1968456);
   data_mc_ratio__398->SetBinContent(9,0.1981726);
   data_mc_ratio__398->SetBinContent(10,0.1692475);
   data_mc_ratio__398->SetBinContent(11,0.1878861);
   data_mc_ratio__398->SetBinContent(12,0.1391367);
   data_mc_ratio__398->SetBinContent(13,0.2163195);
   data_mc_ratio__398->SetBinContent(14,0.1724555);
   data_mc_ratio__398->SetBinContent(15,0.1824162);
   data_mc_ratio__398->SetBinContent(16,0.1992112);
   data_mc_ratio__398->SetBinContent(17,0.1945898);
   data_mc_ratio__398->SetBinContent(18,0.2011931);
   data_mc_ratio__398->SetBinContent(19,0.217866);
   data_mc_ratio__398->SetBinContent(20,0.1659265);
   data_mc_ratio__398->SetBinContent(21,0.1561011);
   data_mc_ratio__398->SetBinContent(22,0.2103538);
   data_mc_ratio__398->SetBinContent(23,0.2310841);
   data_mc_ratio__398->SetBinContent(24,0.2487224);
   data_mc_ratio__398->SetBinContent(25,0.1778002);
   data_mc_ratio__398->SetBinContent(26,0.1006579);
   data_mc_ratio__398->SetBinContent(27,0.4739753);
   data_mc_ratio__398->SetBinContent(28,0.561369);
   data_mc_ratio__398->SetBinContent(29,1.007024);
   data_mc_ratio__398->SetBinContent(30,0.09823977);
   data_mc_ratio__398->SetBinContent(31,0.106036);
   data_mc_ratio__398->SetBinError(1,0.001786978);
   data_mc_ratio__398->SetBinError(2,0.0006618694);
   data_mc_ratio__398->SetBinError(3,0.0005902108);
   data_mc_ratio__398->SetBinError(4,0.0005946176);
   data_mc_ratio__398->SetBinError(5,0.0006751878);
   data_mc_ratio__398->SetBinError(6,0.0008330426);
   data_mc_ratio__398->SetBinError(7,0.0008889091);
   data_mc_ratio__398->SetBinError(8,0.001167365);
   data_mc_ratio__398->SetBinError(9,0.001321974);
   data_mc_ratio__398->SetBinError(10,0.001241016);
   data_mc_ratio__398->SetBinError(11,0.00151192);
   data_mc_ratio__398->SetBinError(12,0.001208469);
   data_mc_ratio__398->SetBinError(13,0.002050997);
   data_mc_ratio__398->SetBinError(14,0.001775911);
   data_mc_ratio__398->SetBinError(15,0.002003485);
   data_mc_ratio__398->SetBinError(16,0.002357076);
   data_mc_ratio__398->SetBinError(17,0.002517393);
   data_mc_ratio__398->SetBinError(18,0.002884508);
   data_mc_ratio__398->SetBinError(19,0.003554422);
   data_mc_ratio__398->SetBinError(20,0.003150946);
   data_mc_ratio__398->SetBinError(21,0.003708294);
   data_mc_ratio__398->SetBinError(22,0.006467068);
   data_mc_ratio__398->SetBinError(23,0.008765519);
   data_mc_ratio__398->SetBinError(24,0.01134077);
   data_mc_ratio__398->SetBinError(25,0.009073326);
   data_mc_ratio__398->SetBinError(26,0.006608515);
   data_mc_ratio__398->SetBinError(27,0.0352303);
   data_mc_ratio__398->SetBinError(28,0.05146061);
   data_mc_ratio__398->SetBinError(29,0.1049895);
   data_mc_ratio__398->SetBinError(30,0.01237705);
   data_mc_ratio__398->SetBinError(31,0.04759982);
   data_mc_ratio__398->SetMinimum(0.4);
   data_mc_ratio__398->SetMaximum(1.6);
   data_mc_ratio__398->SetEntries(164.6799);
   data_mc_ratio__398->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__398->SetLineColor(ci);
   data_mc_ratio__398->SetLineWidth(2);
   data_mc_ratio__398->SetMarkerStyle(20);
   data_mc_ratio__398->SetMarkerSize(1.2);
   data_mc_ratio__398->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__398->GetXaxis()->SetRange(1,30);
   data_mc_ratio__398->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__398->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__398->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__398->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__398->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__398->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__398->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__398->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__398->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__398->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__398->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__398->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__398->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__398->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__398->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__398->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__398->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1290[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1290[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1290[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1290[30] = {
   0.02787662,
   0.0177737,
   0.01901392,
   0.02383849,
   0.03093678,
   0.03803709,
   0.1360596,
   0.04578588,
   0.05173367,
   0.1897805,
   0.07271419,
   0.2184896,
   0.07762966,
   0.09276683,
   0.09489977,
   0.0888634,
   0.1065471,
   0.1262195,
   0.1281697,
   0.173319,
   0.2093308,
   0.1948972,
   0.2554323,
   0.3145416,
   0.3081989,
   0.6380846,
   0.7120067,
   0.2941447,
   0.3842432,
   0.5971289};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1290,Graph_from_mc_statistical_error_fy1290,Graph_from_mc_statistical_error_fex1290,Graph_from_mc_statistical_error_fey1290);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1290 = new TH1F("Graph_Graph_from_mc_statistical_error1290","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1290->SetMinimum(0.1455919);
   Graph_Graph_from_mc_statistical_error1290->SetMaximum(1.854408);
   Graph_Graph_from_mc_statistical_error1290->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1290->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1290->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1290->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1290->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1290);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
