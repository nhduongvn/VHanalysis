#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Mar  9 13:18:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-990863.7,1.171633,7266334);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6440614);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(0);
   st_stack_191->SetMaximum(6440614);
   st_stack_191->SetDirectory(0);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->GetXaxis()->SetTitle("Aplanarity");
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Event/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetTitleSize(0.037);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,4882623);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,2272248);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,1278472);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,634059.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,354993);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,234378.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,198924.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,109587.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,72399.39);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,43155.23);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,33070);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,49693.58);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,18517.04);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,8915.259);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,7950.112);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,1967.184);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,1465.306);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,1036.238);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,1129.951);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,21.20851);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,42.55708);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,97841.17);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,73680.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,72646.58);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,36335.08);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,15057.45);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,13335.67);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,33941.05);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,10110.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,7341.475);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,6374.176);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,5174.353);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,24126.85);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,4376.357);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,2553.799);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,2897.996);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,682.3606);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,634.9119);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,519.3785);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,654.1383);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,16.04866);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,42.55708);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(271342);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.1713334);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,463086.7);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,335106.6);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,225417.7);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,154795.8);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,108741.6);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,77727.9);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,56135.34);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,40728.02);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,29614.82);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,21382.49);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,15401.19);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,10902.61);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,7686.191);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,5273.496);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,3566.005);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,2314.097);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,1467.324);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,852.7975);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,474.8168);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,241.1526);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,104.3302);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,38.4241);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,10.16659);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,1.348055);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(25,0.1221601);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.105079);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,199.5646);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,168.4419);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,138.585);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,114.932);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,96.43011);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,81.61277);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,69.94378);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,58.66127);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,50.26782);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,42.56005);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,36.24692);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,30.00533);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,25.87191);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,21.71394);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,18.32052);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,14.1419);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,11.53871);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,8.374256);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,6.863078);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,4.576309);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,2.905452);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,1.711561);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.8948455);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.3172159);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(25,0.08769208);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(2.286567e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
