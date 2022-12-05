void jets_nJet_VbbHcc_other_all()
{
//=========Macro generated from canvas: jets_nJet_VbbHcc_other_all/jets_nJet_VbbHcc_other_all
//=========  (Tue Nov 22 09:30:36 2022) by ROOT version 6.14/09
   TCanvas *jets_nJet_VbbHcc_other_all = new TCanvas("jets_nJet_VbbHcc_other_all", "jets_nJet_VbbHcc_other_all",0,0,600,600);
   jets_nJet_VbbHcc_other_all->SetHighLightColor(2);
   jets_nJet_VbbHcc_other_all->Range(0,0,1,1);
   jets_nJet_VbbHcc_other_all->SetFillColor(0);
   jets_nJet_VbbHcc_other_all->SetFillStyle(4000);
   jets_nJet_VbbHcc_other_all->SetBorderMode(0);
   jets_nJet_VbbHcc_other_all->SetBorderSize(2);
   jets_nJet_VbbHcc_other_all->SetFrameFillStyle(1000);
   jets_nJet_VbbHcc_other_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.645156,-1.679318,14.23387,27.9987);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1.802842e+24);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",14,-0.5,13.5);
   st_stack_8->SetMinimum(0.02240575);
   st_stack_8->SetMaximum(1.073731e+25);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetRange(1,14);
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetLabelSize(0.035);
   st_stack_8->GetXaxis()->SetTitleSize(0.035);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Events/1.0");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetLabelSize(0.05);
   st_stack_8->GetYaxis()->SetTitleSize(0.057);
   st_stack_8->GetYaxis()->SetTitleOffset(1.2);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetLabelSize(0.035);
   st_stack_8->GetZaxis()->SetTitleSize(0.035);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *VbbHcc_jets_nJet_all_stack_1 = new TH1D("VbbHcc_jets_nJet_all_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(1,3.14913e+09);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(2,2.884405e+10);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(3,8.222622e+10);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(4,5.601991e+10);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(5,1.602745e+10);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(6,2.364499e+09);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(7,2.708315e+08);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(8,2.737071e+07);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(9,2548538);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(10,222094.9);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(11,16533.28);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(12,5125.086);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(1,2003609);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(2,6158639);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(3,1.05527e+07);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(4,8728924);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(5,4668124);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(6,1789741);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(7,604469.4);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(8,191706.6);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(9,58309.27);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(10,17064.18);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(11,4661.984);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(12,2557.876);
   VbbHcc_jets_nJet_all_stack_1->SetEntries(1.440461e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_2 = new TH1D("VbbHcc_jets_nJet_all_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(1,1614130);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(2,6200277);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(3,9908410);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(4,8758192);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(5,4943266);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(6,2044691);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(7,707078.2);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(8,212723.7);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(9,57145.98);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(10,13909.49);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(11,3233.407);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(12,752.6128);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(13,152.3294);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(14,35.16067);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(15,8.611599);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(1,352.6699);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(2,726.0831);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(3,979.9683);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(4,1010.484);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(5,850.0053);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(6,606.0529);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(7,374.6052);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(8,208.9832);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(9,108.4527);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(10,52.96376);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(11,25.04197);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(12,11.95487);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(13,5.142513);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(14,2.555155);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(15,1.143757);
   VbbHcc_jets_nJet_all_stack_2->SetEntries(5.752928e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_nJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_2,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_3 = new TH1D("VbbHcc_jets_nJet_all_stack_3","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(1,549563.3);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(2,3730449);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(3,1.15773e+07);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(4,2.081185e+07);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(5,2.421447e+07);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(6,1.889626e+07);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(7,1.02449e+07);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(8,4102661);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(9,1355693);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(10,391318.2);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(11,101989.6);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(12,24925.11);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(13,5655.042);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(14,1226.656);
   VbbHcc_jets_nJet_all_stack_3->SetBinContent(15,309.4443);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(1,163.265);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(2,430.5965);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(3,782.9482);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(4,1096.713);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(5,1236.634);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(6,1130.132);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(7,846.907);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(8,539.8926);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(9,311.444);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(10,167.6006);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(11,85.6147);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(12,42.31766);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(13,20.13708);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(14,9.389105);
   VbbHcc_jets_nJet_all_stack_3->SetBinError(15,4.709579);
   VbbHcc_jets_nJet_all_stack_3->SetEntries(1.690135e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_nJet_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_3->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_3->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_3,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_4 = new TH1D("VbbHcc_jets_nJet_all_stack_4","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(1,21744.65);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(2,311230.9);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(3,1877479);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(4,4301933);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(5,4037501);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(6,2086349);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(7,689488.8);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(8,156760.3);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(9,28348.17);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(10,4260.915);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(11,604.281);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(12,72.02771);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(13,10.17728);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(14,0.7706581);
   VbbHcc_jets_nJet_all_stack_4->SetBinContent(15,0.5962234);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(1,72.39242);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(2,294.9359);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(3,771.1468);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(4,1189.168);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(5,1158.262);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(6,834.3353);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(7,479.9755);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(8,228.8252);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(9,97.28201);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(10,37.68703);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(11,14.19731);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(12,4.848431);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(13,1.775766);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(14,0.5451182);
   VbbHcc_jets_nJet_all_stack_4->SetBinError(15,0.4215936);
   VbbHcc_jets_nJet_all_stack_4->SetEntries(4.32681e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_nJet_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_4->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_4->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_4,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_5 = new TH1D("VbbHcc_jets_nJet_all_stack_5","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(1,56659.97);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(2,815345.1);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(3,4595588);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(4,1.050323e+07);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(5,9778158);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(6,4868110);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(7,1520669);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(8,358012.6);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(9,68893.79);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(10,11363.64);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(11,1645.238);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(12,209.2712);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(13,33.07944);
   VbbHcc_jets_nJet_all_stack_5->SetBinContent(14,4.442624);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(1,220.3956);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(2,900.7999);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(3,2273.604);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(4,3507.331);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(5,3404.131);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(6,2406.448);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(7,1345.263);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(8,652.595);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(9,285.9005);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(10,115.9981);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(11,44.09994);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(12,15.79302);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(13,6.300093);
   VbbHcc_jets_nJet_all_stack_5->SetBinError(14,2.264047);
   VbbHcc_jets_nJet_all_stack_5->SetEntries(2.911811e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_nJet_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_5->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_5->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_5,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_6 = new TH1D("VbbHcc_jets_nJet_all_stack_6","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(1,1772517);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(2,2736827);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(3,2513816);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(4,1401816);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(5,536253);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(6,140040.5);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(7,30933.07);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(8,6299.399);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(9,1147.972);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(10,205.3098);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(11,36.72678);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(12,4.788824);
   VbbHcc_jets_nJet_all_stack_6->SetBinContent(13,1.643022);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(1,507.5554);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(2,631.9371);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(3,606.8791);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(4,454.013);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(5,281.0569);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(6,143.596);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(7,67.39644);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(8,30.38848);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(9,12.95059);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(10,5.496297);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(11,2.276286);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(12,0.7952998);
   VbbHcc_jets_nJet_all_stack_6->SetBinError(13,0.4676454);
   VbbHcc_jets_nJet_all_stack_6->SetEntries(7.778536e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_nJet_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_6->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_6->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_6,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_7 = new TH1D("VbbHcc_jets_nJet_all_stack_7","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(1,586951.1);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(2,961363.9);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(3,916940.1);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(4,530790.8);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(5,221545.9);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(6,61358.86);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(7,14091.78);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(8,2918.252);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(9,545.8149);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(10,96.052);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(11,16.87248);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(12,2.897051);
   VbbHcc_jets_nJet_all_stack_7->SetBinContent(13,0.4103418);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(1,249.6416);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(2,319.8211);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(3,312.7329);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(4,238.1226);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(5,153.9898);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(6,81.02979);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(7,38.82179);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(8,17.5943);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(9,7.626332);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(10,3.168605);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(11,1.32446);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(12,0.6064593);
   VbbHcc_jets_nJet_all_stack_7->SetBinError(13,0.2256482);
   VbbHcc_jets_nJet_all_stack_7->SetEntries(3.804861e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_nJet_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_7->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_7->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_7,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_8 = new TH1D("VbbHcc_jets_nJet_all_stack_8","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(1,268537.6);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(2,383736);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(3,401259.9);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(4,252501.9);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(5,110160.2);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(6,28959.13);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(7,6323.155);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(8,1251.685);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(9,233.0859);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(10,47.34675);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(11,5.733661);
   VbbHcc_jets_nJet_all_stack_8->SetBinContent(13,0.4288911);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(1,233.127);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(2,278.5626);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(3,285.1273);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(4,226.3245);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(5,149.5367);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(6,76.61067);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(7,35.74722);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(8,15.9023);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(9,6.81736);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(10,3.049767);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(11,1.077231);
   VbbHcc_jets_nJet_all_stack_8->SetBinError(13,0.3073833);
   VbbHcc_jets_nJet_all_stack_8->SetEntries(7379176);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_nJet_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_8->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_8->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_8,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_9 = new TH1D("VbbHcc_jets_nJet_all_stack_9","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(1,1938.231);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(2,4837.295);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(3,10073.87);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(4,12931.12);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(5,9054.082);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(6,3372.267);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(7,1076.466);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(8,318.0004);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(9,88.0855);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(10,23.46996);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(11,5.802219);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(12,1.388959);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(13,0.3313737);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(14,0.08424508);
   VbbHcc_jets_nJet_all_stack_9->SetBinContent(15,0.02451407);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(1,1.919325);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(2,2.946882);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(3,4.191919);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(4,4.714381);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(5,3.914706);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(6,2.356393);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(7,1.325072);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(8,0.7183137);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(9,0.3772391);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(10,0.1940975);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(11,0.0965477);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(12,0.04716662);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(13,0.02318786);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(14,0.01160574);
   VbbHcc_jets_nJet_all_stack_9->SetBinError(15,0.006212433);
   VbbHcc_jets_nJet_all_stack_9->SetEntries(2.974619e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_nJet_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_9->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_9->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_9,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_10 = new TH1D("VbbHcc_jets_nJet_all_stack_10","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(1,14.24921);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(2,122.6779);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(3,613.4602);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(4,1502.778);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(5,1855.069);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(6,1150.186);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(7,472.0788);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(8,151.9766);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(9,41.48125);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(10,10.1788);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(11,2.339155);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(12,0.5131177);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(13,0.0953526);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(14,0.02484439);
   VbbHcc_jets_nJet_all_stack_10->SetBinContent(15,0.002345616);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(1,0.07492625);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(2,0.2206715);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(3,0.4977863);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(4,0.7819449);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(5,0.8695281);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(6,0.6841994);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(7,0.4378606);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(8,0.2481128);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(9,0.1294719);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(10,0.0640501);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(11,0.03071473);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(12,0.01432147);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(13,0.006145329);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(14,0.00313698);
   VbbHcc_jets_nJet_all_stack_10->SetBinError(15,0.0009599965);
   VbbHcc_jets_nJet_all_stack_10->SetEntries(1.49329e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_nJet_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_10->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_10->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_10,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_11 = new TH1D("VbbHcc_jets_nJet_all_stack_11","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(1,78.57723);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(2,199.3178);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(3,422.6458);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(4,584.2048);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(5,437.3169);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(6,170.631);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(7,56.48893);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(8,17.43657);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(9,5.119008);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(10,1.319474);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(11,0.4175186);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(12,0.07942885);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(13,0.01545749);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(14,0.002368971);
   VbbHcc_jets_nJet_all_stack_11->SetBinContent(15,0.002238352);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(1,0.384752);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(2,0.5949514);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(3,0.8538545);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(4,0.996477);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(5,0.8556354);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(6,0.5264859);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(7,0.3009775);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(8,0.166906);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(9,0.08972);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(10,0.04546142);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(11,0.02569472);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(12,0.01132753);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(13,0.005150932);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(14,0.001675116);
   VbbHcc_jets_nJet_all_stack_11->SetBinError(15,0.001582754);
   VbbHcc_jets_nJet_all_stack_11->SetEntries(1440194);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_11->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_11->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_11,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_12 = new TH1D("VbbHcc_jets_nJet_all_stack_12","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(1,11942.02);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(2,100831.4);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(3,512489.3);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(4,1352902);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(5,1817789);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(6,1213331);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(7,541258.7);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(8,189562.6);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(9,55648.99);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(10,14900.29);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(11,3831.67);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(12,845.4229);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(13,208.2299);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(14,43.17927);
   VbbHcc_jets_nJet_all_stack_12->SetBinContent(15,8.05011);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(1,224.9907);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(2,658.8558);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(3,1505.304);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(4,2461.434);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(5,2855.964);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(6,2324.88);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(7,1543.998);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(8,907.5355);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(9,489.4848);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(10,251.8339);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(11,127.2938);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(12,59.00067);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(13,28.77838);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(14,13.21116);
   VbbHcc_jets_nJet_all_stack_12->SetBinError(15,5.692288);
   VbbHcc_jets_nJet_all_stack_12->SetEntries(1450835);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_12->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_12->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_jets_nJet_all__15 = new TH1D("VbbHcc_jets_nJet_all__15","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all__15->SetBinContent(1,8.028538e+07);
   VbbHcc_jets_nJet_all__15->SetBinContent(2,1.436343e+08);
   VbbHcc_jets_nJet_all__15->SetBinContent(3,2.888123e+08);
   VbbHcc_jets_nJet_all__15->SetBinContent(4,2.83761e+08);
   VbbHcc_jets_nJet_all__15->SetBinContent(5,2.182959e+08);
   VbbHcc_jets_nJet_all__15->SetBinContent(6,1.587616e+08);
   VbbHcc_jets_nJet_all__15->SetBinContent(7,1.386129e+08);
   VbbHcc_jets_nJet_all__15->SetBinContent(8,6.22873e+07);
   VbbHcc_jets_nJet_all__15->SetBinContent(9,2.018602e+07);
   VbbHcc_jets_nJet_all__15->SetBinContent(10,5515967);
   VbbHcc_jets_nJet_all__15->SetBinContent(11,1371835);
   VbbHcc_jets_nJet_all__15->SetBinContent(12,323864);
   VbbHcc_jets_nJet_all__15->SetBinContent(13,75035);
   VbbHcc_jets_nJet_all__15->SetBinContent(14,16828);
   VbbHcc_jets_nJet_all__15->SetBinContent(15,5073);
   VbbHcc_jets_nJet_all__15->SetEntries(1.401945e+09);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all__15->SetLineColor(ci);
   VbbHcc_jets_nJet_all__15->SetLineWidth(2);
   VbbHcc_jets_nJet_all__15->SetMarkerStyle(20);
   VbbHcc_jets_nJet_all__15->SetMarkerSize(1.2);
   VbbHcc_jets_nJet_all__15->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all__15->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all__15->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all__15->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all__15->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all__15->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all__15->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all__15->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all__15->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_all__15->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all__15->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all__15->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_all__15->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_all__15->GetZaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all__15->Draw("same E");
   
   Double_t Graph_from_VbbHcc_jets_nJet_all_fx1015[14] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13};
   Double_t Graph_from_VbbHcc_jets_nJet_all_fy1015[14] = {
   3.154014e+09,
   2.88593e+10,
   8.225854e+10,
   5.606784e+10,
   1.607312e+10,
   2.393843e+09,
   2.845879e+08,
   3.240138e+07,
   4116329,
   658231.1,
   127905.4,
   31939.2,
   6061.782,
   1310.321};
   Double_t Graph_from_VbbHcc_jets_nJet_all_fex1015[14] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_VbbHcc_jets_nJet_all_fey1015[14] = {
   2003609,
   6158639,
   1.05527e+07,
   8728925,
   4668126,
   1789745,
   604473.8,
   191710.9,
   58313.04,
   17067.38,
   4664.806,
   2558.988,
   36.10196,
   16.57233};
   TGraphErrors *gre = new TGraphErrors(14,Graph_from_VbbHcc_jets_nJet_all_fx1015,Graph_from_VbbHcc_jets_nJet_all_fy1015,Graph_from_VbbHcc_jets_nJet_all_fex1015,Graph_from_VbbHcc_jets_nJet_all_fey1015);
   gre->SetName("Graph_from_VbbHcc_jets_nJet_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_jets_nJet_all1015 = new TH1F("Graph_Graph_from_VbbHcc_jets_nJet_all1015","",100,-1.9,14.9);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->SetMinimum(1164.374);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->SetMaximum(9.0496e+10);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->SetDirectory(0);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet_all1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_jets_nJet_all1015);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_jets_nJet_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   jets_nJet_VbbHcc_other_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-2.645156,-0.2774193,14.23387,1.658065);
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
   
   TH1D *data_mc_ratio__16 = new TH1D("data_mc_ratio__16","",14,-0.5,13.5);
   data_mc_ratio__16->SetBinContent(1,0.02545499);
   data_mc_ratio__16->SetBinContent(2,0.004977055);
   data_mc_ratio__16->SetBinContent(3,0.003511032);
   data_mc_ratio__16->SetBinContent(4,0.005061029);
   data_mc_ratio__16->SetBinContent(5,0.01358143);
   data_mc_ratio__16->SetBinContent(6,0.06632082);
   data_mc_ratio__16->SetBinContent(7,0.4870653);
   data_mc_ratio__16->SetBinContent(8,1.922366);
   data_mc_ratio__16->SetBinContent(9,4.903889);
   data_mc_ratio__16->SetBinContent(10,8.379986);
   data_mc_ratio__16->SetBinContent(11,10.72539);
   data_mc_ratio__16->SetBinContent(12,10.14002);
   data_mc_ratio__16->SetBinContent(13,12.37837);
   data_mc_ratio__16->SetBinContent(14,12.84266);
   data_mc_ratio__16->SetBinContent(15,15.52652);
   data_mc_ratio__16->SetBinError(1,2.840892e-06);
   data_mc_ratio__16->SetBinError(2,4.152822e-07);
   data_mc_ratio__16->SetBinError(3,2.065984e-07);
   data_mc_ratio__16->SetBinError(4,3.004433e-07);
   data_mc_ratio__16->SetBinError(5,9.192268e-07);
   data_mc_ratio__16->SetBinError(6,5.26353e-06);
   data_mc_ratio__16->SetBinError(7,4.136999e-05);
   data_mc_ratio__16->SetBinError(8,0.000243577);
   data_mc_ratio__16->SetBinError(9,0.001091479);
   data_mc_ratio__16->SetBinError(10,0.003568063);
   data_mc_ratio__16->SetBinError(11,0.009157189);
   data_mc_ratio__16->SetBinError(12,0.01781793);
   data_mc_ratio__16->SetBinError(13,0.04518888);
   data_mc_ratio__16->SetBinError(14,0.09900078);
   data_mc_ratio__16->SetBinError(15,0.4172952);
   data_mc_ratio__16->SetMinimum(0.4);
   data_mc_ratio__16->SetMaximum(1.6);
   data_mc_ratio__16->SetEntries(4213.675);
   data_mc_ratio__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__16->SetLineColor(ci);
   data_mc_ratio__16->SetLineWidth(2);
   data_mc_ratio__16->SetMarkerStyle(20);
   data_mc_ratio__16->SetMarkerSize(1.2);
   data_mc_ratio__16->GetXaxis()->SetTitle("Jet multiplicity");
   data_mc_ratio__16->GetXaxis()->SetRange(1,14);
   data_mc_ratio__16->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__16->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__16->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__16->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__16->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__16->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__16->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__16->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1016[14] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13};
   Double_t Graph_from_mc_statistical_error_fy1016[14] = {
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
   Double_t Graph_from_mc_statistical_error_fex1016[14] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1016[14] = {
   0.000635257,
   0.0002134023,
   0.000128287,
   0.000155685,
   0.0002904307,
   0.000747645,
   0.002124032,
   0.005916751,
   0.01416627,
   0.02592916,
   0.03647076,
   0.0801206,
   0.005955668,
   0.01264754};
   gre = new TGraphErrors(14,Graph_from_mc_statistical_error_fx1016,Graph_from_mc_statistical_error_fy1016,Graph_from_mc_statistical_error_fex1016,Graph_from_mc_statistical_error_fey1016);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1016 = new TH1F("Graph_Graph_from_mc_statistical_error1016","",100,-1.9,14.9);
   Graph_Graph_from_mc_statistical_error1016->SetMinimum(0.9038553);
   Graph_Graph_from_mc_statistical_error1016->SetMaximum(1.096145);
   Graph_Graph_from_mc_statistical_error1016->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1016->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1016);
   
   gre->Draw("e2");
   TLine *line = new TLine(-0.5,1,13.5,1);
   line->Draw();
   bottomPad->Modified();
   jets_nJet_VbbHcc_other_all->cd();
   jets_nJet_VbbHcc_other_all->Modified();
   jets_nJet_VbbHcc_other_all->cd();
   jets_nJet_VbbHcc_other_all->SetSelected(jets_nJet_VbbHcc_other_all);
}
