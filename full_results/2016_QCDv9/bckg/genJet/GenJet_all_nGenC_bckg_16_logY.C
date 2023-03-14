#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenC_bckg_16_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenC_bckg_16/GenJet_all_nGenC_bckg_16
//=========  (Thu Mar  9 15:52:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenC_bckg_16 = new TCanvas("GenJet_all_nGenC_bckg_16", "GenJet_all_nGenC_bckg_16",0,0,600,600);
   GenJet_all_nGenC_bckg_16->SetHighLightColor(2);
   GenJet_all_nGenC_bckg_16->Range(-4.867058,-2.910584,22.93266,14.29173);
   GenJet_all_nGenC_bckg_16->SetFillColor(0);
   GenJet_all_nGenC_bckg_16->SetFillStyle(4000);
   GenJet_all_nGenC_bckg_16->SetBorderMode(0);
   GenJet_all_nGenC_bckg_16->SetBorderSize(2);
   GenJet_all_nGenC_bckg_16->SetLogy();
   GenJet_all_nGenC_bckg_16->SetLeftMargin(0.15709);
   GenJet_all_nGenC_bckg_16->SetRightMargin(0.1234783);
   GenJet_all_nGenC_bckg_16->SetBottomMargin(0.12);
   GenJet_all_nGenC_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenC_bckg_16->SetFrameBorderMode(0);
   GenJet_all_nGenC_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenC_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.094011e+12);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",20,-0.5,19.5);
   st_stack_20->SetMinimum(0.1424601);
   st_stack_20->SetMaximum(3.728176e+12);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Event/1.0");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *GenJet_all_nGenC_stack_1 = new TH1D("GenJet_all_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenC_stack_1->SetBinContent(1,9.080177e+11);
   GenJet_all_nGenC_stack_1->SetBinContent(2,1.758976e+11);
   GenJet_all_nGenC_stack_1->SetBinContent(3,5.872092e+10);
   GenJet_all_nGenC_stack_1->SetBinContent(4,8.428866e+09);
   GenJet_all_nGenC_stack_1->SetBinContent(5,1.332359e+09);
   GenJet_all_nGenC_stack_1->SetBinContent(6,1.625069e+08);
   GenJet_all_nGenC_stack_1->SetBinContent(7,2.009254e+07);
   GenJet_all_nGenC_stack_1->SetBinContent(8,2149996);
   GenJet_all_nGenC_stack_1->SetBinContent(9,209536.3);
   GenJet_all_nGenC_stack_1->SetBinContent(10,53104.75);
   GenJet_all_nGenC_stack_1->SetBinContent(11,453.5933);
   GenJet_all_nGenC_stack_1->SetBinContent(12,18.48431);
   GenJet_all_nGenC_stack_1->SetBinError(1,1.376696e+08);
   GenJet_all_nGenC_stack_1->SetBinError(2,6.019218e+07);
   GenJet_all_nGenC_stack_1->SetBinError(3,3.447783e+07);
   GenJet_all_nGenC_stack_1->SetBinError(4,1.289556e+07);
   GenJet_all_nGenC_stack_1->SetBinError(5,5044134);
   GenJet_all_nGenC_stack_1->SetBinError(6,1728776);
   GenJet_all_nGenC_stack_1->SetBinError(7,596593.9);
   GenJet_all_nGenC_stack_1->SetBinError(8,189744.1);
   GenJet_all_nGenC_stack_1->SetBinError(9,57249.12);
   GenJet_all_nGenC_stack_1->SetBinError(10,30557.15);
   GenJet_all_nGenC_stack_1->SetBinError(11,299.4792);
   GenJet_all_nGenC_stack_1->SetBinError(12,17.99282);
   GenJet_all_nGenC_stack_1->SetEntries(2.425785e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenC_stack_1->SetFillColor(ci);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenC_stack_1,"");
   
   TH1D *GenJet_all_nGenC_stack_2 = new TH1D("GenJet_all_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenC_stack_2->SetBinContent(1,1.156694e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(2,1.239794e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(3,4707495);
   GenJet_all_nGenC_stack_2->SetBinContent(4,970301.5);
   GenJet_all_nGenC_stack_2->SetBinContent(5,187092.5);
   GenJet_all_nGenC_stack_2->SetBinContent(6,30591.01);
   GenJet_all_nGenC_stack_2->SetBinContent(7,4707.001);
   GenJet_all_nGenC_stack_2->SetBinContent(8,662.2982);
   GenJet_all_nGenC_stack_2->SetBinContent(9,95.03288);
   GenJet_all_nGenC_stack_2->SetBinContent(10,13.46063);
   GenJet_all_nGenC_stack_2->SetBinContent(11,1.212375);
   GenJet_all_nGenC_stack_2->SetBinContent(12,0.238354);
   GenJet_all_nGenC_stack_2->SetBinError(1,810.7427);
   GenJet_all_nGenC_stack_2->SetBinError(2,891.5831);
   GenJet_all_nGenC_stack_2->SetBinError(3,576.076);
   GenJet_all_nGenC_stack_2->SetBinError(4,261.4284);
   GenJet_all_nGenC_stack_2->SetBinError(5,115.6051);
   GenJet_all_nGenC_stack_2->SetBinError(6,46.78523);
   GenJet_all_nGenC_stack_2->SetBinError(7,18.40815);
   GenJet_all_nGenC_stack_2->SetBinError(8,6.899906);
   GenJet_all_nGenC_stack_2->SetBinError(9,2.632582);
   GenJet_all_nGenC_stack_2->SetBinError(10,0.9860471);
   GenJet_all_nGenC_stack_2->SetBinError(11,0.2973026);
   GenJet_all_nGenC_stack_2->SetBinError(12,0.1377461);
   GenJet_all_nGenC_stack_2->SetEntries(5.166267e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenC_stack_2->SetFillColor(ci);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenC_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GenJet_all_nGenC_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_all_nGenC_bckg_16->Modified();
   GenJet_all_nGenC_bckg_16->cd();
   GenJet_all_nGenC_bckg_16->SetSelected(GenJet_all_nGenC_bckg_16);
}
