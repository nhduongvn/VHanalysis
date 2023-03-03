#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenJet__signal_17_logY()
{
//=========Macro generated from canvas: nGenJet__signal_17/nGenJet__signal_17
//=========  (Fri Mar  3 13:54:36 2023) by ROOT version 6.26/06
   TCanvas *nGenJet__signal_17 = new TCanvas("nGenJet__signal_17", "nGenJet__signal_17",0,0,600,600);
   nGenJet__signal_17->SetHighLightColor(2);
   nGenJet__signal_17->Range(-3.775293,0.7483386,17.0745,1.817521);
   nGenJet__signal_17->SetFillColor(0);
   nGenJet__signal_17->SetFillStyle(4000);
   nGenJet__signal_17->SetBorderMode(0);
   nGenJet__signal_17->SetBorderSize(2);
   nGenJet__signal_17->SetLogy();
   nGenJet__signal_17->SetLeftMargin(0.15709);
   nGenJet__signal_17->SetRightMargin(0.1234783);
   nGenJet__signal_17->SetBottomMargin(0.12);
   nGenJet__signal_17->SetFrameFillStyle(1000);
   nGenJet__signal_17->SetFrameBorderMode(0);
   nGenJet__signal_17->SetFrameFillStyle(1000);
   nGenJet__signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",15,-0.5,14.5);
   st_stack_3->SetMinimum(7.527322);
   st_stack_3->SetMaximum(51.35736);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/1.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetTitleSize(0.037);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *nGenJet_stack_1 = new TH1D("nGenJet_stack_1","",15,-0.5,14.5);
   nGenJet_stack_1->SetBinContent(2,0.01046355);
   nGenJet_stack_1->SetBinContent(3,0.5581746);
   nGenJet_stack_1->SetBinContent(4,7.736372);
   nGenJet_stack_1->SetBinContent(5,33.1572);
   nGenJet_stack_1->SetBinContent(6,41.38793);
   nGenJet_stack_1->SetBinContent(7,35.03826);
   nGenJet_stack_1->SetBinContent(8,25.3291);
   nGenJet_stack_1->SetBinContent(9,16.41227);
   nGenJet_stack_1->SetBinContent(10,9.500351);
   nGenJet_stack_1->SetBinContent(11,5.366292);
   nGenJet_stack_1->SetBinContent(12,2.715873);
   nGenJet_stack_1->SetBinContent(13,1.42898);
   nGenJet_stack_1->SetBinContent(14,0.6581049);
   nGenJet_stack_1->SetBinContent(15,0.2949798);
   nGenJet_stack_1->SetBinContent(16,0.2242109);
   nGenJet_stack_1->SetBinError(2,0.005133113);
   nGenJet_stack_1->SetBinError(3,0.03535765);
   nGenJet_stack_1->SetBinError(4,0.1276768);
   nGenJet_stack_1->SetBinError(5,0.2621843);
   nGenJet_stack_1->SetBinError(6,0.2857147);
   nGenJet_stack_1->SetBinError(7,0.2597286);
   nGenJet_stack_1->SetBinError(8,0.2188851);
   nGenJet_stack_1->SetBinError(9,0.1748744);
   nGenJet_stack_1->SetBinError(10,0.1327706);
   nGenJet_stack_1->SetBinError(11,0.09949826);
   nGenJet_stack_1->SetBinError(12,0.07092146);
   nGenJet_stack_1->SetBinError(13,0.0512957);
   nGenJet_stack_1->SetBinError(14,0.0349852);
   nGenJet_stack_1->SetBinError(15,0.02311923);
   nGenJet_stack_1->SetBinError(16,0.02022682);
   nGenJet_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   nGenJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_stack_1->SetLineColor(ci);
   nGenJet_stack_1->GetXaxis()->SetRange(1,15);
   nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_stack_1,"");
   
   TH1D *nGenJet_stack_2 = new TH1D("nGenJet_stack_2","",15,-0.5,14.5);
   nGenJet_stack_2->SetBinContent(3,0.008404897);
   nGenJet_stack_2->SetBinContent(4,0.2218665);
   nGenJet_stack_2->SetBinContent(5,1.673672);
   nGenJet_stack_2->SetBinContent(6,4.00492);
   nGenJet_stack_2->SetBinContent(7,5.212336);
   nGenJet_stack_2->SetBinContent(8,4.898593);
   nGenJet_stack_2->SetBinContent(9,3.697136);
   nGenJet_stack_2->SetBinContent(10,2.330921);
   nGenJet_stack_2->SetBinContent(11,1.395833);
   nGenJet_stack_2->SetBinContent(12,0.7048817);
   nGenJet_stack_2->SetBinContent(13,0.3618468);
   nGenJet_stack_2->SetBinContent(14,0.1784877);
   nGenJet_stack_2->SetBinContent(15,0.08688475);
   nGenJet_stack_2->SetBinContent(16,0.06231052);
   nGenJet_stack_2->SetBinError(3,0.001420039);
   nGenJet_stack_2->SetBinError(4,0.007312769);
   nGenJet_stack_2->SetBinError(5,0.02010723);
   nGenJet_stack_2->SetBinError(6,0.03106372);
   nGenJet_stack_2->SetBinError(7,0.03542782);
   nGenJet_stack_2->SetBinError(8,0.03430896);
   nGenJet_stack_2->SetBinError(9,0.02975221);
   nGenJet_stack_2->SetBinError(10,0.02361965);
   nGenJet_stack_2->SetBinError(11,0.01828296);
   nGenJet_stack_2->SetBinError(12,0.01297661);
   nGenJet_stack_2->SetBinError(13,0.009288358);
   nGenJet_stack_2->SetBinError(14,0.006509596);
   nGenJet_stack_2->SetBinError(15,0.00456844);
   nGenJet_stack_2->SetBinError(16,0.003870002);
   nGenJet_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   nGenJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_stack_2->SetLineColor(ci);
   nGenJet_stack_2->GetXaxis()->SetRange(1,15);
   nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenJet_stack_1","ZHcc","F");

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
   nGenJet__signal_17->Modified();
   nGenJet__signal_17->cd();
   nGenJet__signal_17->SetSelected(nGenJet__signal_17);
}
