#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_VbbHcc_nGenJet_signal_18()
{
//=========Macro generated from canvas: GenJet_VbbHcc_nGenJet_signal_18/GenJet_VbbHcc_nGenJet_signal_18
//=========  (Thu Mar  9 15:52:38 2023) by ROOT version 6.26/06
   TCanvas *GenJet_VbbHcc_nGenJet_signal_18 = new TCanvas("GenJet_VbbHcc_nGenJet_signal_18", "GenJet_VbbHcc_nGenJet_signal_18",0,0,600,600);
   GenJet_VbbHcc_nGenJet_signal_18->SetHighLightColor(2);
   GenJet_VbbHcc_nGenJet_signal_18->Range(-4.867058,-12.28932,22.93266,90.12165);
   GenJet_VbbHcc_nGenJet_signal_18->SetFillColor(0);
   GenJet_VbbHcc_nGenJet_signal_18->SetFillStyle(4000);
   GenJet_VbbHcc_nGenJet_signal_18->SetBorderMode(0);
   GenJet_VbbHcc_nGenJet_signal_18->SetBorderSize(2);
   GenJet_VbbHcc_nGenJet_signal_18->SetLeftMargin(0.15709);
   GenJet_VbbHcc_nGenJet_signal_18->SetRightMargin(0.1234783);
   GenJet_VbbHcc_nGenJet_signal_18->SetBottomMargin(0.12);
   GenJet_VbbHcc_nGenJet_signal_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenJet_signal_18->SetFrameBorderMode(0);
   GenJet_VbbHcc_nGenJet_signal_18->SetFrameFillStyle(1000);
   GenJet_VbbHcc_nGenJet_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(79.88055);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",20,-0.5,19.5);
   st_stack_149->SetMinimum(0);
   st_stack_149->SetMaximum(79.88055);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetTitleOffset(1);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Event/1.0");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetTitleSize(0.037);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetTitleOffset(1);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *GenJet_VbbHcc_nGenJet_stack_1 = new TH1D("GenJet_VbbHcc_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(2,0.01335493);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(3,0.8076316);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(4,11.38478);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(5,47.49372);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(6,60.43673);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(7,52.16937);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(8,37.49002);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(9,24.27028);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(10,14.21126);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(11,7.952135);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(12,4.181345);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(13,2.14117);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(14,1.089521);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(15,0.5185319);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(16,0.2753635);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(17,0.09769599);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(18,0.04164194);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(19,0.02161866);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(20,0.005541029);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinContent(21,0.007412732);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(2,0.005804148);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(3,0.05011031);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(4,0.1966408);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(5,0.3955623);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(6,0.4532999);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(7,0.3988266);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(8,0.3432912);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(9,0.2715522);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(10,0.2087626);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(11,0.1501055);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(12,0.1125569);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(13,0.1299499);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(14,0.06692444);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(15,0.03713199);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(16,0.02757693);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(17,0.01586529);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(18,0.01152724);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(19,0.007090927);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(20,0.003927091);
   GenJet_VbbHcc_nGenJet_stack_1->SetBinError(21,0.005316941);
   GenJet_VbbHcc_nGenJet_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   GenJet_VbbHcc_nGenJet_stack_1->SetFillColor(ci);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenJet_stack_1,"");
   
   TH1D *GenJet_VbbHcc_nGenJet_stack_2 = new TH1D("GenJet_VbbHcc_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(3,0.01419136);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(4,0.3116026);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(5,2.508596);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(6,5.864126);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(7,7.776582);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(8,7.229279);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(9,5.473987);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(10,3.505464);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(11,2.052311);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(12,1.088725);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(13,0.5695093);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(14,0.2719643);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(15,0.105838);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(16,0.05192834);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(17,0.02253943);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(18,0.01155801);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(19,0.003901535);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(20,0.002538313);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinContent(21,0.0008597654);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(3,0.00222808);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(4,0.01076292);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(5,0.03209368);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(6,0.04761661);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(7,0.05658348);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(8,0.05412895);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(9,0.04725941);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(10,0.04126282);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(11,0.03194323);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(12,0.02064314);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(13,0.01503711);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(14,0.01026869);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(15,0.006203061);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(16,0.004279929);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(17,0.002810584);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(18,0.001964172);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(19,0.001146528);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(20,0.0009712631);
   GenJet_VbbHcc_nGenJet_stack_2->SetBinError(21,0.0006081093);
   GenJet_VbbHcc_nGenJet_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   GenJet_VbbHcc_nGenJet_stack_2->SetFillColor(ci);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_VbbHcc_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_VbbHcc_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_VbbHcc_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_VbbHcc_nGenJet_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_VbbHcc_nGenJet_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   GenJet_VbbHcc_nGenJet_signal_18->Modified();
   GenJet_VbbHcc_nGenJet_signal_18->cd();
   GenJet_VbbHcc_nGenJet_signal_18->SetSelected(GenJet_VbbHcc_nGenJet_signal_18);
}
