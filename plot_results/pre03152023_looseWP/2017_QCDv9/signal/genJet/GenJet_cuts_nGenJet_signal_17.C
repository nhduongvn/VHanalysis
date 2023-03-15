#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenJet_signal_17()
{
//=========Macro generated from canvas: GenJet_cuts_nGenJet_signal_17/GenJet_cuts_nGenJet_signal_17
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenJet_signal_17 = new TCanvas("GenJet_cuts_nGenJet_signal_17", "GenJet_cuts_nGenJet_signal_17",0,0,600,600);
   GenJet_cuts_nGenJet_signal_17->SetHighLightColor(2);
   GenJet_cuts_nGenJet_signal_17->Range(-4.867058,-54.34877,22.93266,398.5577);
   GenJet_cuts_nGenJet_signal_17->SetFillColor(0);
   GenJet_cuts_nGenJet_signal_17->SetFillStyle(4000);
   GenJet_cuts_nGenJet_signal_17->SetBorderMode(0);
   GenJet_cuts_nGenJet_signal_17->SetBorderSize(2);
   GenJet_cuts_nGenJet_signal_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenJet_signal_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenJet_signal_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenJet_signal_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_signal_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenJet_signal_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(353.267);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",20,-0.5,19.5);
   st_stack_75->SetMinimum(0);
   st_stack_75->SetMaximum(353.267);
   st_stack_75->SetDirectory(0);
   st_stack_75->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_75->SetLineColor(ci);
   st_stack_75->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_75->GetXaxis()->SetLabelFont(42);
   st_stack_75->GetXaxis()->SetTitleOffset(1);
   st_stack_75->GetXaxis()->SetTitleFont(42);
   st_stack_75->GetYaxis()->SetTitle("Event/1.0");
   st_stack_75->GetYaxis()->SetLabelFont(42);
   st_stack_75->GetYaxis()->SetTitleSize(0.037);
   st_stack_75->GetYaxis()->SetTitleFont(42);
   st_stack_75->GetZaxis()->SetLabelFont(42);
   st_stack_75->GetZaxis()->SetTitleOffset(1);
   st_stack_75->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_75);
   
   
   TH1D *GenJet_cuts_nGenJet_stack_1 = new TH1D("GenJet_cuts_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(1,91.13404);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(2,169.9086);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(3,267.2628);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(4,181.8454);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(5,80.68763);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(6,21.83816);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(7,5.694743);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(8,1.324693);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(9,0.3498828);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(10,0.04086889);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(11,0.009845233);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(12,0.002932423);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(13,0.001565226);
   GenJet_cuts_nGenJet_stack_1->SetBinError(1,0.4337638);
   GenJet_cuts_nGenJet_stack_1->SetBinError(2,0.5780927);
   GenJet_cuts_nGenJet_stack_1->SetBinError(3,0.7206381);
   GenJet_cuts_nGenJet_stack_1->SetBinError(4,0.5897587);
   GenJet_cuts_nGenJet_stack_1->SetBinError(5,0.3904156);
   GenJet_cuts_nGenJet_stack_1->SetBinError(6,0.200127);
   GenJet_cuts_nGenJet_stack_1->SetBinError(7,0.1017679);
   GenJet_cuts_nGenJet_stack_1->SetBinError(8,0.04879068);
   GenJet_cuts_nGenJet_stack_1->SetBinError(9,0.02488265);
   GenJet_cuts_nGenJet_stack_1->SetBinError(10,0.008300369);
   GenJet_cuts_nGenJet_stack_1->SetBinError(11,0.003887715);
   GenJet_cuts_nGenJet_stack_1->SetBinError(12,0.002202426);
   GenJet_cuts_nGenJet_stack_1->SetBinError(13,0.001565226);
   GenJet_cuts_nGenJet_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenJet_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_1,"");
   
   TH1D *GenJet_cuts_nGenJet_stack_2 = new TH1D("GenJet_cuts_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(1,1.298668);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(2,6.893457);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(3,25.94885);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(4,36.47603);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(5,27.78719);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(6,11.29902);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(7,3.151782);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(8,0.6819383);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(9,0.1293636);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(10,0.0217562);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(11,0.004289974);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(12,0.0005515153);
   GenJet_cuts_nGenJet_stack_2->SetBinError(1,0.01755797);
   GenJet_cuts_nGenJet_stack_2->SetBinError(2,0.04024245);
   GenJet_cuts_nGenJet_stack_2->SetBinError(3,0.07890142);
   GenJet_cuts_nGenJet_stack_2->SetBinError(4,0.09372835);
   GenJet_cuts_nGenJet_stack_2->SetBinError(5,0.08185932);
   GenJet_cuts_nGenJet_stack_2->SetBinError(6,0.05211744);
   GenJet_cuts_nGenJet_stack_2->SetBinError(7,0.0274962);
   GenJet_cuts_nGenJet_stack_2->SetBinError(8,0.01271841);
   GenJet_cuts_nGenJet_stack_2->SetBinError(9,0.0055775);
   GenJet_cuts_nGenJet_stack_2->SetBinError(10,0.002229278);
   GenJet_cuts_nGenJet_stack_2->SetBinError(11,0.001003932);
   GenJet_cuts_nGenJet_stack_2->SetBinError(12,0.0003924394);
   GenJet_cuts_nGenJet_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenJet_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenJet_signal_17->Modified();
   GenJet_cuts_nGenJet_signal_17->cd();
   GenJet_cuts_nGenJet_signal_17->SetSelected(GenJet_cuts_nGenJet_signal_17);
}
