#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2183529,-0.05538508,1.171633,0.4061573);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetFillStyle(4000);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15709);
   Sphericity_tags_16->SetRightMargin(0.1234783);
   Sphericity_tags_16->SetBottomMargin(0.12);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_57 = new TH1F("st_stack_57","",25,0,1);
   st_stack_57->SetMinimum(-2.362702e+09);
   st_stack_57->SetMaximum(-0.374738);
   st_stack_57->SetDirectory(0);
   st_stack_57->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_57->SetLineColor(ci);
   st_stack_57->GetXaxis()->SetTitle("Sphericity");
   st_stack_57->GetXaxis()->SetRange(1,25);
   st_stack_57->GetXaxis()->SetLabelFont(42);
   st_stack_57->GetXaxis()->SetTitleOffset(1);
   st_stack_57->GetXaxis()->SetTitleFont(42);
   st_stack_57->GetYaxis()->SetTitle("Event/0.04");
   st_stack_57->GetYaxis()->SetLabelFont(42);
   st_stack_57->GetYaxis()->SetTitleSize(0.037);
   st_stack_57->GetYaxis()->SetTitleFont(42);
   st_stack_57->GetZaxis()->SetLabelFont(42);
   st_stack_57->GetZaxis()->SetTitleOffset(1);
   st_stack_57->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_57);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,0.0248217);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,0.1210534);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,0.1867803);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,0.2386642);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,0.2501271);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,0.2145532);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,0.2161175);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,0.1781983);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,0.1683984);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,0.1693496);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,0.1675763);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,0.10526);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,0.1368728);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,0.1215003);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,0.1182452);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,0.08563422);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,0.07215894);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,0.05698602);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,0.04093705);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,0.01635377);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(22,0.002045021);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,0.006850524);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,0.0154868);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,0.01942265);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,0.02226467);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,0.02275128);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,0.02129975);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,0.02137824);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,0.01931592);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,0.01869811);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,0.018821);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,0.01860591);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,0.01523606);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,0.01672377);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,0.01645842);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,0.01574284);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,0.01365618);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,0.01242037);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,0.01093747);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,0.009144788);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,0.005796862);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(22,0.002045021);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,0.01769801);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,0.05147269);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,0.08029277);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,0.0920095);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,0.09273294);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,0.08823076);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,0.09461506);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,0.09659483);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,0.08659516);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,0.07584036);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,0.07140335);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.05895394);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.05929854);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.03924527);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.0378851);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.03252239);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.02306266);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.02400137);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.007643475);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.005799816);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.001553234);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,0.002124848);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,0.003680822);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,0.004610045);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,0.004957052);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,0.004961889);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,0.004864453);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,0.005041443);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.005110571);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.004842451);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.004520199);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.004396491);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.003982681);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.004007296);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.003252165);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.003168672);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.002968031);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.002469152);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.002543891);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.00145394);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.001267761);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.0006354415);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
