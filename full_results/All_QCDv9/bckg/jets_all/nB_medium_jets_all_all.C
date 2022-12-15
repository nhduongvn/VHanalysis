void nB_medium_jets_all_all()
{
//=========Macro generated from canvas: nB_medium_jets_all_all/nB_medium_jets_all_all
//=========  (Thu Dec 15 10:05:12 2022) by ROOT version 6.14/09
   TCanvas *nB_medium_jets_all_all = new TCanvas("nB_medium_jets_all_all", "nB_medium_jets_all_all",0,0,600,600);
   nB_medium_jets_all_all->SetHighLightColor(2);
   nB_medium_jets_all_all->Range(-2.683529,-9.582167e+11,11.21633,7.026922e+12);
   nB_medium_jets_all_all->SetFillColor(0);
   nB_medium_jets_all_all->SetFillStyle(4000);
   nB_medium_jets_all_all->SetBorderMode(0);
   nB_medium_jets_all_all->SetBorderSize(2);
   nB_medium_jets_all_all->SetLeftMargin(0.15709);
   nB_medium_jets_all_all->SetRightMargin(0.1234783);
   nB_medium_jets_all_all->SetBottomMargin(0.12);
   nB_medium_jets_all_all->SetFrameFillStyle(1000);
   nB_medium_jets_all_all->SetFrameBorderMode(0);
   nB_medium_jets_all_all->SetFrameFillStyle(1000);
   nB_medium_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.931818e+12);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",10,-0.5,9.5);
   st_stack_64->SetMinimum(0);
   st_stack_64->SetMaximum(6.228409e+12);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_64->GetXaxis()->SetRange(1,10);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetLabelSize(0.035);
   st_stack_64->GetXaxis()->SetTitleSize(0.035);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Events/1.0");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetLabelSize(0.035);
   st_stack_64->GetYaxis()->SetTitleSize(0.037);
   st_stack_64->GetYaxis()->SetTitleOffset(0);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetLabelSize(0.035);
   st_stack_64->GetZaxis()->SetTitleSize(0.035);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(1,3.954536e+12);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(2,5.739279e+11);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(3,7.296431e+10);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(4,5.146527e+09);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(5,3.043409e+08);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(6,1.508104e+07);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(7,550717.1);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(8,19231.55);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(9,483.9888);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(11,25.55173);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(1,2.944068e+08);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(2,1.100828e+08);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(3,3.849071e+07);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(4,9809610);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(5,2258465);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(6,468433.6);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(7,78297.42);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(8,4402.864);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(9,377.1911);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(11,25.55173);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetEntries(8.490771e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(1,8960332);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(2,4.13439e+07);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(3,5.42672e+07);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(4,1.338735e+07);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(5,1709460);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(6,160763.3);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(7,13443.27);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(8,1178.702);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(9,124.6902);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(10,17.93293);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(11,3.186201);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(1,824.6369);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(2,1783.662);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(3,2054.2);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(4,1026.133);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(5,366.4486);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(6,112.2239);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(7,32.67037);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(8,9.799692);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(9,3.195805);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(10,1.201271);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(11,0.51097);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetEntries(1.869087e+09);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_1","QCD","F");

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
   nB_medium_jets_all_all->Modified();
   nB_medium_jets_all_all->cd();
   nB_medium_jets_all_all->SetSelected(nB_medium_jets_all_all);
}
