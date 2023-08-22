void Z_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Tue Aug 22 09:17:26 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9193524,-2.947048,6.314516,15.40861);
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
   st->SetMaximum(9.366959e+12);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(0.001178439);
   st_stack_145->SetMaximum(3.741463e+13);
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
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,129852.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,554575.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,586047.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,512460.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,369422.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,251507.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,202909.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,133422.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,102121.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,101994.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,74509.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,91036.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,47143.88);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,47634.91);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,40260.76);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,32650.51);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,26884.68);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,22375.47);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,14827.86);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,15434.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,10847.52);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,4212.427);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,2474.897);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,2005.182);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,2303.761);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,2472.53);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,407.1886);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(28,155.8766);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,107.2504);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(30,722.7743);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,1366.712);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,4342.007);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,12247.19);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,13745.78);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,14438.92);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,13129.54);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,11075.28);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,31471.37);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,7061.409);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,6211.648);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,22157.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,6296.668);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,22159.77);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,4270.198);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,5110.931);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,4321.38);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,3416.19);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,3444.949);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,3272.013);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,2333.016);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,3065.352);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,2529.234);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,990.2953);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,765.7161);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,698.3237);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,764.0352);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,1556.966);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,312.6985);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(28,59.6407);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,47.0025);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(30,440.4148);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,620.7788);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(121336);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,863.3829);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,4568.942);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,5198.964);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,3832.104);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,2519.604);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,1691.667);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,1176.995);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,880.8405);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,679.9687);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,561.9113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,468.0834);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,387.6095);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,341.6146);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,295.724);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,263.5245);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,225.8274);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,189.0625);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,166.9039);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,126.4421);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,95.61293);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,56.54795);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,32.81054);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,20.33633);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,10.19524);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,5.542284);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,6.017585);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,3.857247);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,3.472616);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.512808);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,1.174649);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,3.447608);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,11.2724);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,25.22628);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,26.70364);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,22.80194);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,18.50681);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,15.20159);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,12.67002);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,10.8938);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,9.538183);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,8.805655);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,7.962231);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,7.210711);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,6.861964);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,6.299914);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,6.061389);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,5.591987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,4.977777);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,4.804915);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,4.168389);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,3.669288);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,2.846196);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,2.058627);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.686978);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.9993115);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.7552601);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.9146051);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.65737);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.6384986);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.3658959);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.2478456);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.590963);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(335691);

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
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,13307.76);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,84186.65);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,91625.92);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,61391.67);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,37305.68);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,23973.25);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,16544.49);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,12175.82);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,9493.879);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,7681.678);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,6387.018);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,5420.463);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,4727.225);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,4192.85);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,3821.138);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,3460.45);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,3045.234);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,2621.234);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,2034.949);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,1383.489);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,781.9372);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,364.2412);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,174.4032);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,98.38371);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,62.49185);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,39.39723);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,25.17336);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,17.84651);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,13.02397);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,9.555803);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,20.71731);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,29.73504);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,74.50807);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,77.41743);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,63.1441);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,49.12718);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,39.36001);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,32.67753);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,27.9995);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,24.70723);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,22.2048);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,20.24533);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,18.64584);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,17.42681);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,16.43872);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,15.71985);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,14.98632);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,14.08448);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,13.0833);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,11.53857);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,9.501398);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,7.121888);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,4.835999);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,3.332708);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,2.48871);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,1.973585);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,1.562593);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,1.252782);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,1.056934);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.8936636);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.7755647);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,1.135495);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(6260583);

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
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,849.5717);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,3110.107);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,2977.371);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,2224.493);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,1458.647);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,939.6844);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,710.4952);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,533.9479);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,426.1909);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,302.615);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,293.0506);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,213.1144);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,215.794);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,170.0935);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,173.3226);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,130.6396);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,126.8844);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,100.7475);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,71.97682);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,39.4625);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,24.4004);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,23.87291);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,7.745097);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,7.032807);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,2.913251);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,5.919427);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,1.39813);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,1.358761);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(29,0.6317264);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(30,0.8052144);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,2.817384);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,11.75638);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,39.03618);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,47.54353);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,43.84287);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,36.44833);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,27.9018);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,24.91749);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,20.67943);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,18.31628);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,15.26243);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,15.94254);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,12.60315);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,13.36504);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,11.2292);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,12.94747);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,10.20951);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,11.55625);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,10.84178);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,7.618276);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,4.810127);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,3.865799);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,4.880724);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,1.356102);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,2.499298);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,0.7990233);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,2.431584);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.521929);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,0.5948144);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(29,0.3628642);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(30,0.4777508);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.846685);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(90522);

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
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,649.4214);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,1724.858);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,1463.081);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,1089.682);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,645.6594);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,488.0835);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,337.0737);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,248.0476);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,175.7225);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,176.251);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,137.9325);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,112.5505);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,91.2243);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,88.96908);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,64.04317);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,75.9665);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,51.51563);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,38.02701);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,46.32311);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,21.71866);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,25.09307);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,8.866088);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,4.149056);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,2.12288);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,1.234519);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(26,3.335521);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(27,0.5446938);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(28,2.900612);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(29,0.5654207);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(30,0.1528792);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.230294);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,15.7365);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,48.21596);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,55.68486);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,52.32494);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,34.35489);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,34.89961);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,28.44646);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,24.68921);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,17.10369);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,21.92964);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,20.19342);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,16.01703);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,13.84551);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,13.99937);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,13.29006);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,15.3831);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,11.24331);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,10.70774);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,13.1059);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,7.587829);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,10.47776);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,2.301595);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,1.581485);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,1.096739);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,0.4620688);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(26,1.584336);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(27,0.2759555);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(28,1.553247);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(29,0.3594324);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(30,0.1528792);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.1712558);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(66273);

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
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,5.89336);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,17.22675);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,15.86674);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,11.18227);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,7.55559);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,2.417789);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,3.173348);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,2.115565);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,2.266677);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(10,1.511118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(11,1.208894);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(12,1.208894);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.755559);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(14,0.9066708);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(15,1.208894);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(16,0.6044472);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(17,0.4533354);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(18,0.3022236);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(19,0.4533354);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(20,0.4533354);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(22,0.1511118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(24,0.1511118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.9436929);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,1.613433);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.548435);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.299913);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,1.068522);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.6044472);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.6924813);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.5654086);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.5852535);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(10,0.4778575);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(11,0.4274087);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(12,0.4274087);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.3378963);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(14,0.3701468);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(15,0.4274087);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(16,0.3022236);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(17,0.2617333);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(18,0.2137044);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(19,0.2617333);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(20,0.2617333);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(22,0.1511118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(24,0.1511118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(510);

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
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,10.54916);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,31.75971);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,22.55725);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,15.48707);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,10.54916);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,5.947931);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,6.284606);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,4.489005);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.468953);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,3.030078);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,2.132277);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,1.122251);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,2.468953);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,1.010026);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.458926);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(16,1.571152);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(17,0.3366753);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(18,0.8978009);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(19,0.7855758);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(20,0.4489005);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(21,0.2244502);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(22,0.1122251);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(29,0.1122251);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.088063);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,1.887919);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,1.591066);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.318347);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,1.088063);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,0.8170112);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,0.8398159);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.7097739);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.5263824);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.5831388);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,0.4891779);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.354887);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.5263824);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.3366753);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.4046334);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(16,0.4199079);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(17,0.1943796);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(18,0.3174206);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(19,0.2969197);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(20,0.2244502);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(21,0.1587103);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(22,0.1122251);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(29,0.1122251);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(1121);

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
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,11.97281);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,44.16638);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,32.72569);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,19.1565);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,14.36737);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,8.514);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,4.789125);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,5.853375);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,4.257);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,3.990937);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,2.1285);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,1.06425);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,1.330312);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,0.7981875);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,0.7981875);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,2.1285);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,1.596375);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.532125);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(19,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(20,0.532125);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(22,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(23,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(27,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.784802);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,3.427976);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.950776);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,2.257615);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.955152);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,1.505077);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.128808);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,1.247944);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,1.06425);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,1.030456);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.7525384);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.532125);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.5949338);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.4608338);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.4608338);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.7525384);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.6517174);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.3762692);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(19,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(20,0.3762692);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(22,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(23,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(27,0.2660625);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(609);

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
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,6.376506);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,29.4685);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,21.78536);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,12.26938);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,7.022262);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,4.606857);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,3.390911);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,2.705309);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,2.132372);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,1.776518);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,1.351968);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,1.214572);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,1.044203);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.9315386);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.8669629);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.7378116);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.6498787);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.5523282);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.417681);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.3050171);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.1868573);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.09342865);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.04259247);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(24,0.01511346);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(25,0.01099161);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(26,0.005495803);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(27,0.004121852);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(28,0.002747902);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(29,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(31,0.005495803);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.09360024);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.201217);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.1730087);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.1298365);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.09822547);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.07955875);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.06825646);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.06096689);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.05412738);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.04940495);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.04309915);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.04085049);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.03787721);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.03577553);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.03451325);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.03183892);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.02988146);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.02754763);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.02395565);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.02047141);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.01602288);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.01132989);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.007649834);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(24,0.004556879);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(25,0.00388612);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(26,0.002747902);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(27,0.002379753);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(28,0.00194306);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(29,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(30,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(31,0.002747902);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(72765);

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
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,1.622928);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,10.08406);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,9.174509);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,5.342243);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,3.153711);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,2.071335);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,1.523989);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,1.242036);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,1.031846);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,0.8042452);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,0.6479821);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.5571117);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.5040333);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.4420376);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.4322712);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.3426747);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.2917193);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.2309976);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.1783437);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.13121);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.0823778);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.03694262);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.01698511);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(24,0.01231421);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.003821651);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.006369418);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(27,0.002123139);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(28,0.004246279);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(29,0.001698511);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(30,0.002547767);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.002972395);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.02625148);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.06543679);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.06241596);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.04762841);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.03659445);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.02965715);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.02543872);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.02296526);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.02093204);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.01847985);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.01658768);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.01538068);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.01462965);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.01370042);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.01354822);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.01206272);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.01112979);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.009903938);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.008702281);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.007464277);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.005914382);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.003960665);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.002685582);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(24,0.002286691);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.001273884);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.001644577);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(27,0.0009494968);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(28,0.001342791);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(29,0.0008492557);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(30,0.001040122);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.00112346);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(94157);

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
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(1,63573);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(2,180445);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(3,156334);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(4,115164);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(5,75131);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(6,50687);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(7,36184);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(8,27568);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(9,21795);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(10,18030);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(11,14941);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(12,12864);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(13,10757);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(14,9133);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(15,8027);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(16,6917);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(17,5775);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(18,4695);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(19,3641);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(20,2677);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(21,1721);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(22,1032);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(23,663);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(24,461);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(25,368);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(26,220);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(27,174);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(28,110);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(29,92);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(30,61);
   VbbHcc_algo_Z_dR_Bj0__397->SetBinContent(31,127);
   VbbHcc_algo_Z_dR_Bj0__397->SetEntries(829396);

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
   145559.2,
   648298.8,
   687415.6,
   581062.3,
   411395.1,
   278624.2,
   221697.4,
   147277.3,
   112909.7,
   110727.8,
   81802.98,
   97175.53,
   52525.86,
   52386.66,
   44587.57,
   36548.78,
   30300.71,
   25304.91,
   17109.65,
   16976.46,
   11736.26,
   4642.877,
   2681.856,
   2123.096,
   2375.958,
   2527.212,
   438.4343,
   181.4621,
   123.0996,
   734.4668};
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
   4342.168,
   12247.6,
   13746.22,
   14439.23,
   13129.74,
   11075.45,
   31471.41,
   7061.546,
   6211.755,
   22157.59,
   6296.758,
   22159.79,
   4270.282,
   5110.993,
   4321.453,
   3416.278,
   3445.019,
   3272.078,
   2333.097,
   3065.382,
   2529.271,
   990.324,
   765.7281,
   698.3342,
   764.0387,
   1556.969,
   312.7023,
   59.67666,
   47.01532,
   440.4159};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1289,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1289);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetMinimum(68.47586);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01289->SetMaximum(771270.4);
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
   data_mc_ratio__398->SetBinContent(1,0.4367501);
   data_mc_ratio__398->SetBinContent(2,0.2783362);
   data_mc_ratio__398->SetBinContent(3,0.2274228);
   data_mc_ratio__398->SetBinContent(4,0.1981956);
   data_mc_ratio__398->SetBinContent(5,0.1826249);
   data_mc_ratio__398->SetBinContent(6,0.1819189);
   data_mc_ratio__398->SetBinContent(7,0.1632134);
   data_mc_ratio__398->SetBinContent(8,0.1871842);
   data_mc_ratio__398->SetBinContent(9,0.1930304);
   data_mc_ratio__398->SetBinContent(10,0.1628318);
   data_mc_ratio__398->SetBinContent(11,0.1826462);
   data_mc_ratio__398->SetBinContent(12,0.132379);
   data_mc_ratio__398->SetBinContent(13,0.2047944);
   data_mc_ratio__398->SetBinContent(14,0.1743383);
   data_mc_ratio__398->SetBinContent(15,0.1800278);
   data_mc_ratio__398->SetBinContent(16,0.1892539);
   data_mc_ratio__398->SetBinContent(17,0.1905896);
   data_mc_ratio__398->SetBinContent(18,0.1855371);
   data_mc_ratio__398->SetBinContent(19,0.2128039);
   data_mc_ratio__398->SetBinContent(20,0.157689);
   data_mc_ratio__398->SetBinContent(21,0.1466396);
   data_mc_ratio__398->SetBinContent(22,0.2222759);
   data_mc_ratio__398->SetBinContent(23,0.2472168);
   data_mc_ratio__398->SetBinContent(24,0.2171358);
   data_mc_ratio__398->SetBinContent(25,0.1548849);
   data_mc_ratio__398->SetBinContent(26,0.08705247);
   data_mc_ratio__398->SetBinContent(27,0.3968668);
   data_mc_ratio__398->SetBinContent(28,0.6061871);
   data_mc_ratio__398->SetBinContent(29,0.7473622);
   data_mc_ratio__398->SetBinContent(30,0.08305345);
   data_mc_ratio__398->SetBinContent(31,0.09110911);
   data_mc_ratio__398->SetBinError(1,0.001732194);
   data_mc_ratio__398->SetBinError(2,0.0006552352);
   data_mc_ratio__398->SetBinError(3,0.0005751847);
   data_mc_ratio__398->SetBinError(4,0.0005840307);
   data_mc_ratio__398->SetBinError(5,0.0006662703);
   data_mc_ratio__398->SetBinError(6,0.0008080336);
   data_mc_ratio__398->SetBinError(7,0.0008580204);
   data_mc_ratio__398->SetBinError(8,0.001127371);
   data_mc_ratio__398->SetBinError(9,0.001307517);
   data_mc_ratio__398->SetBinError(10,0.001212666);
   data_mc_ratio__398->SetBinError(11,0.001494241);
   data_mc_ratio__398->SetBinError(12,0.001167162);
   data_mc_ratio__398->SetBinError(13,0.001974569);
   data_mc_ratio__398->SetBinError(14,0.001824257);
   data_mc_ratio__398->SetBinError(15,0.002009384);
   data_mc_ratio__398->SetBinError(16,0.002275548);
   data_mc_ratio__398->SetBinError(17,0.002507975);
   data_mc_ratio__398->SetBinError(18,0.002707778);
   data_mc_ratio__398->SetBinError(19,0.003526705);
   data_mc_ratio__398->SetBinError(20,0.003047734);
   data_mc_ratio__398->SetBinError(21,0.003534766);
   data_mc_ratio__398->SetBinError(22,0.006919148);
   data_mc_ratio__398->SetBinError(23,0.009601105);
   data_mc_ratio__398->SetBinError(24,0.01011302);
   data_mc_ratio__398->SetBinError(25,0.008073933);
   data_mc_ratio__398->SetBinError(26,0.005869076);
   data_mc_ratio__398->SetBinError(27,0.03008639);
   data_mc_ratio__398->SetBinError(28,0.05779768);
   data_mc_ratio__398->SetBinError(29,0.0779179);
   data_mc_ratio__398->SetBinError(30,0.0106339);
   data_mc_ratio__398->SetBinError(31,0.04137256);
   data_mc_ratio__398->SetMinimum(0.4);
   data_mc_ratio__398->SetMaximum(1.6);
   data_mc_ratio__398->SetEntries(199.7294);
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
   0.02983094,
   0.01889191,
   0.01999695,
   0.02484972,
   0.03191517,
   0.0397505,
   0.1419566,
   0.04794727,
   0.05501526,
   0.2001087,
   0.07697468,
   0.2280388,
   0.08129866,
   0.09756286,
   0.09692058,
   0.09347173,
   0.1136943,
   0.1293061,
   0.1363615,
   0.1805666,
   0.2155091,
   0.2132996,
   0.2855216,
   0.3289226,
   0.3215708,
   0.6160819,
   0.713225,
   0.3288657,
   0.3819291,
   0.5996403};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1290,Graph_from_mc_statistical_error_fy1290,Graph_from_mc_statistical_error_fex1290,Graph_from_mc_statistical_error_fey1290);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1290 = new TH1F("Graph_Graph_from_mc_statistical_error1290","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1290->SetMinimum(0.14413);
   Graph_Graph_from_mc_statistical_error1290->SetMaximum(1.85587);
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
