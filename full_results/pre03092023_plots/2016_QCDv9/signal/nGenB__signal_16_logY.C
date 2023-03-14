#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenB__signal_16_logY()
{
//=========Macro generated from canvas: nGenB__signal_16/nGenB__signal_16
//=========  (Fri Mar  3 13:54:36 2023) by ROOT version 6.26/06
   TCanvas *nGenB__signal_16 = new TCanvas("nGenB__signal_16", "nGenB__signal_16",0,0,600,600);
   nGenB__signal_16->SetHighLightColor(2);
   nGenB__signal_16->Range(-2.683529,0.5905146,11.21633,2.390539);
   nGenB__signal_16->SetFillColor(0);
   nGenB__signal_16->SetFillStyle(4000);
   nGenB__signal_16->SetBorderMode(0);
   nGenB__signal_16->SetBorderSize(2);
   nGenB__signal_16->SetLogy();
   nGenB__signal_16->SetLeftMargin(0.15709);
   nGenB__signal_16->SetRightMargin(0.1234783);
   nGenB__signal_16->SetBottomMargin(0.12);
   nGenB__signal_16->SetFrameFillStyle(1000);
   nGenB__signal_16->SetFrameBorderMode(0);
   nGenB__signal_16->SetFrameFillStyle(1000);
   nGenB__signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",10,-0.5,9.5);
   st_stack_13->SetMinimum(6.404976);
   st_stack_13->SetMaximum(162.3814);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetTitleOffset(1);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/1.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *nGenB_stack_1 = new TH1D("nGenB_stack_1","",10,-0.5,9.5);
   nGenB_stack_1->SetBinContent(1,0.7982294);
   nGenB_stack_1->SetBinContent(2,21.59342);
   nGenB_stack_1->SetBinContent(3,115.3971);
   nGenB_stack_1->SetBinContent(4,7.81898);
   nGenB_stack_1->SetBinContent(5,1.484807);
   nGenB_stack_1->SetBinContent(6,0.1123388);
   nGenB_stack_1->SetBinContent(7,0.02303166);
   nGenB_stack_1->SetBinError(1,0.04942616);
   nGenB_stack_1->SetBinError(2,0.2594722);
   nGenB_stack_1->SetBinError(3,0.5992394);
   nGenB_stack_1->SetBinError(4,0.1550099);
   nGenB_stack_1->SetBinError(5,0.0659477);
   nGenB_stack_1->SetBinError(6,0.01832963);
   nGenB_stack_1->SetBinError(7,0.008167904);
   nGenB_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   nGenB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenB_stack_1->SetLineColor(ci);
   nGenB_stack_1->GetXaxis()->SetRange(1,10);
   nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenB_stack_1,"");
   
   TH1D *nGenB_stack_2 = new TH1D("nGenB_stack_2","",10,-0.5,9.5);
   nGenB_stack_2->SetBinContent(1,0.01139745);
   nGenB_stack_2->SetBinContent(2,1.742247);
   nGenB_stack_2->SetBinContent(3,17.21173);
   nGenB_stack_2->SetBinContent(4,1.217348);
   nGenB_stack_2->SetBinContent(5,0.2279675);
   nGenB_stack_2->SetBinContent(6,0.02251752);
   nGenB_stack_2->SetBinContent(7,0.00164911);
   nGenB_stack_2->SetBinError(1,0.0020854);
   nGenB_stack_2->SetBinError(2,0.02579689);
   nGenB_stack_2->SetBinError(3,0.08108734);
   nGenB_stack_2->SetBinError(4,0.02156726);
   nGenB_stack_2->SetBinError(5,0.009318812);
   nGenB_stack_2->SetBinError(6,0.002915579);
   nGenB_stack_2->SetBinError(7,0.0007594446);
   nGenB_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   nGenB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenB_stack_2->SetLineColor(ci);
   nGenB_stack_2->GetXaxis()->SetRange(1,10);
   nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenB_stack_1","ZHcc","F");

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
   nGenB__signal_16->Modified();
   nGenB__signal_16->cd();
   nGenB__signal_16->SetSelected(nGenB__signal_16);
}
