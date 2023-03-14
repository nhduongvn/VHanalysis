#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_all_nGenC_bckg_16_logY()
{
//=========Macro generated from canvas: GenJet_all_nGenC_bckg_16/GenJet_all_nGenC_bckg_16
//=========  (Fri Mar 10 12:49:21 2023) by ROOT version 6.26/06
   TCanvas *GenJet_all_nGenC_bckg_16 = new TCanvas("GenJet_all_nGenC_bckg_16", "GenJet_all_nGenC_bckg_16",0,0,600,600);
   GenJet_all_nGenC_bckg_16->SetHighLightColor(2);
   GenJet_all_nGenC_bckg_16->Range(-4.867058,-2.910584,22.93266,14.29172);
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
   st->SetMaximum(1.094003e+12);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",20,-0.5,19.5);
   st_stack_20->SetMinimum(0.1424601);
   st_stack_20->SetMaximum(3.728148e+12);
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
   GenJet_all_nGenC_stack_1->SetBinContent(1,9.080109e+11);
   GenJet_all_nGenC_stack_1->SetBinContent(2,1.759e+11);
   GenJet_all_nGenC_stack_1->SetBinContent(3,5.872092e+10);
   GenJet_all_nGenC_stack_1->SetBinContent(4,8.430837e+09);
   GenJet_all_nGenC_stack_1->SetBinContent(5,1.332498e+09);
   GenJet_all_nGenC_stack_1->SetBinContent(6,1.624927e+08);
   GenJet_all_nGenC_stack_1->SetBinContent(7,2.008733e+07);
   GenJet_all_nGenC_stack_1->SetBinContent(8,2134826);
   GenJet_all_nGenC_stack_1->SetBinContent(9,210009.6);
   GenJet_all_nGenC_stack_1->SetBinContent(10,53243.14);
   GenJet_all_nGenC_stack_1->SetBinContent(11,455.4142);
   GenJet_all_nGenC_stack_1->SetBinContent(12,18.75422);
   GenJet_all_nGenC_stack_1->SetBinError(1,1.379182e+08);
   GenJet_all_nGenC_stack_1->SetBinError(2,6.030146e+07);
   GenJet_all_nGenC_stack_1->SetBinError(3,3.453996e+07);
   GenJet_all_nGenC_stack_1->SetBinError(4,1.292054e+07);
   GenJet_all_nGenC_stack_1->SetBinError(5,5053531);
   GenJet_all_nGenC_stack_1->SetBinError(6,1731725);
   GenJet_all_nGenC_stack_1->SetBinError(7,597629.9);
   GenJet_all_nGenC_stack_1->SetBinError(8,189261.2);
   GenJet_all_nGenC_stack_1->SetBinError(9,57452.47);
   GenJet_all_nGenC_stack_1->SetBinError(10,30667.02);
   GenJet_all_nGenC_stack_1->SetBinError(11,299.6283);
   GenJet_all_nGenC_stack_1->SetBinError(12,18.26262);
   GenJet_all_nGenC_stack_1->SetEntries(2.416594e+08);

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
   GenJet_all_nGenC_stack_2->SetBinContent(1,1.156707e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(2,1.239853e+07);
   GenJet_all_nGenC_stack_2->SetBinContent(3,4707880);
   GenJet_all_nGenC_stack_2->SetBinContent(4,970417.9);
   GenJet_all_nGenC_stack_2->SetBinContent(5,187123.8);
   GenJet_all_nGenC_stack_2->SetBinContent(6,30580.57);
   GenJet_all_nGenC_stack_2->SetBinContent(7,4705.791);
   GenJet_all_nGenC_stack_2->SetBinContent(8,662.0083);
   GenJet_all_nGenC_stack_2->SetBinContent(9,95.29194);
   GenJet_all_nGenC_stack_2->SetBinContent(10,13.44779);
   GenJet_all_nGenC_stack_2->SetBinContent(11,1.190872);
   GenJet_all_nGenC_stack_2->SetBinContent(12,0.312038);
   GenJet_all_nGenC_stack_2->SetBinError(1,808.4633);
   GenJet_all_nGenC_stack_2->SetBinError(2,886.9828);
   GenJet_all_nGenC_stack_2->SetBinError(3,571.5199);
   GenJet_all_nGenC_stack_2->SetBinError(4,259.3724);
   GenJet_all_nGenC_stack_2->SetBinError(5,114.6507);
   GenJet_all_nGenC_stack_2->SetBinError(6,46.38319);
   GenJet_all_nGenC_stack_2->SetBinError(7,18.247);
   GenJet_all_nGenC_stack_2->SetBinError(8,6.839858);
   GenJet_all_nGenC_stack_2->SetBinError(9,2.613288);
   GenJet_all_nGenC_stack_2->SetBinError(10,0.9763282);
   GenJet_all_nGenC_stack_2->SetBinError(11,0.2918617);
   GenJet_all_nGenC_stack_2->SetBinError(12,0.1561319);
   GenJet_all_nGenC_stack_2->SetEntries(5.194289e+08);

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
