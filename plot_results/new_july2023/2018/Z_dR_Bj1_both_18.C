void Z_dR_Bj1_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_18/Z_dR_Bj1_both_18
//=========  (Mon Jul 24 10:12:20 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_18 = new TCanvas("Z_dR_Bj1_both_18", "Z_dR_Bj1_both_18",0,0,600,600);
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
   topPad->Range(-0.9193524,-1310.659,6.314516,1309358);
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
   st->SetMaximum(1122182);
   
   TH1F *st_stack_247 = new TH1F("st_stack_247","",30,0,6);
   st_stack_247->SetMinimum(0.01);
   st_stack_247->SetMaximum(1178291);
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
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,95583.52);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,329135.6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,259370.8);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,185205.6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,137648.9);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,105887.1);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,83042.07);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,67615.6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,61366.44);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,52823.99);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,48492.89);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,42932.16);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,38674.28);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,38086.23);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,31139.92);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,30193.78);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,21821.69);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,19642.3);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,20707.83);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,14304.74);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,11850.56);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,9032.323);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,10485.84);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,6034.339);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,7277.449);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,4603.897);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,3656.666);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,2113.383);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,958.2052);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,779.8082);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,753.2743);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,2186.874);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,6230.251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,5802.254);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,5715.8);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,4918.972);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,4925.274);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,3962.362);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,3067.723);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,3433.65);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,3120.676);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,2592.995);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,2388.993);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,2300.286);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,3241.091);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,2115.224);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,3004.368);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,1724.11);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,2208.334);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,1875.62);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,1351.075);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,1205.26);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,915.9651);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,1326.111);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,743.2119);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,1877.19);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,727.8288);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,714.7764);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,508.6473);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,129.4627);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,354.6687);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,353.7034);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(164216);

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
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,410.9695);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,1992.694);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,2545.938);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,2376.859);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,2022.342);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,1695.294);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,1388.656);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,1212.575);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,1056.487);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,945.9543);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,866.5576);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,748.241);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,675.1677);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,616.1639);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,517.1664);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,442.9777);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,380.0132);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,318.9347);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,250.7708);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,221.1379);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,181.2071);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,137.3712);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,119.2124);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,84.12591);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,67.57112);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,48.6667);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,33.61126);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,21.01165);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,15.93435);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(30,9.927951);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,15.53441);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,8.686898);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,18.24256);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,20.52134);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,19.82477);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,18.20844);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,16.76834);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,15.13013);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,14.07576);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,13.1974);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,12.56498);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,12.01134);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,10.99696);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,10.58095);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,10.12147);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,9.235784);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,8.509883);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,7.936265);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,7.403961);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,6.448564);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,6.192912);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,5.740975);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,4.916118);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,4.642816);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,3.898751);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,3.598296);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,3.055776);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,2.503373);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,1.963304);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,1.747946);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(30,1.294143);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,1.676383);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(233695);

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
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,4085.061);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,27430.17);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,42610.19);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,43150.57);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,37848.7);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,30964.95);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,25447.7);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,21465.02);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,18826.41);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,17083.97);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,15731.46);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,14550.21);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,13120.59);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,11434.03);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,9782.923);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,8241.876);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,6668.085);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,5411.483);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,4306.423);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,3398.649);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,2625.538);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,1998.572);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,1495.918);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,1082.103);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,771.6179);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,541.8067);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,356.5088);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,226.9366);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,144.1163);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,95.54524);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,156.9104);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,15.95266);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,41.33258);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,51.62532);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,52.00663);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,48.71532);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,44.04991);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,39.93186);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,36.66673);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,34.35217);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,32.73277);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,31.42357);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,30.23937);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,28.71626);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,26.80512);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,24.77745);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,22.73583);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,20.44088);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,18.41313);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,16.42306);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,14.5747);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,12.80761);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,11.16527);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,9.643969);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,8.206742);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,6.919265);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,5.798381);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,4.697886);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,3.741994);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,2.984968);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,2.430718);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,3.11836);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(6104032);

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
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,852.8532);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,2671.931);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,2733.061);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,1831.093);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,1094.19);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,761.6453);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,673.1375);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,492.1319);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,453.5512);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,400.3329);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,353.7579);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,313.9105);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,312.5961);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,270.1046);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,236.0534);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,217.5077);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,179.2054);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,152.407);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,133.8387);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,112.2308);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,101.8194);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,83.86238);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,78.8513);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,59.31435);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,51.04639);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,30.55018);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,26.1423);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,14.53923);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,7.878079);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,5.530083);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,7.952467);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,11.73966);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,27.41893);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,33.65609);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,31.246);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,22.49676);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,17.71914);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,19.60838);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,14.33202);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,15.08577);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,14.06497);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,13.13028);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,11.98056);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,13.87724);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,12.7046);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,11.08978);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,12.14807);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,7.916726);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,9.146214);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,8.079639);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,5.430482);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,6.409467);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,4.779823);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,7.017059);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,5.365829);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,5.178728);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,2.307487);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,2.316391);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,1.680153);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,1.324781);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,1.15363);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,1.479223);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(94684);

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
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,459.1288);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,1534.903);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,1183.836);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,761.9521);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,605.0597);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,381.1246);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,330.811);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,275.0142);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,246.9674);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,234.8143);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,186.208);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,172.2767);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,145.8675);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,134.4887);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,122.4257);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,113.368);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,85.42187);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,84.47523);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,72.4615);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,53.59402);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,59.07578);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,48.31506);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,60.1645);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,28.64022);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,25.13882);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,25.39029);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,11.94312);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,6.69164);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,6.355583);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(30,5.755169);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(31,2.604251);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,14.58309);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,44.00701);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,40.88075);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,32.92965);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,32.09406);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,17.46143);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,21.84617);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,18.35508);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,20.30711);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,15.31021);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,18.61361);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,18.57848);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,9.95167);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,10.64891);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,10.08263);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,16.58638);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,8.001711);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,12.84411);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,8.077411);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,6.162375);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,12.29086);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,6.404872);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,15.74296);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,4.604361);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,4.536937);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,4.959525);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,3.183147);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,1.122855);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,1.165125);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(30,2.98319);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(31,0.6676693);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(40778);

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
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(1,2.023338);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(2,6.648112);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(3,3.757628);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,3.179532);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(5,4.335725);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(6,2.601435);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(7,3.46858);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(8,1.73429);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(9,1.156193);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(10,2.023338);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(11,1.445242);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(12,1.445242);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(13,1.156193);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(14,1.445242);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(15,1.445242);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(16,0.2890483);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(18,0.867145);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(19,1.156193);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(20,0.867145);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(21,0.5780967);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(22,0.5780967);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(24,0.5780967);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(27,0.5780967);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(1,0.76475);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(2,1.386227);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(3,1.042179);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,0.9586649);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(5,1.119479);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(6,0.867145);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(7,1.001293);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(8,0.708021);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(9,0.5780967);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(10,0.76475);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(11,0.6463317);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(12,0.6463317);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(13,0.5780967);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(14,0.6463317);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(15,0.6463317);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(16,0.2890483);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(18,0.5006464);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(19,0.5780967);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(20,0.5006464);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(21,0.4087761);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(22,0.4087761);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(24,0.4087761);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(27,0.4087761);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(150);

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
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,7.671231);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,26.95297);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,21.56238);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,15.34246);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,9.329876);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,3.317289);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(7,2.280636);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,2.902628);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,2.280636);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(10,1.865975);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(11,2.073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(12,2.280636);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(13,1.243983);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(14,1.658645);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(15,1.865975);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(16,0.4146611);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(17,0.2073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(18,1.036653);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(19,0.6219917);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(20,0.2073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(21,1.243983);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(23,0.4146611);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(24,0.6219917);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(26,0.2073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(29,0.2073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(30,0.2073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(31,0.4146611);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,1.261143);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,2.363932);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,2.114365);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,1.783525);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,1.390816);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.8293223);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(7,0.6876377);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.7757599);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.6876377);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(10,0.6219917);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(11,0.6556368);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(12,0.6876377);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(13,0.5078541);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(14,0.5864194);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(15,0.6219917);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(16,0.2932097);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(17,0.2073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(18,0.4636052);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(19,0.3591071);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(20,0.2073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(21,0.5078541);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(23,0.2932097);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(24,0.3591071);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(26,0.2073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(29,0.2073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(30,0.2073306);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(31,0.2932097);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(523);

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
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,6.182678);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,23.70026);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,25.34898);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,12.57144);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,6.800945);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,5.976588);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,5.56441);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,3.709607);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,3.091339);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,3.091339);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(11,1.648714);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,2.88525);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,2.473071);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,1.236536);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,1.236536);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,1.030446);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(17,1.030446);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(18,1.030446);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.6182678);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(20,0.824357);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(21,0.824357);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(22,0.2060893);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(23,0.6182678);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(24,0.2060893);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(26,0.4121785);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(27,0.2060893);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(31,0.4121785);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,1.128797);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,2.210061);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,2.28564);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.609609);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,1.183893);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,1.109825);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,1.070871);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.8743626);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.7981802);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.7981802);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(11,0.5829084);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.7711154);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.7139141);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.5048135);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.5048135);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.4608296);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(17,0.4608296);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(18,0.4608296);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.3569571);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(20,0.4121785);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(21,0.4121785);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(22,0.2060893);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(23,0.3569571);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(24,0.2060893);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(26,0.2914542);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(27,0.2060893);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(31,0.2914542);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(548);

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
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,3.147517);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,13.48381);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,15.37643);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,12.25863);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,8.295091);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,5.332722);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,3.856109);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,2.932654);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,2.484641);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,2.468641);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,2.374924);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,2.267492);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,1.856052);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,1.600045);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,1.238892);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,1.181748);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.9851706);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.7611643);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.6903052);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.5554442);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.516586);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.3862966);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.3680104);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.299437);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.1874338);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.1440041);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.08000225);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.03428668);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.01371467);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.08482056);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.1755591);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.1874757);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.1673933);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.137698);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.1104057);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.09388403);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.08187428);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.0753614);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.07511835);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.0736787);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.07199296);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.06513467);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.06047602);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.05321497);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.0519732);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.047454);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.04171155);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.0397226);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.03563176);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.03436279);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.02971512);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.02900328);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.02616193);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.02069861);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.01814281);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.01352285);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.008852783);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.005598991);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.002285779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(37266);

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
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,3.488042);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,13.14678);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,15.32092);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,12.44571);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,8.38239);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,5.344437);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,3.647213);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,2.747631);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,2.311849);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,2.019142);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,1.761011);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,1.598264);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,1.4689);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,1.30973);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,1.067099);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.9091206);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.820295);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.704643);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.6444324);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.5538184);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.4953962);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.4125321);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.3487446);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.2807841);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.2319003);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.135921);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.09836387);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.0441147);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.01848048);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.0107306);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.00774988);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.04560019);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.08852898);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.09556926);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.0861362);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.07069029);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.05644517);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.04662903);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.04047203);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.03712407);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.03469439);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.03240089);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.0308674);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.02959184);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.02794259);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.02522192);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.02328019);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.02211367);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.02049559);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.01960038);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.01817019);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.0171851);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.01568212);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.01441882);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.01293785);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.01175781);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.009001587);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.007657617);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.00512823);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.003319193);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.002529228);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.00214943);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(137175);

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
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.1456488);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.5712162);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.4551524);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.2662641);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.1137881);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.08875471);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.09103048);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(8,0.05689405);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(9,0.03641219);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(10,0.04096371);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(11,0.04323948);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(12,0.05006676);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(13,0.02048186);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.0182061);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.02275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(16,0.009103048);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(17,0.02275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(19,0.0295849);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(20,0.009103048);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(21,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(22,0.009103048);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(23,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(24,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(25,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.0182061);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.03605485);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.03218413);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.02461613);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.01609207);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.01421213);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.01439318);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(8,0.01137881);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(9,0.009103048);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(10,0.00965524);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(11,0.009919816);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(12,0.01067427);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(13,0.006827286);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.006436827);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.007196591);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(16,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(17,0.007196591);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.003218413);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(19,0.008205376);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(20,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(21,0.003941735);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(22,0.004551524);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(23,0.003941735);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(24,0.003218413);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(25,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.003941735);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(27,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(28,0.002275762);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(939);

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
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.05423788);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.2630987);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.2400251);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.1441349);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.06083033);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.04135264);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.03176362);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.02547083);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.02247426);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.01767975);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.01797941);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.01708044);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.0152825);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(14,0.01438353);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.01228593);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.009589018);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(17,0.006892106);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(18,0.007791077);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.00659245);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.008090734);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.004794509);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(22,0.005393822);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.003595882);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(24,0.005993136);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(25,0.002696911);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(26,0.001797941);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(27,0.002397254);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(28,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.00403147);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.00887915);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.00848087);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.006571987);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.004269452);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.00352017);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.003085156);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.002762699);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.002595104);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.002301708);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.002321132);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.002262359);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.002139978);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(14,0.002076083);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.00191874);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.001695115);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(17,0.001437104);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(18,0.001527956);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.001405515);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.001557062);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.001198627);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(22,0.001271336);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.001038042);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(24,0.001340106);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(25,0.0008989704);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(26,0.0007340063);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(27,0.0008475574);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(28,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(3484);

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
   
   TH1D *VbbHcc_both_Z_dR_Bj1__493 = new TH1D("VbbHcc_both_Z_dR_Bj1__493","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(1,118784);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(2,504982);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(3,456606);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(4,339808);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(5,264970);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(6,210225);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(7,170749);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(8,141897);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(9,122593);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(10,108452);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(11,97783);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(12,89028);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(13,80888);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(14,72034);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(15,64143);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(16,56877);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(17,47078);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(18,39828);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(19,34356);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(20,29188);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(21,24514);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(22,20405);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(23,16647);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(24,13611);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(25,10367);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(26,7613);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(27,5181);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(28,3173);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(29,2080);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(30,1182);
   VbbHcc_both_Z_dR_Bj1__493->SetBinContent(31,2132);
   VbbHcc_both_Z_dR_Bj1__493->SetEntries(3157203);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__493->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__493->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__493->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__493->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__493->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__493->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__493->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__493->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__493->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__493->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__493->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__493->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__493->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__493->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__493->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__493->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__493->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__493->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__493->Draw("same E");
   
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
   101414.2,
   362850,
   308525.9,
   233382.3,
   179256.5,
   139712.8,
   110901.3,
   91074.45,
   81961.24,
   71500.59,
   65640.23,
   58727.34,
   52936.73,
   50548.3,
   41805.38,
   39213.35,
   29137.49,
   25614.01,
   25475.09,
   18093.38,
   14821.87,
   11302.04,
   12241.74,
   7290.52,
   8193.248,
   5251.219,
   4085.838,
   2382.643,
   1132.729,
   896.787};
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
   2187.031,
   6230.631,
   5802.763,
   5716.252,
   4919.403,
   4925.563,
   3962.701,
   3068.063,
   3433.94,
   3120.943,
   2593.314,
   2389.313,
   2300.553,
   3241.26,
   2115.443,
   3004.536,
   1724.286,
   2208.48,
   1875.737,
   1351.193,
   1205.422,
   916.0813,
   1326.266,
   743.3013,
   1877.219,
   727.8789,
   714.8072,
   508.6689,
   129.5211,
   354.6939};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1493,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1493);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetMinimum(487.8838);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11493->SetMaximum(405934.5);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
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
   
   TH1D *data_mc_ratio__494 = new TH1D("data_mc_ratio__494","",30,0,6);
   data_mc_ratio__494->SetBinContent(1,1.171275);
   data_mc_ratio__494->SetBinContent(2,1.39171);
   data_mc_ratio__494->SetBinContent(3,1.47996);
   data_mc_ratio__494->SetBinContent(4,1.456014);
   data_mc_ratio__494->SetBinContent(5,1.478161);
   data_mc_ratio__494->SetBinContent(6,1.504694);
   data_mc_ratio__494->SetBinContent(7,1.539648);
   data_mc_ratio__494->SetBinContent(8,1.558033);
   data_mc_ratio__494->SetBinContent(9,1.495744);
   data_mc_ratio__494->SetBinContent(10,1.516799);
   data_mc_ratio__494->SetBinContent(11,1.489681);
   data_mc_ratio__494->SetBinContent(12,1.515955);
   data_mc_ratio__494->SetBinContent(13,1.528013);
   data_mc_ratio__494->SetBinContent(14,1.425053);
   data_mc_ratio__494->SetBinContent(15,1.534324);
   data_mc_ratio__494->SetBinContent(16,1.45045);
   data_mc_ratio__494->SetBinContent(17,1.615719);
   data_mc_ratio__494->SetBinContent(18,1.55493);
   data_mc_ratio__494->SetBinContent(19,1.348612);
   data_mc_ratio__494->SetBinContent(20,1.613187);
   data_mc_ratio__494->SetBinContent(21,1.653908);
   data_mc_ratio__494->SetBinContent(22,1.805426);
   data_mc_ratio__494->SetBinContent(23,1.359855);
   data_mc_ratio__494->SetBinContent(24,1.866945);
   data_mc_ratio__494->SetBinContent(25,1.26531);
   data_mc_ratio__494->SetBinContent(26,1.449759);
   data_mc_ratio__494->SetBinContent(27,1.268038);
   data_mc_ratio__494->SetBinContent(28,1.331715);
   data_mc_ratio__494->SetBinContent(29,1.836273);
   data_mc_ratio__494->SetBinContent(30,1.318039);
   data_mc_ratio__494->SetBinContent(31,2.275073);
   data_mc_ratio__494->SetBinError(1,0.003398443);
   data_mc_ratio__494->SetBinError(2,0.001958442);
   data_mc_ratio__494->SetBinError(3,0.002190177);
   data_mc_ratio__494->SetBinError(4,0.002497749);
   data_mc_ratio__494->SetBinError(5,0.002871597);
   data_mc_ratio__494->SetBinError(6,0.003281753);
   data_mc_ratio__494->SetBinError(7,0.003725996);
   data_mc_ratio__494->SetBinError(8,0.004136091);
   data_mc_ratio__494->SetBinError(9,0.004271932);
   data_mc_ratio__494->SetBinError(10,0.004605843);
   data_mc_ratio__494->SetBinError(11,0.004763888);
   data_mc_ratio__494->SetBinError(12,0.005080693);
   data_mc_ratio__494->SetBinError(13,0.005372605);
   data_mc_ratio__494->SetBinError(14,0.005309605);
   data_mc_ratio__494->SetBinError(15,0.006058184);
   data_mc_ratio__494->SetBinError(16,0.006081831);
   data_mc_ratio__494->SetBinError(17,0.00744658);
   data_mc_ratio__494->SetBinError(18,0.007791422);
   data_mc_ratio__494->SetBinError(19,0.007275881);
   data_mc_ratio__494->SetBinError(20,0.009442401);
   data_mc_ratio__494->SetBinError(21,0.01056341);
   data_mc_ratio__494->SetBinError(22,0.01263896);
   data_mc_ratio__494->SetBinError(23,0.01053961);
   data_mc_ratio__494->SetBinError(24,0.01600245);
   data_mc_ratio__494->SetBinError(25,0.01242712);
   data_mc_ratio__494->SetBinError(26,0.01661567);
   data_mc_ratio__494->SetBinError(27,0.01761674);
   data_mc_ratio__494->SetBinError(28,0.02364156);
   data_mc_ratio__494->SetBinError(29,0.04026295);
   data_mc_ratio__494->SetBinError(30,0.03833712);
   data_mc_ratio__494->SetBinError(31,0.8601676);
   data_mc_ratio__494->SetMinimum(0.4);
   data_mc_ratio__494->SetMaximum(1.6);
   data_mc_ratio__494->SetEntries(2559.244);
   data_mc_ratio__494->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__494->SetLineColor(ci);
   data_mc_ratio__494->SetLineWidth(2);
   data_mc_ratio__494->SetMarkerStyle(20);
   data_mc_ratio__494->SetMarkerSize(1.2);
   data_mc_ratio__494->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__494->GetXaxis()->SetRange(1,30);
   data_mc_ratio__494->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__494->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__494->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__494->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__494->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__494->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__494->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__494->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__494->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__494->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__494->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__494->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__494->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__494->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__494->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__494->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__494->Draw("E1");
   
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
   0.02156532,
   0.01717137,
   0.01880802,
   0.02449308,
   0.02744338,
   0.03525491,
   0.03573178,
   0.03368742,
   0.04189712,
   0.04364919,
   0.03950799,
   0.04068484,
   0.04345854,
   0.06412205,
   0.05060218,
   0.07662024,
   0.05917757,
   0.08622158,
   0.07363026,
   0.07467885,
   0.08132726,
   0.08105449,
   0.1083396,
   0.1019545,
   0.2291178,
   0.1386114,
   0.1749475,
   0.2134894,
   0.1143443,
   0.3955163};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1494,Graph_from_mc_statistical_error_fy1494,Graph_from_mc_statistical_error_fex1494,Graph_from_mc_statistical_error_fey1494);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1494 = new TH1F("Graph_Graph_from_mc_statistical_error1494","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1494->SetMinimum(0.5253804);
   Graph_Graph_from_mc_statistical_error1494->SetMaximum(1.47462);
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
