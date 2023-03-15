#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenJet_all__signal_17()
{
//=========Macro generated from canvas: nGenJet_all__signal_17/nGenJet_all__signal_17
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenJet_all__signal_17 = new TCanvas("nGenJet_all__signal_17", "nGenJet_all__signal_17",0,0,600,600);
   nGenJet_all__signal_17->SetHighLightColor(2);
   nGenJet_all__signal_17->Range(-3.775293,-33.29104,17.0745,244.1343);
   nGenJet_all__signal_17->SetFillColor(0);
   nGenJet_all__signal_17->SetFillStyle(4000);
   nGenJet_all__signal_17->SetBorderMode(0);
   nGenJet_all__signal_17->SetBorderSize(2);
   nGenJet_all__signal_17->SetLeftMargin(0.15709);
   nGenJet_all__signal_17->SetRightMargin(0.1234783);
   nGenJet_all__signal_17->SetBottomMargin(0.12);
   nGenJet_all__signal_17->SetFrameFillStyle(1000);
   nGenJet_all__signal_17->SetFrameBorderMode(0);
   nGenJet_all__signal_17->SetFrameFillStyle(1000);
   nGenJet_all__signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",15,-0.5,14.5);
   st_stack_3->SetMinimum(0);
   st_stack_3->SetMaximum(216.3918);
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
   
   
   TH1D *nGenJet_all_stack_1 = new TH1D("nGenJet_all_stack_1","",15,-0.5,14.5);
   nGenJet_all_stack_1->SetBinContent(1,0.002009147);
   nGenJet_all_stack_1->SetBinContent(2,0.02716382);
   nGenJet_all_stack_1->SetBinContent(3,1.924044);
   nGenJet_all_stack_1->SetBinContent(4,29.02397);
   nGenJet_all_stack_1->SetBinContent(5,146.8317);
   nGenJet_all_stack_1->SetBinContent(6,188.1131);
   nGenJet_all_stack_1->SetBinContent(7,164.2025);
   nGenJet_all_stack_1->SetBinContent(8,118.7216);
   nGenJet_all_stack_1->SetBinContent(9,76.35247);
   nGenJet_all_stack_1->SetBinContent(10,44.72564);
   nGenJet_all_stack_1->SetBinContent(11,24.66269);
   nGenJet_all_stack_1->SetBinContent(12,13.04902);
   nGenJet_all_stack_1->SetBinContent(13,6.628505);
   nGenJet_all_stack_1->SetBinContent(14,3.185304);
   nGenJet_all_stack_1->SetBinContent(15,1.443451);
   nGenJet_all_stack_1->SetBinContent(16,1.207923);
   nGenJet_all_stack_1->SetBinError(1,0.002009147);
   nGenJet_all_stack_1->SetBinError(2,0.008687634);
   nGenJet_all_stack_1->SetBinError(3,0.06412922);
   nGenJet_all_stack_1->SetBinError(4,0.2476352);
   nGenJet_all_stack_1->SetBinError(5,0.5502048);
   nGenJet_all_stack_1->SetBinError(6,0.6087939);
   nGenJet_all_stack_1->SetBinError(7,0.5609639);
   nGenJet_all_stack_1->SetBinError(8,0.4732892);
   nGenJet_all_stack_1->SetBinError(9,0.3777264);
   nGenJet_all_stack_1->SetBinError(10,0.2878029);
   nGenJet_all_stack_1->SetBinError(11,0.2135864);
   nGenJet_all_stack_1->SetBinError(12,0.1547598);
   nGenJet_all_stack_1->SetBinError(13,0.1101142);
   nGenJet_all_stack_1->SetBinError(14,0.076402);
   nGenJet_all_stack_1->SetBinError(15,0.05132673);
   nGenJet_all_stack_1->SetBinError(16,0.04660058);
   nGenJet_all_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   nGenJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_1->SetLineColor(ci);
   nGenJet_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_1,"");
   
   TH1D *nGenJet_all_stack_2 = new TH1D("nGenJet_all_stack_2","",15,-0.5,14.5);
   nGenJet_all_stack_2->SetBinContent(3,0.02651457);
   nGenJet_all_stack_2->SetBinContent(4,0.8401974);
   nGenJet_all_stack_2->SetBinContent(5,7.37615);
   nGenJet_all_stack_2->SetBinContent(6,17.97428);
   nGenJet_all_stack_2->SetBinContent(7,23.99887);
   nGenJet_all_stack_2->SetBinContent(8,22.53496);
   nGenJet_all_stack_2->SetBinContent(9,16.97009);
   nGenJet_all_stack_2->SetBinContent(10,10.93403);
   nGenJet_all_stack_2->SetBinContent(11,6.469723);
   nGenJet_all_stack_2->SetBinContent(12,3.339541);
   nGenJet_all_stack_2->SetBinContent(13,1.704947);
   nGenJet_all_stack_2->SetBinContent(14,0.8224716);
   nGenJet_all_stack_2->SetBinContent(15,0.394887);
   nGenJet_all_stack_2->SetBinContent(16,0.3062386);
   nGenJet_all_stack_2->SetBinError(3,0.002530115);
   nGenJet_all_stack_2->SetBinError(4,0.01423818);
   nGenJet_all_stack_2->SetBinError(5,0.04220614);
   nGenJet_all_stack_2->SetBinError(6,0.06585979);
   nGenJet_all_stack_2->SetBinError(7,0.07596636);
   nGenJet_all_stack_2->SetBinError(8,0.07357211);
   nGenJet_all_stack_2->SetBinError(9,0.06377909);
   nGenJet_all_stack_2->SetBinError(10,0.05116241);
   nGenJet_all_stack_2->SetBinError(11,0.03935608);
   nGenJet_all_stack_2->SetBinError(12,0.0282044);
   nGenJet_all_stack_2->SetBinError(13,0.02016604);
   nGenJet_all_stack_2->SetBinError(14,0.01398046);
   nGenJet_all_stack_2->SetBinError(15,0.009696431);
   nGenJet_all_stack_2->SetBinError(16,0.0085295);
   nGenJet_all_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   nGenJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenJet_all_stack_2->SetLineColor(ci);
   nGenJet_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenJet_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenJet_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenJet_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenJet_all_stack_1","ZHcc","F");

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
   nGenJet_all__signal_17->Modified();
   nGenJet_all__signal_17->cd();
   nGenJet_all__signal_17->SetSelected(nGenJet_all__signal_17);
}
