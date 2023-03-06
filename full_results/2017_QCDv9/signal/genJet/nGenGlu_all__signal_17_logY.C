#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenGlu_all__signal_17_logY()
{
//=========Macro generated from canvas: nGenGlu_all__signal_17/nGenGlu_all__signal_17
//=========  (Mon Mar  6 10:58:23 2023) by ROOT version 6.26/06
   TCanvas *nGenGlu_all__signal_17 = new TCanvas("nGenGlu_all__signal_17", "nGenGlu_all__signal_17",0,0,600,600);
   nGenGlu_all__signal_17->SetHighLightColor(2);
   nGenGlu_all__signal_17->Range(-3.775293,0.4795233,17.0745,2.81933);
   nGenGlu_all__signal_17->SetFillColor(0);
   nGenGlu_all__signal_17->SetFillStyle(4000);
   nGenGlu_all__signal_17->SetBorderMode(0);
   nGenGlu_all__signal_17->SetBorderSize(2);
   nGenGlu_all__signal_17->SetLogy();
   nGenGlu_all__signal_17->SetLeftMargin(0.15709);
   nGenGlu_all__signal_17->SetRightMargin(0.1234783);
   nGenGlu_all__signal_17->SetBottomMargin(0.12);
   nGenGlu_all__signal_17->SetFrameFillStyle(1000);
   nGenGlu_all__signal_17->SetFrameBorderMode(0);
   nGenGlu_all__signal_17->SetFrameFillStyle(1000);
   nGenGlu_all__signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_27 = new TH1F("st_stack_27","",15,-0.5,14.5);
   st_stack_27->SetMinimum(5.758378);
   st_stack_27->SetMaximum(384.9015);
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
   st_stack_27->GetYaxis()->SetTitle("Events/1.0");
   st_stack_27->GetYaxis()->SetLabelFont(42);
   st_stack_27->GetYaxis()->SetTitleSize(0.037);
   st_stack_27->GetYaxis()->SetTitleFont(42);
   st_stack_27->GetZaxis()->SetLabelFont(42);
   st_stack_27->GetZaxis()->SetTitleOffset(1);
   st_stack_27->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_27);
   
   
   TH1D *nGenGlu_all_stack_1 = new TH1D("nGenGlu_all_stack_1","",15,-0.5,14.5);
   nGenGlu_all_stack_1->SetBinContent(1,259.5551);
   nGenGlu_all_stack_1->SetBinContent(2,264.6317);
   nGenGlu_all_stack_1->SetBinContent(3,162.779);
   nGenGlu_all_stack_1->SetBinContent(4,78.86583);
   nGenGlu_all_stack_1->SetBinContent(5,33.9925);
   nGenGlu_all_stack_1->SetBinContent(6,12.95741);
   nGenGlu_all_stack_1->SetBinContent(7,4.823707);
   nGenGlu_all_stack_1->SetBinContent(8,1.624665);
   nGenGlu_all_stack_1->SetBinContent(9,0.5956779);
   nGenGlu_all_stack_1->SetBinContent(10,0.1929889);
   nGenGlu_all_stack_1->SetBinContent(11,0.06029037);
   nGenGlu_all_stack_1->SetBinContent(12,0.01332562);
   nGenGlu_all_stack_1->SetBinContent(13,0.007019111);
   nGenGlu_all_stack_1->SetBinContent(14,0.00197724);
   nGenGlu_all_stack_1->SetBinError(1,0.7269562);
   nGenGlu_all_stack_1->SetBinError(2,0.7159641);
   nGenGlu_all_stack_1->SetBinError(3,0.5544616);
   nGenGlu_all_stack_1->SetBinError(4,0.3832036);
   nGenGlu_all_stack_1->SetBinError(5,0.2508524);
   nGenGlu_all_stack_1->SetBinError(6,0.1543264);
   nGenGlu_all_stack_1->SetBinError(7,0.0938854);
   nGenGlu_all_stack_1->SetBinError(8,0.05418865);
   nGenGlu_all_stack_1->SetBinError(9,0.03268997);
   nGenGlu_all_stack_1->SetBinError(10,0.01852816);
   nGenGlu_all_stack_1->SetBinError(11,0.01042215);
   nGenGlu_all_stack_1->SetBinError(12,0.005054627);
   nGenGlu_all_stack_1->SetBinError(13,0.003562467);
   nGenGlu_all_stack_1->SetBinError(14,0.00197724);
   nGenGlu_all_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   nGenGlu_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_all_stack_1->SetLineColor(ci);
   nGenGlu_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenGlu_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenGlu_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenGlu_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenGlu_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_all_stack_1,"");
   
   TH1D *nGenGlu_all_stack_2 = new TH1D("nGenGlu_all_stack_2","",15,-0.5,14.5);
   nGenGlu_all_stack_2->SetBinContent(1,18.68141);
   nGenGlu_all_stack_2->SetBinContent(2,32.67217);
   nGenGlu_all_stack_2->SetBinContent(3,29.0293);
   nGenGlu_all_stack_2->SetBinContent(4,18.20745);
   nGenGlu_all_stack_2->SetBinContent(5,9.054358);
   nGenGlu_all_stack_2->SetBinContent(6,3.860037);
   nGenGlu_all_stack_2->SetBinContent(7,1.471218);
   nGenGlu_all_stack_2->SetBinContent(8,0.4886482);
   nGenGlu_all_stack_2->SetBinContent(9,0.1571557);
   nGenGlu_all_stack_2->SetBinContent(10,0.04963018);
   nGenGlu_all_stack_2->SetBinContent(11,0.01470365);
   nGenGlu_all_stack_2->SetBinContent(12,0.004551757);
   nGenGlu_all_stack_2->SetBinContent(13,0.001187293);
   nGenGlu_all_stack_2->SetBinContent(14,0.0008916617);
   nGenGlu_all_stack_2->SetBinContent(15,0.000196079);
   nGenGlu_all_stack_2->SetBinError(1,0.06702907);
   nGenGlu_all_stack_2->SetBinError(2,0.08864825);
   nGenGlu_all_stack_2->SetBinError(3,0.08350704);
   nGenGlu_all_stack_2->SetBinError(4,0.06607343);
   nGenGlu_all_stack_2->SetBinError(5,0.04658508);
   nGenGlu_all_stack_2->SetBinError(6,0.03042233);
   nGenGlu_all_stack_2->SetBinError(7,0.01879913);
   nGenGlu_all_stack_2->SetBinError(8,0.01079597);
   nGenGlu_all_stack_2->SetBinError(9,0.00611342);
   nGenGlu_all_stack_2->SetBinError(10,0.003429684);
   nGenGlu_all_stack_2->SetBinError(11,0.001857659);
   nGenGlu_all_stack_2->SetBinError(12,0.001036902);
   nGenGlu_all_stack_2->SetBinError(13,0.0005454943);
   nGenGlu_all_stack_2->SetBinError(14,0.0004587287);
   nGenGlu_all_stack_2->SetBinError(15,0.000196079);
   nGenGlu_all_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   nGenGlu_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenGlu_all_stack_2->SetLineColor(ci);
   nGenGlu_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenGlu_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenGlu_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenGlu_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenGlu_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenGlu_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenGlu_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenGlu_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenGlu_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nGenGlu_all__signal_17->Modified();
   nGenGlu_all__signal_17->cd();
   nGenGlu_all__signal_17->SetSelected(nGenGlu_all__signal_17);
}
