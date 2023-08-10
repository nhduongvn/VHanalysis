void Z_mass_both_17_logY()
{
//=========Macro generated from canvas: Z_mass_both_17/Z_mass_both_17
//=========  (Thu Aug 10 12:21:20 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_17 = new TCanvas("Z_mass_both_17", "Z_mass_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_17->SetHighLightColor(2);
   Z_mass_both_17->Range(0,0,1,1);
   Z_mass_both_17->SetFillColor(0);
   Z_mass_both_17->SetFillStyle(4000);
   Z_mass_both_17->SetBorderMode(0);
   Z_mass_both_17->SetBorderSize(2);
   Z_mass_both_17->SetFrameFillStyle(1000);
   Z_mass_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.856806,315.7258,11.9072);
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
   st->SetMaximum(7.976994e+09);
   
   TH1F *st_stack_194 = new TH1F("st_stack_194","",40,0,400);
   st_stack_194->SetMinimum(0.001438659);
   st_stack_194->SetMaximum(2.696518e+10);
   st_stack_194->SetDirectory(0);
   st_stack_194->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_194->SetLineColor(ci);
   st_stack_194->GetXaxis()->SetRange(1,30);
   st_stack_194->GetXaxis()->SetLabelFont(42);
   st_stack_194->GetXaxis()->SetLabelSize(0.035);
   st_stack_194->GetXaxis()->SetTitleSize(0.035);
   st_stack_194->GetXaxis()->SetTitleFont(42);
   st_stack_194->GetYaxis()->SetTitle("Events/10.0");
   st_stack_194->GetYaxis()->SetLabelFont(42);
   st_stack_194->GetYaxis()->SetLabelSize(0.05);
   st_stack_194->GetYaxis()->SetTitleSize(0.057);
   st_stack_194->GetYaxis()->SetTitleOffset(1.2);
   st_stack_194->GetYaxis()->SetTitleFont(42);
   st_stack_194->GetZaxis()->SetLabelFont(42);
   st_stack_194->GetZaxis()->SetLabelSize(0.035);
   st_stack_194->GetZaxis()->SetTitleSize(0.035);
   st_stack_194->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_194);
   
   
   TH1D *VbbHcc_both_Z_mass_stack_1 = new TH1D("VbbHcc_both_Z_mass_stack_1","",40,0,400);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(3,7.585766);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(4,578.0616);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(5,2630.165);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(6,28153.78);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(7,9769.397);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(8,9186.731);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(9,7417.633);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(10,7122.831);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(11,5148.008);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(12,4936.329);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(13,5972.339);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(14,4405.538);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(15,6368.831);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(16,3350.92);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(17,4077.229);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(18,4636.966);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(19,4731.848);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(20,4098.881);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(21,4481.322);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(22,2438.271);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(23,4157.694);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(24,2789.335);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(25,2692.23);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(26,1652.006);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(27,3941.424);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(28,2473.72);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(29,2802.287);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(30,1979.695);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(31,2023.335);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(32,1847.909);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(33,1500.493);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(34,1826.208);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(35,2017.409);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(36,2650.452);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(37,1401.993);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(38,2278.187);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(39,2749.462);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(40,1133.764);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(41,74571.65);
   VbbHcc_both_Z_mass_stack_1->SetBinError(3,7.585766);
   VbbHcc_both_Z_mass_stack_1->SetBinError(4,113.9237);
   VbbHcc_both_Z_mass_stack_1->SetBinError(5,683.1455);
   VbbHcc_both_Z_mass_stack_1->SetBinError(6,21692.58);
   VbbHcc_both_Z_mass_stack_1->SetBinError(7,1395.93);
   VbbHcc_both_Z_mass_stack_1->SetBinError(8,1371.399);
   VbbHcc_both_Z_mass_stack_1->SetBinError(9,1205.342);
   VbbHcc_both_Z_mass_stack_1->SetBinError(10,1177.772);
   VbbHcc_both_Z_mass_stack_1->SetBinError(11,943.3825);
   VbbHcc_both_Z_mass_stack_1->SetBinError(12,953.8182);
   VbbHcc_both_Z_mass_stack_1->SetBinError(13,1092.602);
   VbbHcc_both_Z_mass_stack_1->SetBinError(14,872.5437);
   VbbHcc_both_Z_mass_stack_1->SetBinError(15,1187.117);
   VbbHcc_both_Z_mass_stack_1->SetBinError(16,751.3512);
   VbbHcc_both_Z_mass_stack_1->SetBinError(17,829.0457);
   VbbHcc_both_Z_mass_stack_1->SetBinError(18,1766.878);
   VbbHcc_both_Z_mass_stack_1->SetBinError(19,961.622);
   VbbHcc_both_Z_mass_stack_1->SetBinError(20,909.0366);
   VbbHcc_both_Z_mass_stack_1->SetBinError(21,1005.602);
   VbbHcc_both_Z_mass_stack_1->SetBinError(22,535.9813);
   VbbHcc_both_Z_mass_stack_1->SetBinError(23,977.6155);
   VbbHcc_both_Z_mass_stack_1->SetBinError(24,723.418);
   VbbHcc_both_Z_mass_stack_1->SetBinError(25,719.7586);
   VbbHcc_both_Z_mass_stack_1->SetBinError(26,524.7498);
   VbbHcc_both_Z_mass_stack_1->SetBinError(27,978.6479);
   VbbHcc_both_Z_mass_stack_1->SetBinError(28,710.3745);
   VbbHcc_both_Z_mass_stack_1->SetBinError(29,804.9171);
   VbbHcc_both_Z_mass_stack_1->SetBinError(30,659.1783);
   VbbHcc_both_Z_mass_stack_1->SetBinError(31,637.9007);
   VbbHcc_both_Z_mass_stack_1->SetBinError(32,603.1279);
   VbbHcc_both_Z_mass_stack_1->SetBinError(33,473.2509);
   VbbHcc_both_Z_mass_stack_1->SetBinError(34,575.9583);
   VbbHcc_both_Z_mass_stack_1->SetBinError(35,528.7187);
   VbbHcc_both_Z_mass_stack_1->SetBinError(36,779.4506);
   VbbHcc_both_Z_mass_stack_1->SetBinError(37,476.1137);
   VbbHcc_both_Z_mass_stack_1->SetBinError(38,634.9118);
   VbbHcc_both_Z_mass_stack_1->SetBinError(39,756.7726);
   VbbHcc_both_Z_mass_stack_1->SetBinError(40,390.0154);
   VbbHcc_both_Z_mass_stack_1->SetBinError(41,15560.61);
   VbbHcc_both_Z_mass_stack_1->SetEntries(10320);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_2 = new TH1D("VbbHcc_both_Z_mass_stack_2","",40,0,400);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(3,0.06542176);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(4,2.687517);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(5,9.377877);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(6,16.43694);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(7,23.41322);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(8,30.02855);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(9,26.21256);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(10,31.41494);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(11,31.07497);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(12,32.47838);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(13,35.20566);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(14,31.91278);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(15,24.371);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(16,27.26104);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(17,24.97545);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(18,24.88546);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(19,19.83455);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(20,24.07072);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(21,17.84937);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(22,17.80945);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(23,15.45299);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(24,16.67127);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(25,14.06106);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(26,13.19576);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(27,15.00149);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(28,14.75699);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(29,17.11315);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(30,14.43296);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(31,11.91879);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(32,12.64922);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(33,9.294064);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(34,9.119172);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(35,12.721);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(36,8.600938);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(37,12.86948);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(38,9.957835);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(39,8.287641);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(40,10.4235);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(41,366.1373);
   VbbHcc_both_Z_mass_stack_2->SetBinError(3,0.06542176);
   VbbHcc_both_Z_mass_stack_2->SetBinError(4,0.7991755);
   VbbHcc_both_Z_mass_stack_2->SetBinError(5,1.20518);
   VbbHcc_both_Z_mass_stack_2->SetBinError(6,1.679558);
   VbbHcc_both_Z_mass_stack_2->SetBinError(7,2.10427);
   VbbHcc_both_Z_mass_stack_2->SetBinError(8,2.342557);
   VbbHcc_both_Z_mass_stack_2->SetBinError(9,2.282025);
   VbbHcc_both_Z_mass_stack_2->SetBinError(10,2.556958);
   VbbHcc_both_Z_mass_stack_2->SetBinError(11,2.412457);
   VbbHcc_both_Z_mass_stack_2->SetBinError(12,2.611316);
   VbbHcc_both_Z_mass_stack_2->SetBinError(13,2.759876);
   VbbHcc_both_Z_mass_stack_2->SetBinError(14,2.512938);
   VbbHcc_both_Z_mass_stack_2->SetBinError(15,2.086561);
   VbbHcc_both_Z_mass_stack_2->SetBinError(16,2.264014);
   VbbHcc_both_Z_mass_stack_2->SetBinError(17,2.183414);
   VbbHcc_both_Z_mass_stack_2->SetBinError(18,2.254214);
   VbbHcc_both_Z_mass_stack_2->SetBinError(19,1.991212);
   VbbHcc_both_Z_mass_stack_2->SetBinError(20,2.104498);
   VbbHcc_both_Z_mass_stack_2->SetBinError(21,1.753297);
   VbbHcc_both_Z_mass_stack_2->SetBinError(22,1.879885);
   VbbHcc_both_Z_mass_stack_2->SetBinError(23,1.760124);
   VbbHcc_both_Z_mass_stack_2->SetBinError(24,1.791002);
   VbbHcc_both_Z_mass_stack_2->SetBinError(25,1.586171);
   VbbHcc_both_Z_mass_stack_2->SetBinError(26,1.564704);
   VbbHcc_both_Z_mass_stack_2->SetBinError(27,1.743829);
   VbbHcc_both_Z_mass_stack_2->SetBinError(28,1.734528);
   VbbHcc_both_Z_mass_stack_2->SetBinError(29,1.90279);
   VbbHcc_both_Z_mass_stack_2->SetBinError(30,1.623054);
   VbbHcc_both_Z_mass_stack_2->SetBinError(31,1.525608);
   VbbHcc_both_Z_mass_stack_2->SetBinError(32,1.570924);
   VbbHcc_both_Z_mass_stack_2->SetBinError(33,1.278918);
   VbbHcc_both_Z_mass_stack_2->SetBinError(34,1.269252);
   VbbHcc_both_Z_mass_stack_2->SetBinError(35,1.62727);
   VbbHcc_both_Z_mass_stack_2->SetBinError(36,1.245521);
   VbbHcc_both_Z_mass_stack_2->SetBinError(37,1.716436);
   VbbHcc_both_Z_mass_stack_2->SetBinError(38,1.387493);
   VbbHcc_both_Z_mass_stack_2->SetBinError(39,1.274355);
   VbbHcc_both_Z_mass_stack_2->SetBinError(40,1.559837);
   VbbHcc_both_Z_mass_stack_2->SetBinError(41,8.562146);
   VbbHcc_both_Z_mass_stack_2->SetEntries(12006);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_3 = new TH1D("VbbHcc_both_Z_mass_stack_3","",40,0,400);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(2,0.03254514);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(3,2.194799);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(4,52.81141);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(5,191.6032);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(6,345.2472);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(7,459.5418);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(8,578.1398);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(9,677.1256);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(10,755.8175);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(11,795.0969);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(12,806.166);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(13,793.726);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(14,754.0343);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(15,706.2901);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(16,647.3024);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(17,595.9478);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(18,550.0864);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(19,512.0086);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(20,456.6042);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(21,416.7727);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(22,391.2111);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(23,358.9275);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(24,344.8111);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(25,334.1195);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(26,306.7734);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(27,302.1439);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(28,281.9524);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(29,282.1762);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(30,271.9915);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(31,254.2582);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(32,257.3521);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(33,248.4387);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(34,231.3941);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(35,227.7189);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(36,225.1569);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(37,205.1438);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(38,205.1285);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(39,193.7746);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(40,188.3987);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(41,7256.41);
   VbbHcc_both_Z_mass_stack_3->SetBinError(2,0.03254514);
   VbbHcc_both_Z_mass_stack_3->SetBinError(3,0.3938703);
   VbbHcc_both_Z_mass_stack_3->SetBinError(4,1.964817);
   VbbHcc_both_Z_mass_stack_3->SetBinError(5,3.727943);
   VbbHcc_both_Z_mass_stack_3->SetBinError(6,5.025789);
   VbbHcc_both_Z_mass_stack_3->SetBinError(7,5.796578);
   VbbHcc_both_Z_mass_stack_3->SetBinError(8,6.546103);
   VbbHcc_both_Z_mass_stack_3->SetBinError(9,7.11398);
   VbbHcc_both_Z_mass_stack_3->SetBinError(10,7.526567);
   VbbHcc_both_Z_mass_stack_3->SetBinError(11,7.706597);
   VbbHcc_both_Z_mass_stack_3->SetBinError(12,7.773741);
   VbbHcc_both_Z_mass_stack_3->SetBinError(13,7.716406);
   VbbHcc_both_Z_mass_stack_3->SetBinError(14,7.515406);
   VbbHcc_both_Z_mass_stack_3->SetBinError(15,7.257517);
   VbbHcc_both_Z_mass_stack_3->SetBinError(16,6.939272);
   VbbHcc_both_Z_mass_stack_3->SetBinError(17,6.660841);
   VbbHcc_both_Z_mass_stack_3->SetBinError(18,6.410608);
   VbbHcc_both_Z_mass_stack_3->SetBinError(19,6.15737);
   VbbHcc_both_Z_mass_stack_3->SetBinError(20,5.808453);
   VbbHcc_both_Z_mass_stack_3->SetBinError(21,5.554672);
   VbbHcc_both_Z_mass_stack_3->SetBinError(22,5.362639);
   VbbHcc_both_Z_mass_stack_3->SetBinError(23,5.155756);
   VbbHcc_both_Z_mass_stack_3->SetBinError(24,5.028633);
   VbbHcc_both_Z_mass_stack_3->SetBinError(25,4.945578);
   VbbHcc_both_Z_mass_stack_3->SetBinError(26,4.756927);
   VbbHcc_both_Z_mass_stack_3->SetBinError(27,4.73156);
   VbbHcc_both_Z_mass_stack_3->SetBinError(28,4.543191);
   VbbHcc_both_Z_mass_stack_3->SetBinError(29,4.576282);
   VbbHcc_both_Z_mass_stack_3->SetBinError(30,4.467457);
   VbbHcc_both_Z_mass_stack_3->SetBinError(31,4.322502);
   VbbHcc_both_Z_mass_stack_3->SetBinError(32,4.375981);
   VbbHcc_both_Z_mass_stack_3->SetBinError(33,4.286715);
   VbbHcc_both_Z_mass_stack_3->SetBinError(34,4.128467);
   VbbHcc_both_Z_mass_stack_3->SetBinError(35,4.110643);
   VbbHcc_both_Z_mass_stack_3->SetBinError(36,4.098536);
   VbbHcc_both_Z_mass_stack_3->SetBinError(37,3.902779);
   VbbHcc_both_Z_mass_stack_3->SetBinError(38,3.881864);
   VbbHcc_both_Z_mass_stack_3->SetBinError(39,3.788145);
   VbbHcc_both_Z_mass_stack_3->SetBinError(40,3.735293);
   VbbHcc_both_Z_mass_stack_3->SetBinError(41,23.237);
   VbbHcc_both_Z_mass_stack_3->SetEntries(333938);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_4 = new TH1D("VbbHcc_both_Z_mass_stack_4","",40,0,400);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(3,0.08935224);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(4,5.071967);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(5,15.99468);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(6,37.69022);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(7,63.5342);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(8,95.98299);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(9,161.5707);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(10,204.9915);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(11,158.1723);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(12,94.02913);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(13,72.30021);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(14,72.68108);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(15,56.61103);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(16,53.3832);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(17,51.45058);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(18,42.05831);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(19,38.75939);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(20,39.3656);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(21,34.6454);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(22,47.14529);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(23,48.21452);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(24,30.51059);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(25,33.78841);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(26,40.16575);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(27,32.83254);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(28,33.80764);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(29,27.98856);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(30,30.38675);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(31,31.81897);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(32,29.1956);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(33,20.12005);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(34,24.18687);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(35,28.96116);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(36,24.74626);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(37,30.65715);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(38,26.45136);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(39,21.2929);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(40,18.64471);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(41,850.9053);
   VbbHcc_both_Z_mass_stack_4->SetBinError(3,0.08935224);
   VbbHcc_both_Z_mass_stack_4->SetBinError(4,1.19441);
   VbbHcc_both_Z_mass_stack_4->SetBinError(5,2.18704);
   VbbHcc_both_Z_mass_stack_4->SetBinError(6,3.368312);
   VbbHcc_both_Z_mass_stack_4->SetBinError(7,5.482848);
   VbbHcc_both_Z_mass_stack_4->SetBinError(8,7.494585);
   VbbHcc_both_Z_mass_stack_4->SetBinError(9,8.935163);
   VbbHcc_both_Z_mass_stack_4->SetBinError(10,9.684775);
   VbbHcc_both_Z_mass_stack_4->SetBinError(11,9.652839);
   VbbHcc_both_Z_mass_stack_4->SetBinError(12,7.333577);
   VbbHcc_both_Z_mass_stack_4->SetBinError(13,6.39133);
   VbbHcc_both_Z_mass_stack_4->SetBinError(14,8.269939);
   VbbHcc_both_Z_mass_stack_4->SetBinError(15,5.938335);
   VbbHcc_both_Z_mass_stack_4->SetBinError(16,5.328486);
   VbbHcc_both_Z_mass_stack_4->SetBinError(17,4.904363);
   VbbHcc_both_Z_mass_stack_4->SetBinError(18,3.174871);
   VbbHcc_both_Z_mass_stack_4->SetBinError(19,4.50889);
   VbbHcc_both_Z_mass_stack_4->SetBinError(20,4.722567);
   VbbHcc_both_Z_mass_stack_4->SetBinError(21,2.871927);
   VbbHcc_both_Z_mass_stack_4->SetBinError(22,7.634189);
   VbbHcc_both_Z_mass_stack_4->SetBinError(23,6.627997);
   VbbHcc_both_Z_mass_stack_4->SetBinError(24,3.208399);
   VbbHcc_both_Z_mass_stack_4->SetBinError(25,4.175479);
   VbbHcc_both_Z_mass_stack_4->SetBinError(26,6.559905);
   VbbHcc_both_Z_mass_stack_4->SetBinError(27,2.888014);
   VbbHcc_both_Z_mass_stack_4->SetBinError(28,4.410355);
   VbbHcc_both_Z_mass_stack_4->SetBinError(29,5.31751);
   VbbHcc_both_Z_mass_stack_4->SetBinError(30,4.550179);
   VbbHcc_both_Z_mass_stack_4->SetBinError(31,4.578661);
   VbbHcc_both_Z_mass_stack_4->SetBinError(32,2.677307);
   VbbHcc_both_Z_mass_stack_4->SetBinError(33,2.092442);
   VbbHcc_both_Z_mass_stack_4->SetBinError(34,2.567401);
   VbbHcc_both_Z_mass_stack_4->SetBinError(35,3.574075);
   VbbHcc_both_Z_mass_stack_4->SetBinError(36,2.670175);
   VbbHcc_both_Z_mass_stack_4->SetBinError(37,6.413836);
   VbbHcc_both_Z_mass_stack_4->SetBinError(38,3.677567);
   VbbHcc_both_Z_mass_stack_4->SetBinError(39,3.981151);
   VbbHcc_both_Z_mass_stack_4->SetBinError(40,2.177888);
   VbbHcc_both_Z_mass_stack_4->SetBinError(41,17.8428);
   VbbHcc_both_Z_mass_stack_4->SetEntries(18216);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_5 = new TH1D("VbbHcc_both_Z_mass_stack_5","",40,0,400);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(4,0.6836364);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(5,4.223853);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(6,9.621111);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(7,11.01768);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(8,14.836);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(9,11.48989);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(10,11.46115);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(11,11.33272);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(12,11.34161);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(13,8.175354);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(14,5.241822);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(15,4.996292);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(16,9.205501);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(17,5.873894);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(18,4.716227);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(19,3.546527);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(20,3.750692);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(21,3.5824);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(22,3.015699);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(23,2.557394);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(24,3.928448);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(25,7.243178);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(26,3.674297);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(27,3.046425);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(28,1.994465);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(29,3.37273);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(30,1.597885);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(31,1.039656);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(32,1.707845);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(33,2.674241);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(34,0.9640046);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(35,0.8644866);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(36,2.409244);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(37,2.351776);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(38,1.140043);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(39,3.839166);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(40,1.711713);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(41,96.03852);
   VbbHcc_both_Z_mass_stack_5->SetBinError(4,0.2502312);
   VbbHcc_both_Z_mass_stack_5->SetBinError(5,1.629352);
   VbbHcc_both_Z_mass_stack_5->SetBinError(6,2.588865);
   VbbHcc_both_Z_mass_stack_5->SetBinError(7,2.413891);
   VbbHcc_both_Z_mass_stack_5->SetBinError(8,3.237722);
   VbbHcc_both_Z_mass_stack_5->SetBinError(9,2.250412);
   VbbHcc_both_Z_mass_stack_5->SetBinError(10,2.645335);
   VbbHcc_both_Z_mass_stack_5->SetBinError(11,2.64956);
   VbbHcc_both_Z_mass_stack_5->SetBinError(12,5.638921);
   VbbHcc_both_Z_mass_stack_5->SetBinError(13,1.544566);
   VbbHcc_both_Z_mass_stack_5->SetBinError(14,0.9011413);
   VbbHcc_both_Z_mass_stack_5->SetBinError(15,1.397416);
   VbbHcc_both_Z_mass_stack_5->SetBinError(16,2.264478);
   VbbHcc_both_Z_mass_stack_5->SetBinError(17,2.086468);
   VbbHcc_both_Z_mass_stack_5->SetBinError(18,0.9229117);
   VbbHcc_both_Z_mass_stack_5->SetBinError(19,0.719207);
   VbbHcc_both_Z_mass_stack_5->SetBinError(20,0.926337);
   VbbHcc_both_Z_mass_stack_5->SetBinError(21,1.52669);
   VbbHcc_both_Z_mass_stack_5->SetBinError(22,0.6403466);
   VbbHcc_both_Z_mass_stack_5->SetBinError(23,0.6176945);
   VbbHcc_both_Z_mass_stack_5->SetBinError(24,0.9107337);
   VbbHcc_both_Z_mass_stack_5->SetBinError(25,2.697221);
   VbbHcc_both_Z_mass_stack_5->SetBinError(26,0.8654221);
   VbbHcc_both_Z_mass_stack_5->SetBinError(27,1.628093);
   VbbHcc_both_Z_mass_stack_5->SetBinError(28,0.6162316);
   VbbHcc_both_Z_mass_stack_5->SetBinError(29,1.42848);
   VbbHcc_both_Z_mass_stack_5->SetBinError(30,0.3817083);
   VbbHcc_both_Z_mass_stack_5->SetBinError(31,0.3791958);
   VbbHcc_both_Z_mass_stack_5->SetBinError(32,0.4792606);
   VbbHcc_both_Z_mass_stack_5->SetBinError(33,0.812157);
   VbbHcc_both_Z_mass_stack_5->SetBinError(34,0.3290064);
   VbbHcc_both_Z_mass_stack_5->SetBinError(35,0.3006537);
   VbbHcc_both_Z_mass_stack_5->SetBinError(36,0.5822659);
   VbbHcc_both_Z_mass_stack_5->SetBinError(37,0.7278838);
   VbbHcc_both_Z_mass_stack_5->SetBinError(38,0.3659309);
   VbbHcc_both_Z_mass_stack_5->SetBinError(39,1.680396);
   VbbHcc_both_Z_mass_stack_5->SetBinError(40,0.4874431);
   VbbHcc_both_Z_mass_stack_5->SetBinError(41,9.983602);
   VbbHcc_both_Z_mass_stack_5->SetEntries(2376);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_6 = new TH1D("VbbHcc_both_Z_mass_stack_6","",40,0,400);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(10,0.3402984);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(11,0.3608682);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(35,0.2466832);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(41,0.6670036);
   VbbHcc_both_Z_mass_stack_6->SetBinError(10,0.3402984);
   VbbHcc_both_Z_mass_stack_6->SetBinError(11,0.3608682);
   VbbHcc_both_Z_mass_stack_6->SetBinError(35,0.2466832);
   VbbHcc_both_Z_mass_stack_6->SetBinError(41,0.4804821);
   VbbHcc_both_Z_mass_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_7 = new TH1D("VbbHcc_both_Z_mass_stack_7","",40,0,400);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(5,0.597075);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(6,0.1940007);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,0.3138408);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,0.7956075);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,1.416217);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.2948417);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(16,0.2891015);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(19,0.2655071);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(25,0.3047304);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(30,0.3152355);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(32,0.294848);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,2.048503);
   VbbHcc_both_Z_mass_stack_7->SetBinError(5,0.4247946);
   VbbHcc_both_Z_mass_stack_7->SetBinError(6,0.1940007);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.3138408);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,0.4735664);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,0.5908833);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.2948417);
   VbbHcc_both_Z_mass_stack_7->SetBinError(16,0.2891015);
   VbbHcc_both_Z_mass_stack_7->SetBinError(19,0.2655071);
   VbbHcc_both_Z_mass_stack_7->SetBinError(25,0.3047304);
   VbbHcc_both_Z_mass_stack_7->SetBinError(30,0.3152355);
   VbbHcc_both_Z_mass_stack_7->SetBinError(32,0.294848);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.7753083);
   VbbHcc_both_Z_mass_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_8 = new TH1D("VbbHcc_both_Z_mass_stack_8","",40,0,400);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(6,1.105106);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(7,0.6221141);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(8,3.081416);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(9,3.057097);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(10,9.051988);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(11,3.617163);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(12,2.522872);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(13,1.019417);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(14,1.204902);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(15,0.3221281);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(16,0.9720145);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(17,0.565358);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(18,0.2113948);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(19,0.2660549);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(20,0.3217996);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(21,0.3671896);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(22,0.2185059);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(23,0.1899316);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(24,0.3219535);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(26,0.6168732);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(27,0.6045732);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(28,0.1846632);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(29,0.07334074);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(31,0.1829191);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(33,0.5146651);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(35,0.8218128);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(36,1.073856);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(37,1.535715);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(38,0.307137);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(39,0.6413605);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(40,0.6343953);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(41,14.91584);
   VbbHcc_both_Z_mass_stack_8->SetBinError(6,0.5114798);
   VbbHcc_both_Z_mass_stack_8->SetBinError(7,0.4451708);
   VbbHcc_both_Z_mass_stack_8->SetBinError(8,0.9383594);
   VbbHcc_both_Z_mass_stack_8->SetBinError(9,0.867898);
   VbbHcc_both_Z_mass_stack_8->SetBinError(10,1.620022);
   VbbHcc_both_Z_mass_stack_8->SetBinError(11,1.053425);
   VbbHcc_both_Z_mass_stack_8->SetBinError(12,0.8983316);
   VbbHcc_both_Z_mass_stack_8->SetBinError(13,0.5163173);
   VbbHcc_both_Z_mass_stack_8->SetBinError(14,0.6028431);
   VbbHcc_both_Z_mass_stack_8->SetBinError(15,0.3221281);
   VbbHcc_both_Z_mass_stack_8->SetBinError(16,0.4945027);
   VbbHcc_both_Z_mass_stack_8->SetBinError(17,0.4037455);
   VbbHcc_both_Z_mass_stack_8->SetBinError(18,0.2113948);
   VbbHcc_both_Z_mass_stack_8->SetBinError(19,0.2660549);
   VbbHcc_both_Z_mass_stack_8->SetBinError(20,0.3217996);
   VbbHcc_both_Z_mass_stack_8->SetBinError(21,0.3671896);
   VbbHcc_both_Z_mass_stack_8->SetBinError(22,0.2185059);
   VbbHcc_both_Z_mass_stack_8->SetBinError(23,0.1899316);
   VbbHcc_both_Z_mass_stack_8->SetBinError(24,0.3219535);
   VbbHcc_both_Z_mass_stack_8->SetBinError(26,0.4361953);
   VbbHcc_both_Z_mass_stack_8->SetBinError(27,0.4111279);
   VbbHcc_both_Z_mass_stack_8->SetBinError(28,0.1846632);
   VbbHcc_both_Z_mass_stack_8->SetBinError(29,0.07334074);
   VbbHcc_both_Z_mass_stack_8->SetBinError(31,0.1829191);
   VbbHcc_both_Z_mass_stack_8->SetBinError(33,0.375468);
   VbbHcc_both_Z_mass_stack_8->SetBinError(35,0.4812628);
   VbbHcc_both_Z_mass_stack_8->SetBinError(36,0.5421955);
   VbbHcc_both_Z_mass_stack_8->SetBinError(37,0.6878539);
   VbbHcc_both_Z_mass_stack_8->SetBinError(38,0.307137);
   VbbHcc_both_Z_mass_stack_8->SetBinError(39,0.4535103);
   VbbHcc_both_Z_mass_stack_8->SetBinError(40,0.4486355);
   VbbHcc_both_Z_mass_stack_8->SetBinError(41,2.138014);
   VbbHcc_both_Z_mass_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_9 = new TH1D("VbbHcc_both_Z_mass_stack_9","",40,0,400);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(4,0.03033572);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(5,0.1427332);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(6,0.3424331);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(7,0.5867534);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(8,1.513158);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(9,3.321716);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(10,4.440371);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(11,3.561313);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(12,2.766318);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(13,2.709314);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(14,2.266681);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(15,1.456096);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(16,0.8971172);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(17,0.6531696);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(18,0.5497457);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(19,0.4102138);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(20,0.4578852);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(21,0.4308184);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(22,0.4479872);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(23,0.4748778);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(24,0.4346418);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(25,0.417482);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(26,0.4809456);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(27,0.4203291);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(28,0.4511063);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(29,0.4385303);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(30,0.441713);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(31,0.4238001);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(32,0.4113681);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(33,0.4483943);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(34,0.454186);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(35,0.4373347);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(36,0.4836544);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(37,0.4032643);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(38,0.4455413);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(39,0.4293731);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(40,0.4128536);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(41,16.90841);
   VbbHcc_both_Z_mass_stack_9->SetBinError(4,0.007723031);
   VbbHcc_both_Z_mass_stack_9->SetBinError(5,0.0167844);
   VbbHcc_both_Z_mass_stack_9->SetBinError(6,0.02571291);
   VbbHcc_both_Z_mass_stack_9->SetBinError(7,0.03384213);
   VbbHcc_both_Z_mass_stack_9->SetBinError(8,0.054476);
   VbbHcc_both_Z_mass_stack_9->SetBinError(9,0.08212768);
   VbbHcc_both_Z_mass_stack_9->SetBinError(10,0.09423955);
   VbbHcc_both_Z_mass_stack_9->SetBinError(11,0.08425052);
   VbbHcc_both_Z_mass_stack_9->SetBinError(12,0.07481441);
   VbbHcc_both_Z_mass_stack_9->SetBinError(13,0.07354935);
   VbbHcc_both_Z_mass_stack_9->SetBinError(14,0.06736838);
   VbbHcc_both_Z_mass_stack_9->SetBinError(15,0.05342982);
   VbbHcc_both_Z_mass_stack_9->SetBinError(16,0.04253736);
   VbbHcc_both_Z_mass_stack_9->SetBinError(17,0.0355845);
   VbbHcc_both_Z_mass_stack_9->SetBinError(18,0.03296363);
   VbbHcc_both_Z_mass_stack_9->SetBinError(19,0.02845726);
   VbbHcc_both_Z_mass_stack_9->SetBinError(20,0.03014466);
   VbbHcc_both_Z_mass_stack_9->SetBinError(21,0.02881288);
   VbbHcc_both_Z_mass_stack_9->SetBinError(22,0.02981122);
   VbbHcc_both_Z_mass_stack_9->SetBinError(23,0.03030502);
   VbbHcc_both_Z_mass_stack_9->SetBinError(24,0.02911479);
   VbbHcc_both_Z_mass_stack_9->SetBinError(25,0.02874353);
   VbbHcc_both_Z_mass_stack_9->SetBinError(26,0.03055181);
   VbbHcc_both_Z_mass_stack_9->SetBinError(27,0.02873607);
   VbbHcc_both_Z_mass_stack_9->SetBinError(28,0.02991055);
   VbbHcc_both_Z_mass_stack_9->SetBinError(29,0.02982497);
   VbbHcc_both_Z_mass_stack_9->SetBinError(30,0.02977111);
   VbbHcc_both_Z_mass_stack_9->SetBinError(31,0.02917356);
   VbbHcc_both_Z_mass_stack_9->SetBinError(32,0.02873375);
   VbbHcc_both_Z_mass_stack_9->SetBinError(33,0.02942328);
   VbbHcc_both_Z_mass_stack_9->SetBinError(34,0.03042144);
   VbbHcc_both_Z_mass_stack_9->SetBinError(35,0.0298162);
   VbbHcc_both_Z_mass_stack_9->SetBinError(36,0.03089484);
   VbbHcc_both_Z_mass_stack_9->SetBinError(37,0.02836478);
   VbbHcc_both_Z_mass_stack_9->SetBinError(38,0.02967949);
   VbbHcc_both_Z_mass_stack_9->SetBinError(39,0.02942862);
   VbbHcc_both_Z_mass_stack_9->SetBinError(40,0.02937025);
   VbbHcc_both_Z_mass_stack_9->SetBinError(41,0.1840933);
   VbbHcc_both_Z_mass_stack_9->SetEntries(28446);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_10 = new TH1D("VbbHcc_both_Z_mass_stack_10","",40,0,400);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(3,0.000484721);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(4,0.01423552);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(5,0.05916614);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(6,0.1437989);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(7,0.318028);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(8,0.7775665);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(9,1.54081);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(10,1.847759);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(11,1.397732);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(12,1.239725);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(13,1.135074);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(14,0.8877671);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(15,0.615442);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(16,0.4097918);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(17,0.3648942);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(18,0.290982);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(19,0.3194774);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(20,0.2718498);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(21,0.2502231);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(22,0.2637046);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(23,0.2584726);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(24,0.2270511);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(25,0.2456456);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(26,0.2465639);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(27,0.2229554);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(28,0.2190015);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(29,0.2200224);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(30,0.2175089);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(31,0.2104142);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(32,0.2013961);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(33,0.2043207);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(34,0.1864849);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(35,0.1920611);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(36,0.1856463);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(37,0.1860279);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(38,0.1747741);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(39,0.1661138);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(40,0.1753017);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(41,6.247198);
   VbbHcc_both_Z_mass_stack_10->SetBinError(3,0.000484721);
   VbbHcc_both_Z_mass_stack_10->SetBinError(4,0.002564713);
   VbbHcc_both_Z_mass_stack_10->SetBinError(5,0.005139408);
   VbbHcc_both_Z_mass_stack_10->SetBinError(6,0.008056449);
   VbbHcc_both_Z_mass_stack_10->SetBinError(7,0.0119251);
   VbbHcc_both_Z_mass_stack_10->SetBinError(8,0.01866148);
   VbbHcc_both_Z_mass_stack_10->SetBinError(9,0.02632106);
   VbbHcc_both_Z_mass_stack_10->SetBinError(10,0.02879497);
   VbbHcc_both_Z_mass_stack_10->SetBinError(11,0.02499989);
   VbbHcc_both_Z_mass_stack_10->SetBinError(12,0.02355742);
   VbbHcc_both_Z_mass_stack_10->SetBinError(13,0.02256067);
   VbbHcc_both_Z_mass_stack_10->SetBinError(14,0.01994388);
   VbbHcc_both_Z_mass_stack_10->SetBinError(15,0.01660199);
   VbbHcc_both_Z_mass_stack_10->SetBinError(16,0.013545);
   VbbHcc_both_Z_mass_stack_10->SetBinError(17,0.0127596);
   VbbHcc_both_Z_mass_stack_10->SetBinError(18,0.01142127);
   VbbHcc_both_Z_mass_stack_10->SetBinError(19,0.01197242);
   VbbHcc_both_Z_mass_stack_10->SetBinError(20,0.01101852);
   VbbHcc_both_Z_mass_stack_10->SetBinError(21,0.01059018);
   VbbHcc_both_Z_mass_stack_10->SetBinError(22,0.0108815);
   VbbHcc_both_Z_mass_stack_10->SetBinError(23,0.01080058);
   VbbHcc_both_Z_mass_stack_10->SetBinError(24,0.01007823);
   VbbHcc_both_Z_mass_stack_10->SetBinError(25,0.01048003);
   VbbHcc_both_Z_mass_stack_10->SetBinError(26,0.01052649);
   VbbHcc_both_Z_mass_stack_10->SetBinError(27,0.01001516);
   VbbHcc_both_Z_mass_stack_10->SetBinError(28,0.009888613);
   VbbHcc_both_Z_mass_stack_10->SetBinError(29,0.009928805);
   VbbHcc_both_Z_mass_stack_10->SetBinError(30,0.009885545);
   VbbHcc_both_Z_mass_stack_10->SetBinError(31,0.009730736);
   VbbHcc_both_Z_mass_stack_10->SetBinError(32,0.009510618);
   VbbHcc_both_Z_mass_stack_10->SetBinError(33,0.009551689);
   VbbHcc_both_Z_mass_stack_10->SetBinError(34,0.009115031);
   VbbHcc_both_Z_mass_stack_10->SetBinError(35,0.009273041);
   VbbHcc_both_Z_mass_stack_10->SetBinError(36,0.009153625);
   VbbHcc_both_Z_mass_stack_10->SetBinError(37,0.00913857);
   VbbHcc_both_Z_mass_stack_10->SetBinError(38,0.0088637);
   VbbHcc_both_Z_mass_stack_10->SetBinError(39,0.008652226);
   VbbHcc_both_Z_mass_stack_10->SetBinError(40,0.008898027);
   VbbHcc_both_Z_mass_stack_10->SetBinError(41,0.05294452);
   VbbHcc_both_Z_mass_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.001452482);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.005885559);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(8,0.008330828);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.0175094);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.02982742);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02694254);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.005270454);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.001730288);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.003400884);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.004005772);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.002008926);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(17,0.001530478);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.004330521);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(20,0.003935131);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.001979228);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.006791267);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(24,0.001185265);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(26,0.001245676);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(28,0.001903785);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.002736124);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.00125388);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(40,0.001698464);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.03691101);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.001452482);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.003399549);
   VbbHcc_both_Z_mass_stack_11->SetBinError(8,0.003776809);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.00587666);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.007490854);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.006880525);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.003090079);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.001730288);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.002413905);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.002832519);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.002008926);
   VbbHcc_both_Z_mass_stack_11->SetBinError(17,0.001530478);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.00308267);
   VbbHcc_both_Z_mass_stack_11->SetBinError(20,0.002783179);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.001979228);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.003933483);
   VbbHcc_both_Z_mass_stack_11->SetBinError(24,0.001185265);
   VbbHcc_both_Z_mass_stack_11->SetBinError(26,0.001245676);
   VbbHcc_both_Z_mass_stack_11->SetBinError(28,0.001903785);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.001951926);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.00125388);
   VbbHcc_both_Z_mass_stack_11->SetBinError(40,0.001698464);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.008487195);
   VbbHcc_both_Z_mass_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_12 = new TH1D("VbbHcc_both_Z_mass_stack_12","",40,0,400);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(4,0.000299204);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(5,0.0004841325);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(6,0.0004376213);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(7,0.001084807);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(8,0.00449009);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(9,0.008179419);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(10,0.01079343);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(11,0.009085073);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(12,0.005014315);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(13,0.001094467);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(14,0.0004465458);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(15,0.001356283);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(16,0.00114582);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(17,0.000777666);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(18,0.001102785);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(19,0.0005920771);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(20,0.0005746271);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(21,0.00127829);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(22,0.0004198097);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(23,0.000517741);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(24,0.0003985691);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(25,0.0002415024);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(26,0.0002378113);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(27,0.0007581237);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(28,0.0005415735);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(29,0.0001343505);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(30,0.0004770224);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(32,0.0005178373);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(33,0.000721235);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(34,0.0004795534);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(35,0.0002637164);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(36,0.0006865539);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(37,0.0007126199);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(38,0.0005701381);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(39,0.0004501262);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(41,0.0155526);
   VbbHcc_both_Z_mass_stack_12->SetBinError(4,0.000299204);
   VbbHcc_both_Z_mass_stack_12->SetBinError(5,0.000355861);
   VbbHcc_both_Z_mass_stack_12->SetBinError(6,0.0003146715);
   VbbHcc_both_Z_mass_stack_12->SetBinError(7,0.000490187);
   VbbHcc_both_Z_mass_stack_12->SetBinError(8,0.001073447);
   VbbHcc_both_Z_mass_stack_12->SetBinError(9,0.001436715);
   VbbHcc_both_Z_mass_stack_12->SetBinError(10,0.001636722);
   VbbHcc_both_Z_mass_stack_12->SetBinError(11,0.001497452);
   VbbHcc_both_Z_mass_stack_12->SetBinError(12,0.001086984);
   VbbHcc_both_Z_mass_stack_12->SetBinError(13,0.0004954787);
   VbbHcc_both_Z_mass_stack_12->SetBinError(14,0.0002883224);
   VbbHcc_both_Z_mass_stack_12->SetBinError(15,0.0005575856);
   VbbHcc_both_Z_mass_stack_12->SetBinError(16,0.0005165837);
   VbbHcc_both_Z_mass_stack_12->SetBinError(17,0.0004489899);
   VbbHcc_both_Z_mass_stack_12->SetBinError(18,0.0004969545);
   VbbHcc_both_Z_mass_stack_12->SetBinError(19,0.0003450296);
   VbbHcc_both_Z_mass_stack_12->SetBinError(20,0.0004076782);
   VbbHcc_both_Z_mass_stack_12->SetBinError(21,0.0005310576);
   VbbHcc_both_Z_mass_stack_12->SetBinError(22,0.0003065833);
   VbbHcc_both_Z_mass_stack_12->SetBinError(23,0.000327532);
   VbbHcc_both_Z_mass_stack_12->SetBinError(24,0.0002884918);
   VbbHcc_both_Z_mass_stack_12->SetBinError(25,0.0002415024);
   VbbHcc_both_Z_mass_stack_12->SetBinError(26,0.0002378113);
   VbbHcc_both_Z_mass_stack_12->SetBinError(27,0.0004385588);
   VbbHcc_both_Z_mass_stack_12->SetBinError(28,0.0003830768);
   VbbHcc_both_Z_mass_stack_12->SetBinError(29,0.0001343505);
   VbbHcc_both_Z_mass_stack_12->SetBinError(30,0.0003388809);
   VbbHcc_both_Z_mass_stack_12->SetBinError(32,0.0003667062);
   VbbHcc_both_Z_mass_stack_12->SetBinError(33,0.0004164487);
   VbbHcc_both_Z_mass_stack_12->SetBinError(34,0.0002769347);
   VbbHcc_both_Z_mass_stack_12->SetBinError(35,0.0002637164);
   VbbHcc_both_Z_mass_stack_12->SetBinError(36,0.0003978201);
   VbbHcc_both_Z_mass_stack_12->SetBinError(37,0.000422703);
   VbbHcc_both_Z_mass_stack_12->SetBinError(38,0.0004045719);
   VbbHcc_both_Z_mass_stack_12->SetBinError(39,0.0003222754);
   VbbHcc_both_Z_mass_stack_12->SetBinError(41,0.001933148);
   VbbHcc_both_Z_mass_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_mass__532 = new TH1D("VbbHcc_both_Z_mass__532","",40,0,400);
   VbbHcc_both_Z_mass__532->SetBinContent(3,8);
   VbbHcc_both_Z_mass__532->SetBinContent(4,290);
   VbbHcc_both_Z_mass__532->SetBinContent(5,1127);
   VbbHcc_both_Z_mass__532->SetBinContent(6,1873);
   VbbHcc_both_Z_mass__532->SetBinContent(7,2336);
   VbbHcc_both_Z_mass__532->SetBinContent(15,1904);
   VbbHcc_both_Z_mass__532->SetBinContent(16,1694);
   VbbHcc_both_Z_mass__532->SetBinContent(17,1609);
   VbbHcc_both_Z_mass__532->SetBinContent(18,1464);
   VbbHcc_both_Z_mass__532->SetBinContent(19,1359);
   VbbHcc_both_Z_mass__532->SetBinContent(20,1314);
   VbbHcc_both_Z_mass__532->SetBinContent(21,1205);
   VbbHcc_both_Z_mass__532->SetBinContent(22,1113);
   VbbHcc_both_Z_mass__532->SetBinContent(23,1019);
   VbbHcc_both_Z_mass__532->SetBinContent(24,1022);
   VbbHcc_both_Z_mass__532->SetBinContent(25,925);
   VbbHcc_both_Z_mass__532->SetBinContent(26,934);
   VbbHcc_both_Z_mass__532->SetBinContent(27,878);
   VbbHcc_both_Z_mass__532->SetBinContent(28,834);
   VbbHcc_both_Z_mass__532->SetBinContent(29,833);
   VbbHcc_both_Z_mass__532->SetBinContent(30,732);
   VbbHcc_both_Z_mass__532->SetBinContent(31,754);
   VbbHcc_both_Z_mass__532->SetBinContent(32,723);
   VbbHcc_both_Z_mass__532->SetBinContent(33,692);
   VbbHcc_both_Z_mass__532->SetBinContent(34,648);
   VbbHcc_both_Z_mass__532->SetBinContent(35,637);
   VbbHcc_both_Z_mass__532->SetBinContent(36,590);
   VbbHcc_both_Z_mass__532->SetBinContent(37,637);
   VbbHcc_both_Z_mass__532->SetBinContent(38,563);
   VbbHcc_both_Z_mass__532->SetBinContent(39,544);
   VbbHcc_both_Z_mass__532->SetBinContent(40,533);
   VbbHcc_both_Z_mass__532->SetBinContent(41,20953);
   VbbHcc_both_Z_mass__532->SetEntries(67723);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass__532->SetLineColor(ci);
   VbbHcc_both_Z_mass__532->SetLineWidth(2);
   VbbHcc_both_Z_mass__532->SetMarkerStyle(20);
   VbbHcc_both_Z_mass__532->SetMarkerSize(1.2);
   VbbHcc_both_Z_mass__532->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass__532->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__532->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__532->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__532->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__532->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__532->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__532->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__532->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass__532->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__532->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__532->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__532->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__532->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__532->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_mass_fx1387[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_both_Z_mass_fy1387[40] = {
   0,
   0.03254514,
   9.935824,
   639.361,
   2852.166,
   28564.57,
   10328.43,
   9911.417,
   8302.773,
   8143.654,
   6152.658,
   5886.884,
   6886.613,
   5273.771,
   7163.793,
   4090.643,
   4757.062,
   5259.77,
   5307.259,
   4623.728,
   4955.224,
   2898.39,
   4583.77,
   3186.242,
   3082.41,
   2017.161,
   4295.697,
   2807.089,
   3133.669,
   2299.082,
   2323.188,
   2149.723,
   1782.188,
   2092.513,
   2289.372,
   2913.109,
   1655.141,
   2521.793,
   2977.893,
   1354.167};
   Double_t Graph_from_VbbHcc_both_Z_mass_fex1387[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_both_Z_mass_fey1387[40] = {
   0,
   0.03254514,
   7.596792,
   113.95,
   683.1623,
   21692.59,
   1395.956,
   1371.442,
   1205.401,
   1177.843,
   943.4708,
   953.8987,
   1092.652,
   872.6196,
   1187.157,
   751.4092,
   829.0926,
   1766.894,
   961.6547,
   909.0704,
   1005.624,
   536.0662,
   977.6534,
   723.4455,
   719.7946,
   524.8156,
   978.6666,
   710.4052,
   804.9512,
   659.2113,
   637.9337,
   603.152,
   473.2775,
   575.9803,
   528.7496,
   779.4673,
   476.177,
   634.936,
   756.7956,
   390.0431};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_both_Z_mass_fx1387,Graph_from_VbbHcc_both_Z_mass_fy1387,Graph_from_VbbHcc_both_Z_mass_fex1387,Graph_from_VbbHcc_both_Z_mass_fey1387);
   gre->SetName("Graph_from_VbbHcc_both_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_mass1387 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_mass1387","",100,0,440);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetMinimum(55.28287);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetMaximum(55282.87);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_mass1387->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1387->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_mass1387);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_mass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_both_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__533 = new TH1D("data_mc_ratio__533","",40,0,400);
   data_mc_ratio__533->SetBinContent(3,0.8051673);
   data_mc_ratio__533->SetBinContent(4,0.4535779);
   data_mc_ratio__533->SetBinContent(5,0.3951383);
   data_mc_ratio__533->SetBinContent(6,0.06557074);
   data_mc_ratio__533->SetBinContent(7,0.2261718);
   data_mc_ratio__533->SetBinContent(8,0.2558665);
   data_mc_ratio__533->SetBinContent(9,0.2905054);
   data_mc_ratio__533->SetBinContent(10,0.2974095);
   data_mc_ratio__533->SetBinContent(11,0.3757726);
   data_mc_ratio__533->SetBinContent(12,0.3832248);
   data_mc_ratio__533->SetBinContent(13,0.2940488);
   data_mc_ratio__533->SetBinContent(14,0.3743052);
   data_mc_ratio__533->SetBinContent(15,0.265781);
   data_mc_ratio__533->SetBinContent(16,0.4141158);
   data_mc_ratio__533->SetBinContent(17,0.338234);
   data_mc_ratio__533->SetBinContent(18,0.2783391);
   data_mc_ratio__533->SetBinContent(19,0.2560644);
   data_mc_ratio__533->SetBinContent(20,0.2841863);
   data_mc_ratio__533->SetBinContent(21,0.2431777);
   data_mc_ratio__533->SetBinContent(22,0.3840063);
   data_mc_ratio__533->SetBinContent(23,0.2223061);
   data_mc_ratio__533->SetBinContent(24,0.3207541);
   data_mc_ratio__533->SetBinContent(25,0.3000899);
   data_mc_ratio__533->SetBinContent(26,0.463027);
   data_mc_ratio__533->SetBinContent(27,0.2043906);
   data_mc_ratio__533->SetBinContent(28,0.297105);
   data_mc_ratio__533->SetBinContent(29,0.2658226);
   data_mc_ratio__533->SetBinContent(30,0.3183879);
   data_mc_ratio__533->SetBinContent(31,0.324554);
   data_mc_ratio__533->SetBinContent(32,0.3363224);
   data_mc_ratio__533->SetBinContent(33,0.3882866);
   data_mc_ratio__533->SetBinContent(34,0.3096754);
   data_mc_ratio__533->SetBinContent(35,0.2782422);
   data_mc_ratio__533->SetBinContent(36,0.2025327);
   data_mc_ratio__533->SetBinContent(37,0.3848615);
   data_mc_ratio__533->SetBinContent(38,0.2232539);
   data_mc_ratio__533->SetBinContent(39,0.1826795);
   data_mc_ratio__533->SetBinContent(40,0.3935999);
   data_mc_ratio__533->SetBinContent(41,0.2518935);
   data_mc_ratio__533->SetBinError(3,0.2846696);
   data_mc_ratio__533->SetBinError(4,0.02663501);
   data_mc_ratio__533->SetBinError(5,0.01177029);
   data_mc_ratio__533->SetBinError(6,0.0015151);
   data_mc_ratio__533->SetBinError(7,0.004679528);
   data_mc_ratio__533->SetBinError(8,0.005080879);
   data_mc_ratio__533->SetBinError(9,0.005915146);
   data_mc_ratio__533->SetBinError(10,0.006043211);
   data_mc_ratio__533->SetBinError(11,0.007815039);
   data_mc_ratio__533->SetBinError(12,0.008068338);
   data_mc_ratio__533->SetBinError(13,0.006534417);
   data_mc_ratio__533->SetBinError(14,0.008424659);
   data_mc_ratio__533->SetBinError(15,0.006091026);
   data_mc_ratio__533->SetBinError(16,0.01006156);
   data_mc_ratio__533->SetBinError(17,0.008432167);
   data_mc_ratio__533->SetBinError(18,0.00727451);
   data_mc_ratio__533->SetBinError(19,0.006946074);
   data_mc_ratio__533->SetBinError(20,0.007839808);
   data_mc_ratio__533->SetBinError(21,0.007005357);
   data_mc_ratio__533->SetBinError(22,0.01151041);
   data_mc_ratio__533->SetBinError(23,0.006964088);
   data_mc_ratio__533->SetBinError(24,0.01003337);
   data_mc_ratio__533->SetBinError(25,0.009866894);
   data_mc_ratio__533->SetBinError(26,0.0151507);
   data_mc_ratio__533->SetBinError(27,0.006897847);
   data_mc_ratio__533->SetBinError(28,0.0102879);
   data_mc_ratio__533->SetBinError(29,0.009210206);
   data_mc_ratio__533->SetBinError(30,0.01176796);
   data_mc_ratio__533->SetBinError(31,0.01181956);
   data_mc_ratio__533->SetBinError(32,0.01250797);
   data_mc_ratio__533->SetBinError(33,0.01476044);
   data_mc_ratio__533->SetBinError(34,0.0121652);
   data_mc_ratio__533->SetBinError(35,0.01102436);
   data_mc_ratio__533->SetBinError(36,0.008338141);
   data_mc_ratio__533->SetBinError(37,0.01524877);
   data_mc_ratio__533->SetBinError(38,0.009409029);
   data_mc_ratio__533->SetBinError(39,0.007832318);
   data_mc_ratio__533->SetBinError(40,0.0170487);
   data_mc_ratio__533->SetBinError(41,0.0471532);
   data_mc_ratio__533->SetMinimum(0.4);
   data_mc_ratio__533->SetMaximum(1.6);
   data_mc_ratio__533->SetEntries(223.7838);
   data_mc_ratio__533->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__533->SetLineColor(ci);
   data_mc_ratio__533->SetLineWidth(2);
   data_mc_ratio__533->SetMarkerStyle(20);
   data_mc_ratio__533->SetMarkerSize(1.2);
   data_mc_ratio__533->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__533->GetXaxis()->SetRange(1,30);
   data_mc_ratio__533->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__533->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__533->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__533->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__533->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__533->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__533->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__533->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__533->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__533->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__533->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__533->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__533->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__533->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__533->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__533->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__533->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1388[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1388[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1388[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1388[40] = {
   0,
   1,
   0.764586,
   0.1782248,
   0.239524,
   0.7594228,
   0.1351566,
   0.1383699,
   0.1451806,
   0.1446332,
   0.1533436,
   0.162038,
   0.1586632,
   0.1654641,
   0.1657163,
   0.1836898,
   0.1742867,
   0.3359261,
   0.1811961,
   0.1966098,
   0.2029422,
   0.1849531,
   0.2132859,
   0.2270529,
   0.2335168,
   0.2601754,
   0.2278249,
   0.2530754,
   0.2568718,
   0.286728,
   0.2745941,
   0.280572,
   0.2655597,
   0.2752576,
   0.2309583,
   0.2675723,
   0.2876957,
   0.2517796,
   0.2541379,
   0.2880317};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1388,Graph_from_mc_statistical_error_fy1388,Graph_from_mc_statistical_error_fex1388,Graph_from_mc_statistical_error_fey1388);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1388 = new TH1F("Graph_Graph_from_mc_statistical_error1388","",100,0,440);
   Graph_Graph_from_mc_statistical_error1388->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1388->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1388->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1388->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1388->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1388->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1388->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1388);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_both_17->cd();
   Z_mass_both_17->Modified();
   Z_mass_both_17->cd();
   Z_mass_both_17->SetSelected(Z_mass_both_17);
}
