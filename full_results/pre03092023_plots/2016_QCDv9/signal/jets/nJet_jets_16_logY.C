#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_16_logY()
{
//=========Macro generated from canvas: nJet_jets_16/nJet_jets_16
//=========  (Wed Mar  1 13:43:13 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_16 = new TCanvas("nJet_jets_16", "nJet_jets_16",0,0,600,600);
   nJet_jets_16->SetHighLightColor(2);
   nJet_jets_16->Range(-3.556941,-0.04694515,15.90286,5.105376);
   nJet_jets_16->SetFillColor(0);
   nJet_jets_16->SetFillStyle(4000);
   nJet_jets_16->SetBorderMode(0);
   nJet_jets_16->SetBorderSize(2);
   nJet_jets_16->SetLogy();
   nJet_jets_16->SetLeftMargin(0.15709);
   nJet_jets_16->SetRightMargin(0.1234783);
   nJet_jets_16->SetBottomMargin(0.12);
   nJet_jets_16->SetFrameFillStyle(1000);
   nJet_jets_16->SetFrameBorderMode(0);
   nJet_jets_16->SetFrameFillStyle(1000);
   nJet_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(23257.71);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",14,-0.5,13.5);
   st_stack_1->SetMinimum(3.726777);
   st_stack_1->SetMaximum(38917.44);
   st_stack_1->SetDirectory(0);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_1->GetXaxis()->SetRange(1,14);
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetTitleOffset(1);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/1.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetTitleSize(0.037);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,88.152);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,129.8978);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,211.4815);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,150.567);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,66.96637);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,18.29973);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,4.719355);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,1.294162);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,0.2035254);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,0.07920342);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,0.0138774);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,0.5372776);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,0.6394223);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,0.8098867);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,0.6788289);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,0.4500448);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,0.2319821);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,0.1173494);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,0.06137686);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,0.02405632);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,0.01496778);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,0.006214151);
   VbbHcc_jets_nJet_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,1.451402);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,5.679195);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,21.09559);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,29.71072);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,22.58794);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,9.286869);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,2.62216);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,0.5942845);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,0.107255);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,0.01853618);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,0.004142507);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,0.000383191);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,0.02340904);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,0.04612933);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,0.08974597);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,0.106656);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,0.09302336);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,0.0595738);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,0.03160454);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,0.0150504);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,0.006357988);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,0.002626563);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,0.001251535);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,0.000383191);
   VbbHcc_jets_nJet_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","ZHcc","F");

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
   nJet_jets_16->Modified();
   nJet_jets_16->cd();
   nJet_jets_16->SetSelected(nJet_jets_16);
}
