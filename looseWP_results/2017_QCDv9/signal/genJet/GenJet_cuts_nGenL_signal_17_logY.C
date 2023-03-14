#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenL_signal_17_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenL_signal_17/GenJet_cuts_nGenL_signal_17
//=========  (Fri Mar 10 12:49:23 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenL_signal_17 = new TCanvas("GenJet_cuts_nGenL_signal_17", "GenJet_cuts_nGenL_signal_17",0,0,600,600);
   GenJet_cuts_nGenL_signal_17->SetHighLightColor(2);
   GenJet_cuts_nGenL_signal_17->Range(-4.867058,-0.8920727,22.93266,3.393574);
   GenJet_cuts_nGenL_signal_17->SetFillColor(0);
   GenJet_cuts_nGenL_signal_17->SetFillStyle(4000);
   GenJet_cuts_nGenL_signal_17->SetBorderMode(0);
   GenJet_cuts_nGenL_signal_17->SetBorderSize(2);
   GenJet_cuts_nGenL_signal_17->SetLogy();
   GenJet_cuts_nGenL_signal_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenL_signal_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenL_signal_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenL_signal_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_signal_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenL_signal_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenL_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(593.4305);
   
   TH1F *st_stack_81 = new TH1F("st_stack_81","",20,-0.5,19.5);
   st_stack_81->SetMinimum(0.4189912);
   st_stack_81->SetMaximum(922.5909);
   st_stack_81->SetDirectory(0);
   st_stack_81->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_81->SetLineColor(ci);
   st_stack_81->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_81->GetXaxis()->SetLabelFont(42);
   st_stack_81->GetXaxis()->SetTitleOffset(1);
   st_stack_81->GetXaxis()->SetTitleFont(42);
   st_stack_81->GetYaxis()->SetTitle("Event/1.0");
   st_stack_81->GetYaxis()->SetLabelFont(42);
   st_stack_81->GetYaxis()->SetTitleSize(0.037);
   st_stack_81->GetYaxis()->SetTitleFont(42);
   st_stack_81->GetZaxis()->SetLabelFont(42);
   st_stack_81->GetZaxis()->SetTitleOffset(1);
   st_stack_81->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_81);
   
   
   TH1D *GenJet_cuts_nGenL_stack_1 = new TH1D("GenJet_cuts_nGenL_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenL_stack_1->SetBinContent(1,448.5389);
   GenJet_cuts_nGenL_stack_1->SetBinContent(2,265.6125);
   GenJet_cuts_nGenL_stack_1->SetBinContent(3,92.89255);
   GenJet_cuts_nGenL_stack_1->SetBinContent(4,11.87144);
   GenJet_cuts_nGenL_stack_1->SetBinContent(5,1.09394);
   GenJet_cuts_nGenL_stack_1->SetBinContent(6,0.08366018);
   GenJet_cuts_nGenL_stack_1->SetBinContent(7,0.008136946);
   GenJet_cuts_nGenL_stack_1->SetBinError(1,0.9405655);
   GenJet_cuts_nGenL_stack_1->SetBinError(2,0.7144944);
   GenJet_cuts_nGenL_stack_1->SetBinError(3,0.4200433);
   GenJet_cuts_nGenL_stack_1->SetBinError(4,0.1471518);
   GenJet_cuts_nGenL_stack_1->SetBinError(5,0.04458671);
   GenJet_cuts_nGenL_stack_1->SetBinError(6,0.01192968);
   GenJet_cuts_nGenL_stack_1->SetBinError(7,0.003679529);
   GenJet_cuts_nGenL_stack_1->SetEntries(499112);

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
   GenJet_cuts_nGenL_stack_2->SetBinContent(1,44.00836);
   GenJet_cuts_nGenL_stack_2->SetBinContent(2,37.89583);
   GenJet_cuts_nGenL_stack_2->SetBinContent(3,26.84542);
   GenJet_cuts_nGenL_stack_2->SetBinContent(4,4.483711);
   GenJet_cuts_nGenL_stack_2->SetBinContent(5,0.4243723);
   GenJet_cuts_nGenL_stack_2->SetBinContent(6,0.03417721);
   GenJet_cuts_nGenL_stack_2->SetBinContent(7,0.001025722);
   GenJet_cuts_nGenL_stack_2->SetBinError(1,0.1027637);
   GenJet_cuts_nGenL_stack_2->SetBinError(2,0.09538559);
   GenJet_cuts_nGenL_stack_2->SetBinError(3,0.08043385);
   GenJet_cuts_nGenL_stack_2->SetBinError(4,0.0327531);
   GenJet_cuts_nGenL_stack_2->SetBinError(5,0.01004248);
   GenJet_cuts_nGenL_stack_2->SetBinError(6,0.002853699);
   GenJet_cuts_nGenL_stack_2->SetBinError(7,0.0004941618);
   GenJet_cuts_nGenL_stack_2->SetEntries(495010);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenL_signal_17->Modified();
   GenJet_cuts_nGenL_signal_17->cd();
   GenJet_cuts_nGenL_signal_17->SetSelected(GenJet_cuts_nGenL_signal_17);
}
