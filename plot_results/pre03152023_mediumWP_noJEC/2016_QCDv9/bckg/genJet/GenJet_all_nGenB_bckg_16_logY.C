#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenB_bckg_16_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenB_bckg_16/GenJet_all_nGenB_bckg_16
//=========  (Thu Mar  9 15:52:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenB_bckg_16 = new TCanvas("GenJet_all_nGenB_bckg_16", "GenJet_all_nGenB_bckg_16",0,0,600,600);
   GenJet_all_nGenB_bckg_16->SetHighLightColor(2);
   GenJet_all_nGenB_bckg_16->Range(-4.867058,-2.923753,22.93266,14.37079);
   GenJet_all_nGenB_bckg_16->SetFillColor(0);
   GenJet_all_nGenB_bckg_16->SetFillStyle(4000);
   GenJet_all_nGenB_bckg_16->SetBorderMode(0);
   GenJet_all_nGenB_bckg_16->SetBorderSize(2);
   GenJet_all_nGenB_bckg_16->SetLogy();
   GenJet_all_nGenB_bckg_16->SetLeftMargin(0.15709);
   GenJet_all_nGenB_bckg_16->SetRightMargin(0.1234783);
   GenJet_all_nGenB_bckg_16->SetBottomMargin(0.12);
   GenJet_all_nGenB_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_16->SetFrameBorderMode(0);
   GenJet_all_nGenB_bckg_16->SetFrameFillStyle(1000);
   GenJet_all_nGenB_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.279751e+12);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",20,-0.5,19.5);
   st_stack_14->SetMinimum(0.1417723);
   st_stack_14->SetMaximum(4.378574e+12);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetTitleOffset(1);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Event/1.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *GenJet_all_nGenB_stack_1 = new TH1D("GenJet_all_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_1->SetBinContent(1,1.062194e+12);
   GenJet_all_nGenB_stack_1->SetBinContent(2,5.549997e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(3,3.279831e+10);
   GenJet_all_nGenB_stack_1->SetBinContent(4,1.807759e+09);
   GenJet_all_nGenB_stack_1->SetBinContent(5,2.650126e+08);
   GenJet_all_nGenB_stack_1->SetBinContent(6,1.661185e+07);
   GenJet_all_nGenB_stack_1->SetBinContent(7,1012394);
   GenJet_all_nGenB_stack_1->SetBinContent(8,114964.4);
   GenJet_all_nGenB_stack_1->SetBinContent(9,2228.429);
   GenJet_all_nGenB_stack_1->SetBinContent(10,12.30751);
   GenJet_all_nGenB_stack_1->SetBinError(1,1.487246e+08);
   GenJet_all_nGenB_stack_1->SetBinError(2,3.378008e+07);
   GenJet_all_nGenB_stack_1->SetBinError(3,2.568094e+07);
   GenJet_all_nGenB_stack_1->SetBinError(4,5924926);
   GenJet_all_nGenB_stack_1->SetBinError(5,2204787);
   GenJet_all_nGenB_stack_1->SetBinError(6,531174.3);
   GenJet_all_nGenB_stack_1->SetBinError(7,120521.8);
   GenJet_all_nGenB_stack_1->SetBinError(8,43576.33);
   GenJet_all_nGenB_stack_1->SetBinError(9,1549.78);
   GenJet_all_nGenB_stack_1->SetBinError(10,9.266169);
   GenJet_all_nGenB_stack_1->SetEntries(2.425785e+08);

   ci = TColor::GetColor("#ff6600");
   GenJet_all_nGenB_stack_1->SetFillColor(ci);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_1,"");
   
   TH1D *GenJet_all_nGenB_stack_2 = new TH1D("GenJet_all_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_all_nGenB_stack_2->SetBinContent(1,35745.47);
   GenJet_all_nGenB_stack_2->SetBinContent(2,2318939);
   GenJet_all_nGenB_stack_2->SetBinContent(3,2.496654e+07);
   GenJet_all_nGenB_stack_2->SetBinContent(4,2136623);
   GenJet_all_nGenB_stack_2->SetBinContent(5,367467.2);
   GenJet_all_nGenB_stack_2->SetBinContent(6,36190.02);
   GenJet_all_nGenB_stack_2->SetBinContent(7,3946.915);
   GenJet_all_nGenB_stack_2->SetBinContent(8,355.8072);
   GenJet_all_nGenB_stack_2->SetBinContent(9,30.90598);
   GenJet_all_nGenB_stack_2->SetBinContent(10,2.679894);
   GenJet_all_nGenB_stack_2->SetBinContent(11,0.3867757);
   GenJet_all_nGenB_stack_2->SetBinError(1,47.39814);
   GenJet_all_nGenB_stack_2->SetBinError(2,381.1836);
   GenJet_all_nGenB_stack_2->SetBinError(3,1249.261);
   GenJet_all_nGenB_stack_2->SetBinError(4,366.6153);
   GenJet_all_nGenB_stack_2->SetBinError(5,152.3088);
   GenJet_all_nGenB_stack_2->SetBinError(6,47.94489);
   GenJet_all_nGenB_stack_2->SetBinError(7,15.85832);
   GenJet_all_nGenB_stack_2->SetBinError(8,4.778624);
   GenJet_all_nGenB_stack_2->SetBinError(9,1.410116);
   GenJet_all_nGenB_stack_2->SetBinError(10,0.410824);
   GenJet_all_nGenB_stack_2->SetBinError(11,0.159453);
   GenJet_all_nGenB_stack_2->SetEntries(5.166267e+08);

   ci = TColor::GetColor("#990099");
   GenJet_all_nGenB_stack_2->SetFillColor(ci);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_all_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_all_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_all_nGenB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("GenJet_all_nGenB_stack_1","QCD","F");

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
   GenJet_all_nGenB_bckg_16->Modified();
   GenJet_all_nGenB_bckg_16->cd();
   GenJet_all_nGenB_bckg_16->SetSelected(GenJet_all_nGenB_bckg_16);
}
