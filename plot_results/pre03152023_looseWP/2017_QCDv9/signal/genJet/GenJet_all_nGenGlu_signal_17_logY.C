#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenGlu_signal_17_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenGlu_signal_17/GenJet_all_nGenGlu_signal_17
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenGlu_signal_17 = new TCanvas("GenJet_all_nGenGlu_signal_17", "GenJet_all_nGenGlu_signal_17",0,0,600,600);
   GenJet_all_nGenGlu_signal_17->SetHighLightColor(2);
   GenJet_all_nGenGlu_signal_17->Range(-4.867058,-0.8328687,22.93266,3.129582);
   GenJet_all_nGenGlu_signal_17->SetFillColor(0);
   GenJet_all_nGenGlu_signal_17->SetFillStyle(4000);
   GenJet_all_nGenGlu_signal_17->SetBorderMode(0);
   GenJet_all_nGenGlu_signal_17->SetBorderSize(2);
   GenJet_all_nGenGlu_signal_17->SetLogy();
   GenJet_all_nGenGlu_signal_17->SetLeftMargin(0.15709);
   GenJet_all_nGenGlu_signal_17->SetRightMargin(0.1234783);
   GenJet_all_nGenGlu_signal_17->SetBottomMargin(0.12);
   GenJet_all_nGenGlu_signal_17->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_signal_17->SetFrameBorderMode(0);
   GenJet_all_nGenGlu_signal_17->SetFrameFillStyle(1000);
   GenJet_all_nGenGlu_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(358.1974);
   
   TH1F *st_stack_27 = new TH1F("st_stack_27","",20,-0.5,19.5);
   st_stack_27->SetMinimum(0.4391625);
   st_stack_27->SetMaximum(541.1734);
   st_stack_27->SetDirectory(0);
   st_stack_27->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_27->SetLineColor(ci);
   st_stack_27->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_27->GetXaxis()->SetLabelFont(42);
   st_stack_27->GetXaxis()->SetTitleOffset(1);
   st_stack_27->GetXaxis()->SetTitleFont(42);
   st_stack_27->GetYaxis()->SetTitle("Event/1.0");
   st_stack_27->GetYaxis()->SetLabelFont(42);
   st_stack_27->GetYaxis()->SetTitleSize(0.037);
   st_stack_27->GetYaxis()->SetTitleFont(42);
   st_stack_27->GetZaxis()->SetLabelFont(42);
   st_stack_27->GetZaxis()->SetTitleOffset(1);
   st_stack_27->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_27);
   
   
   TH1D *GenJet_all_nGenGlu_stack_1 = new TH1D("GenJet_all_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_1->SetBinContent(1,259.5551);
   GenJet_all_nGenGlu_stack_1->SetBinContent(2,264.6317);
   GenJet_all_nGenGlu_stack_1->SetBinContent(3,162.779);
   GenJet_all_nGenGlu_stack_1->SetBinContent(4,78.86583);
   GenJet_all_nGenGlu_stack_1->SetBinContent(5,33.9925);
   GenJet_all_nGenGlu_stack_1->SetBinContent(6,12.95741);
   GenJet_all_nGenGlu_stack_1->SetBinContent(7,4.823707);
   GenJet_all_nGenGlu_stack_1->SetBinContent(8,1.624665);
   GenJet_all_nGenGlu_stack_1->SetBinContent(9,0.5956779);
   GenJet_all_nGenGlu_stack_1->SetBinContent(10,0.1929889);
   GenJet_all_nGenGlu_stack_1->SetBinContent(11,0.06029037);
   GenJet_all_nGenGlu_stack_1->SetBinContent(12,0.01332562);
   GenJet_all_nGenGlu_stack_1->SetBinContent(13,0.007019111);
   GenJet_all_nGenGlu_stack_1->SetBinContent(14,0.00197724);
   GenJet_all_nGenGlu_stack_1->SetBinError(1,0.7269562);
   GenJet_all_nGenGlu_stack_1->SetBinError(2,0.7159641);
   GenJet_all_nGenGlu_stack_1->SetBinError(3,0.5544616);
   GenJet_all_nGenGlu_stack_1->SetBinError(4,0.3832036);
   GenJet_all_nGenGlu_stack_1->SetBinError(5,0.2508524);
   GenJet_all_nGenGlu_stack_1->SetBinError(6,0.1543264);
   GenJet_all_nGenGlu_stack_1->SetBinError(7,0.0938854);
   GenJet_all_nGenGlu_stack_1->SetBinError(8,0.05418865);
   GenJet_all_nGenGlu_stack_1->SetBinError(9,0.03268997);
   GenJet_all_nGenGlu_stack_1->SetBinError(10,0.01852816);
   GenJet_all_nGenGlu_stack_1->SetBinError(11,0.01042215);
   GenJet_all_nGenGlu_stack_1->SetBinError(12,0.005054627);
   GenJet_all_nGenGlu_stack_1->SetBinError(13,0.003562467);
   GenJet_all_nGenGlu_stack_1->SetBinError(14,0.00197724);
   GenJet_all_nGenGlu_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   GenJet_all_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_1,"");
   
   TH1D *GenJet_all_nGenGlu_stack_2 = new TH1D("GenJet_all_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenGlu_stack_2->SetBinContent(1,18.68141);
   GenJet_all_nGenGlu_stack_2->SetBinContent(2,32.67217);
   GenJet_all_nGenGlu_stack_2->SetBinContent(3,29.0293);
   GenJet_all_nGenGlu_stack_2->SetBinContent(4,18.20745);
   GenJet_all_nGenGlu_stack_2->SetBinContent(5,9.054358);
   GenJet_all_nGenGlu_stack_2->SetBinContent(6,3.860037);
   GenJet_all_nGenGlu_stack_2->SetBinContent(7,1.471218);
   GenJet_all_nGenGlu_stack_2->SetBinContent(8,0.4886482);
   GenJet_all_nGenGlu_stack_2->SetBinContent(9,0.1571557);
   GenJet_all_nGenGlu_stack_2->SetBinContent(10,0.04963018);
   GenJet_all_nGenGlu_stack_2->SetBinContent(11,0.01470365);
   GenJet_all_nGenGlu_stack_2->SetBinContent(12,0.004551757);
   GenJet_all_nGenGlu_stack_2->SetBinContent(13,0.001187293);
   GenJet_all_nGenGlu_stack_2->SetBinContent(14,0.0008916617);
   GenJet_all_nGenGlu_stack_2->SetBinContent(15,0.000196079);
   GenJet_all_nGenGlu_stack_2->SetBinError(1,0.06702907);
   GenJet_all_nGenGlu_stack_2->SetBinError(2,0.08864825);
   GenJet_all_nGenGlu_stack_2->SetBinError(3,0.08350704);
   GenJet_all_nGenGlu_stack_2->SetBinError(4,0.06607343);
   GenJet_all_nGenGlu_stack_2->SetBinError(5,0.04658508);
   GenJet_all_nGenGlu_stack_2->SetBinError(6,0.03042233);
   GenJet_all_nGenGlu_stack_2->SetBinError(7,0.01879913);
   GenJet_all_nGenGlu_stack_2->SetBinError(8,0.01079597);
   GenJet_all_nGenGlu_stack_2->SetBinError(9,0.00611342);
   GenJet_all_nGenGlu_stack_2->SetBinError(10,0.003429684);
   GenJet_all_nGenGlu_stack_2->SetBinError(11,0.001857659);
   GenJet_all_nGenGlu_stack_2->SetBinError(12,0.001036902);
   GenJet_all_nGenGlu_stack_2->SetBinError(13,0.0005454943);
   GenJet_all_nGenGlu_stack_2->SetBinError(14,0.0004587287);
   GenJet_all_nGenGlu_stack_2->SetBinError(15,0.000196079);
   GenJet_all_nGenGlu_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   GenJet_all_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenGlu_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_all_nGenGlu_stack_1","ZHcc","F");

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
   GenJet_all_nGenGlu_signal_17->Modified();
   GenJet_all_nGenGlu_signal_17->cd();
   GenJet_all_nGenGlu_signal_17->SetSelected(GenJet_all_nGenGlu_signal_17);
}
