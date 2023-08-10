void Z_dR_Bj1_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_18/Z_dR_Bj1_both_18
//=========  (Thu Aug 10 12:25:05 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_18 = new TCanvas("Z_dR_Bj1_both_18", "Z_dR_Bj1_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_18->SetHighLightColor(2);
   Z_dR_Bj1_both_18->Range(0,0,1,1);
   Z_dR_Bj1_both_18->SetFillColor(0);
   Z_dR_Bj1_both_18->SetFillStyle(4000);
   Z_dR_Bj1_both_18->SetBorderMode(0);
   Z_dR_Bj1_both_18->SetBorderSize(2);
   Z_dR_Bj1_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-129.3771,6.314516,129257.7);
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
   st->SetMaximum(110780);
   
   TH1F *st_stack_247 = new TH1F("st_stack_247","",30,0,6);
   st_stack_247->SetMinimum(0.01);
   st_stack_247->SetMaximum(116319);
   st_stack_247->SetDirectory(0);
   st_stack_247->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_247->SetLineColor(ci);
   st_stack_247->GetXaxis()->SetRange(1,30);
   st_stack_247->GetXaxis()->SetLabelFont(42);
   st_stack_247->GetXaxis()->SetLabelSize(0.035);
   st_stack_247->GetXaxis()->SetTitleSize(0.035);
   st_stack_247->GetXaxis()->SetTitleFont(42);
   st_stack_247->GetYaxis()->SetTitle("Events/0.2");
   st_stack_247->GetYaxis()->SetLabelFont(42);
   st_stack_247->GetYaxis()->SetLabelSize(0.05);
   st_stack_247->GetYaxis()->SetTitleSize(0.057);
   st_stack_247->GetYaxis()->SetTitleOffset(1.2);
   st_stack_247->GetYaxis()->SetTitleFont(42);
   st_stack_247->GetZaxis()->SetLabelFont(42);
   st_stack_247->GetZaxis()->SetLabelSize(0.035);
   st_stack_247->GetZaxis()->SetTitleSize(0.035);
   st_stack_247->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_247);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,8274.28);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,35575.37);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,32706.48);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,25535.17);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,13032.81);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,13665.6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,10080.05);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,10474.4);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,10225.46);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,7600.782);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,9676.236);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,5990.275);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,5585.843);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,6996.25);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,5253.185);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,3664.824);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,2749.202);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,3079.776);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,1827.924);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,1404.97);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,859.4358);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,1665.09);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,1927.28);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,575.305);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,577.2171);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,334.9409);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,302.661);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,101.1717);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,68.01448);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,88.38618);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,40.16295);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,967.6874);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,2821.431);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,2434.557);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,2290.256);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,1312.583);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,2621.086);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,1287.562);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,1517.892);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,1429.756);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,1263.696);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,2098.29);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,1083.226);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,1016.916);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,1258.53);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,1072.834);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,855.0347);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,672.2032);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,846.8198);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,414.6061);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,403.0486);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,384.1058);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,651.2737);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,657.4484);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,120.3122);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,376.8965);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,89.44227);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,87.52814);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,47.79505);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,35.49753);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,46.67738);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,32.22637);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(10527);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,44.34511);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,163.1473);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,186.6033);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,155.4314);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,133.2324);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,105.91);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,83.18891);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,68.99983);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,65.28145);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,55.62614);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,43.68589);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,44.1055);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,32.99293);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,33.73798);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,26.06514);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,24.71612);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,20.18267);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,18.94029);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,17.30054);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,14.32147);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,11.2255);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,8.856264);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,9.62738);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,7.159895);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,4.738158);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,3.560727);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,1.826593);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,2.257062);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,0.7389387);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(30,0.4987739);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,0.3943803);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,2.839786);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,5.213869);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,5.531312);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,5.074189);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,4.594284);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,4.212962);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,3.731343);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,3.398437);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,3.244656);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,3.099252);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,2.638264);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,2.718989);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,2.305814);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,2.393949);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,2.042858);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,2.026244);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,1.786539);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,1.751757);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,1.707716);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,1.637674);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,1.389777);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,1.248391);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,1.286968);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,1.154657);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.9211602);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.816061);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.5774953);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.6895676);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,0.2067599);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(30,0.2929509);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,0.1503859);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(15109);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,644.9495);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,3050.92);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,3815.431);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,3366.248);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,2748.527);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,2179.49);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,1724.929);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,1413.051);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,1177.278);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,994.8968);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,882.3017);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,796.1512);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,710.1365);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,630.0797);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,561.0239);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,500.8332);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,411.0114);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,349.7408);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,298.8417);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,259.2131);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,208.8355);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,170.209);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,130.0582);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,103.2718);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,75.94964);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,53.53083);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,34.74468);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,18.28759);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,14.01428);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,7.586013);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,12.29258);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,6.835976);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,14.85134);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,16.62591);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,15.61152);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,14.09868);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,12.55224);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,11.16113);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,10.10203);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,9.218394);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,8.476371);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,7.98121);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,7.586955);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,7.16508);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,6.746768);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,6.36778);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,6.015142);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,5.444694);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,5.023675);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,4.647562);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,4.329094);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,3.879727);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,3.506357);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,3.062533);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,2.726992);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,2.338293);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,1.966559);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,1.584661);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,1.144747);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,1.000168);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,0.7414904);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,0.9401707);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(383737);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,147.1406);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,509.991);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,536.2672);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,384.8373);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,285.1942);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,232.7256);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,155.9341);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,136.4285);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,127.0188);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,113.1444);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,105.5909);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,86.3841);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,83.4514);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,82.47994);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,55.76675);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,61.64313);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,53.42133);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,39.14457);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,39.64816);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,41.31);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,27.45724);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,21.57154);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,13.12543);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,11.27059);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,11.48573);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,5.718306);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,5.45833);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,2.295205);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,3.007346);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,0.2777189);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,1.914213);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,4.83449);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,14.50683);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,14.8855);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,14.03545);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,12.87406);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,13.31216);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,6.89264);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,7.475367);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,8.247682);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,8.114837);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,8.890413);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,7.498604);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,5.045041);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,7.468876);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,4.019086);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,7.998179);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,5.671634);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,5.045016);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,5.21462);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,6.55246);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,3.03367);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,2.657479);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,1.998847);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,1.832351);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,1.789056);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,1.302644);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,1.11545);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,0.4830699);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,1.081193);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,0.1603411);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,0.7995002);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(19219);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,25.34054);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,53.42135);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,45.35925);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,45.35765);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,43.75863);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,20.81447);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,11.86953);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,12.97567);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,13.61114);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,9.627999);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,7.780196);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,10.44791);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,5.396703);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,9.593458);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,3.435981);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,6.193935);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,3.559863);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,2.128192);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,4.801893);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,1.940478);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,2.265272);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,1.433053);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,0.7927806);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,0.9730857);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,0.4168408);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,0.7750584);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,0.7401597);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,0.4249127);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,1.224052);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,3.464348);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,5.020108);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,5.33036);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,11.84138);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,7.197592);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,3.472769);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,2.469652);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,3.222649);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,3.241721);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,2.422187);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,1.260949);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,2.940225);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,1.060261);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,3.155106);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,0.7630001);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,2.247904);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,0.9321044);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,0.5529816);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,2.182969);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,0.6375721);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,0.6336974);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,0.5853119);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,0.3636764);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,0.5405463);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,0.2199553);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,0.4415928);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,0.4410853);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,0.290654);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,0.5693345);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(2591);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(3,0.9040853);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(6,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(10,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(3,0.6392849);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(6,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(10,0.4520427);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,3.187792);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,1.770996);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(20,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(21,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,1.062597);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.7920133);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.5009132);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(20,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(21,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,3.073558);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,10.05892);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,11.17657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,8.941259);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,5.308873);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,2.235315);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,2.514729);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,2.794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,2.794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,2.235315);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(11,2.235315);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,1.117657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,1.117657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(17,1.397072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(18,0.8382431);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(20,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(21,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(22,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(25,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,0.9267126);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.676486);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.767172);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.580606);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,1.217939);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,0.7903031);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.8382431);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.8835858);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.8835858);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.7903031);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(11,0.7903031);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.5588287);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(17,0.6247895);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(18,0.4839599);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.4839599);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(20,0.3951516);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(21,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(22,0.3951516);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(25,0.2794144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,2.605788);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,11.39689);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,11.20946);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,7.577356);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,5.275577);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,3.602387);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,2.928082);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,2.331494);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,2.139489);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,2.157775);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,1.906339);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,1.837766);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,1.561187);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,1.435469);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,1.209177);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,0.9508839);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.7108772);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.5028713);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.4297264);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.3428668);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.2720077);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.2354352);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.1874338);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.2102916);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.1302894);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.0960027);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.05485869);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.0320009);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.01371467);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.07717677);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.1614025);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.1600698);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.1316061);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.1098126);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.09074282);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.08181044);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.07300192);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.06993138);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.0702296);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.06601113);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.06481301);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.05973715);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.05728145);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.05257291);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.04662092);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.04031015);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.03390358);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.03134102);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.02799496);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.0249349);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.02319812);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.02069861);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.02192442);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.01725725);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.01481354);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.01119798);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.008552601);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.005598991);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,0.9854075);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,4.541002);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,5.495335);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,4.238029);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,2.842682);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,1.977388);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,1.427616);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,1.150339);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,0.9919809);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,0.8533426);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,0.8216709);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,0.7362171);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,0.6388118);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.5922006);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.4888195);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.3824505);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.3519739);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.2665202);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.249788);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.2061647);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.1738954);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.1410286);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.1183206);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.09740535);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.05975788);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.05617241);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.02390315);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.008366104);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.004780631);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.0005975788);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.0005975788);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.02426641);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.05209229);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.05730529);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.05032451);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.04121561);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.03437507);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.0292081);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.02621866);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.02434721);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.02258184);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.02215882);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.02097493);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.01953818);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.01881187);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01709117);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.01511768);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.01450283);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.0126201);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.01221753);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.01109953);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.01019393);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.00918018);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.008408679);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.007629376);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.005975788);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.005793742);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.00377942);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.002235935);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.001690208);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.0005975788);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.0005975788);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.0236501);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.049928);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.03153347);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.02102232);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.005255579);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.007883368);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.007883368);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(8,0.01313895);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(9,0.002627789);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(10,0.002627789);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(11,0.007883368);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(17,0.002627789);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(20,0.002627789);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(27,0.002627789);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.007883368);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.01145427);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.00910293);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.007432511);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.003716255);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.004551465);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.004551465);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(8,0.005875916);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(9,0.002627789);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(10,0.002627789);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(11,0.004551465);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(17,0.002627789);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(20,0.002627789);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(27,0.002627789);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(69);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.003895538);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.02067632);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.02487151);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.01378421);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.008090734);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.002397254);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.003296225);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.004195195);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.002696911);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.002097598);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.001498284);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.002097598);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.001198627);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.001498284);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.001080428);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.002489136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.002730003);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.002032371);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.001557062);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.0008475574);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.0009938492);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.001121213);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.0007928174);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.000670053);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.0005190208);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.0007928174);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.0005190208);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.000670053);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1__678 = new TH1D("VbbHcc_both_Z_dR_Bj1__678","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(1,12507);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(2,49851);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(3,46808);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(4,35630);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(5,28447);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(6,22379);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(7,18270);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(8,15204);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(9,12976);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(10,11165);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(11,9972);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(12,8977);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(13,8172);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(14,7267);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(15,6391);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(16,5668);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(17,4855);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(18,4128);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(19,3525);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(20,2932);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(21,2496);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(22,2068);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(23,1700);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(24,1394);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(25,1001);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(26,731);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(27,516);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(28,311);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(29,167);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(30,92);
   VbbHcc_both_Z_dR_Bj1__678->SetBinContent(31,167);
   VbbHcc_both_Z_dR_Bj1__678->SetEntries(325796);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__678->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__678->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__678->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__678->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__678->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__678->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__678->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1493[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1493[30] = {
   9144.165,
   39382.1,
   37320.75,
   29509,
   16258.38,
   16214.23,
   12062.86,
   12112.5,
   11615.29,
   8779.781,
   10720.57,
   6931.336,
   6421.14,
   7755.566,
   5902.295,
   4260.942,
   3239.84,
   3491.338,
   2190.036,
   1723.221,
   1110.299,
   1868.096,
   2081.47,
   698.2883,
   670.2769,
   398.678,
   345.5121,
   124.4768,
   87.01759,
   96.75157};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1493[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1493[30] = {
   967.7347,
   2821.517,
   2434.673,
   2290.389,
   1312.751,
   2621.156,
   1287.637,
   1517.951,
   1429.817,
   1263.757,
   2098.326,
   1083.286,
   1016.957,
   1258.576,
   1072.863,
   855.0988,
   672.2525,
   846.8519,
   414.6744,
   403.1292,
   384.1407,
   651.2902,
   657.46,
   120.3638,
   376.9093,
   89.47818,
   87.55261,
   47.81705,
   35.53323,
   46.68447};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1493);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetMinimum(45.06039);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetMaximum(46418.97);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__679 = new TH1D("data_mc_ratio__679","",30,0,6);
   data_mc_ratio__679->SetBinContent(1,1.367758);
   data_mc_ratio__679->SetBinContent(2,1.265829);
   data_mc_ratio__679->SetBinContent(3,1.254208);
   data_mc_ratio__679->SetBinContent(4,1.207428);
   data_mc_ratio__679->SetBinContent(5,1.749683);
   data_mc_ratio__679->SetBinContent(6,1.380207);
   data_mc_ratio__679->SetBinContent(7,1.514567);
   data_mc_ratio__679->SetBinContent(8,1.255232);
   data_mc_ratio__679->SetBinContent(9,1.117148);
   data_mc_ratio__679->SetBinContent(10,1.271672);
   data_mc_ratio__679->SetBinContent(11,0.9301746);
   data_mc_ratio__679->SetBinContent(12,1.295133);
   data_mc_ratio__679->SetBinContent(13,1.272671);
   data_mc_ratio__679->SetBinContent(14,0.9370045);
   data_mc_ratio__679->SetBinContent(15,1.082799);
   data_mc_ratio__679->SetBinContent(16,1.330222);
   data_mc_ratio__679->SetBinContent(17,1.498531);
   data_mc_ratio__679->SetBinContent(18,1.182355);
   data_mc_ratio__679->SetBinContent(19,1.609563);
   data_mc_ratio__679->SetBinContent(20,1.701465);
   data_mc_ratio__679->SetBinContent(21,2.248043);
   data_mc_ratio__679->SetBinContent(22,1.10701);
   data_mc_ratio__679->SetBinContent(23,0.8167307);
   data_mc_ratio__679->SetBinContent(24,1.99631);
   data_mc_ratio__679->SetBinContent(25,1.493413);
   data_mc_ratio__679->SetBinContent(26,1.83356);
   data_mc_ratio__679->SetBinContent(27,1.493435);
   data_mc_ratio__679->SetBinContent(28,2.498457);
   data_mc_ratio__679->SetBinContent(29,1.919152);
   data_mc_ratio__679->SetBinContent(30,0.950889);
   data_mc_ratio__679->SetBinContent(31,3.049281);
   data_mc_ratio__679->SetBinError(1,0.01223017);
   data_mc_ratio__679->SetBinError(2,0.005669412);
   data_mc_ratio__679->SetBinError(3,0.005797085);
   data_mc_ratio__679->SetBinError(4,0.006396662);
   data_mc_ratio__679->SetBinError(5,0.01037388);
   data_mc_ratio__679->SetBinError(6,0.009226222);
   data_mc_ratio__679->SetBinError(7,0.01120519);
   data_mc_ratio__679->SetBinError(8,0.01017994);
   data_mc_ratio__679->SetBinError(9,0.009807097);
   data_mc_ratio__679->SetBinError(10,0.01203499);
   data_mc_ratio__679->SetBinError(11,0.009314796);
   data_mc_ratio__679->SetBinError(12,0.01366938);
   data_mc_ratio__679->SetBinError(13,0.01407836);
   data_mc_ratio__679->SetBinError(14,0.01099168);
   data_mc_ratio__679->SetBinError(15,0.01354452);
   data_mc_ratio__679->SetBinError(16,0.01766889);
   data_mc_ratio__679->SetBinError(17,0.02150657);
   data_mc_ratio__679->SetBinError(18,0.01840255);
   data_mc_ratio__679->SetBinError(19,0.02710993);
   data_mc_ratio__679->SetBinError(20,0.03142252);
   data_mc_ratio__679->SetBinError(21,0.04499687);
   data_mc_ratio__679->SetBinError(22,0.02434312);
   data_mc_ratio__679->SetBinError(23,0.01980863);
   data_mc_ratio__679->SetBinError(24,0.05346833);
   data_mc_ratio__679->SetBinError(25,0.04720226);
   data_mc_ratio__679->SetBinError(26,0.06781666);
   data_mc_ratio__679->SetBinError(27,0.06574482);
   data_mc_ratio__679->SetBinError(28,0.1416745);
   data_mc_ratio__679->SetBinError(29,0.1485085);
   data_mc_ratio__679->SetBinError(30,0.09913703);
   data_mc_ratio__679->SetBinError(31,1.811051);
   data_mc_ratio__679->SetMinimum(0.4);
   data_mc_ratio__679->SetMaximum(1.6);
   data_mc_ratio__679->SetEntries(388.0997);
   data_mc_ratio__679->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__679->SetLineColor(ci);
   data_mc_ratio__679->SetLineWidth(2);
   data_mc_ratio__679->SetMarkerStyle(20);
   data_mc_ratio__679->SetMarkerSize(1.2);
   data_mc_ratio__679->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__679->GetXaxis()->SetRange(1,30);
   data_mc_ratio__679->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__679->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__679->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__679->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__679->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__679->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__679->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__679->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__679->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__679->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__679->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__679->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__679->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__679->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__679->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__679->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__679->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1494[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1494[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1494[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1494[30] = {
   0.1058308,
   0.07164466,
   0.06523643,
   0.07761662,
   0.08074304,
   0.1616577,
   0.106744,
   0.1253211,
   0.1230979,
   0.1439395,
   0.195729,
   0.1562882,
   0.1583764,
   0.1622804,
   0.1817704,
   0.2006831,
   0.2074956,
   0.242558,
   0.189346,
   0.2339394,
   0.3459795,
   0.3486386,
   0.3158634,
   0.1723697,
   0.5623187,
   0.2244372,
   0.2533995,
   0.3841441,
   0.4083454,
   0.4825189};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1494,Graph_from_mc_statistical_error_fy1494,Graph_from_mc_statistical_error_fex1494,Graph_from_mc_statistical_error_fey1494);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1494 = new TH1F("Graph_Graph_from_mc_statistical_error1494","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1494->SetMinimum(0.3252175);
   Graph_Graph_from_mc_statistical_error1494->SetMaximum(1.674782);
   Graph_Graph_from_mc_statistical_error1494->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1494->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1494->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1494->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1494->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1494);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_18->cd();
   Z_dR_Bj1_both_18->Modified();
   Z_dR_Bj1_both_18->cd();
   Z_dR_Bj1_both_18->SetSelected(Z_dR_Bj1_both_18);
}
