void nB_medium_jets_all_18()
{
//=========Macro generated from canvas: nB_medium_jets_all_18/nB_medium_jets_all_18
//=========  (Thu Dec 15 10:05:12 2022) by ROOT version 6.14/09
   TCanvas *nB_medium_jets_all_18 = new TCanvas("nB_medium_jets_all_18", "nB_medium_jets_all_18",0,0,600,600);
   nB_medium_jets_all_18->SetHighLightColor(2);
   nB_medium_jets_all_18->Range(-2.683529,-4.228847e+11,11.21633,3.101155e+12);
   nB_medium_jets_all_18->SetFillColor(0);
   nB_medium_jets_all_18->SetFillStyle(4000);
   nB_medium_jets_all_18->SetBorderMode(0);
   nB_medium_jets_all_18->SetBorderSize(2);
   nB_medium_jets_all_18->SetLeftMargin(0.15709);
   nB_medium_jets_all_18->SetRightMargin(0.1234783);
   nB_medium_jets_all_18->SetBottomMargin(0.12);
   nB_medium_jets_all_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_18->SetFrameBorderMode(0);
   nB_medium_jets_all_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.617858e+12);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",10,-0.5,9.5);
   st_stack_63->SetMinimum(0);
   st_stack_63->SetMaximum(2.748751e+12);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_63->GetXaxis()->SetRange(1,10);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetLabelSize(0.035);
   st_stack_63->GetXaxis()->SetTitleSize(0.035);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/1.0");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetLabelSize(0.035);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleOffset(0);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetLabelSize(0.035);
   st_stack_63->GetZaxis()->SetTitleSize(0.035);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,1.745235e+12);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,2.63106e+11);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,3.42586e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,2.469921e+09);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,1.465119e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,7011317);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,192351.3);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,8371.174);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(9,480.9923);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,2.226935e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,8.397432e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,2.964239e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,7555591);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,1727892);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,345558.3);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,45847.1);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,3480.161);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(9,377.1891);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(3.026752e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,3598226);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,1.796978e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,2.494034e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,6307916);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,818303.1);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,77435.27);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,6473.334);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,565.1339);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,57.38879);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,8.298296);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(11,1.265361);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,561.5512);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,1260.397);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,1489.068);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,748.3383);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,267.3887);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,81.82354);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,23.88173);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,7.183205);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,2.284387);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.8535898);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(11,0.3335539);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(7.771882e+08);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_18->Modified();
   nB_medium_jets_all_18->cd();
   nB_medium_jets_all_18->SetSelected(nB_medium_jets_all_18);
}
