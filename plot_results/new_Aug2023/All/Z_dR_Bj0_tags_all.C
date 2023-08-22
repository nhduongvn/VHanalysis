void Z_dR_Bj0_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_all/Z_dR_Bj0_tags_all
//=========  (Tue Aug 22 09:20:39 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_all = new TCanvas("Z_dR_Bj0_tags_all", "Z_dR_Bj0_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_all->SetHighLightColor(2);
   Z_dR_Bj0_tags_all->Range(0,0,1,1);
   Z_dR_Bj0_tags_all->SetFillColor(0);
   Z_dR_Bj0_tags_all->SetFillStyle(4000);
   Z_dR_Bj0_tags_all->SetBorderMode(0);
   Z_dR_Bj0_tags_all->SetBorderSize(2);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-221.3862,6.314516,221464.8);
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
   st->SetMinimum(0.3);
   st->SetMaximum(189805.9);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",30,0,6);
   st_stack_52->SetMinimum(0.3);
   st_stack_52->SetMaximum(199296.2);
   st_stack_52->SetDirectory(0);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->GetXaxis()->SetRange(1,30);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetLabelSize(0.035);
   st_stack_52->GetXaxis()->SetTitleSize(0.035);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Events/0.2");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetLabelSize(0.05);
   st_stack_52->GetYaxis()->SetTitleSize(0.057);
   st_stack_52->GetYaxis()->SetTitleOffset(1.2);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetLabelSize(0.035);
   st_stack_52->GetZaxis()->SetTitleSize(0.035);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(1,16217.09);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(2,78806.97);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(3,76066.63);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(4,75558.48);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(5,71051.97);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(6,44564.02);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(7,28519.36);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(8,26084.05);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(9,22592.89);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(10,25483.59);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(11,21164.43);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(12,19330.57);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(13,16779.22);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(14,14300.7);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(15,10611.15);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(16,9913.026);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(17,8662.463);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(18,6450.46);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(19,7955.49);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(20,6030.914);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(21,3770.726);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(22,2954.816);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(23,2470.047);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(24,2512.409);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(25,835.3051);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(26,2056.946);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(27,706.3495);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(28,968.9548);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(29,156.1633);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(30,83.27158);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(31,112.5535);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(1,1276.671);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(2,4102.969);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(3,4657.271);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(4,17424.58);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(5,17552.78);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(6,3512.389);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(7,2759.203);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(8,2553.572);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(9,1981.389);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(10,2626.415);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(11,2420.928);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(12,2332.944);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(13,1795.729);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(14,2057.387);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(15,1229.982);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(16,1298.181);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(17,1287.297);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(18,1658.282);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(19,1306.47);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(20,1074.445);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(21,804.054);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(22,735.5823);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(23,615.358);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(24,735.0993);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(25,127.7794);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(26,676.7646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(27,378.0642);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(28,527.8674);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(29,61.77509);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(30,44.5992);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(31,56.12585);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetEntries(27568);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(1,66.69919);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(2,297.046);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(3,381.4959);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(4,340.6015);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(5,278.627);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(6,237.3164);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(7,195.1767);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(8,151.0947);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(9,142.1907);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(10,128.8433);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(11,114.119);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(12,108.0127);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(13,91.63431);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(14,80.49825);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(15,75.3271);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(16,63.16222);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(17,46.73547);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(18,37.11142);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(19,33.76673);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(20,28.5169);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(21,19.9418);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(22,16.89006);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(23,15.28227);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(24,11.23572);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(25,7.255333);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(26,4.938963);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(27,5.197171);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(28,3.828078);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(29,1.550489);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(30,0.8763351);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(31,0.6404554);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(1,3.33821);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(2,6.790724);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(3,7.761631);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(4,7.379887);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(5,6.643689);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(6,6.172608);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(7,5.619473);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(8,4.763301);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(9,4.803902);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(10,4.526281);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(11,4.233431);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(12,4.279505);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(13,3.875307);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(14,3.628174);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(15,3.502081);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(16,3.191045);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(17,2.670389);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(18,2.378891);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(19,2.33226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(20,2.142722);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(21,1.741132);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(22,1.575825);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(23,1.553965);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(24,1.395157);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(25,1.067431);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(26,0.8758424);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(27,0.9255969);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(28,0.8172435);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(29,0.4407114);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(30,0.3218112);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(31,0.1779894);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetEntries(34548);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(1,870.6857);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(2,5125.326);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(3,7207.269);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(4,6954.524);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(5,5801.905);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(6,4683.973);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(7,3827.163);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(8,3235.103);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(9,2792.417);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(10,2493.952);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(11,2251.879);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(12,2038.267);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(13,1838.598);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(14,1616.714);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(15,1375.696);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(16,1165.63);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(17,960.3368);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(18,800.1888);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(19,650.2069);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(20,507.2039);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(21,411.3147);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(22,306.7264);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(23,241.7173);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(24,177.9458);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(25,128.9458);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(26,96.84078);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(27,63.29384);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(28,43.62547);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(29,26.14043);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(30,16.8797);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinContent(31,31.63616);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(1,7.582622);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(2,18.36591);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(3,21.83398);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(4,21.47842);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(5,19.62407);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(6,17.62397);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(7,15.94189);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(8,14.64383);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(9,13.60293);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(10,12.87084);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(11,12.22992);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(12,11.6433);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(13,11.06792);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(14,10.37126);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(15,9.563832);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(16,8.803282);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(17,7.989745);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(18,7.289138);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(19,6.567898);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(20,5.78566);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(21,5.2101);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(22,4.48563);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(23,3.991495);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(24,3.425847);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(25,2.902786);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(26,2.526002);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(27,2.029616);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(28,1.683178);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(29,1.308763);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(30,1.047549);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetBinError(31,1.433298);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetEntries(905703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(1,232.2147);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(2,1002.81);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(3,1169.35);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(4,934.5436);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(5,679.5627);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(6,534.3008);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(7,389.6588);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(8,333.4917);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(9,323.3055);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(10,299.6678);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(11,260.3097);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(12,258.5361);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(13,205.2769);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(14,198.3947);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(15,163.3784);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(16,146.7214);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(17,105.5045);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(18,94.75527);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(19,80.99141);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(20,59.39574);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(21,50.78168);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(22,37.4786);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(23,23.83744);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(24,28.70538);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(25,19.92324);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(26,10.13309);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(27,9.055471);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(28,4.831369);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(29,2.696853);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(30,1.211676);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinContent(31,3.365808);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(1,5.714641);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(2,18.87207);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(3,24.2138);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(4,22.507);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(5,19.38506);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(6,17.32415);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(7,13.22015);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(8,13.84192);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(9,13.87481);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(10,13.12017);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(11,12.39332);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(12,13.88663);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(13,9.887723);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(14,11.23614);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(15,8.825569);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(16,9.447339);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(17,6.521384);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(18,6.356808);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(19,6.126981);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(20,4.358343);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(21,4.17527);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(22,2.98307);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(23,2.152242);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(24,3.940352);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(25,1.988479);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(26,1.237194);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(27,1.130504);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(28,0.9539296);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(29,0.6333072);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(30,0.3473789);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetBinError(31,0.8673375);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetEntries(49827);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(1,48.27238);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(2,129.8525);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(3,128.4187);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(4,78.232);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(5,55.42798);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(6,40.07109);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(7,39.37009);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(8,31.87894);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(9,31.88196);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(10,23.36767);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(11,14.72621);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(12,26.26366);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(13,21.33218);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(14,12.82563);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(15,17.13912);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(16,11.82226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(17,8.005631);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(18,7.696298);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(19,6.24445);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(20,6.774213);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(21,6.846749);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(22,5.783526);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(23,3.923078);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(24,2.298061);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(25,2.059077);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(26,2.410093);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(27,0.9553453);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(28,3.41132);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(29,0.3460957);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(30,0.1719456);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinContent(31,0.3443532);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(1,5.498665);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(2,10.0492);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(3,15.45204);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(4,7.311253);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(5,5.731062);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(6,4.350807);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(7,8.273238);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(8,3.825664);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(9,7.882855);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(10,3.645582);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(11,2.103934);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(12,4.511753);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(13,3.542614);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(14,1.827536);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(15,3.570292);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(16,2.307677);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(17,1.149285);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(18,1.522979);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(19,1.113122);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(20,2.315302);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(21,2.578455);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(22,2.263832);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(23,1.515459);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(24,0.5129799);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(25,0.635429);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(26,0.7311776);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(27,0.3292058);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(28,2.192059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(29,0.1867357);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(30,0.1695832);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetBinError(31,0.2008962);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetEntries(7212);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(1,1.037352);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(2,0.4664177);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(3,0.5709342);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(6,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(7,0.3022236);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(11,0.4664177);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(14,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(19,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(1,0.6694912);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(2,0.3496464);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(3,0.5709342);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(6,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(7,0.2137044);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(8,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(11,0.3496464);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(14,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(19,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetBinError(21,0.1511118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(1,1.11069);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(2,1.662007);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(3,1.468735);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(4,0.2244502);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(5,0.5397561);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(6,0.3366753);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(7,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(8,0.3366753);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(9,0.6519812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(10,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(11,0.6519812);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(12,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(13,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(17,0.2244502);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinContent(20,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(1,0.6712471);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(2,0.5005512);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(3,0.6532394);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(4,0.1587103);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(5,0.3529968);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(6,0.1943796);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(7,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(8,0.1943796);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(9,0.3704068);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(10,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(11,0.3704068);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(12,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(13,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(17,0.1587103);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetBinError(20,0.1122251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(1,5.605299);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(2,21.1263);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(3,21.09857);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(4,19.32805);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(5,11.23421);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(6,8.493476);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(7,6.482053);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(8,7.655748);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(9,7.98754);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(10,7.694258);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(11,5.883683);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(12,6.695223);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(13,4.896455);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(14,5.669998);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(15,3.51325);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(16,2.143397);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(17,0.7725137);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(18,1.623079);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(19,1.06528);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(20,0.5454769);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(23,0.53264);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(25,0.53264);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinContent(28,0.2660625);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(1,1.224504);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(2,2.379074);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(3,2.375751);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(4,2.279868);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(5,1.734845);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(6,1.502696);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(7,1.324246);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(8,1.422847);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(9,1.459611);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(10,1.429858);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(11,1.255488);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(12,1.340112);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(13,1.154595);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(14,1.238289);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(15,0.975001);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(16,0.7585832);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(17,0.4461341);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(18,0.6627984);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(19,0.5332834);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(20,0.3858259);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(23,0.3770883);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(25,0.3770883);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetBinError(28,0.2660625);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetEntries(564);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(1,3.715977);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(2,19.12672);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(3,23.35647);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(4,18.87526);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(5,13.68375);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(6,9.959473);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(7,7.57267);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(8,6.710881);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(9,6.053047);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(10,6.017792);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(11,5.810388);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(12,5.92439);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(13,4.999578);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(14,3.94246);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(15,3.054049);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(16,2.414545);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(17,1.868358);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(18,1.246139);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(19,0.9309757);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(20,0.6364798);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(21,0.5454535);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(22,0.4256239);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.3129974);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.2556118);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.2120917);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.1509678);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.07773448);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.05550215);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.02006979);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(30,0.007286991);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.01472711);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(1,0.08836421);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(2,0.2004512);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(3,0.219988);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(4,0.1961726);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(5,0.1669714);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(6,0.1433713);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1245122);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(8,0.1178823);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(9,0.1115846);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(10,0.111309);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(11,0.1093753);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(12,0.1109841);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(13,0.1012887);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(14,0.09023874);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(15,0.07910681);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(16,0.07117065);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(17,0.06207142);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(18,0.0508043);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(19,0.04358314);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(20,0.03665183);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(21,0.03311717);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(22,0.02964304);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(23,0.02532381);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(24,0.02319646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(25,0.0217235);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(26,0.01801581);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(27,0.01275887);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(28,0.01102784);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(29,0.006703606);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(30,0.004323619);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetBinError(31,0.005817316);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetEntries(79284);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(1,1.467517);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(2,8.123289);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(3,10.74501);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(4,8.982046);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(5,6.691486);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(6,4.732092);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(7,3.613597);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(8,3.034058);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(9,2.581141);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(10,2.642829);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(11,2.336014);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(12,2.155821);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(13,1.907447);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(14,1.566542);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(15,1.301934);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(16,1.050313);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(17,0.8311599);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(18,0.6753174);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(19,0.4740209);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(20,0.3944763);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(21,0.3003214);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.2499973);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.2224002);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.1396089);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.09253147);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.06493436);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.05681757);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.01785695);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.01461023);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.001623359);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.006493436);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(1,0.02886954);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(2,0.06792261);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(3,0.07811814);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(4,0.07142266);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(5,0.06164668);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(6,0.05184119);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(7,0.04530209);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(8,0.04151073);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(9,0.03828726);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(10,0.03874208);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(11,0.03642387);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(12,0.03499087);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(13,0.03291354);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(14,0.02982767);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(15,0.02719211);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(16,0.0244235);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(17,0.02172655);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(18,0.01958404);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(19,0.01640768);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(20,0.01496783);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(21,0.01305995);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(22,0.0119156);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(23,0.0112387);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(24,0.008904405);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(25,0.007249251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(26,0.006072754);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(27,0.005680541);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(28,0.003184579);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(29,0.00288056);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(30,0.0009601867);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetBinError(31,0.001920373);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetEntries(122844);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.02340609);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(2,0.09484054);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(3,0.09351702);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.05451093);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.01703805);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.01499856);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.01291203);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.01160179);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.0127228);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.0127228);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.007286531);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.004315259);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.01726103);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.008171272);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.009562293);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.007712026);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(1,0.007157199);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(2,0.01399059);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(3,0.01414026);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(4,0.01092443);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(5,0.006163553);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(6,0.005761165);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(7,0.005014512);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(8,0.005274079);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(9,0.00529263);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(10,0.00529263);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(11,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(12,0.004223559);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(13,0.003158712);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(14,0.006317423);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(15,0.004201636);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(16,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(17,0.00479766);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(18,0.003918236);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetBinError(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.007805267);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.04721608);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.03589672);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.02652557);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.01689987);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.00718245);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.006143749);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.006477848);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.005106057);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.00438126);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.003342895);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.002766748);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.002778024);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.001821444);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.002501534);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.003250508);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.002120765);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.002801191);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.001429736);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.001613838);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.0005072625);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.0007148681);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(24,0.001106576);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(25,0.0006569226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(1,0.001434106);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(2,0.003679283);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(3,0.003198738);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(4,0.00276031);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(5,0.002199165);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(6,0.001388294);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(7,0.001367635);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(8,0.001403236);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(9,0.001255246);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(10,0.001050076);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(11,0.0009830785);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(12,0.0009032443);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(13,0.0008920226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(14,0.0006989114);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(15,0.0008572663);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(16,0.0009995162);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(17,0.0008108974);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(18,0.0009081298);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(19,0.0005932865);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(20,0.0006673657);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(21,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(22,0.0003645467);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(23,0.0004195169);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(24,0.0005590015);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(25,0.0004662972);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all__142 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all__142","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(1,14818);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(2,64129);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(3,63897);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(4,51125);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(5,40852);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(6,32645);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(7,26656);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(8,22432);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(9,19539);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(10,17338);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(11,15838);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(12,14557);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(13,13088);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(14,11699);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(15,10423);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(16,8891);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(17,7231);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(18,6066);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(19,5071);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(20,4092);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(21,3475);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(22,2832);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(23,2277);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(24,1697);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(25,1395);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(26,1054);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(27,677);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(28,385);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(29,288);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(30,150);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetBinContent(31,250);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetEntries(464896);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all__142->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0_all__142->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_all__142->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all__142->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fx1103[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fy1103[30] = {
   17447.93,
   85412.65,
   85010.54,
   83913.87,
   77899.99,
   50083.38,
   32988.83,
   29853.52,
   25900.29,
   28445.91,
   23820.62,
   21776.55,
   18947.98,
   16220.48,
   12250.57,
   11305.98,
   9786.754,
   7393.767,
   8729.322,
   6634.495,
   4260.608,
   3322.371,
   2755.876,
   2732.991,
   994.3265,
   2171.486,
   784.9861,
   1024.99,
   186.9319,
   102.4201};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fex1103[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fey1103[30] = {
   1276.723,
   4103.073,
   4657.418,
   17424.61,
   17552.81,
   3512.484,
   2759.299,
   2553.659,
   1981.506,
   2626.486,
   2420.995,
   2333.023,
   1795.798,
   2057.448,
   1230.061,
   1298.252,
   1287.341,
   1658.313,
   1306.504,
   1074.475,
   804.0878,
   735.6072,
   615.3787,
   735.1194,
   127.8344,
   676.7714,
   378.0726,
   527.8762,
   61.79406,
   44.61433};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fx1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fy1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fex1103,Graph_from_VbbHcc_tags_Z_dR_Bj0_all_fey1103);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetMinimum(52.02523);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetMaximum(111466.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj0_all1103);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__143 = new TH1D("data_mc_ratio__143","",30,0,6);
   data_mc_ratio__143->SetBinContent(1,0.8492699);
   data_mc_ratio__143->SetBinContent(2,0.7508138);
   data_mc_ratio__143->SetBinContent(3,0.7516362);
   data_mc_ratio__143->SetBinContent(4,0.6092556);
   data_mc_ratio__143->SetBinContent(5,0.524416);
   data_mc_ratio__143->SetBinContent(6,0.6518131);
   data_mc_ratio__143->SetBinContent(7,0.808031);
   data_mc_ratio__143->SetBinContent(8,0.7514021);
   data_mc_ratio__143->SetBinContent(9,0.7543931);
   data_mc_ratio__143->SetBinContent(10,0.6095077);
   data_mc_ratio__143->SetBinContent(11,0.6648862);
   data_mc_ratio__143->SetBinContent(12,0.6684714);
   data_mc_ratio__143->SetBinContent(13,0.6907332);
   data_mc_ratio__143->SetBinContent(14,0.7212488);
   data_mc_ratio__143->SetBinContent(15,0.8508176);
   data_mc_ratio__143->SetBinContent(16,0.7863983);
   data_mc_ratio__143->SetBinContent(17,0.7388558);
   data_mc_ratio__143->SetBinContent(18,0.8204208);
   data_mc_ratio__143->SetBinContent(19,0.5809157);
   data_mc_ratio__143->SetBinContent(20,0.6167764);
   data_mc_ratio__143->SetBinContent(21,0.8156113);
   data_mc_ratio__143->SetBinContent(22,0.8524034);
   data_mc_ratio__143->SetBinContent(23,0.8262345);
   data_mc_ratio__143->SetBinContent(24,0.6209315);
   data_mc_ratio__143->SetBinContent(25,1.40296);
   data_mc_ratio__143->SetBinContent(26,0.485382);
   data_mc_ratio__143->SetBinContent(27,0.8624356);
   data_mc_ratio__143->SetBinContent(28,0.3756133);
   data_mc_ratio__143->SetBinContent(29,1.540668);
   data_mc_ratio__143->SetBinContent(30,1.464556);
   data_mc_ratio__143->SetBinContent(31,1.682787);
   data_mc_ratio__143->SetBinError(1,0.006976715);
   data_mc_ratio__143->SetBinError(2,0.002964866);
   data_mc_ratio__143->SetBinError(3,0.002973497);
   data_mc_ratio__143->SetBinError(4,0.002694529);
   data_mc_ratio__143->SetBinError(5,0.002594593);
   data_mc_ratio__143->SetBinError(6,0.00360757);
   data_mc_ratio__143->SetBinError(7,0.004949149);
   data_mc_ratio__143->SetBinError(8,0.005016934);
   data_mc_ratio__143->SetBinError(9,0.005396927);
   data_mc_ratio__143->SetBinError(10,0.00462892);
   data_mc_ratio__143->SetBinError(11,0.005283201);
   data_mc_ratio__143->SetBinError(12,0.005540474);
   data_mc_ratio__143->SetBinError(13,0.00603773);
   data_mc_ratio__143->SetBinError(14,0.006668232);
   data_mc_ratio__143->SetBinError(15,0.008333743);
   data_mc_ratio__143->SetBinError(16,0.008340023);
   data_mc_ratio__143->SetBinError(17,0.008688814);
   data_mc_ratio__143->SetBinError(18,0.01053381);
   data_mc_ratio__143->SetBinError(19,0.008157673);
   data_mc_ratio__143->SetBinError(20,0.00964184);
   data_mc_ratio__143->SetBinError(21,0.01383585);
   data_mc_ratio__143->SetBinError(22,0.01601764);
   data_mc_ratio__143->SetBinError(23,0.01731497);
   data_mc_ratio__143->SetBinError(24,0.01507311);
   data_mc_ratio__143->SetBinError(25,0.03756281);
   data_mc_ratio__143->SetBinError(26,0.01495076);
   data_mc_ratio__143->SetBinError(27,0.03314609);
   data_mc_ratio__143->SetBinError(28,0.01914302);
   data_mc_ratio__143->SetBinError(29,0.09078474);
   data_mc_ratio__143->SetBinError(30,0.1195805);
   data_mc_ratio__143->SetBinError(31,0.644876);
   data_mc_ratio__143->SetMinimum(0.4);
   data_mc_ratio__143->SetMaximum(1.6);
   data_mc_ratio__143->SetEntries(445.7981);
   data_mc_ratio__143->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__143->SetLineColor(ci);
   data_mc_ratio__143->SetLineWidth(2);
   data_mc_ratio__143->SetMarkerStyle(20);
   data_mc_ratio__143->SetMarkerSize(1.2);
   data_mc_ratio__143->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__143->GetXaxis()->SetRange(1,30);
   data_mc_ratio__143->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__143->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__143->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__143->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__143->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__143->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__143->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__143->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__143->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__143->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__143->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__143->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__143->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__143->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__143->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__143->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__143->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1104[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1104[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1104[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1104[30] = {
   0.07317336,
   0.04803823,
   0.05478636,
   0.2076488,
   0.2253249,
   0.07013273,
   0.08364343,
   0.08553963,
   0.07650518,
   0.09233265,
   0.1016344,
   0.1071346,
   0.09477518,
   0.1268426,
   0.1004085,
   0.1148288,
   0.1315392,
   0.2242852,
   0.1496684,
   0.1619527,
   0.1887261,
   0.2214103,
   0.2232969,
   0.2689798,
   0.1285638,
   0.3116628,
   0.4816296,
   0.5150059,
   0.3305699,
   0.4356012};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1104,Graph_from_mc_statistical_error_fy1104,Graph_from_mc_statistical_error_fex1104,Graph_from_mc_statistical_error_fey1104);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1104 = new TH1F("Graph_Graph_from_mc_statistical_error1104","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1104->SetMinimum(0.3819929);
   Graph_Graph_from_mc_statistical_error1104->SetMaximum(1.618007);
   Graph_Graph_from_mc_statistical_error1104->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1104->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1104->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1104);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->SetSelected(Z_dR_Bj0_tags_all);
}
