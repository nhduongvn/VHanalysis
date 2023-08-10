void Z_mass_both_16_logY()
{
//=========Macro generated from canvas: Z_mass_both_16/Z_mass_both_16
//=========  (Thu Aug 10 12:32:35 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_16 = new TCanvas("Z_mass_both_16", "Z_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_16->SetHighLightColor(2);
   Z_mass_both_16->Range(0,0,1,1);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetFillStyle(4000);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetFrameFillStyle(1000);
   Z_mass_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.820133,315.7258,10.66218);
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
   st->SetMaximum(6.514449e+08);
   
   TH1F *st_stack_193 = new TH1F("st_stack_193","",40,0,400);
   st_stack_193->SetMinimum(0.001560808);
   st_stack_193->SetMaximum(2.060374e+09);
   st_stack_193->SetDirectory(0);
   st_stack_193->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_193->SetLineColor(ci);
   st_stack_193->GetXaxis()->SetRange(1,30);
   st_stack_193->GetXaxis()->SetLabelFont(42);
   st_stack_193->GetXaxis()->SetLabelSize(0.035);
   st_stack_193->GetXaxis()->SetTitleSize(0.035);
   st_stack_193->GetXaxis()->SetTitleFont(42);
   st_stack_193->GetYaxis()->SetTitle("Events/10.0");
   st_stack_193->GetYaxis()->SetLabelFont(42);
   st_stack_193->GetYaxis()->SetLabelSize(0.05);
   st_stack_193->GetYaxis()->SetTitleSize(0.057);
   st_stack_193->GetYaxis()->SetTitleOffset(1.2);
   st_stack_193->GetYaxis()->SetTitleFont(42);
   st_stack_193->GetZaxis()->SetLabelFont(42);
   st_stack_193->GetZaxis()->SetLabelSize(0.035);
   st_stack_193->GetZaxis()->SetTitleSize(0.035);
   st_stack_193->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_193);
   
   
   TH1D *VbbHcc_both_Z_mass_stack_1 = new TH1D("VbbHcc_both_Z_mass_stack_1","",40,0,400);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(3,5.879633);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(4,1960.245);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(5,6529.712);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(6,7364.103);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(7,8818.991);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(8,8023.361);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(9,6648.152);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(10,6024.41);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(11,5003.732);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(12,5564.366);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(13,3280.651);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(14,6121.453);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(15,4338.228);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(16,2553.796);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(17,2695.379);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(18,4639.011);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(19,2630.046);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(20,3321.648);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(21,2648.929);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(22,1736.434);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(23,3660.851);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(24,3919.785);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(25,1844.48);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(26,3990.899);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(27,1740.634);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(28,1754.611);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(29,1377.473);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(30,2336.196);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(31,3243.387);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(32,2492.249);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(33,843.0168);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(34,2754.619);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(35,1333.129);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(36,1360.191);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(37,825.7441);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(38,1860.008);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(39,1574.131);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(40,2294.378);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(41,47204.31);
   VbbHcc_both_Z_mass_stack_1->SetBinError(3,5.879633);
   VbbHcc_both_Z_mass_stack_1->SetBinError(4,663.2221);
   VbbHcc_both_Z_mass_stack_1->SetBinError(5,1765.013);
   VbbHcc_both_Z_mass_stack_1->SetBinError(6,1769.227);
   VbbHcc_both_Z_mass_stack_1->SetBinError(7,1832.492);
   VbbHcc_both_Z_mass_stack_1->SetBinError(8,1165.503);
   VbbHcc_both_Z_mass_stack_1->SetBinError(9,1092.705);
   VbbHcc_both_Z_mass_stack_1->SetBinError(10,1662.678);
   VbbHcc_both_Z_mass_stack_1->SetBinError(11,945.722);
   VbbHcc_both_Z_mass_stack_1->SetBinError(12,1639.567);
   VbbHcc_both_Z_mass_stack_1->SetBinError(13,625.1835);
   VbbHcc_both_Z_mass_stack_1->SetBinError(14,1683.731);
   VbbHcc_both_Z_mass_stack_1->SetBinError(15,902.9839);
   VbbHcc_both_Z_mass_stack_1->SetBinError(16,559.0232);
   VbbHcc_both_Z_mass_stack_1->SetBinError(17,618.494);
   VbbHcc_both_Z_mass_stack_1->SetBinError(18,1593.755);
   VbbHcc_both_Z_mass_stack_1->SetBinError(19,617.6277);
   VbbHcc_both_Z_mass_stack_1->SetBinError(20,1498.403);
   VbbHcc_both_Z_mass_stack_1->SetBinError(21,670.9473);
   VbbHcc_both_Z_mass_stack_1->SetBinError(22,479.423);
   VbbHcc_both_Z_mass_stack_1->SetBinError(23,1545.047);
   VbbHcc_both_Z_mass_stack_1->SetBinError(24,1568.486);
   VbbHcc_both_Z_mass_stack_1->SetBinError(25,547.8113);
   VbbHcc_both_Z_mass_stack_1->SetBinError(26,1590.098);
   VbbHcc_both_Z_mass_stack_1->SetBinError(27,482.9878);
   VbbHcc_both_Z_mass_stack_1->SetBinError(28,547.4698);
   VbbHcc_both_Z_mass_stack_1->SetBinError(29,398.2622);
   VbbHcc_both_Z_mass_stack_1->SetBinError(30,1447.429);
   VbbHcc_both_Z_mass_stack_1->SetBinError(31,1521.13);
   VbbHcc_both_Z_mass_stack_1->SetBinError(32,669.254);
   VbbHcc_both_Z_mass_stack_1->SetBinError(33,285.5782);
   VbbHcc_both_Z_mass_stack_1->SetBinError(34,766.7621);
   VbbHcc_both_Z_mass_stack_1->SetBinError(35,473.7308);
   VbbHcc_both_Z_mass_stack_1->SetBinError(36,474.2532);
   VbbHcc_both_Z_mass_stack_1->SetBinError(37,284.2952);
   VbbHcc_both_Z_mass_stack_1->SetBinError(38,607.6182);
   VbbHcc_both_Z_mass_stack_1->SetBinError(39,543.8264);
   VbbHcc_both_Z_mass_stack_1->SetBinError(40,667.3582);
   VbbHcc_both_Z_mass_stack_1->SetBinError(41,3454.271);
   VbbHcc_both_Z_mass_stack_1->SetEntries(10203);

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
   VbbHcc_both_Z_mass_stack_2->SetBinContent(3,0.1381939);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(4,2.512438);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(5,8.236053);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(6,12.06987);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(7,16.51235);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(8,22.66218);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(9,24.5208);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(10,25.01823);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(11,24.1481);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(12,28.87149);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(13,24.82577);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(14,20.28396);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(15,21.69989);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(16,19.57442);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(17,20.98843);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(18,18.01714);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(19,18.38482);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(20,16.31519);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(21,15.61496);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(22,11.8198);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(23,12.11513);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(24,17.97223);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(25,10.9766);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(26,16.14193);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(27,10.32971);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(28,11.69048);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(29,10.24038);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(30,10.65798);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(31,7.764098);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(32,9.724882);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(33,9.124198);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(34,8.660077);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(35,8.801494);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(36,6.833743);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(37,8.257494);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(38,8.314031);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(39,6.736466);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(40,5.082275);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(41,260.4368);
   VbbHcc_both_Z_mass_stack_2->SetBinError(3,0.07999024);
   VbbHcc_both_Z_mass_stack_2->SetBinError(4,0.5399086);
   VbbHcc_both_Z_mass_stack_2->SetBinError(5,1.124233);
   VbbHcc_both_Z_mass_stack_2->SetBinError(6,1.296587);
   VbbHcc_both_Z_mass_stack_2->SetBinError(7,1.491941);
   VbbHcc_both_Z_mass_stack_2->SetBinError(8,1.859108);
   VbbHcc_both_Z_mass_stack_2->SetBinError(9,1.9737);
   VbbHcc_both_Z_mass_stack_2->SetBinError(10,1.917634);
   VbbHcc_both_Z_mass_stack_2->SetBinError(11,1.891557);
   VbbHcc_both_Z_mass_stack_2->SetBinError(12,2.165851);
   VbbHcc_both_Z_mass_stack_2->SetBinError(13,1.995201);
   VbbHcc_both_Z_mass_stack_2->SetBinError(14,1.641604);
   VbbHcc_both_Z_mass_stack_2->SetBinError(15,1.766662);
   VbbHcc_both_Z_mass_stack_2->SetBinError(16,1.740892);
   VbbHcc_both_Z_mass_stack_2->SetBinError(17,1.80544);
   VbbHcc_both_Z_mass_stack_2->SetBinError(18,1.66752);
   VbbHcc_both_Z_mass_stack_2->SetBinError(19,1.754206);
   VbbHcc_both_Z_mass_stack_2->SetBinError(20,1.641011);
   VbbHcc_both_Z_mass_stack_2->SetBinError(21,1.578933);
   VbbHcc_both_Z_mass_stack_2->SetBinError(22,1.288785);
   VbbHcc_both_Z_mass_stack_2->SetBinError(23,1.340023);
   VbbHcc_both_Z_mass_stack_2->SetBinError(24,1.802613);
   VbbHcc_both_Z_mass_stack_2->SetBinError(25,1.275682);
   VbbHcc_both_Z_mass_stack_2->SetBinError(26,1.640801);
   VbbHcc_both_Z_mass_stack_2->SetBinError(27,1.215183);
   VbbHcc_both_Z_mass_stack_2->SetBinError(28,1.397281);
   VbbHcc_both_Z_mass_stack_2->SetBinError(29,1.216902);
   VbbHcc_both_Z_mass_stack_2->SetBinError(30,1.314655);
   VbbHcc_both_Z_mass_stack_2->SetBinError(31,1.058705);
   VbbHcc_both_Z_mass_stack_2->SetBinError(32,1.273927);
   VbbHcc_both_Z_mass_stack_2->SetBinError(33,1.23806);
   VbbHcc_both_Z_mass_stack_2->SetBinError(34,1.159955);
   VbbHcc_both_Z_mass_stack_2->SetBinError(35,1.21178);
   VbbHcc_both_Z_mass_stack_2->SetBinError(36,0.9811523);
   VbbHcc_both_Z_mass_stack_2->SetBinError(37,1.200594);
   VbbHcc_both_Z_mass_stack_2->SetBinError(38,1.100652);
   VbbHcc_both_Z_mass_stack_2->SetBinError(39,1.010003);
   VbbHcc_both_Z_mass_stack_2->SetBinError(40,0.8389264);
   VbbHcc_both_Z_mass_stack_2->SetBinError(41,6.473472);
   VbbHcc_both_Z_mass_stack_2->SetEntries(10096);

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
   VbbHcc_both_Z_mass_stack_3->SetBinContent(3,2.175072);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(4,43.27465);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(5,150.9874);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(6,256.7219);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(7,338.6213);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(8,421.5979);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(9,485.9691);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(10,531.6659);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(11,538.6894);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(12,552.7444);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(13,539.0314);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(14,504.4756);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(15,475.9811);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(16,427.2411);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(17,395.7714);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(18,358.3443);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(19,325.2561);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(20,296.7182);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(21,276.4879);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(22,266.1584);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(23,244.0494);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(24,223.6725);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(25,221.7415);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(26,201.029);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(27,198.9044);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(28,187.9527);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(29,178.0767);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(30,174.4765);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(31,167.6446);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(32,161.5918);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(33,157.323);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(34,148.0534);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(35,142.3396);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(36,139.2777);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(37,133.2892);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(38,125.3707);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(39,123.6644);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(40,119.9812);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(41,4599.053);
   VbbHcc_both_Z_mass_stack_3->SetBinError(3,0.3614761);
   VbbHcc_both_Z_mass_stack_3->SetBinError(4,1.645057);
   VbbHcc_both_Z_mass_stack_3->SetBinError(5,3.059304);
   VbbHcc_both_Z_mass_stack_3->SetBinError(6,3.995632);
   VbbHcc_both_Z_mass_stack_3->SetBinError(7,4.594308);
   VbbHcc_both_Z_mass_stack_3->SetBinError(8,5.143096);
   VbbHcc_both_Z_mass_stack_3->SetBinError(9,5.535761);
   VbbHcc_both_Z_mass_stack_3->SetBinError(10,5.802621);
   VbbHcc_both_Z_mass_stack_3->SetBinError(11,5.848285);
   VbbHcc_both_Z_mass_stack_3->SetBinError(12,5.925306);
   VbbHcc_both_Z_mass_stack_3->SetBinError(13,5.856752);
   VbbHcc_both_Z_mass_stack_3->SetBinError(14,5.654576);
   VbbHcc_both_Z_mass_stack_3->SetBinError(15,5.505143);
   VbbHcc_both_Z_mass_stack_3->SetBinError(16,5.201394);
   VbbHcc_both_Z_mass_stack_3->SetBinError(17,4.999066);
   VbbHcc_both_Z_mass_stack_3->SetBinError(18,4.746927);
   VbbHcc_both_Z_mass_stack_3->SetBinError(19,4.522713);
   VbbHcc_both_Z_mass_stack_3->SetBinError(20,4.317863);
   VbbHcc_both_Z_mass_stack_3->SetBinError(21,4.164447);
   VbbHcc_both_Z_mass_stack_3->SetBinError(22,4.087226);
   VbbHcc_both_Z_mass_stack_3->SetBinError(23,3.901369);
   VbbHcc_both_Z_mass_stack_3->SetBinError(24,3.739698);
   VbbHcc_both_Z_mass_stack_3->SetBinError(25,3.734785);
   VbbHcc_both_Z_mass_stack_3->SetBinError(26,3.553569);
   VbbHcc_both_Z_mass_stack_3->SetBinError(27,3.538331);
   VbbHcc_both_Z_mass_stack_3->SetBinError(28,3.423672);
   VbbHcc_both_Z_mass_stack_3->SetBinError(29,3.33693);
   VbbHcc_both_Z_mass_stack_3->SetBinError(30,3.315771);
   VbbHcc_both_Z_mass_stack_3->SetBinError(31,3.245755);
   VbbHcc_both_Z_mass_stack_3->SetBinError(32,3.190327);
   VbbHcc_both_Z_mass_stack_3->SetBinError(33,3.147806);
   VbbHcc_both_Z_mass_stack_3->SetBinError(34,3.050141);
   VbbHcc_both_Z_mass_stack_3->SetBinError(35,2.995431);
   VbbHcc_both_Z_mass_stack_3->SetBinError(36,2.962334);
   VbbHcc_both_Z_mass_stack_3->SetBinError(37,2.891311);
   VbbHcc_both_Z_mass_stack_3->SetBinError(38,2.804128);
   VbbHcc_both_Z_mass_stack_3->SetBinError(39,2.786758);
   VbbHcc_both_Z_mass_stack_3->SetBinError(40,2.746554);
   VbbHcc_both_Z_mass_stack_3->SetBinError(41,17.02258);
   VbbHcc_both_Z_mass_stack_3->SetEntries(243289);

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
   VbbHcc_both_Z_mass_stack_4->SetBinContent(3,0.5692723);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(4,7.988681);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(5,13.79073);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(6,29.56539);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(7,66.83518);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(8,81.10736);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(9,134.9613);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(10,157.6738);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(11,114.3014);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(12,62.86026);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(13,57.70133);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(14,42.91518);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(15,44.7686);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(16,33.24197);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(17,33.36409);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(18,33.4804);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(19,31.96488);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(20,36.38034);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(21,26.25874);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(22,35.80083);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(23,26.9103);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(24,22.66585);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(25,25.77027);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(26,24.3793);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(27,18.7001);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(28,24.36082);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(29,14.94794);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(30,25.52365);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(31,20.34217);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(32,24.12972);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(33,20.06086);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(34,26.10682);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(35,19.71477);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(36,14.20524);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(37,14.96234);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(38,20.17286);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(39,14.47614);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(40,12.8648);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(41,641.3398);
   VbbHcc_both_Z_mass_stack_4->SetBinError(3,0.3150505);
   VbbHcc_both_Z_mass_stack_4->SetBinError(4,2.896072);
   VbbHcc_both_Z_mass_stack_4->SetBinError(5,1.585085);
   VbbHcc_both_Z_mass_stack_4->SetBinError(6,4.376787);
   VbbHcc_both_Z_mass_stack_4->SetBinError(7,7.748311);
   VbbHcc_both_Z_mass_stack_4->SetBinError(8,6.932581);
   VbbHcc_both_Z_mass_stack_4->SetBinError(9,8.428691);
   VbbHcc_both_Z_mass_stack_4->SetBinError(10,10.34698);
   VbbHcc_both_Z_mass_stack_4->SetBinError(11,9.661018);
   VbbHcc_both_Z_mass_stack_4->SetBinError(12,5.591347);
   VbbHcc_both_Z_mass_stack_4->SetBinError(13,6.629898);
   VbbHcc_both_Z_mass_stack_4->SetBinError(14,3.78523);
   VbbHcc_both_Z_mass_stack_4->SetBinError(15,6.434957);
   VbbHcc_both_Z_mass_stack_4->SetBinError(16,3.473731);
   VbbHcc_both_Z_mass_stack_4->SetBinError(17,4.374092);
   VbbHcc_both_Z_mass_stack_4->SetBinError(18,3.557377);
   VbbHcc_both_Z_mass_stack_4->SetBinError(19,4.354918);
   VbbHcc_both_Z_mass_stack_4->SetBinError(20,5.768608);
   VbbHcc_both_Z_mass_stack_4->SetBinError(21,2.149215);
   VbbHcc_both_Z_mass_stack_4->SetBinError(22,5.764944);
   VbbHcc_both_Z_mass_stack_4->SetBinError(23,4.245409);
   VbbHcc_both_Z_mass_stack_4->SetBinError(24,3.247425);
   VbbHcc_both_Z_mass_stack_4->SetBinError(25,4.215006);
   VbbHcc_both_Z_mass_stack_4->SetBinError(26,3.300366);
   VbbHcc_both_Z_mass_stack_4->SetBinError(27,1.804943);
   VbbHcc_both_Z_mass_stack_4->SetBinError(28,4.201894);
   VbbHcc_both_Z_mass_stack_4->SetBinError(29,1.533744);
   VbbHcc_both_Z_mass_stack_4->SetBinError(30,4.96332);
   VbbHcc_both_Z_mass_stack_4->SetBinError(31,3.213702);
   VbbHcc_both_Z_mass_stack_4->SetBinError(32,4.952943);
   VbbHcc_both_Z_mass_stack_4->SetBinError(33,4.110168);
   VbbHcc_both_Z_mass_stack_4->SetBinError(34,4.996454);
   VbbHcc_both_Z_mass_stack_4->SetBinError(35,4.100112);
   VbbHcc_both_Z_mass_stack_4->SetBinError(36,1.625609);
   VbbHcc_both_Z_mass_stack_4->SetBinError(37,3.028845);
   VbbHcc_both_Z_mass_stack_4->SetBinError(38,4.104389);
   VbbHcc_both_Z_mass_stack_4->SetBinError(39,1.598266);
   VbbHcc_both_Z_mass_stack_4->SetBinError(40,1.483829);
   VbbHcc_both_Z_mass_stack_4->SetBinError(41,19.59356);
   VbbHcc_both_Z_mass_stack_4->SetEntries(15464);

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
   VbbHcc_both_Z_mass_stack_5->SetBinContent(3,0.0527872);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(4,0.9243789);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(5,10.29305);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(6,5.377784);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(7,8.933987);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(8,7.442617);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(9,7.798516);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(10,4.922209);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(11,6.566503);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(12,5.890075);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(13,5.225521);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(14,5.409345);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(15,4.624213);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(16,3.240079);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(17,6.421948);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(18,3.763211);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(19,3.453697);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(20,2.824544);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(21,2.725867);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(22,5.149181);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(23,2.409231);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(24,3.139082);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(25,7.925569);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(26,1.412569);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(27,1.339054);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(28,2.042183);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(29,2.357707);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(30,1.087455);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(31,2.102434);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(32,1.629653);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(33,3.823094);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(34,1.970012);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(35,2.124847);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(36,0.9026006);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(37,0.6385967);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(38,2.760204);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(39,2.415443);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(40,0.6283531);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(41,60.19196);
   VbbHcc_both_Z_mass_stack_5->SetBinError(3,0.04546694);
   VbbHcc_both_Z_mass_stack_5->SetBinError(4,0.3292065);
   VbbHcc_both_Z_mass_stack_5->SetBinError(5,6.139053);
   VbbHcc_both_Z_mass_stack_5->SetBinError(6,1.246241);
   VbbHcc_both_Z_mass_stack_5->SetBinError(7,2.234478);
   VbbHcc_both_Z_mass_stack_5->SetBinError(8,1.693816);
   VbbHcc_both_Z_mass_stack_5->SetBinError(9,1.921582);
   VbbHcc_both_Z_mass_stack_5->SetBinError(10,0.7219567);
   VbbHcc_both_Z_mass_stack_5->SetBinError(11,1.604914);
   VbbHcc_both_Z_mass_stack_5->SetBinError(12,1.283928);
   VbbHcc_both_Z_mass_stack_5->SetBinError(13,1.573037);
   VbbHcc_both_Z_mass_stack_5->SetBinError(14,1.561297);
   VbbHcc_both_Z_mass_stack_5->SetBinError(15,1.208083);
   VbbHcc_both_Z_mass_stack_5->SetBinError(16,0.6616032);
   VbbHcc_both_Z_mass_stack_5->SetBinError(17,1.887608);
   VbbHcc_both_Z_mass_stack_5->SetBinError(18,1.138207);
   VbbHcc_both_Z_mass_stack_5->SetBinError(19,1.153195);
   VbbHcc_both_Z_mass_stack_5->SetBinError(20,0.608559);
   VbbHcc_both_Z_mass_stack_5->SetBinError(21,0.4980783);
   VbbHcc_both_Z_mass_stack_5->SetBinError(22,1.615522);
   VbbHcc_both_Z_mass_stack_5->SetBinError(23,1.08702);
   VbbHcc_both_Z_mass_stack_5->SetBinError(24,1.157252);
   VbbHcc_both_Z_mass_stack_5->SetBinError(25,6.079326);
   VbbHcc_both_Z_mass_stack_5->SetBinError(26,0.3690986);
   VbbHcc_both_Z_mass_stack_5->SetBinError(27,0.3361481);
   VbbHcc_both_Z_mass_stack_5->SetBinError(28,1.061894);
   VbbHcc_both_Z_mass_stack_5->SetBinError(29,1.078083);
   VbbHcc_both_Z_mass_stack_5->SetBinError(30,0.3243995);
   VbbHcc_both_Z_mass_stack_5->SetBinError(31,0.5342245);
   VbbHcc_both_Z_mass_stack_5->SetBinError(32,0.39714);
   VbbHcc_both_Z_mass_stack_5->SetBinError(33,1.518285);
   VbbHcc_both_Z_mass_stack_5->SetBinError(34,0.5945915);
   VbbHcc_both_Z_mass_stack_5->SetBinError(35,1.077265);
   VbbHcc_both_Z_mass_stack_5->SetBinError(36,0.2859162);
   VbbHcc_both_Z_mass_stack_5->SetBinError(37,0.20376);
   VbbHcc_both_Z_mass_stack_5->SetBinError(38,1.197163);
   VbbHcc_both_Z_mass_stack_5->SetBinError(39,1.090584);
   VbbHcc_both_Z_mass_stack_5->SetBinError(40,0.2521751);
   VbbHcc_both_Z_mass_stack_5->SetBinError(41,3.846417);
   VbbHcc_both_Z_mass_stack_5->SetEntries(3789);

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
   VbbHcc_both_Z_mass_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(18,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(20,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(24,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(27,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(41,0.5374772);
   VbbHcc_both_Z_mass_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinError(14,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinError(18,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinError(20,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinError(21,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinError(24,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinError(27,0.1343693);
   VbbHcc_both_Z_mass_stack_6->SetBinError(41,0.2687386);
   VbbHcc_both_Z_mass_stack_6->SetEntries(11);

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
   VbbHcc_both_Z_mass_stack_7->SetBinContent(7,0.3271759);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,0.4362346);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,0.7634105);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(13,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(14,0.3271759);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(17,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(18,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(20,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(26,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(27,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(28,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(31,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(32,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(38,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,1.744938);
   VbbHcc_both_Z_mass_stack_7->SetBinError(7,0.1888951);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,0.288542);
   VbbHcc_both_Z_mass_stack_7->SetBinError(12,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(13,0.1542322);
   VbbHcc_both_Z_mass_stack_7->SetBinError(14,0.1888951);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.1542322);
   VbbHcc_both_Z_mass_stack_7->SetBinError(17,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(18,0.1542322);
   VbbHcc_both_Z_mass_stack_7->SetBinError(19,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(20,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(26,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(27,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(28,0.1542322);
   VbbHcc_both_Z_mass_stack_7->SetBinError(31,0.1542322);
   VbbHcc_both_Z_mass_stack_7->SetBinError(32,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(38,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.4362346);
   VbbHcc_both_Z_mass_stack_7->SetEntries(52);

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
   VbbHcc_both_Z_mass_stack_8->SetBinContent(7,0.9728286);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(8,1.945657);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(9,3.161693);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(10,6.080179);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(11,2.918486);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(12,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(13,1.216036);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(15,1.459243);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(17,1.459243);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(18,0.7296215);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(19,0.4864143);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(21,0.4864143);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(22,0.7296215);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(23,0.4864143);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(25,0.4864143);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(26,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(28,0.7296215);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(29,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(30,1.216036);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(31,0.4864143);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(32,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(33,0.7296215);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(34,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(35,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(36,1.216036);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(37,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(40,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(41,11.67394);
   VbbHcc_both_Z_mass_stack_8->SetBinError(7,0.4864143);
   VbbHcc_both_Z_mass_stack_8->SetBinError(8,0.6878937);
   VbbHcc_both_Z_mass_stack_8->SetBinError(9,0.8768959);
   VbbHcc_both_Z_mass_stack_8->SetBinError(10,1.216036);
   VbbHcc_both_Z_mass_stack_8->SetBinError(11,0.8424943);
   VbbHcc_both_Z_mass_stack_8->SetBinError(12,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinError(13,0.5438277);
   VbbHcc_both_Z_mass_stack_8->SetBinError(14,0.3439469);
   VbbHcc_both_Z_mass_stack_8->SetBinError(15,0.5957334);
   VbbHcc_both_Z_mass_stack_8->SetBinError(16,0.3439469);
   VbbHcc_both_Z_mass_stack_8->SetBinError(17,0.5957334);
   VbbHcc_both_Z_mass_stack_8->SetBinError(18,0.4212471);
   VbbHcc_both_Z_mass_stack_8->SetBinError(19,0.3439469);
   VbbHcc_both_Z_mass_stack_8->SetBinError(20,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinError(21,0.3439469);
   VbbHcc_both_Z_mass_stack_8->SetBinError(22,0.4212471);
   VbbHcc_both_Z_mass_stack_8->SetBinError(23,0.3439469);
   VbbHcc_both_Z_mass_stack_8->SetBinError(24,0.3439469);
   VbbHcc_both_Z_mass_stack_8->SetBinError(25,0.3439469);
   VbbHcc_both_Z_mass_stack_8->SetBinError(26,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinError(27,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinError(28,0.4212471);
   VbbHcc_both_Z_mass_stack_8->SetBinError(29,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinError(30,0.5438277);
   VbbHcc_both_Z_mass_stack_8->SetBinError(31,0.3439469);
   VbbHcc_both_Z_mass_stack_8->SetBinError(32,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinError(33,0.4212471);
   VbbHcc_both_Z_mass_stack_8->SetBinError(34,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinError(35,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinError(36,0.5438277);
   VbbHcc_both_Z_mass_stack_8->SetBinError(37,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinError(40,0.2432072);
   VbbHcc_both_Z_mass_stack_8->SetBinError(41,1.684989);
   VbbHcc_both_Z_mass_stack_8->SetEntries(175);

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
   VbbHcc_both_Z_mass_stack_9->SetBinContent(4,0.03297482);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(5,0.1428909);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(6,0.33387);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(7,0.6072862);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(8,1.474249);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(9,3.017196);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(10,3.507696);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(11,2.515704);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(12,2.115884);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(13,2.067796);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(14,1.527833);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(15,1.012602);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(16,0.6059123);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(17,0.5482064);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(18,0.4149331);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(19,0.4135592);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(20,0.3778365);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(21,0.3434877);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(22,0.3448616);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(23,0.362723);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(24,0.3572272);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(25,0.3489835);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(26,0.3847062);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(27,0.3737146);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(28,0.3489835);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(29,0.3256263);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(30,0.3668449);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(31,0.3517314);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(32,0.3393658);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(33,0.3531054);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(34,0.3517314);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(35,0.3792104);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(36,0.362723);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(37,0.3434877);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(38,0.3434877);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(39,0.2953994);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(40,0.306391);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(41,12.0468);
   VbbHcc_both_Z_mass_stack_9->SetBinError(4,0.006730957);
   VbbHcc_both_Z_mass_stack_9->SetBinError(5,0.0140116);
   VbbHcc_both_Z_mass_stack_9->SetBinError(6,0.02141777);
   VbbHcc_both_Z_mass_stack_9->SetBinError(7,0.02888566);
   VbbHcc_both_Z_mass_stack_9->SetBinError(8,0.04500606);
   VbbHcc_both_Z_mass_stack_9->SetBinError(9,0.06438539);
   VbbHcc_both_Z_mass_stack_9->SetBinError(10,0.06942191);
   VbbHcc_both_Z_mass_stack_9->SetBinError(11,0.05879161);
   VbbHcc_both_Z_mass_stack_9->SetBinError(12,0.05391772);
   VbbHcc_both_Z_mass_stack_9->SetBinError(13,0.0533015);
   VbbHcc_both_Z_mass_stack_9->SetBinError(14,0.04581668);
   VbbHcc_both_Z_mass_stack_9->SetBinError(15,0.03729966);
   VbbHcc_both_Z_mass_stack_9->SetBinError(16,0.02885297);
   VbbHcc_both_Z_mass_stack_9->SetBinError(17,0.02744465);
   VbbHcc_both_Z_mass_stack_9->SetBinError(18,0.02387672);
   VbbHcc_both_Z_mass_stack_9->SetBinError(19,0.02383716);
   VbbHcc_both_Z_mass_stack_9->SetBinError(20,0.0227844);
   VbbHcc_both_Z_mass_stack_9->SetBinError(21,0.02172407);
   VbbHcc_both_Z_mass_stack_9->SetBinError(22,0.02176747);
   VbbHcc_both_Z_mass_stack_9->SetBinError(23,0.02232406);
   VbbHcc_both_Z_mass_stack_9->SetBinError(24,0.02215429);
   VbbHcc_both_Z_mass_stack_9->SetBinError(25,0.02189717);
   VbbHcc_both_Z_mass_stack_9->SetBinError(26,0.02299059);
   VbbHcc_both_Z_mass_stack_9->SetBinError(27,0.02265978);
   VbbHcc_both_Z_mass_stack_9->SetBinError(28,0.02189717);
   VbbHcc_both_Z_mass_stack_9->SetBinError(29,0.0211517);
   VbbHcc_both_Z_mass_stack_9->SetBinError(30,0.02245054);
   VbbHcc_both_Z_mass_stack_9->SetBinError(31,0.02198321);
   VbbHcc_both_Z_mass_stack_9->SetBinError(32,0.02159333);
   VbbHcc_both_Z_mass_stack_9->SetBinError(33,0.02202611);
   VbbHcc_both_Z_mass_stack_9->SetBinError(34,0.02198321);
   VbbHcc_both_Z_mass_stack_9->SetBinError(35,0.02282578);
   VbbHcc_both_Z_mass_stack_9->SetBinError(36,0.02232406);
   VbbHcc_both_Z_mass_stack_9->SetBinError(37,0.02172407);
   VbbHcc_both_Z_mass_stack_9->SetBinError(38,0.02172407);
   VbbHcc_both_Z_mass_stack_9->SetBinError(39,0.02014607);
   VbbHcc_both_Z_mass_stack_9->SetBinError(40,0.02051746);
   VbbHcc_both_Z_mass_stack_9->SetBinError(41,0.1286535);
   VbbHcc_both_Z_mass_stack_9->SetEntries(28929);

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
   VbbHcc_both_Z_mass_stack_10->SetBinContent(3,0.0003580462);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(4,0.01109943);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(5,0.04833624);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(6,0.1152909);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(7,0.2595835);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(8,0.6326676);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(9,1.246717);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(10,1.497349);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(11,1.140377);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(12,1.008258);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(13,0.9208948);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(14,0.7214631);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(15,0.5009066);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(16,0.3344152);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(17,0.2978944);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(18,0.2366685);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(19,0.2588674);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(20,0.2212726);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(21,0.2040863);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(22,0.2162599);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(23,0.2076668);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(24,0.1851099);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(25,0.2001478);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(26,0.1987156);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(27,0.1808133);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(28,0.1775909);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(29,0.1793812);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(30,0.1761587);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(31,0.1711461);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(32,0.162553);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(33,0.1668495);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(34,0.1521696);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(35,0.1561081);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(36,0.1503794);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(37,0.1507375);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(38,0.1421443);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(39,0.1346254);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(40,0.1410702);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(41,5.067786);
   VbbHcc_both_Z_mass_stack_10->SetBinError(3,0.0003580462);
   VbbHcc_both_Z_mass_stack_10->SetBinError(4,0.001993517);
   VbbHcc_both_Z_mass_stack_10->SetBinError(5,0.004160121);
   VbbHcc_both_Z_mass_stack_10->SetBinError(6,0.006424909);
   VbbHcc_both_Z_mass_stack_10->SetBinError(7,0.009640689);
   VbbHcc_both_Z_mass_stack_10->SetBinError(8,0.01505072);
   VbbHcc_both_Z_mass_stack_10->SetBinError(9,0.02112776);
   VbbHcc_both_Z_mass_stack_10->SetBinError(10,0.02315427);
   VbbHcc_both_Z_mass_stack_10->SetBinError(11,0.02020663);
   VbbHcc_both_Z_mass_stack_10->SetBinError(12,0.01900008);
   VbbHcc_both_Z_mass_stack_10->SetBinError(13,0.01815827);
   VbbHcc_both_Z_mass_stack_10->SetBinError(14,0.01607225);
   VbbHcc_both_Z_mass_stack_10->SetBinError(15,0.01339208);
   VbbHcc_both_Z_mass_stack_10->SetBinError(16,0.0109424);
   VbbHcc_both_Z_mass_stack_10->SetBinError(17,0.01032763);
   VbbHcc_both_Z_mass_stack_10->SetBinError(18,0.009205339);
   VbbHcc_both_Z_mass_stack_10->SetBinError(19,0.009627383);
   VbbHcc_both_Z_mass_stack_10->SetBinError(20,0.008900888);
   VbbHcc_both_Z_mass_stack_10->SetBinError(21,0.008548236);
   VbbHcc_both_Z_mass_stack_10->SetBinError(22,0.008799491);
   VbbHcc_both_Z_mass_stack_10->SetBinError(23,0.008622895);
   VbbHcc_both_Z_mass_stack_10->SetBinError(24,0.008141124);
   VbbHcc_both_Z_mass_stack_10->SetBinError(25,0.008465351);
   VbbHcc_both_Z_mass_stack_10->SetBinError(26,0.008435009);
   VbbHcc_both_Z_mass_stack_10->SetBinError(27,0.008046088);
   VbbHcc_both_Z_mass_stack_10->SetBinError(28,0.007974068);
   VbbHcc_both_Z_mass_stack_10->SetBinError(29,0.008014159);
   VbbHcc_both_Z_mass_stack_10->SetBinError(30,0.007941849);
   VbbHcc_both_Z_mass_stack_10->SetBinError(31,0.00782804);
   VbbHcc_both_Z_mass_stack_10->SetBinError(32,0.007628989);
   VbbHcc_both_Z_mass_stack_10->SetBinError(33,0.007729155);
   VbbHcc_both_Z_mass_stack_10->SetBinError(34,0.007381312);
   VbbHcc_both_Z_mass_stack_10->SetBinError(35,0.007476224);
   VbbHcc_both_Z_mass_stack_10->SetBinError(36,0.007337764);
   VbbHcc_both_Z_mass_stack_10->SetBinError(37,0.007346494);
   VbbHcc_both_Z_mass_stack_10->SetBinError(38,0.00713402);
   VbbHcc_both_Z_mass_stack_10->SetBinError(39,0.006942774);
   VbbHcc_both_Z_mass_stack_10->SetBinError(40,0.007107014);
   VbbHcc_both_Z_mass_stack_10->SetBinError(41,0.04259697);
   VbbHcc_both_Z_mass_stack_10->SetEntries(50200);

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
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.02735007);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.005470015);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.005470015);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.005470015);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.005470015);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(29,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(33,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.02735007);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinError(7,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.008648853);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.003867885);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.003867885);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.003867885);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.003867885);
   VbbHcc_both_Z_mass_stack_11->SetBinError(19,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinError(29,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinError(33,0.002735007);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.008648853);
   VbbHcc_both_Z_mass_stack_11->SetEntries(36);

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
   VbbHcc_both_Z_mass_stack_12->SetBinContent(5,0.0007145317);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(6,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(7,0.0007145317);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(8,0.002143595);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(9,0.008217114);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(10,0.007859849);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(11,0.003215393);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(12,0.002143595);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(14,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(15,0.001071798);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(16,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(17,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(18,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(19,0.001071798);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(22,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(30,0.001429063);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(31,0.0007145317);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(32,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(33,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(34,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(36,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(38,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(39,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(40,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(41,0.0125043);
   VbbHcc_both_Z_mass_stack_12->SetBinError(5,0.0005052502);
   VbbHcc_both_Z_mass_stack_12->SetBinError(6,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(7,0.0005052502);
   VbbHcc_both_Z_mass_stack_12->SetBinError(8,0.000875119);
   VbbHcc_both_Z_mass_stack_12->SetBinError(9,0.001713387);
   VbbHcc_both_Z_mass_stack_12->SetBinError(10,0.001675725);
   VbbHcc_both_Z_mass_stack_12->SetBinError(11,0.001071798);
   VbbHcc_both_Z_mass_stack_12->SetBinError(12,0.000875119);
   VbbHcc_both_Z_mass_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(14,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(15,0.0006188026);
   VbbHcc_both_Z_mass_stack_12->SetBinError(16,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(17,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(18,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(19,0.0006188026);
   VbbHcc_both_Z_mass_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(22,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(30,0.0007145317);
   VbbHcc_both_Z_mass_stack_12->SetBinError(31,0.0005052502);
   VbbHcc_both_Z_mass_stack_12->SetBinError(32,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(33,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(34,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(36,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(38,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(39,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(40,0.0003572658);
   VbbHcc_both_Z_mass_stack_12->SetBinError(41,0.002113613);
   VbbHcc_both_Z_mass_stack_12->SetEntries(137);

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
   
   TH1D *VbbHcc_both_Z_mass__529 = new TH1D("VbbHcc_both_Z_mass__529","",40,0,400);
   VbbHcc_both_Z_mass__529->SetBinContent(3,20);
   VbbHcc_both_Z_mass__529->SetBinContent(4,540);
   VbbHcc_both_Z_mass__529->SetBinContent(5,1996);
   VbbHcc_both_Z_mass__529->SetBinContent(6,3163);
   VbbHcc_both_Z_mass__529->SetBinContent(7,3747);
   VbbHcc_both_Z_mass__529->SetBinContent(15,2630);
   VbbHcc_both_Z_mass__529->SetBinContent(16,2394);
   VbbHcc_both_Z_mass__529->SetBinContent(17,2325);
   VbbHcc_both_Z_mass__529->SetBinContent(18,2102);
   VbbHcc_both_Z_mass__529->SetBinContent(19,2021);
   VbbHcc_both_Z_mass__529->SetBinContent(20,1855);
   VbbHcc_both_Z_mass__529->SetBinContent(21,1755);
   VbbHcc_both_Z_mass__529->SetBinContent(22,1707);
   VbbHcc_both_Z_mass__529->SetBinContent(23,1557);
   VbbHcc_both_Z_mass__529->SetBinContent(24,1447);
   VbbHcc_both_Z_mass__529->SetBinContent(25,1375);
   VbbHcc_both_Z_mass__529->SetBinContent(26,1399);
   VbbHcc_both_Z_mass__529->SetBinContent(27,1351);
   VbbHcc_both_Z_mass__529->SetBinContent(28,1163);
   VbbHcc_both_Z_mass__529->SetBinContent(29,1181);
   VbbHcc_both_Z_mass__529->SetBinContent(30,1163);
   VbbHcc_both_Z_mass__529->SetBinContent(31,1065);
   VbbHcc_both_Z_mass__529->SetBinContent(32,994);
   VbbHcc_both_Z_mass__529->SetBinContent(33,999);
   VbbHcc_both_Z_mass__529->SetBinContent(34,1028);
   VbbHcc_both_Z_mass__529->SetBinContent(35,955);
   VbbHcc_both_Z_mass__529->SetBinContent(36,923);
   VbbHcc_both_Z_mass__529->SetBinContent(37,921);
   VbbHcc_both_Z_mass__529->SetBinContent(38,909);
   VbbHcc_both_Z_mass__529->SetBinContent(39,849);
   VbbHcc_both_Z_mass__529->SetBinContent(40,795);
   VbbHcc_both_Z_mass__529->SetBinContent(41,31521);
   VbbHcc_both_Z_mass__529->SetEntries(102057);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass__529->SetLineColor(ci);
   VbbHcc_both_Z_mass__529->SetLineWidth(2);
   VbbHcc_both_Z_mass__529->SetMarkerStyle(20);
   VbbHcc_both_Z_mass__529->SetMarkerSize(1.2);
   VbbHcc_both_Z_mass__529->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass__529->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__529->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__529->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__529->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__529->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__529->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__529->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__529->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass__529->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__529->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__529->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__529->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__529->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__529->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_mass_fx1385[40] = {
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
   Double_t Graph_from_VbbHcc_both_Z_mass_fy1385[40] = {
   0,
   0,
   8.815317,
   2014.989,
   6713.211,
   7668.29,
   9252.199,
   8560.335,
   7309.299,
   6755.553,
   5694.018,
   6218.213,
   3911.864,
   6697.734,
   4888.499,
   3038.523,
   3154.339,
   5054.355,
   3010.377,
   3674.972,
   2971.185,
   2056.653,
   3947.392,
   4188.398,
   2111.929,
   4234.798,
   1970.948,
   1982.132,
   1583.847,
   2549.703,
   3442.468,
   2690.179,
   1034.601,
   2940.157,
   1506.889,
   1523.14,
   983.6293,
   2017.221,
   1721.853,
   2433.626};
   Double_t Graph_from_VbbHcc_both_Z_mass_fex1385[40] = {
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
   Double_t Graph_from_VbbHcc_both_Z_mass_fey1385[40] = {
   0,
   0,
   5.899871,
   663.2308,
   1765.027,
   1769.237,
   1832.516,
   1165.537,
   1092.755,
   1662.722,
   945.7931,
   1639.589,
   625.2515,
   1683.746,
   903.0264,
   559.0614,
   618.5355,
   1593.768,
   617.6633,
   1498.422,
   670.9658,
   479.4798,
   1545.059,
   1568.495,
   547.8756,
   1590.107,
   483.0059,
   547.4996,
   398.2825,
   1447.442,
   1521.137,
   669.2813,
   285.6322,
   766.7856,
   473.7608,
   474.2667,
   284.3288,
   607.6407,
   543.8379,
   667.3661};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_both_Z_mass_fx1385,Graph_from_VbbHcc_both_Z_mass_fy1385,Graph_from_VbbHcc_both_Z_mass_fex1385,Graph_from_VbbHcc_both_Z_mass_fey1385);
   gre->SetName("Graph_from_VbbHcc_both_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_mass1385 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_mass1385","",100,0,440);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetMinimum(12.19319);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetMaximum(12193.19);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_mass1385->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1385->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_mass1385);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_mass","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__530 = new TH1D("data_mc_ratio__530","",40,0,400);
   data_mc_ratio__530->SetBinContent(3,2.268778);
   data_mc_ratio__530->SetBinContent(4,0.2679915);
   data_mc_ratio__530->SetBinContent(5,0.2973242);
   data_mc_ratio__530->SetBinContent(6,0.4124779);
   data_mc_ratio__530->SetBinContent(7,0.4049848);
   data_mc_ratio__530->SetBinContent(8,0.4637669);
   data_mc_ratio__530->SetBinContent(9,0.5285049);
   data_mc_ratio__530->SetBinContent(10,0.5327469);
   data_mc_ratio__530->SetBinContent(11,0.6167877);
   data_mc_ratio__530->SetBinContent(12,0.5393832);
   data_mc_ratio__530->SetBinContent(13,0.7697098);
   data_mc_ratio__530->SetBinContent(14,0.4268608);
   data_mc_ratio__530->SetBinContent(15,0.5379974);
   data_mc_ratio__530->SetBinContent(16,0.7878828);
   data_mc_ratio__530->SetBinContent(17,0.7370798);
   data_mc_ratio__530->SetBinContent(18,0.415879);
   data_mc_ratio__530->SetBinContent(19,0.6713445);
   data_mc_ratio__530->SetBinContent(20,0.5047657);
   data_mc_ratio__530->SetBinContent(21,0.5906734);
   data_mc_ratio__530->SetBinContent(22,0.8299892);
   data_mc_ratio__530->SetBinContent(23,0.3944376);
   data_mc_ratio__530->SetBinContent(24,0.3454781);
   data_mc_ratio__530->SetBinContent(25,0.6510635);
   data_mc_ratio__530->SetBinContent(26,0.3303581);
   data_mc_ratio__530->SetBinContent(27,0.6854568);
   data_mc_ratio__530->SetBinContent(28,0.5867419);
   data_mc_ratio__530->SetBinContent(29,0.7456528);
   data_mc_ratio__530->SetBinContent(30,0.4561316);
   data_mc_ratio__530->SetBinContent(31,0.309371);
   data_mc_ratio__530->SetBinContent(32,0.3694921);
   data_mc_ratio__530->SetBinContent(33,0.96559);
   data_mc_ratio__530->SetBinContent(34,0.3496412);
   data_mc_ratio__530->SetBinContent(35,0.6337562);
   data_mc_ratio__530->SetBinContent(36,0.605985);
   data_mc_ratio__530->SetBinContent(37,0.9363284);
   data_mc_ratio__530->SetBinContent(38,0.4506199);
   data_mc_ratio__530->SetBinContent(39,0.4930734);
   data_mc_ratio__530->SetBinContent(40,0.3266731);
   data_mc_ratio__530->SetBinContent(41,0.5970288);
   data_mc_ratio__530->SetBinError(3,0.5073143);
   data_mc_ratio__530->SetBinError(4,0.01153252);
   data_mc_ratio__530->SetBinError(5,0.006655029);
   data_mc_ratio__530->SetBinError(6,0.007334172);
   data_mc_ratio__530->SetBinError(7,0.006616021);
   data_mc_ratio__530->SetBinError(8,0.007360452);
   data_mc_ratio__530->SetBinError(9,0.008503283);
   data_mc_ratio__530->SetBinError(10,0.008880349);
   data_mc_ratio__530->SetBinError(11,0.01040779);
   data_mc_ratio__530->SetBinError(12,0.009313564);
   data_mc_ratio__530->SetBinError(13,0.01402722);
   data_mc_ratio__530->SetBinError(14,0.00798324);
   data_mc_ratio__530->SetBinError(15,0.01049065);
   data_mc_ratio__530->SetBinError(16,0.01610273);
   data_mc_ratio__530->SetBinError(17,0.01528632);
   data_mc_ratio__530->SetBinError(18,0.009070905);
   data_mc_ratio__530->SetBinError(19,0.01493352);
   data_mc_ratio__530->SetBinError(20,0.01171974);
   data_mc_ratio__530->SetBinError(21,0.01409967);
   data_mc_ratio__530->SetBinError(22,0.02008888);
   data_mc_ratio__530->SetBinError(23,0.009996179);
   data_mc_ratio__530->SetBinError(24,0.0090821);
   data_mc_ratio__530->SetBinError(25,0.01755788);
   data_mc_ratio__530->SetBinError(26,0.008832348);
   data_mc_ratio__530->SetBinError(27,0.01864887);
   data_mc_ratio__530->SetBinError(28,0.0172051);
   data_mc_ratio__530->SetBinError(29,0.0216976);
   data_mc_ratio__530->SetBinError(30,0.0133752);
   data_mc_ratio__530->SetBinError(31,0.009479924);
   data_mc_ratio__530->SetBinError(32,0.01171958);
   data_mc_ratio__530->SetBinError(33,0.03054991);
   data_mc_ratio__530->SetBinError(34,0.01090501);
   data_mc_ratio__530->SetBinError(35,0.02050787);
   data_mc_ratio__530->SetBinError(36,0.01994624);
   data_mc_ratio__530->SetBinError(37,0.03085307);
   data_mc_ratio__530->SetBinError(38,0.01494612);
   data_mc_ratio__530->SetBinError(39,0.01692223);
   data_mc_ratio__530->SetBinError(40,0.0115859);
   data_mc_ratio__530->SetBinError(41,0.03920701);
   data_mc_ratio__530->SetMinimum(0.4);
   data_mc_ratio__530->SetMaximum(1.6);
   data_mc_ratio__530->SetEntries(144.7265);
   data_mc_ratio__530->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__530->SetLineColor(ci);
   data_mc_ratio__530->SetLineWidth(2);
   data_mc_ratio__530->SetMarkerStyle(20);
   data_mc_ratio__530->SetMarkerSize(1.2);
   data_mc_ratio__530->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__530->GetXaxis()->SetRange(1,30);
   data_mc_ratio__530->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__530->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__530->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__530->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__530->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__530->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__530->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__530->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__530->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__530->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__530->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__530->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__530->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__530->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__530->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__530->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__530->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1386[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1386[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1386[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1386[40] = {
   0,
   0,
   0.6692749,
   0.3291485,
   0.2629184,
   0.2307213,
   0.1980628,
   0.1361556,
   0.149502,
   0.2461267,
   0.1661029,
   0.2636753,
   0.1598347,
   0.2513904,
   0.1847247,
   0.1839912,
   0.1960903,
   0.3153256,
   0.205178,
   0.4077369,
   0.2258243,
   0.2331359,
   0.3914126,
   0.3744856,
   0.2594195,
   0.3754858,
   0.2450627,
   0.2762175,
   0.2514653,
   0.5676905,
   0.4418739,
   0.2487869,
   0.2760796,
   0.2607975,
   0.3143967,
   0.3113743,
   0.2890609,
   0.3012266,
   0.3158445,
   0.2742271};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1386,Graph_from_mc_statistical_error_fy1386,Graph_from_mc_statistical_error_fex1386,Graph_from_mc_statistical_error_fey1386);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1386 = new TH1F("Graph_Graph_from_mc_statistical_error1386","",100,0,440);
   Graph_Graph_from_mc_statistical_error1386->SetMinimum(0.1968701);
   Graph_Graph_from_mc_statistical_error1386->SetMaximum(1.80313);
   Graph_Graph_from_mc_statistical_error1386->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1386->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1386->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1386->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1386->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1386->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1386->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1386->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1386->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1386->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1386->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1386);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_both_16->cd();
   Z_mass_both_16->Modified();
   Z_mass_both_16->cd();
   Z_mass_both_16->SetSelected(Z_mass_both_16);
}
