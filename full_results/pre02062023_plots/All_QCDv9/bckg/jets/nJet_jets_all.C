#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all()
{
//=========Macro generated from canvas: nJet_jets_all/nJet_jets_all
//=========  (Mon Dec 19 11:02:46 2022) by ROOT version 6.26/06
   TCanvas *nJet_jets_all = new TCanvas("nJet_jets_all", "nJet_jets_all",0,0,600,600);
   nJet_jets_all->SetHighLightColor(2);
   nJet_jets_all->Range(-3.556941,-4.120936e+11,15.90286,3.02202e+12);
   nJet_jets_all->SetFillColor(0);
   nJet_jets_all->SetFillStyle(4000);
   nJet_jets_all->SetBorderMode(0);
   nJet_jets_all->SetBorderSize(2);
   nJet_jets_all->SetLeftMargin(0.15709);
   nJet_jets_all->SetRightMargin(0.1234783);
   nJet_jets_all->SetBottomMargin(0.12);
   nJet_jets_all->SetFrameFillStyle(1000);
   nJet_jets_all->SetFrameBorderMode(0);
   nJet_jets_all->SetFrameFillStyle(1000);
   nJet_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.678608e+12);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",14,-0.5,13.5);
   st_stack_4->SetMinimum(0);
   st_stack_4->SetMaximum(2.678608e+12);
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
   
   
   TH1D *VbbHcc_jets_nJet_all_stack_1 = new TH1D("VbbHcc_jets_nJet_all_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(1,7.226966e+11);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(2,1.785734e+12);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(3,1.694806e+12);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(4,3.364264e+11);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(5,5.687059e+10);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(6,8.691123e+09);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(7,1.391529e+09);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(8,2.305005e+08);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(9,3.925909e+07);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(10,6712596);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(11,1195379);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(12,193644.8);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(13,53488.68);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(14,5276.498);
   VbbHcc_jets_nJet_all_stack_1->SetBinContent(15,1238.592);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(1,1.296099e+08);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(2,2.017576e+08);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(3,1.914049e+08);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(4,7.486443e+07);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(5,2.402976e+07);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(6,6987783);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(7,2125106);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(8,676440);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(9,240258.8);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(10,85795.18);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(11,39650.17);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(12,4015.794);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(13,21564.78);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(14,235.009);
   VbbHcc_jets_nJet_all_stack_1->SetBinError(15,96.28141);
   VbbHcc_jets_nJet_all_stack_1->SetEntries(8.490771e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_all_stack_2 = new TH1D("VbbHcc_jets_nJet_all_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(1,700172.7);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(2,4699417);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(3,1.448602e+07);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(4,2.596363e+07);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(5,3.018377e+07);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(6,2.356124e+07);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(7,1.278167e+07);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(8,5119983);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(9,1692152);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(10,488335.2);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(11,127424.7);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(12,30965.42);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(13,7066.071);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(14,1537.871);
   VbbHcc_jets_nJet_all_stack_2->SetBinContent(15,386.2915);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(1,204.5592);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(2,534.6794);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(3,971.1133);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(4,1364.181);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(5,1541.454);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(6,1410.875);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(7,1057.387);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(8,674.5286);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(9,389.4121);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(10,209.951);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(11,106.9149);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(12,52.69083);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(13,25.31259);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(14,11.60339);
   VbbHcc_jets_nJet_all_stack_2->SetBinError(15,5.746861);
   VbbHcc_jets_nJet_all_stack_2->SetEntries(1.869087e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_nJet_all_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   nJet_jets_all->Modified();
   nJet_jets_all->cd();
   nJet_jets_all->SetSelected(nJet_jets_all);
}
