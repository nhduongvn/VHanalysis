void Z_dR_Bj1_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_all/Z_dR_Bj1_both_all
//=========  (Tue Aug 22 09:23:13 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_all = new TCanvas("Z_dR_Bj1_both_all", "Z_dR_Bj1_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_all->SetHighLightColor(2);
   Z_dR_Bj1_both_all->Range(0,0,1,1);
   Z_dR_Bj1_both_all->SetFillColor(0);
   Z_dR_Bj1_both_all->SetFillStyle(4000);
   Z_dR_Bj1_both_all->SetBorderMode(0);
   Z_dR_Bj1_both_all->SetBorderSize(2);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-292.4253,6.314516,292432.8);
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
   st->SetMaximum(250628.8);
   
   TH1F *st_stack_248 = new TH1F("st_stack_248","",30,0,6);
   st_stack_248->SetMinimum(0.3);
   st_stack_248->SetMaximum(263160.3);
   st_stack_248->SetDirectory(0);
   st_stack_248->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_248->SetLineColor(ci);
   st_stack_248->GetXaxis()->SetRange(1,30);
   st_stack_248->GetXaxis()->SetLabelFont(42);
   st_stack_248->GetXaxis()->SetLabelSize(0.035);
   st_stack_248->GetXaxis()->SetTitleSize(0.035);
   st_stack_248->GetXaxis()->SetTitleFont(42);
   st_stack_248->GetYaxis()->SetTitle("Events/0.2");
   st_stack_248->GetYaxis()->SetLabelFont(42);
   st_stack_248->GetYaxis()->SetLabelSize(0.05);
   st_stack_248->GetYaxis()->SetTitleSize(0.057);
   st_stack_248->GetYaxis()->SetTitleOffset(1.2);
   st_stack_248->GetYaxis()->SetTitleFont(42);
   st_stack_248->GetZaxis()->SetLabelFont(42);
   st_stack_248->GetZaxis()->SetLabelSize(0.035);
   st_stack_248->GetZaxis()->SetTitleSize(0.035);
   st_stack_248->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_248);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(1,21235.43);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(2,93721.35);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(3,102013.1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(4,64978.47);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(5,38758.49);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(6,40476.13);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(7,31452.04);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(8,27116.53);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(9,38732.09);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(10,21919.54);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(11,21582.58);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(12,17679.76);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(13,16599.37);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(14,13773.16);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(15,13409.89);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(16,9432.851);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(17,7025.367);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(18,6724.271);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(19,3911.131);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(20,5398.028);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(21,4390.672);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(22,4555.608);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(23,3323.353);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(24,1451.063);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(25,1637.065);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(26,1278.53);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(27,466.383);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(28,738.3695);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(29,139.3735);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(30,124.2758);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(31,121.8476);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(1,1556.798);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(2,4661.972);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(3,17617.73);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(4,3795.057);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(5,2477.134);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(6,4097.069);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(7,3229.246);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(8,2647.19);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(9,17141.68);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(10,2707.877);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(11,2473.71);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(12,2334.207);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(13,2235.129);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(14,1614.574);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(15,1652.272);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(16,1358.098);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(17,1035.19);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(18,1151.254);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(19,587.0058);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(20,1677.072);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(21,916.9377);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(22,1007.047);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(23,783.8023);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(24,347.953);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(25,564.4403);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(26,426.2969);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(27,101.7701);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(28,383.6153);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(29,46.95834);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(30,50.49204);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(31,52.0234);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetEntries(28873);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(1,104.3017);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(2,390.2446);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(3,427.7687);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(4,370.999);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(5,309.1783);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(6,248.5994);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(7,198.0376);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(8,169.1785);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(9,145.2305);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(10,122.8847);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(11,103.5081);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(12,95.62166);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(13,81.91019);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(14,75.0787);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(15,64.02569);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(16,56.71697);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(17,48.89752);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(18,41.11761);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(19,36.12633);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(20,29.51964);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(21,25.56115);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(22,20.96364);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(23,17.24913);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(24,13.56002);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(25,10.25839);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(26,6.366755);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(27,3.879082);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(28,3.468568);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(29,1.466856);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(30,0.951607);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(31,1.091289);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(1,4.300082);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(2,7.9718);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(3,8.220916);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(4,7.659662);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(5,7.021741);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(6,6.355373);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(7,5.608321);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(8,5.232767);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(9,4.839197);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(10,4.464673);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(11,4.091946);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(12,3.892252);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(13,3.631109);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(14,3.476767);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(15,3.188257);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(16,3.073687);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(17,2.744669);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(18,2.571138);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(19,2.409816);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(20,2.181791);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(21,2.10227);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(22,1.926124);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(23,1.64705);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(24,1.496775);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(25,1.351794);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(26,1.077753);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(27,0.7414493);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(28,0.7716243);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(29,0.4374234);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(30,0.4044385);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(31,0.3366592);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetEntries(36867);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(1,1527.573);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(2,7045.096);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(3,8873.515);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(4,7892.185);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(5,6395.093);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(6,5019.896);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(7,3956.627);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(8,3208.63);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(9,2676.834);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(10,2271.562);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(11,1996.989);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(12,1798.938);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(13,1589.775);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(14,1413.135);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(15,1242.325);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(16,1113.527);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(17,924.4899);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(18,789.1332);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(19,671.8553);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(20,572.1772);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(21,459.9402);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(22,370.2326);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(23,286.8579);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(24,222.5784);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(25,161.6409);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(26,117.9075);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(27,76.25796);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(28,45.00816);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(29,28.55389);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(30,16.08772);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(31,25.16014);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(1,10.0817);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(2,21.61416);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(3,24.31537);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(4,22.92136);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(5,20.61273);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(6,18.25155);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(7,16.1901);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(8,14.57331);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(9,13.3141);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(10,12.26699);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(11,11.50396);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(12,10.92745);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(13,10.27951);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(14,9.68142);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(15,9.087308);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(16,8.600383);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(17,7.831398);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(18,7.229348);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(19,6.672173);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(20,6.168107);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(21,5.512853);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(22,4.953826);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(23,4.351253);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(24,3.834732);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(25,3.267269);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(26,2.78759);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(27,2.242269);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(28,1.71128);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(29,1.362175);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(30,1.020233);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(31,1.288335);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetEntries(982703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(1,342.8365);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(2,1191.155);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(3,1285.07);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(4,955.3369);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(5,659.567);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(6,533.5878);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(7,382.9817);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(8,333.1531);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(9,305.8125);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(10,260.5261);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(11,236.2068);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(12,202.0332);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(13,177.2727);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(14,167.8196);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(15,135.8579);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(16,123.161);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(17,111.5361);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(18,96.54398);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(19,76.25226);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(20,79.08688);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(21,53.27128);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(22,44.7481);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(23,38.30475);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(24,22.79001);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(25,22.18873);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(26,14.48071);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(27,10.73601);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(28,6.513805);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(29,5.072036);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(30,1.089438);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(31,2.741025);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(1,7.15643);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(2,21.87781);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(3,23.85535);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(4,23.09158);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(5,18.92441);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(6,18.89214);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(7,12.81955);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(8,11.87692);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(9,13.56426);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(10,12.51087);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(11,12.19415);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(12,10.72122);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(13,7.505997);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(14,9.257068);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(15,6.748328);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(16,9.602603);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(17,8.069653);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(18,7.69459);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(19,6.188068);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(20,8.480397);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(21,3.716044);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(22,4.948853);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(23,5.129862);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(24,2.280833);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(25,3.019748);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(26,1.813827);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(27,1.419758);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(28,1.009424);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(29,1.170821);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(30,0.4027325);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(31,0.8097067);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetEntries(51772);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(1,62.72806);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(2,150.6015);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(3,115.9139);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(4,84.71235);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(5,88.40804);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(6,47.49556);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(7,31.06784);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(8,33.3718);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(9,27.55514);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(10,22.32498);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(11,28.3561);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(12,17.7563);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(13,11.85084);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(14,17.19556);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(15,7.417429);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(16,13.40364);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(17,8.589718);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(18,6.72662);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(19,9.616645);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(20,5.068479);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(21,3.642064);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(22,12.31883);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(23,2.77025);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(24,1.477093);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(25,1.646434);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(26,1.236505);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(27,1.285326);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(28,0.4697542);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(29,1.962583);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(30,0.1068507);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(31,0.1082427);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(1,4.344825);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(2,10.76751);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(3,7.803659);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(4,12.71176);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(5,11.18883);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(6,4.783006);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(7,3.795218);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(8,4.432849);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(9,4.404571);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(10,3.534381);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(11,7.644288);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(12,3.290778);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(13,1.74947);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(14,3.747256);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(15,1.104744);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(16,2.988053);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(17,1.684699);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(18,1.358462);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(19,2.625444);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(20,1.004438);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(21,0.728418);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(22,7.534519);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(23,0.6026758);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(24,0.5094933);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(25,0.4124454);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(26,0.3608714);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(27,0.561385);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(28,0.1899736);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(29,0.7892049);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(30,0.0925499);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(31,0.1070422);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetEntries(7913);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(3,0.8731578);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(4,0.9328354);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(5,0.1511118);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(6,0.8731578);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(7,0.1511118);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(17,0.1511118);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(21,0.1511118);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(3,0.6096191);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(4,0.4944746);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(5,0.1511118);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(6,0.6096191);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(7,0.1511118);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(17,0.1511118);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(21,0.1511118);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(1,0.5611256);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(2,1.549782);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(3,0.7953844);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(4,1.416188);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(5,0.8978009);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(6,0.6831593);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(7,0.2244502);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(8,0.3366753);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(9,0.2244502);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(10,0.2244502);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(12,0.427531);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(16,0.1122251);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(24,0.1122251);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(1,0.250943);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(2,0.4878084);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(3,0.5925832);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(4,0.535721);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(5,0.3174206);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(6,0.5818594);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(7,0.1587103);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(8,0.1943796);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(9,0.1587103);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(10,0.1587103);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(12,0.3346824);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(14,0.1122251);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(15,0.1587103);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(16,0.1122251);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(24,0.1122251);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetEntries(56);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(1,6.682901);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(2,27.58634);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(3,26.31295);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(4,20.33992);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(5,13.09819);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(6,6.415293);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(7,7.213996);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(8,5.390584);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(9,6.669549);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(10,5.806147);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(11,3.754668);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(12,3.753124);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(13,3.207647);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(14,2.435648);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(15,2.422296);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(16,2.409974);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(17,2.195259);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(18,1.851145);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(19,1.863982);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(20,1.06528);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(21,0.5454769);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(22,0.8120543);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(24,0.532125);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(25,0.8115394);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(1,1.337853);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(2,2.707576);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(3,2.659954);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(4,2.335178);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(5,1.872715);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(6,1.310424);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(7,1.389315);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(8,1.206352);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(9,1.335129);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(10,1.239208);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(11,1.004648);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(12,1.003727);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(13,0.9266096);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(14,0.8125188);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(15,0.8080246);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(16,0.8042728);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(17,0.7763567);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(18,0.7005069);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(19,0.7052489);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(20,0.5332834);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(21,0.3858259);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(22,0.4693271);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(24,0.3762692);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(25,0.4686693);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetEntries(574);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(1,5.778614);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(2,25.76667);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(3,27.02006);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(4,19.05633);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(5,12.94211);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(6,8.879311);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(7,7.153733);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(8,5.532219);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(9,5.001354);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(10,5.069634);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(11,4.434873);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(12,4.223818);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(13,3.617765);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(14,3.362583);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(15,2.824348);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(16,2.198578);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(17,1.734188);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(18,1.273392);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(19,0.9688455);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(20,0.7363005);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(21,0.6805385);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(22,0.562331);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(23,0.502677);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(24,0.3961083);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(25,0.3023571);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.1967413);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.1293981);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.06569017);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.02550049);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.002835937);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.007198956);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(1,0.110049);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(2,0.2322237);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(3,0.2357275);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(4,0.1964558);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(5,0.1629816);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1347259);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(7,0.121369);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1068774);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(9,0.1018099);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(10,0.1029859);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(11,0.09598052);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(12,0.09383419);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(13,0.08628897);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(14,0.08399904);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(15,0.07657471);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(16,0.067626);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(17,0.06005479);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(18,0.05118535);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(19,0.04495371);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(20,0.03927399);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(21,0.03707058);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(22,0.03391722);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(23,0.03192871);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(24,0.02937507);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(25,0.0249918);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(26,0.0204113);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(27,0.01611106);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(28,0.0118548);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(29,0.007765471);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(30,0.002835937);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(31,0.00379824);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetEntries(80589);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(1,2.274326);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(2,10.32132);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(3,12.45766);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(4,9.764505);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(5,6.537267);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(6,4.381446);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(7,3.191524);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(8,2.581141);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(9,2.230495);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(10,1.944784);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(11,1.878226);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(12,1.649333);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(13,1.456153);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(14,1.340895);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(15,1.118494);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(16,0.8749905);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(17,0.7970693);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(18,0.5925261);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(19,0.5811626);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(20,0.4821376);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(21,0.3831127);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(22,0.3019448);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(23,0.2840878);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.2321403);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.1347388);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.1217519);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.05357085);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.02272703);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.01136351);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.001623359);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.001623359);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(1,0.03593973);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(2,0.07656247);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(3,0.08411367);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(4,0.07446866);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(5,0.06093215);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(6,0.04988353);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(7,0.04257429);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(8,0.03828726);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(9,0.03559173);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(10,0.03323411);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(11,0.03266047);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(12,0.03060572);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(13,0.02875755);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(14,0.02759597);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(15,0.02520376);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(16,0.02229205);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(17,0.02127632);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(18,0.01834434);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(19,0.01816759);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(20,0.01654756);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(21,0.01475067);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(22,0.0130952);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(23,0.01270208);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(24,0.01148216);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(25,0.008747717);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(26,0.008315461);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(27,0.005515853);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(28,0.00359269);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(29,0.002540415);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(30,0.0009601867);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(31,0.0009601867);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetEntries(125673);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(1,0.04132889);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(2,0.1139989);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(3,0.08870877);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.05882619);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.0210833);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.02135331);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.01703805);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.01523482);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.005436264);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.005436264);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.00589551);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.004315259);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(18,0.004315259);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(20,0.003856013);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(26,0.004315259);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(1,0.00943558);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(2,0.01570219);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(3,0.01352336);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(4,0.01137193);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(5,0.0065421);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(6,0.00692581);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(7,0.006163553);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(8,0.005794113);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(9,0.003189589);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(10,0.003189589);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(11,0.003941735);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(13,0.002234813);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(14,0.003531947);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(15,0.003158712);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(17,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(18,0.003158712);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(20,0.002770611);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(23,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(26,0.003158712);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(27,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(1,0.009244933);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(2,0.04696472);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(3,0.04726376);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(4,0.02974068);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(5,0.01596517);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(6,0.007148008);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(7,0.006294419);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(8,0.007965866);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(9,0.006800672);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(10,0.004265369);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(11,0.004979901);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(12,0.004230927);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(13,0.002294265);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(14,0.001337349);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(15,0.003019735);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(16,0.002236319);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(17,0.001129743);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(18,0.001106576);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(19,0.002835296);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(20,0.002063155);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(21,0.001487345);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(23,0.001371791);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(27,0.0005648715);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(1,0.001644882);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(2,0.003641081);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(3,0.003643896);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(4,0.002935897);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(5,0.002155777);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(6,0.001385103);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(7,0.001310387);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(8,0.001483353);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(9,0.001444943);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(10,0.001088824);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(11,0.00120034);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(12,0.001084753);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(13,0.0007826379);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(14,0.0006201436);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(15,0.0009627758);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(16,0.0008086784);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(17,0.0005843612);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(18,0.0005590015);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(19,0.0009554226);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(20,0.0007872166);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(21,0.0006243665);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(23,0.000627238);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(27,0.0004132058);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all__681 = new TH1D("VbbHcc_both_Z_dR_Bj1_all__681","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(1,20463);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(2,75929);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(3,70605);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(4,53481);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(5,42567);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(6,33173);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(7,26947);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(8,22350);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(9,18849);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(10,16288);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(11,14477);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(12,13063);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(13,11780);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(14,10479);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(15,9291);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(16,8281);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(17,6991);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(18,5985);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(19,5075);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(20,4326);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(21,3575);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(22,2984);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(23,2519);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(24,1999);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(25,1497);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(26,1094);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(27,766);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(28,492);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(29,261);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(30,135);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(31,227);
   VbbHcc_both_Z_dR_Bj1_all__681->SetEntries(485978);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all__681->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all__681->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1_all__681->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1_all__681->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fx1495[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fy1495[30] = {
   23288.21,
   102564.2,
   112783,
   74333.3,
   46244.4,
   46346.97,
   36038.71,
   30874.72,
   41901.66,
   24609.9,
   23958.35,
   19804.49,
   18468.46,
   15453.64,
   14866.11,
   10745.26,
   8123.761,
   7661.515,
   4708.4,
   6086.17,
   4934.848,
   5005.548,
   3669.605,
   1712.745,
   1834.051,
   1418.844,
   558.7272,
   793.9185,
   176.4661,
   142.5158};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fex1495[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fey1495[30] = {
   1556.859,
   4662.094,
   17617.76,
   3795.226,
   2477.328,
   4097.161,
   3229.319,
   2647.266,
   17141.7,
   2707.94,
   2473.782,
   2334.263,
   2235.169,
   1614.638,
   1652.315,
   1358.166,
   1035.256,
   1151.306,
   587.0876,
   1677.106,
   916.9646,
   1007.102,
   783.8331,
   347.9854,
   564.4598,
   426.3114,
   101.809,
   383.6213,
   47.00134,
   50.50566};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fx1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fy1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fex1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fey1495);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetMinimum(82.80916);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetMaximum(143431.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__682 = new TH1D("data_mc_ratio__682","",30,0,6);
   data_mc_ratio__682->SetBinContent(1,0.8786849);
   data_mc_ratio__682->SetBinContent(2,0.7403074);
   data_mc_ratio__682->SetBinContent(3,0.6260253);
   data_mc_ratio__682->SetBinContent(4,0.7194757);
   data_mc_ratio__682->SetBinContent(5,0.9204789);
   data_mc_ratio__682->SetBinContent(6,0.7157534);
   data_mc_ratio__682->SetBinContent(7,0.7477238);
   data_mc_ratio__682->SetBinContent(8,0.7238931);
   data_mc_ratio__682->SetBinContent(9,0.449839);
   data_mc_ratio__682->SetBinContent(10,0.6618475);
   data_mc_ratio__682->SetBinContent(11,0.6042569);
   data_mc_ratio__682->SetBinContent(12,0.6595978);
   data_mc_ratio__682->SetBinContent(13,0.6378442);
   data_mc_ratio__682->SetBinContent(14,0.6780925);
   data_mc_ratio__682->SetBinContent(15,0.6249786);
   data_mc_ratio__682->SetBinContent(16,0.7706655);
   data_mc_ratio__682->SetBinContent(17,0.8605619);
   data_mc_ratio__682->SetBinContent(18,0.7811771);
   data_mc_ratio__682->SetBinContent(19,1.077861);
   data_mc_ratio__682->SetBinContent(20,0.7107918);
   data_mc_ratio__682->SetBinContent(21,0.7244397);
   data_mc_ratio__682->SetBinContent(22,0.5961385);
   data_mc_ratio__682->SetBinContent(23,0.68645);
   data_mc_ratio__682->SetBinContent(24,1.167133);
   data_mc_ratio__682->SetBinContent(25,0.8162261);
   data_mc_ratio__682->SetBinContent(26,0.7710501);
   data_mc_ratio__682->SetBinContent(27,1.370973);
   data_mc_ratio__682->SetBinContent(28,0.619711);
   data_mc_ratio__682->SetBinContent(29,1.479037);
   data_mc_ratio__682->SetBinContent(30,0.9472632);
   data_mc_ratio__682->SetBinContent(31,1.503738);
   data_mc_ratio__682->SetBinError(1,0.006142547);
   data_mc_ratio__682->SetBinError(2,0.002686632);
   data_mc_ratio__682->SetBinError(3,0.002355994);
   data_mc_ratio__682->SetBinError(4,0.003111117);
   data_mc_ratio__682->SetBinError(5,0.004461463);
   data_mc_ratio__682->SetBinError(6,0.003929805);
   data_mc_ratio__682->SetBinError(7,0.004554975);
   data_mc_ratio__682->SetBinError(8,0.004842122);
   data_mc_ratio__682->SetBinError(9,0.003276521);
   data_mc_ratio__682->SetBinError(10,0.005185899);
   data_mc_ratio__682->SetBinError(11,0.005022065);
   data_mc_ratio__682->SetBinError(12,0.005771089);
   data_mc_ratio__682->SetBinError(13,0.005876814);
   data_mc_ratio__682->SetBinError(14,0.006624133);
   data_mc_ratio__682->SetBinError(15,0.006483864);
   data_mc_ratio__682->SetBinError(16,0.008468852);
   data_mc_ratio__682->SetBinError(17,0.0102923);
   data_mc_ratio__682->SetBinError(18,0.01009758);
   data_mc_ratio__682->SetBinError(19,0.0151302);
   data_mc_ratio__682->SetBinError(20,0.01080685);
   data_mc_ratio__682->SetBinError(21,0.01211614);
   data_mc_ratio__682->SetBinError(22,0.01091309);
   data_mc_ratio__682->SetBinError(23,0.01367713);
   data_mc_ratio__682->SetBinError(24,0.02610441);
   data_mc_ratio__682->SetBinError(25,0.02109597);
   data_mc_ratio__682->SetBinError(26,0.0233117);
   data_mc_ratio__682->SetBinError(27,0.04953528);
   data_mc_ratio__682->SetBinError(28,0.02793873);
   data_mc_ratio__682->SetBinError(29,0.09155012);
   data_mc_ratio__682->SetBinError(30,0.08152743);
   data_mc_ratio__682->SetBinError(31,0.5279766);
   data_mc_ratio__682->SetMinimum(0.4);
   data_mc_ratio__682->SetMaximum(1.6);
   data_mc_ratio__682->SetEntries(660.554);
   data_mc_ratio__682->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__682->SetLineColor(ci);
   data_mc_ratio__682->SetLineWidth(2);
   data_mc_ratio__682->SetMarkerStyle(20);
   data_mc_ratio__682->SetMarkerSize(1.2);
   data_mc_ratio__682->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__682->GetXaxis()->SetRange(1,30);
   data_mc_ratio__682->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__682->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__682->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__682->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__682->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__682->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__682->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__682->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__682->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__682->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__682->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__682->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__682->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__682->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__682->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__682->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__682->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1496[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1496[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1496[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1496[30] = {
   0.06685182,
   0.04545539,
   0.1562094,
   0.05105688,
   0.05357032,
   0.08840191,
   0.08960695,
   0.08574216,
   0.4090935,
   0.1100346,
   0.1032534,
   0.1178654,
   0.1210263,
   0.1044827,
   0.1111464,
   0.1263968,
   0.1274355,
   0.1502713,
   0.1246894,
   0.2755602,
   0.1858141,
   0.201197,
   0.2136015,
   0.2031742,
   0.3077667,
   0.3004638,
   0.1822159,
   0.4831998,
   0.2663477,
   0.3543863};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1496,Graph_from_mc_statistical_error_fy1496,Graph_from_mc_statistical_error_fex1496,Graph_from_mc_statistical_error_fey1496);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1496 = new TH1F("Graph_Graph_from_mc_statistical_error1496","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1496->SetMinimum(0.4201602);
   Graph_Graph_from_mc_statistical_error1496->SetMaximum(1.57984);
   Graph_Graph_from_mc_statistical_error1496->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1496->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1496->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1496);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->SetSelected(Z_dR_Bj1_both_all);
}
