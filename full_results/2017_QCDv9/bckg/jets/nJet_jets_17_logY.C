#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_17_logY()
{
//=========Macro generated from canvas: nJet_jets_17/nJet_jets_17
//=========  (Wed Mar  1 13:43:13 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_17 = new TCanvas("nJet_jets_17", "nJet_jets_17",0,0,600,600);
   nJet_jets_17->SetHighLightColor(2);
   nJet_jets_17->Range(-3.556941,-2.070777,15.90286,16.25791);
   nJet_jets_17->SetFillColor(0);
   nJet_jets_17->SetFillStyle(4000);
   nJet_jets_17->SetBorderMode(0);
   nJet_jets_17->SetBorderSize(2);
   nJet_jets_17->SetLogy();
   nJet_jets_17->SetLeftMargin(0.15709);
   nJet_jets_17->SetRightMargin(0.1234783);
   nJet_jets_17->SetBottomMargin(0.12);
   nJet_jets_17->SetFrameFillStyle(1000);
   nJet_jets_17->SetFrameBorderMode(0);
   nJet_jets_17->SetFrameFillStyle(1000);
   nJet_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(7.444596e+13);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",14,-0.5,13.5);
   st_stack_4->SetMinimum(1.344823);
   st_stack_4->SetMaximum(2.660973e+14);
   st_stack_4->SetDirectory(0);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_4->GetXaxis()->SetRange(1,14);
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Events/1.0");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetTitleSize(0.037);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,7.444584e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,4.113945e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,2.32485e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,1.893535e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,2.515706e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,3.068653e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,4.161266e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,5912133);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,847788.2);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,127543.3);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,17639.38);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,2424.326);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,376.3228);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,37.54414);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,18.14677);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,1.126125e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,8.14601e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,5.654821e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,9431956);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,2066714);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,526245.9);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,145502.3);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,40830.69);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,6342.327);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,1954.552);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,367.7874);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,114.9635);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,43.93685);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,8.959485);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,9.937123);
   VbbHcc_jets_nJet_stack_1->SetEntries(3.054959e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,1204778);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,4313192);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,9041259);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,1.006312e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,6888997);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,3202042);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,1128659);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,323902.2);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,81179.1);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,18262.98);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,3823.317);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,756.1128);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,137.4027);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,23.17465);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,5.456607);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,253.2186);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,488.0389);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,739.9758);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,816.2685);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,700.8585);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,487.5402);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,292.3097);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,157.2532);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,78.87607);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,37.4387);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,17.12488);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,7.615644);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,3.232163);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.326209);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.6767207);
   VbbHcc_jets_nJet_stack_2->SetEntries(6.313347e+08);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

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
   nJet_jets_17->Modified();
   nJet_jets_17->cd();
   nJet_jets_17->SetSelected(nJet_jets_17);
}
