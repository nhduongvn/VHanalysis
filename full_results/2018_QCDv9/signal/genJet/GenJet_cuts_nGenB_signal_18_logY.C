#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenB_signal_18_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenB_signal_18/GenJet_cuts_nGenB_signal_18
//=========  (Thu Mar  9 15:52:23 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenB_signal_18 = new TCanvas("GenJet_cuts_nGenB_signal_18", "GenJet_cuts_nGenB_signal_18",0,0,600,600);
   GenJet_cuts_nGenB_signal_18->SetHighLightColor(2);
   GenJet_cuts_nGenB_signal_18->Range(-4.867058,-0.9904032,22.93266,3.842063);
   GenJet_cuts_nGenB_signal_18->SetFillColor(0);
   GenJet_cuts_nGenB_signal_18->SetFillStyle(4000);
   GenJet_cuts_nGenB_signal_18->SetBorderMode(0);
   GenJet_cuts_nGenB_signal_18->SetBorderSize(2);
   GenJet_cuts_nGenB_signal_18->SetLogy();
   GenJet_cuts_nGenB_signal_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenB_signal_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenB_signal_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenB_signal_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_signal_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenB_signal_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1402.165);
   
   TH1F *st_stack_89 = new TH1F("st_stack_89","",20,-0.5,19.5);
   st_stack_89->SetMinimum(0.388591);
   st_stack_89->SetMaximum(2284.632);
   st_stack_89->SetDirectory(0);
   st_stack_89->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_89->SetLineColor(ci);
   st_stack_89->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_89->GetXaxis()->SetLabelFont(42);
   st_stack_89->GetXaxis()->SetTitleOffset(1);
   st_stack_89->GetXaxis()->SetTitleFont(42);
   st_stack_89->GetYaxis()->SetTitle("Event/1.0");
   st_stack_89->GetYaxis()->SetLabelFont(42);
   st_stack_89->GetYaxis()->SetTitleSize(0.037);
   st_stack_89->GetYaxis()->SetTitleFont(42);
   st_stack_89->GetZaxis()->SetLabelFont(42);
   st_stack_89->GetZaxis()->SetTitleOffset(1);
   st_stack_89->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_89);
   
   
   TH1D *GenJet_cuts_nGenB_stack_1 = new TH1D("GenJet_cuts_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenB_stack_1->SetBinContent(1,1031.259);
   GenJet_cuts_nGenB_stack_1->SetBinContent(2,138.9532);
   GenJet_cuts_nGenB_stack_1->SetBinContent(3,42.28461);
   GenJet_cuts_nGenB_stack_1->SetBinContent(4,0.9075628);
   GenJet_cuts_nGenB_stack_1->SetBinContent(5,0.05780948);
   GenJet_cuts_nGenB_stack_1->SetBinContent(6,0.002397148);
   GenJet_cuts_nGenB_stack_1->SetBinContent(7,0.002582708);
   GenJet_cuts_nGenB_stack_1->SetBinError(1,1.851742);
   GenJet_cuts_nGenB_stack_1->SetBinError(2,0.6664229);
   GenJet_cuts_nGenB_stack_1->SetBinError(3,0.3637122);
   GenJet_cuts_nGenB_stack_1->SetBinError(4,0.05035678);
   GenJet_cuts_nGenB_stack_1->SetBinError(5,0.01252707);
   GenJet_cuts_nGenB_stack_1->SetBinError(6,0.002397148);
   GenJet_cuts_nGenB_stack_1->SetBinError(7,0.002582708);
   GenJet_cuts_nGenB_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenB_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenB_stack_1,"");
   
   TH1D *GenJet_cuts_nGenB_stack_2 = new TH1D("GenJet_cuts_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenB_stack_2->SetBinContent(1,132.5386);
   GenJet_cuts_nGenB_stack_2->SetBinContent(2,21.77491);
   GenJet_cuts_nGenB_stack_2->SetBinContent(3,13.57116);
   GenJet_cuts_nGenB_stack_2->SetBinContent(4,0.3120514);
   GenJet_cuts_nGenB_stack_2->SetBinContent(5,0.02625905);
   GenJet_cuts_nGenB_stack_2->SetBinContent(6,0.000280877);
   GenJet_cuts_nGenB_stack_2->SetBinError(1,0.2302701);
   GenJet_cuts_nGenB_stack_2->SetBinError(2,0.09553662);
   GenJet_cuts_nGenB_stack_2->SetBinError(3,0.07457071);
   GenJet_cuts_nGenB_stack_2->SetBinError(4,0.01116032);
   GenJet_cuts_nGenB_stack_2->SetBinError(5,0.003063523);
   GenJet_cuts_nGenB_stack_2->SetBinError(6,0.000280877);
   GenJet_cuts_nGenB_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenB_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenB_stack_1","ZHcc","F");

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
   GenJet_cuts_nGenB_signal_18->Modified();
   GenJet_cuts_nGenB_signal_18->cd();
   GenJet_cuts_nGenB_signal_18->SetSelected(GenJet_cuts_nGenB_signal_18);
}
