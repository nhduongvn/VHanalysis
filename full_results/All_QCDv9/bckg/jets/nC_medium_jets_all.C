void nC_medium_jets_all()
{
//=========Macro generated from canvas: nC_medium_jets_all/nC_medium_jets_all
//=========  (Thu Dec 15 10:05:10 2022) by ROOT version 6.14/09
   TCanvas *nC_medium_jets_all = new TCanvas("nC_medium_jets_all", "nC_medium_jets_all",0,0,600,600);
   nC_medium_jets_all->SetHighLightColor(2);
   nC_medium_jets_all->Range(-2.683529,-8.152294e+11,11.21633,5.978349e+12);
   nC_medium_jets_all->SetFillColor(0);
   nC_medium_jets_all->SetFillStyle(4000);
   nC_medium_jets_all->SetBorderMode(0);
   nC_medium_jets_all->SetBorderSize(2);
   nC_medium_jets_all->SetLeftMargin(0.15709);
   nC_medium_jets_all->SetRightMargin(0.1234783);
   nC_medium_jets_all->SetBottomMargin(0.12);
   nC_medium_jets_all->SetFrameFillStyle(1000);
   nC_medium_jets_all->SetFrameBorderMode(0);
   nC_medium_jets_all->SetFrameFillStyle(1000);
   nC_medium_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.046658e+12);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",10,-0.5,9.5);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(5.298991e+12);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_24->GetXaxis()->SetRange(1,10);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetLabelSize(0.035);
   st_stack_24->GetXaxis()->SetTitleSize(0.035);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/1.0");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetLabelSize(0.035);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleOffset(0);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetLabelSize(0.035);
   st_stack_24->GetZaxis()->SetTitleSize(0.035);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_1 = new TH1D("VbbHcc_jets_nC_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(1,3.364404e+12);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(2,1.101834e+12);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(3,1.326545e+11);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(4,7.576058e+09);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(5,4.040429e+08);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(6,2.182524e+07);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(7,1289686);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(8,73112.8);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(9,2575.962);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(10,620.3067);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinContent(11,1.661075);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(1,2.735529e+08);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(2,1.515799e+08);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(3,4.963095e+07);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(4,1.009497e+07);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(5,1920836);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(6,377788.4);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(7,89874.43);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(8,19281.75);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(9,376.0027);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(10,373.9264);
   VbbHcc_jets_nC_medium_all_stack_1->SetBinError(11,0.9726308);
   VbbHcc_jets_nC_medium_all_stack_1->SetEntries(8.490771e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nC_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_all_stack_2 = new TH1D("VbbHcc_jets_nC_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(1,3.505722e+07);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(2,4.602118e+07);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(3,2.695067e+07);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(4,9296221);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(5,2121790);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(6,347306.7);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(7,44176.7);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(8,4705.289);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(9,450.5321);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(10,39.53081);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinContent(11,2.692289);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(1,1595.701);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(2,1885.047);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(3,1478.356);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(4,883.4933);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(5,426.7125);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(6,173.2641);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(7,62.55236);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(8,19.92487);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(9,6.233973);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(10,1.797093);
   VbbHcc_jets_nC_medium_all_stack_2->SetBinError(11,0.4589025);
   VbbHcc_jets_nC_medium_all_stack_2->SetEntries(1.869087e+09);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nC_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all->Modified();
   nC_medium_jets_all->cd();
   nC_medium_jets_all->SetSelected(nC_medium_jets_all);
}
