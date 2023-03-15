#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nGenL_all__signal_16()
{
//=========Macro generated from canvas: nGenL_all__signal_16/nGenL_all__signal_16
//=========  (Mon Mar  6 10:53:08 2023) by ROOT version 6.26/06
   TCanvas *nGenL_all__signal_16 = new TCanvas("nGenL_all__signal_16", "nGenL_all__signal_16",0,0,600,600);
   nGenL_all__signal_16->SetHighLightColor(2);
   nGenL_all__signal_16->Range(-3.775293,-39.42674,17.0745,289.1294);
   nGenL_all__signal_16->SetFillColor(0);
   nGenL_all__signal_16->SetFillStyle(4000);
   nGenL_all__signal_16->SetBorderMode(0);
   nGenL_all__signal_16->SetBorderSize(2);
   nGenL_all__signal_16->SetLeftMargin(0.15709);
   nGenL_all__signal_16->SetRightMargin(0.1234783);
   nGenL_all__signal_16->SetBottomMargin(0.12);
   nGenL_all__signal_16->SetFrameFillStyle(1000);
   nGenL_all__signal_16->SetFrameBorderMode(0);
   nGenL_all__signal_16->SetFrameFillStyle(1000);
   nGenL_all__signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",15,-0.5,14.5);
   st_stack_7->SetMinimum(0);
   st_stack_7->SetMaximum(256.2738);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetTitle("Gen l-jet multiplicity");
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetTitleOffset(1);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/1.0");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetTitleSize(0.037);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetTitleOffset(1);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *nGenL_all_stack_1 = new TH1D("nGenL_all_stack_1","",15,-0.5,14.5);
   nGenL_all_stack_1->SetBinContent(1,131.4238);
   nGenL_all_stack_1->SetBinContent(2,125.0738);
   nGenL_all_stack_1->SetBinContent(3,216.6414);
   nGenL_all_stack_1->SetBinContent(4,123.85);
   nGenL_all_stack_1->SetBinContent(5,50.90981);
   nGenL_all_stack_1->SetBinContent(6,16.94878);
   nGenL_all_stack_1->SetBinContent(7,4.874939);
   nGenL_all_stack_1->SetBinContent(8,1.441254);
   nGenL_all_stack_1->SetBinContent(9,0.3736583);
   nGenL_all_stack_1->SetBinContent(10,0.1043939);
   nGenL_all_stack_1->SetBinContent(11,0.02673686);
   nGenL_all_stack_1->SetBinContent(12,0.005984945);
   nGenL_all_stack_1->SetBinError(1,0.6460553);
   nGenL_all_stack_1->SetBinError(2,0.6230649);
   nGenL_all_stack_1->SetBinError(3,0.8248555);
   nGenL_all_stack_1->SetBinError(4,0.6154928);
   nGenL_all_stack_1->SetBinError(5,0.3915213);
   nGenL_all_stack_1->SetBinError(6,0.2247943);
   nGenL_all_stack_1->SetBinError(7,0.120498);
   nGenL_all_stack_1->SetBinError(8,0.06591685);
   nGenL_all_stack_1->SetBinError(9,0.03291315);
   nGenL_all_stack_1->SetBinError(10,0.01749973);
   nGenL_all_stack_1->SetBinError(11,0.008922903);
   nGenL_all_stack_1->SetBinError(12,0.004241088);
   nGenL_all_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   nGenL_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_1->SetLineColor(ci);
   nGenL_all_stack_1->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_1->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_1->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_1->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_1,"");
   
   TH1D *nGenL_all_stack_2 = new TH1D("nGenL_all_stack_2","",15,-0.5,14.5);
   nGenL_all_stack_2->SetBinContent(1,14.05584);
   nGenL_all_stack_2->SetBinContent(2,15.8752);
   nGenL_all_stack_2->SetBinContent(3,27.42889);
   nGenL_all_stack_2->SetBinContent(4,20.80201);
   nGenL_all_stack_2->SetBinContent(5,9.827437);
   nGenL_all_stack_2->SetBinContent(6,3.610116);
   nGenL_all_stack_2->SetBinContent(7,1.141945);
   nGenL_all_stack_2->SetBinContent(8,0.3116218);
   nGenL_all_stack_2->SetBinContent(9,0.07973462);
   nGenL_all_stack_2->SetBinContent(10,0.01583939);
   nGenL_all_stack_2->SetBinContent(11,0.0070872);
   nGenL_all_stack_2->SetBinContent(12,0.002751261);
   nGenL_all_stack_2->SetBinError(1,0.07344306);
   nGenL_all_stack_2->SetBinError(2,0.07786214);
   nGenL_all_stack_2->SetBinError(3,0.1024348);
   nGenL_all_stack_2->SetBinError(4,0.0890692);
   nGenL_all_stack_2->SetBinError(5,0.06113601);
   nGenL_all_stack_2->SetBinError(6,0.03703483);
   nGenL_all_stack_2->SetBinError(7,0.02082042);
   nGenL_all_stack_2->SetBinError(8,0.01085941);
   nGenL_all_stack_2->SetBinError(9,0.00545649);
   nGenL_all_stack_2->SetBinError(10,0.002405583);
   nGenL_all_stack_2->SetBinError(11,0.001632581);
   nGenL_all_stack_2->SetBinError(12,0.001043611);
   nGenL_all_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   nGenL_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   nGenL_all_stack_2->SetLineColor(ci);
   nGenL_all_stack_2->GetXaxis()->SetRange(1,15);
   nGenL_all_stack_2->GetXaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetXaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetXaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetYaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetYaxis()->SetTitleFont(42);
   nGenL_all_stack_2->GetZaxis()->SetLabelFont(42);
   nGenL_all_stack_2->GetZaxis()->SetTitleOffset(1);
   nGenL_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(nGenL_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("nGenL_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("nGenL_all_stack_1","ZHcc","F");

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
   nGenL_all__signal_16->Modified();
   nGenL_all__signal_16->cd();
   nGenL_all__signal_16->SetSelected(nGenL_all__signal_16);
}
