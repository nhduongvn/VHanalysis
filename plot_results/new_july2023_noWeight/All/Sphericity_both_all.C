void Sphericity_both_all()
{
//=========Macro generated from canvas: Sphericity_both_all/Sphericity_both_all
//=========  (Thu Aug  3 10:21:55 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_all = new TCanvas("Sphericity_both_all", "Sphericity_both_all",0,0,600,600);
   Sphericity_both_all->SetHighLightColor(2);
   Sphericity_both_all->Range(0,0,1,1);
   Sphericity_both_all->SetFillColor(0);
   Sphericity_both_all->SetFillStyle(4000);
   Sphericity_both_all->SetBorderMode(0);
   Sphericity_both_all->SetBorderSize(2);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-303.6058,1.052419,303602.2);
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
   st->SetMaximum(260201.6);
   
   TH1F *st_stack_252 = new TH1F("st_stack_252","",25,0,1);
   st_stack_252->SetMinimum(0.3);
   st_stack_252->SetMaximum(273211.6);
   st_stack_252->SetDirectory(0);
   st_stack_252->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_252->SetLineColor(ci);
   st_stack_252->GetXaxis()->SetRange(1,25);
   st_stack_252->GetXaxis()->SetLabelFont(42);
   st_stack_252->GetXaxis()->SetLabelSize(0.035);
   st_stack_252->GetXaxis()->SetTitleSize(0.035);
   st_stack_252->GetXaxis()->SetTitleFont(42);
   st_stack_252->GetYaxis()->SetTitle("Events/0.04");
   st_stack_252->GetYaxis()->SetLabelFont(42);
   st_stack_252->GetYaxis()->SetLabelSize(0.05);
   st_stack_252->GetYaxis()->SetTitleSize(0.057);
   st_stack_252->GetYaxis()->SetTitleOffset(1.2);
   st_stack_252->GetYaxis()->SetTitleFont(42);
   st_stack_252->GetZaxis()->SetLabelFont(42);
   st_stack_252->GetZaxis()->SetLabelSize(0.035);
   st_stack_252->GetZaxis()->SetTitleSize(0.035);
   st_stack_252->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_252);
   
   
   TH1D *VbbHcc_both_Sphericity_all_stack_1 = new TH1D("VbbHcc_both_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(1,88834.1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(2,103786.9);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(3,76014.37);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(4,66080.86);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(5,46563.68);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(6,37835.67);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(7,33049.42);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(8,18230.28);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(9,49904.75);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(10,19184.41);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(11,13334.09);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(12,13848.36);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(13,9408.605);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(14,7335.536);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(15,7901.362);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(16,4916.309);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(17,4757.953);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(18,2990.357);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(19,1324.14);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(20,953.9872);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(21,521.5286);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(22,121.1596);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(23,290.3847);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(1,3720.746);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(2,4973.624);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(3,4442.653);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(4,4520.128);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(5,3450.388);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(6,2908.203);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(7,2809.184);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(8,1508.77);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(9,21030.82);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(10,2577.41);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(11,1455.464);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(12,2512.785);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(13,1251.73);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(14,967.7317);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(15,1749.829);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(16,834.0819);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(17,906.4828);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(18,676.3635);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(19,474.8039);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(20,464.6592);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(21,373.5331);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(22,48.50875);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(23,269.2187);
   VbbHcc_both_Sphericity_all_stack_1->SetEntries(31751);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_2 = new TH1D("VbbHcc_both_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(1,555.7602);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(2,558.374);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(3,427.3476);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(4,314.8519);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(5,243.5763);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(6,191.8202);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(7,163.4508);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(8,143.5072);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(9,119.0015);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(10,100.787);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(11,78.90482);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(12,73.96949);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(13,66.94104);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(14,50.5866);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(15,43.41777);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(16,32.65872);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(17,23.80889);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(18,20.49747);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(19,8.98492);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(20,4.671276);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(21,1.330962);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(22,0.4143735);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(23,0.1394587);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(25,0.05476569);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(1,9.421554);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(2,9.224892);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(3,8.260174);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(4,7.112134);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(5,6.304474);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(6,5.584273);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(7,5.238948);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(8,4.969463);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(9,4.41843);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(10,4.082795);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(11,3.61529);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(12,3.576134);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(13,3.480054);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(14,2.880806);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(15,2.815678);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(16,2.391562);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(17,2.000549);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(18,1.882679);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(19,1.189964);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(20,0.9162226);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(21,0.5085122);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(22,0.2767317);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(23,0.08059379);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(25,0.05476569);
   VbbHcc_both_Sphericity_all_stack_2->SetEntries(38814);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_3 = new TH1D("VbbHcc_both_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(1,10009.47);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(2,11163.9);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(3,8318.942);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(4,6296.888);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(5,4911.045);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(6,3906.437);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(7,3249.864);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(8,2692.114);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(9,2277.214);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(10,1917.15);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(11,1651.287);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(12,1406.054);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(13,1203.975);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(14,998.2296);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(15,835.5253);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(16,676.3712);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(17,515.7182);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(18,364.9105);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(19,220.8803);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(20,107.5014);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(21,38.5342);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(22,15.10825);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(23,3.412997);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(24,0.3336044);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(25,0.06964491);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(1,24.95699);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(2,26.36894);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(3,22.77329);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(4,19.81359);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(5,17.49261);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(6,15.60958);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(7,14.24211);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(8,12.9612);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(9,11.92325);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(10,10.94904);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(11,10.16282);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(12,9.374964);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(13,8.667472);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(14,7.90207);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(15,7.23369);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(16,6.505775);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(17,5.681401);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(18,4.77667);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(19,3.71781);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(20,2.593123);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(21,1.548034);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(22,0.9723289);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(23,0.4605835);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(24,0.1283563);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(25,0.06964491);
   VbbHcc_both_Sphericity_all_stack_3->SetEntries(1047064);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_4 = new TH1D("VbbHcc_both_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(1,1338.561);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(2,1383.48);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(3,996.6457);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(4,810.3469);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(5,613.4641);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(6,493.5743);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(7,408.256);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(8,323.7105);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(9,289.4207);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(10,246.9335);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(11,208.9392);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(12,164.6173);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(13,151.0903);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(14,137.2738);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(15,98.34372);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(16,78.33825);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(17,66.43243);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(18,38.42579);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(19,24.69741);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(20,14.62758);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(21,4.605066);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(22,1.047121);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(23,0.06630981);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(1,25.49061);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(2,27.20061);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(3,22.73483);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(4,21.58298);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(5,17.01757);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(6,15.24631);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(7,13.98709);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(8,11.57222);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(9,12.23441);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(10,11.76138);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(11,10.84454);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(12,8.211248);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(13,7.840694);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(14,9.285244);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(15,6.498785);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(16,4.91615);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(17,5.359235);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(18,3.942662);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(19,3.483676);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(20,3.248615);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(21,1.183941);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(22,0.4437862);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(23,0.06630981);
   VbbHcc_both_Sphericity_all_stack_4->SetEntries(52623);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_5 = new TH1D("VbbHcc_both_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(1,147.9537);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(2,132.9713);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(3,114.3134);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(4,67.14297);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(5,64.0397);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(6,54.15905);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(7,39.41288);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(8,43.51502);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(9,32.2571);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(10,25.74978);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(11,21.48959);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(12,14.32722);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(13,10.49453);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(14,8.527357);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(15,11.72249);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(16,7.542688);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(17,6.663814);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(18,4.626769);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(19,1.681999);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(20,0.4790962);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(21,0.01288417);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(22,0.1265664);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(1,10.14093);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(2,13.29592);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(3,8.63936);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(4,4.972694);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(5,6.200851);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(6,5.756889);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(7,4.708639);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(8,7.135624);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(9,7.641366);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(10,6.382136);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(11,3.175114);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(12,2.488944);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(13,1.178109);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(14,1.145851);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(15,2.563118);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(16,1.476543);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(17,2.216072);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(18,2.177689);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(19,0.5519757);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(20,0.3001464);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(21,0.0122488);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(22,0.1265664);
   VbbHcc_both_Sphericity_all_stack_5->SetEntries(8810);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_6 = new TH1D("VbbHcc_both_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(1,0.1343693);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(2,1.170456);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(4,1.170456);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(5,1.353761);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(7,0.4496752);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(12,0.4496752);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(13,0.4520427);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(1,0.1343693);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(2,0.5982689);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(4,0.5982689);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(5,0.7253675);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(6,0.1343693);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(7,0.3427432);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(12,0.3427432);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(13,0.4520427);
   VbbHcc_both_Sphericity_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_7 = new TH1D("VbbHcc_both_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(1,0.5452932);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(2,1.857935);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(3,0.8724691);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(4,1.312642);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(5,1.546567);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(6,0.4362346);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(7,0.8605991);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(8,0.2181173);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(10,0.4362346);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(11,0.1090586);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(12,0.4243645);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(13,0.4520427);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(14,0.2181173);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(15,0.1090586);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(1,0.2438625);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(2,0.6501525);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(3,0.3084644);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(4,0.6026851);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(5,0.7374173);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(6,0.2181173);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(7,0.398606);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(8,0.1542322);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(9,0.1090586);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(10,0.2181173);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(11,0.1090586);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(12,0.3336339);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(13,0.4520427);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(14,0.1542322);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(15,0.1090586);
   VbbHcc_both_Sphericity_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_8 = new TH1D("VbbHcc_both_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(1,25.24977);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(2,25.86642);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(3,16.92017);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(4,16.74937);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(5,13.44285);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(6,8.984525);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(7,9.123202);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(8,9.599598);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(9,5.460985);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(10,5.75657);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(11,3.636028);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(12,4.313272);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(13,2.301353);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(14,2.33756);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(15,0.53264);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(16,1.883486);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(17,0.7758471);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(20,0.5226215);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(1,2.568827);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(2,2.604194);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(3,2.102682);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(4,2.09761);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(5,1.885558);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(6,1.521241);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(7,1.544624);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(8,1.580883);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(9,1.193456);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(10,1.229384);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(11,0.9734356);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(12,1.047439);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(13,0.768171);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(14,0.7803906);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(15,0.3770883);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(16,0.713205);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(17,0.4487152);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(18,0.2432072);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(19,0.2794144);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(20,0.370435);
   VbbHcc_both_Sphericity_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_9 = new TH1D("VbbHcc_both_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(1,23.01848);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(2,24.82004);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(3,18.00997);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(4,14.90532);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(5,12.31854);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(6,10.32668);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(7,8.566259);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(8,7.110218);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(9,6.253899);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(10,5.155483);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(11,4.332997);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(12,3.667022);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(13,3.011556);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(14,2.510673);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(15,2.120407);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(16,1.592669);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(17,1.18535);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(18,0.8316893);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(19,0.448153);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(20,0.1920696);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(21,0.07200398);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(22,0.01400088);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(23,0.001373951);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(1,0.2062815);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(2,0.2131392);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(3,0.1816826);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(4,0.1657035);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(5,0.1501803);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(6,0.1376199);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(7,0.1253601);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(8,0.114409);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(9,0.1068001);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(10,0.09702957);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(11,0.08904115);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(12,0.08150689);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(13,0.07438688);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(14,0.0672737);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(15,0.06217685);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(16,0.05412699);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(17,0.04610739);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(18,0.03893563);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(19,0.02814003);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(20,0.01846851);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(21,0.01124859);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(22,0.004742288);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(23,0.001373951);
   VbbHcc_both_Sphericity_all_stack_9->SetEntries(85972);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_10 = new TH1D("VbbHcc_both_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(1,10.26065);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(2,11.25304);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(3,8.26902);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(4,6.393741);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(5,5.624467);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(6,4.493824);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(7,3.740975);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(8,3.294741);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(9,2.777328);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(10,2.436493);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(11,2.091551);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(12,1.773986);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(13,1.498854);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(14,1.337334);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(15,1.049882);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(16,0.8828866);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(17,0.6091233);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(18,0.4653976);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(19,0.2888203);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(20,0.1300376);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(21,0.02874514);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(22,0.009581715);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(23,0.004106449);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(1,0.07009727);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(2,0.07340888);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(3,0.06292753);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(4,0.05533389);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(5,0.05189845);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(6,0.04638972);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(7,0.04232589);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(8,0.03972138);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(9,0.03646929);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(10,0.0341583);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(11,0.03164812);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(12,0.02914666);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(13,0.02679127);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(14,0.02530659);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(15,0.0224225);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(16,0.02056204);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(17,0.01707915);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(18,0.01492883);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(19,0.01176055);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(20,0.007891292);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(21,0.003710188);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(22,0.002142078);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(23,0.001402319);
   VbbHcc_both_Sphericity_all_stack_10->SetEntries(150600);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_11 = new TH1D("VbbHcc_both_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(1,0.07814);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(2,0.07447322);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(3,0.05337664);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(4,0.04542117);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(5,0.0308481);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(6,0.03404236);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(7,0.02313608);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(8,0.01087253);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(9,0.0170043);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(10,0.02089407);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(11,0.01703805);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(12,0.007475761);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(13,0.00589551);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(14,0.008866782);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(1,0.01313352);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(2,0.01272581);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(3,0.01098576);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(4,0.009853283);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(5,0.007836472);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(6,0.008437519);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(7,0.006786583);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(8,0.00451076);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(9,0.005762147);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(10,0.006757638);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(11,0.006163553);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(12,0.003869347);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(13,0.003531947);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(14,0.004509506);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(15,0.001580251);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(17,0.003218413);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(18,0.002275762);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Sphericity_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_12 = new TH1D("VbbHcc_both_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(1,0.0370374);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(2,0.03241605);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(3,0.02204138);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(4,0.02020703);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(5,0.02031131);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(6,0.01264645);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(7,0.01138987);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(8,0.01028296);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(9,0.01043229);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(10,0.00700895);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(11,0.006824175);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(12,0.005602718);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(13,0.00378161);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(14,0.004715022);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(15,0.002570418);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(16,0.002144268);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(17,0.002063155);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(1,0.003260757);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(2,0.003038105);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(3,0.002486557);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(4,0.002425531);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(5,0.00242894);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(6,0.00186335);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(7,0.001776045);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(8,0.001709134);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(9,0.001756405);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(10,0.001404419);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(11,0.001427435);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(12,0.001253043);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(13,0.001001177);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(14,0.00113163);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(15,0.0008675277);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(16,0.0007792731);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(17,0.0007872166);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_both_Sphericity_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity_all__503 = new TH1D("VbbHcc_both_Sphericity_all__503","",25,0,1);
   VbbHcc_both_Sphericity_all__503->SetBinContent(1,86726);
   VbbHcc_both_Sphericity_all__503->SetBinContent(2,88307);
   VbbHcc_both_Sphericity_all__503->SetBinContent(3,65855);
   VbbHcc_both_Sphericity_all__503->SetBinContent(4,49736);
   VbbHcc_both_Sphericity_all__503->SetBinContent(5,39070);
   VbbHcc_both_Sphericity_all__503->SetBinContent(6,31358);
   VbbHcc_both_Sphericity_all__503->SetBinContent(7,25794);
   VbbHcc_both_Sphericity_all__503->SetBinContent(8,21281);
   VbbHcc_both_Sphericity_all__503->SetBinContent(9,17658);
   VbbHcc_both_Sphericity_all__503->SetBinContent(10,14824);
   VbbHcc_both_Sphericity_all__503->SetBinContent(11,12724);
   VbbHcc_both_Sphericity_all__503->SetBinContent(12,10823);
   VbbHcc_both_Sphericity_all__503->SetBinContent(13,9329);
   VbbHcc_both_Sphericity_all__503->SetBinContent(14,7462);
   VbbHcc_both_Sphericity_all__503->SetBinContent(15,6288);
   VbbHcc_both_Sphericity_all__503->SetBinContent(16,4798);
   VbbHcc_both_Sphericity_all__503->SetBinContent(17,3827);
   VbbHcc_both_Sphericity_all__503->SetBinContent(18,2766);
   VbbHcc_both_Sphericity_all__503->SetBinContent(19,1548);
   VbbHcc_both_Sphericity_all__503->SetBinContent(20,639);
   VbbHcc_both_Sphericity_all__503->SetBinContent(21,242);
   VbbHcc_both_Sphericity_all__503->SetBinContent(22,78);
   VbbHcc_both_Sphericity_all__503->SetBinContent(23,27);
   VbbHcc_both_Sphericity_all__503->SetBinContent(24,4);
   VbbHcc_both_Sphericity_all__503->SetBinContent(25,1);
   VbbHcc_both_Sphericity_all__503->SetEntries(501189);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all__503->SetLineColor(ci);
   VbbHcc_both_Sphericity_all__503->SetLineWidth(2);
   VbbHcc_both_Sphericity_all__503->SetMarkerStyle(20);
   VbbHcc_both_Sphericity_all__503->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity_all__503->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all__503->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__503->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__503->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__503->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all__503->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__503->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__503->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__503->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__503->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fx1503[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fy1503[25] = {
   100945.2,
   117090.7,
   85915.76,
   73610.69,
   52430.14,
   42506.08,
   36933.18,
   21453.37,
   52637.27,
   21488.84,
   15304.9,
   15517.97,
   10848.83,
   8536.57,
   8894.187,
   5715.583,
   5373.153,
   3420.36,
   1581.403,
   1082.111,
   566.1125,
   137.8798,
   294.009,
   0.3336044,
   0.1244106};
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fex1503[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fey1503[25] = {
   3720.944,
   4973.795,
   4442.786,
   4520.232,
   3450.486,
   2908.297,
   2809.264,
   1508.896,
   21030.83,
   2577.472,
   1455.548,
   2512.82,
   1251.79,
   967.8138,
   1749.86,
   834.1268,
   906.5214,
   676.3981,
   474.8331,
   464.679,
   373.5385,
   48.52147,
   269.2191,
   0.1283563,
   0.0885985};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_all_fx1503,Graph_from_VbbHcc_both_Sphericity_all_fy1503,Graph_from_VbbHcc_both_Sphericity_all_fex1503,Graph_from_VbbHcc_both_Sphericity_all_fey1503);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity_all1503 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity_all1503","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetMinimum(0.03223089);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetMaximum(134270.9);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity_all1503);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity_all","MC unc. (stat.)","fl");

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
   Sphericity_both_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__504 = new TH1D("data_mc_ratio__504","",25,0,1);
   data_mc_ratio__504->SetBinContent(1,0.8591397);
   data_mc_ratio__504->SetBinContent(2,0.754176);
   data_mc_ratio__504->SetBinContent(3,0.7665066);
   data_mc_ratio__504->SetBinContent(4,0.6756628);
   data_mc_ratio__504->SetBinContent(5,0.745182);
   data_mc_ratio__504->SetBinContent(6,0.7377298);
   data_mc_ratio__504->SetBinContent(7,0.6983965);
   data_mc_ratio__504->SetBinContent(8,0.9919655);
   data_mc_ratio__504->SetBinContent(9,0.3354657);
   data_mc_ratio__504->SetBinContent(10,0.6898464);
   data_mc_ratio__504->SetBinContent(11,0.8313677);
   data_mc_ratio__504->SetBinContent(12,0.6974496);
   data_mc_ratio__504->SetBinContent(13,0.8599083);
   data_mc_ratio__504->SetBinContent(14,0.8741215);
   data_mc_ratio__504->SetBinContent(15,0.7069786);
   data_mc_ratio__504->SetBinContent(16,0.8394594);
   data_mc_ratio__504->SetBinContent(17,0.7122447);
   data_mc_ratio__504->SetBinContent(18,0.8086867);
   data_mc_ratio__504->SetBinContent(19,0.9788778);
   data_mc_ratio__504->SetBinContent(20,0.5905123);
   data_mc_ratio__504->SetBinContent(21,0.4274769);
   data_mc_ratio__504->SetBinContent(22,0.5657103);
   data_mc_ratio__504->SetBinContent(23,0.09183393);
   data_mc_ratio__504->SetBinContent(24,11.99025);
   data_mc_ratio__504->SetBinContent(25,8.0379);
   data_mc_ratio__504->SetBinError(1,0.002917354);
   data_mc_ratio__504->SetBinError(2,0.002537904);
   data_mc_ratio__504->SetBinError(3,0.002986906);
   data_mc_ratio__504->SetBinError(4,0.003029665);
   data_mc_ratio__504->SetBinError(5,0.003769994);
   data_mc_ratio__504->SetBinError(6,0.004166037);
   data_mc_ratio__504->SetBinError(7,0.004348532);
   data_mc_ratio__504->SetBinError(8,0.006799869);
   data_mc_ratio__504->SetBinError(9,0.002524512);
   data_mc_ratio__504->SetBinError(10,0.00566591);
   data_mc_ratio__504->SetBinError(11,0.007370235);
   data_mc_ratio__504->SetBinError(12,0.006704078);
   data_mc_ratio__504->SetBinError(13,0.008902963);
   data_mc_ratio__504->SetBinError(14,0.01011915);
   data_mc_ratio__504->SetBinError(15,0.008915588);
   data_mc_ratio__504->SetBinError(16,0.01211908);
   data_mc_ratio__504->SetBinError(17,0.0115133);
   data_mc_ratio__504->SetBinError(18,0.01537638);
   data_mc_ratio__504->SetBinError(19,0.02487958);
   data_mc_ratio__504->SetBinError(20,0.0233603);
   data_mc_ratio__504->SetBinError(21,0.02747926);
   data_mc_ratio__504->SetBinError(22,0.06405408);
   data_mc_ratio__504->SetBinError(23,0.01767345);
   data_mc_ratio__504->SetBinError(24,5.995125);
   data_mc_ratio__504->SetBinError(25,8.0379);
   data_mc_ratio__504->SetMinimum(0.4);
   data_mc_ratio__504->SetMaximum(1.6);
   data_mc_ratio__504->SetEntries(8.483613);
   data_mc_ratio__504->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__504->SetLineColor(ci);
   data_mc_ratio__504->SetLineWidth(2);
   data_mc_ratio__504->SetMarkerStyle(20);
   data_mc_ratio__504->SetMarkerSize(1.2);
   data_mc_ratio__504->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__504->GetXaxis()->SetRange(1,25);
   data_mc_ratio__504->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__504->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__504->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__504->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__504->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__504->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__504->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__504->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__504->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__504->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__504->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__504->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__504->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__504->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__504->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__504->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__504->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1504[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1504[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1504[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1504[25] = {
   0.03686104,
   0.04247814,
   0.05171095,
   0.06140728,
   0.06581112,
   0.06842072,
   0.07606344,
   0.07033377,
   0.3995425,
   0.1199447,
   0.09510339,
   0.1619297,
   0.1153848,
   0.1133727,
   0.196742,
   0.145939,
   0.1687131,
   0.1977564,
   0.3002607,
   0.4294188,
   0.659831,
   0.3519115,
   0.9156833,
   0.384756,
   0.7121459};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1504,Graph_from_mc_statistical_error_fy1504,Graph_from_mc_statistical_error_fex1504,Graph_from_mc_statistical_error_fey1504);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1504 = new TH1F("Graph_Graph_from_mc_statistical_error1504","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1504->SetMinimum(0.07588504);
   Graph_Graph_from_mc_statistical_error1504->SetMaximum(2.09882);
   Graph_Graph_from_mc_statistical_error1504->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1504->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1504->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1504);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->SetSelected(Sphericity_both_all);
}
