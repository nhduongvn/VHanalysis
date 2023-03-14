#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenL_signal_18()
{
//=========Macro generated from canvas: GenJet_cuts_nGenL_signal_18/GenJet_cuts_nGenL_signal_18
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenL_signal_18 = new TCanvas("GenJet_cuts_nGenL_signal_18", "GenJet_cuts_nGenL_signal_18",0,0,600,600);
   GenJet_cuts_nGenL_signal_18->SetHighLightColor(2);
   GenJet_cuts_nGenL_signal_18->Range(-4.867058,-135.0062,22.93266,990.0458);
   GenJet_cuts_nGenL_signal_18->SetFillColor(0);
   GenJet_cuts_nGenL_signal_18->SetFillStyle(4000);
   GenJet_cuts_nGenL_signal_18->SetBorderMode(0);
   GenJet_cuts_nGenL_signal_18->SetBorderSize(2);
   GenJet_cuts_nGenL_signal_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenL_signal_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenL_signal_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenL_signal_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_signal_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenL_signal_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(877.5406);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",20,-0.5,19.5);
   st_stack_83->SetMinimum(0);
   st_stack_83->SetMaximum(877.5406);
   st_stack_83->SetDirectory(0);
   st_stack_83->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_83->SetLineColor(ci);
   st_stack_83->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_83->GetXaxis()->SetLabelFont(42);
   st_stack_83->GetXaxis()->SetTitleOffset(1);
   st_stack_83->GetXaxis()->SetTitleFont(42);
   st_stack_83->GetYaxis()->SetTitle("Event/1.0");
   st_stack_83->GetYaxis()->SetLabelFont(42);
   st_stack_83->GetYaxis()->SetTitleSize(0.037);
   st_stack_83->GetYaxis()->SetTitleFont(42);
   st_stack_83->GetZaxis()->SetLabelFont(42);
   st_stack_83->GetZaxis()->SetTitleOffset(1);
   st_stack_83->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_83);
   
   
   TH1D *GenJet_cuts_nGenL_stack_1 = new TH1D("GenJet_cuts_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(1,663.06);
   GenJet_cuts_nGenL_stack_1->SetBinContent(2,394.1855);
   GenJet_cuts_nGenL_stack_1->SetBinContent(3,136.9899);
   GenJet_cuts_nGenL_stack_1->SetBinContent(4,17.45482);
   GenJet_cuts_nGenL_stack_1->SetBinContent(5,1.595411);
   GenJet_cuts_nGenL_stack_1->SetBinContent(6,0.1535);
   GenJet_cuts_nGenL_stack_1->SetBinContent(7,0.02520926);
   GenJet_cuts_nGenL_stack_1->SetBinContent(8,0.002461314);
   GenJet_cuts_nGenL_stack_1->SetBinError(1,1.493989);
   GenJet_cuts_nGenL_stack_1->SetBinError(2,1.126456);
   GenJet_cuts_nGenL_stack_1->SetBinError(3,0.6726284);
   GenJet_cuts_nGenL_stack_1->SetBinError(4,0.2232938);
   GenJet_cuts_nGenL_stack_1->SetBinError(5,0.06617547);
   GenJet_cuts_nGenL_stack_1->SetBinError(6,0.02021066);
   GenJet_cuts_nGenL_stack_1->SetBinError(7,0.008225383);
   GenJet_cuts_nGenL_stack_1->SetBinError(8,0.002461314);
   GenJet_cuts_nGenL_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenL_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenL_stack_1,"");
   
   TH1D *GenJet_cuts_nGenL_stack_2 = new TH1D("GenJet_cuts_nGenL_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_2->SetBinContent(1,65.2987);
   GenJet_cuts_nGenL_stack_2->SetBinContent(2,55.87372);
   GenJet_cuts_nGenL_stack_2->SetBinContent(3,39.68475);
   GenJet_cuts_nGenL_stack_2->SetBinContent(4,6.688942);
   GenJet_cuts_nGenL_stack_2->SetBinContent(5,0.6295646);
   GenJet_cuts_nGenL_stack_2->SetBinContent(6,0.04342636);
   GenJet_cuts_nGenL_stack_2->SetBinContent(7,0.004175054);
   GenJet_cuts_nGenL_stack_2->SetBinError(1,0.1621368);
   GenJet_cuts_nGenL_stack_2->SetBinError(2,0.1512115);
   GenJet_cuts_nGenL_stack_2->SetBinError(3,0.1255928);
   GenJet_cuts_nGenL_stack_2->SetBinError(4,0.05169479);
   GenJet_cuts_nGenL_stack_2->SetBinError(5,0.01510189);
   GenJet_cuts_nGenL_stack_2->SetBinError(6,0.004117501);
   GenJet_cuts_nGenL_stack_2->SetBinError(7,0.001480203);
   GenJet_cuts_nGenL_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenL_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenL_stack_1","ZHcc","F");

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
   GenJet_cuts_nGenL_signal_18->Modified();
   GenJet_cuts_nGenL_signal_18->cd();
   GenJet_cuts_nGenL_signal_18->SetSelected(GenJet_cuts_nGenL_signal_18);
}
