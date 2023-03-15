#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenJet_signal_17()
{
//=========Macro generated from canvas: GenJet_all_nGenJet_signal_17/GenJet_all_nGenJet_signal_17
//=========  (Thu Mar  9 15:52:35 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenJet_signal_17 = new TCanvas("GenJet_all_nGenJet_signal_17", "GenJet_all_nGenJet_signal_17",0,0,600,600);
   GenJet_all_nGenJet_signal_17->SetHighLightColor(2);
   GenJet_all_nGenJet_signal_17->Range(-4.867058,-38.1997,22.93266,280.1311);
   GenJet_all_nGenJet_signal_17->SetFillColor(0);
   GenJet_all_nGenJet_signal_17->SetFillStyle(4000);
   GenJet_all_nGenJet_signal_17->SetBorderMode(0);
   GenJet_all_nGenJet_signal_17->SetBorderSize(2);
   GenJet_all_nGenJet_signal_17->SetLeftMargin(0.15709);
   GenJet_all_nGenJet_signal_17->SetRightMargin(0.1234783);
   GenJet_all_nGenJet_signal_17->SetBottomMargin(0.12);
   GenJet_all_nGenJet_signal_17->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_signal_17->SetFrameBorderMode(0);
   GenJet_all_nGenJet_signal_17->SetFrameFillStyle(1000);
   GenJet_all_nGenJet_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(248.2981);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",20,-0.5,19.5);
   st_stack_3->SetMinimum(0);
   st_stack_3->SetMaximum(248.2981);
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
   st_stack_3->GetYaxis()->SetTitle("Event/1.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetTitleSize(0.037);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *GenJet_all_nGenJet_stack_1 = new TH1D("GenJet_all_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_1->SetBinContent(1,0.002009147);
   GenJet_all_nGenJet_stack_1->SetBinContent(2,0.02716382);
   GenJet_all_nGenJet_stack_1->SetBinContent(3,1.924044);
   GenJet_all_nGenJet_stack_1->SetBinContent(4,29.02397);
   GenJet_all_nGenJet_stack_1->SetBinContent(5,146.8317);
   GenJet_all_nGenJet_stack_1->SetBinContent(6,188.1131);
   GenJet_all_nGenJet_stack_1->SetBinContent(7,164.2025);
   GenJet_all_nGenJet_stack_1->SetBinContent(8,118.7216);
   GenJet_all_nGenJet_stack_1->SetBinContent(9,76.35247);
   GenJet_all_nGenJet_stack_1->SetBinContent(10,44.72564);
   GenJet_all_nGenJet_stack_1->SetBinContent(11,24.66269);
   GenJet_all_nGenJet_stack_1->SetBinContent(12,13.04902);
   GenJet_all_nGenJet_stack_1->SetBinContent(13,6.628505);
   GenJet_all_nGenJet_stack_1->SetBinContent(14,3.185304);
   GenJet_all_nGenJet_stack_1->SetBinContent(15,1.443451);
   GenJet_all_nGenJet_stack_1->SetBinContent(16,0.6639501);
   GenJet_all_nGenJet_stack_1->SetBinContent(17,0.3412173);
   GenJet_all_nGenJet_stack_1->SetBinContent(18,0.103008);
   GenJet_all_nGenJet_stack_1->SetBinContent(19,0.05706581);
   GenJet_all_nGenJet_stack_1->SetBinContent(20,0.02674105);
   GenJet_all_nGenJet_stack_1->SetBinContent(21,0.01594057);
   GenJet_all_nGenJet_stack_1->SetBinError(1,0.002009147);
   GenJet_all_nGenJet_stack_1->SetBinError(2,0.008687634);
   GenJet_all_nGenJet_stack_1->SetBinError(3,0.06412922);
   GenJet_all_nGenJet_stack_1->SetBinError(4,0.2476352);
   GenJet_all_nGenJet_stack_1->SetBinError(5,0.5502048);
   GenJet_all_nGenJet_stack_1->SetBinError(6,0.6087939);
   GenJet_all_nGenJet_stack_1->SetBinError(7,0.5609639);
   GenJet_all_nGenJet_stack_1->SetBinError(8,0.4732892);
   GenJet_all_nGenJet_stack_1->SetBinError(9,0.3777264);
   GenJet_all_nGenJet_stack_1->SetBinError(10,0.2878029);
   GenJet_all_nGenJet_stack_1->SetBinError(11,0.2135864);
   GenJet_all_nGenJet_stack_1->SetBinError(12,0.1547598);
   GenJet_all_nGenJet_stack_1->SetBinError(13,0.1101142);
   GenJet_all_nGenJet_stack_1->SetBinError(14,0.076402);
   GenJet_all_nGenJet_stack_1->SetBinError(15,0.05132673);
   GenJet_all_nGenJet_stack_1->SetBinError(16,0.03461728);
   GenJet_all_nGenJet_stack_1->SetBinError(17,0.02462882);
   GenJet_all_nGenJet_stack_1->SetBinError(18,0.01366617);
   GenJet_all_nGenJet_stack_1->SetBinError(19,0.01009844);
   GenJet_all_nGenJet_stack_1->SetBinError(20,0.007001695);
   GenJet_all_nGenJet_stack_1->SetBinError(21,0.005377044);
   GenJet_all_nGenJet_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   GenJet_all_nGenJet_stack_1->SetFillColor(ci);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_1,"");
   
   TH1D *GenJet_all_nGenJet_stack_2 = new TH1D("GenJet_all_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenJet_stack_2->SetBinContent(3,0.02651457);
   GenJet_all_nGenJet_stack_2->SetBinContent(4,0.8401974);
   GenJet_all_nGenJet_stack_2->SetBinContent(5,7.37615);
   GenJet_all_nGenJet_stack_2->SetBinContent(6,17.97428);
   GenJet_all_nGenJet_stack_2->SetBinContent(7,23.99887);
   GenJet_all_nGenJet_stack_2->SetBinContent(8,22.53496);
   GenJet_all_nGenJet_stack_2->SetBinContent(9,16.97009);
   GenJet_all_nGenJet_stack_2->SetBinContent(10,10.93403);
   GenJet_all_nGenJet_stack_2->SetBinContent(11,6.469723);
   GenJet_all_nGenJet_stack_2->SetBinContent(12,3.339541);
   GenJet_all_nGenJet_stack_2->SetBinContent(13,1.704947);
   GenJet_all_nGenJet_stack_2->SetBinContent(14,0.8224716);
   GenJet_all_nGenJet_stack_2->SetBinContent(15,0.394887);
   GenJet_all_nGenJet_stack_2->SetBinContent(16,0.1774522);
   GenJet_all_nGenJet_stack_2->SetBinContent(17,0.07783052);
   GenJet_all_nGenJet_stack_2->SetBinContent(18,0.02928935);
   GenJet_all_nGenJet_stack_2->SetBinContent(19,0.01265478);
   GenJet_all_nGenJet_stack_2->SetBinContent(20,0.006148099);
   GenJet_all_nGenJet_stack_2->SetBinContent(21,0.002863678);
   GenJet_all_nGenJet_stack_2->SetBinError(3,0.002530115);
   GenJet_all_nGenJet_stack_2->SetBinError(4,0.01423818);
   GenJet_all_nGenJet_stack_2->SetBinError(5,0.04220614);
   GenJet_all_nGenJet_stack_2->SetBinError(6,0.06585979);
   GenJet_all_nGenJet_stack_2->SetBinError(7,0.07596636);
   GenJet_all_nGenJet_stack_2->SetBinError(8,0.07357211);
   GenJet_all_nGenJet_stack_2->SetBinError(9,0.06377909);
   GenJet_all_nGenJet_stack_2->SetBinError(10,0.05116241);
   GenJet_all_nGenJet_stack_2->SetBinError(11,0.03935608);
   GenJet_all_nGenJet_stack_2->SetBinError(12,0.0282044);
   GenJet_all_nGenJet_stack_2->SetBinError(13,0.02016604);
   GenJet_all_nGenJet_stack_2->SetBinError(14,0.01398046);
   GenJet_all_nGenJet_stack_2->SetBinError(15,0.009696431);
   GenJet_all_nGenJet_stack_2->SetBinError(16,0.006524445);
   GenJet_all_nGenJet_stack_2->SetBinError(17,0.004272288);
   GenJet_all_nGenJet_stack_2->SetBinError(18,0.002632191);
   GenJet_all_nGenJet_stack_2->SetBinError(19,0.001733195);
   GenJet_all_nGenJet_stack_2->SetBinError(20,0.001169402);
   GenJet_all_nGenJet_stack_2->SetBinError(21,0.0007947652);
   GenJet_all_nGenJet_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   GenJet_all_nGenJet_stack_2->SetFillColor(ci);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_all_nGenJet_stack_1","ZHcc","F");

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
   GenJet_all_nGenJet_signal_17->Modified();
   GenJet_all_nGenJet_signal_17->cd();
   GenJet_all_nGenJet_signal_17->SetSelected(GenJet_all_nGenJet_signal_17);
}
