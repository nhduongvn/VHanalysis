#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_all()
{
//=========Macro generated from canvas: nJet_jets_all_all/nJet_jets_all_all
//=========  (Mon Dec 19 11:02:48 2022) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_all = new TCanvas("nJet_jets_all_all", "nJet_jets_all_all",0,0,600,600);
   nJet_jets_all_all->SetHighLightColor(2);
   nJet_jets_all_all->Range(-3.556941,-2.317755e+11,15.90286,1.699687e+12);
   nJet_jets_all_all->SetFillColor(0);
   nJet_jets_all_all->SetFillStyle(4000);
   nJet_jets_all_all->SetBorderMode(0);
   nJet_jets_all_all->SetBorderSize(2);
   nJet_jets_all_all->SetLeftMargin(0.15709);
   nJet_jets_all_all->SetRightMargin(0.1234783);
   nJet_jets_all_all->SetBottomMargin(0.12);
   nJet_jets_all_all->SetFrameFillStyle(1000);
   nJet_jets_all_all->SetFrameBorderMode(0);
   nJet_jets_all_all->SetFrameFillStyle(1000);
   nJet_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.506541e+12);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",14,-0.5,13.5);
   st_stack_108->SetMinimum(0);
   st_stack_108->SetMaximum(1.506541e+12);
   st_stack_108->SetDirectory(0);
   st_stack_108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_108->SetLineColor(ci);
   st_stack_108->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_108->GetXaxis()->SetRange(1,14);
   st_stack_108->GetXaxis()->SetLabelFont(42);
   st_stack_108->GetXaxis()->SetTitleOffset(1);
   st_stack_108->GetXaxis()->SetTitleFont(42);
   st_stack_108->GetYaxis()->SetTitle("Events/1.0");
   st_stack_108->GetYaxis()->SetLabelFont(42);
   st_stack_108->GetYaxis()->SetTitleSize(0.037);
   st_stack_108->GetYaxis()->SetTitleFont(42);
   st_stack_108->GetZaxis()->SetLabelFont(42);
   st_stack_108->GetZaxis()->SetTitleOffset(1);
   st_stack_108->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_108);
   
   
   TH1D *VbbHcc_jets_all_nJet_all_stack_1 = new TH1D("VbbHcc_jets_all_nJet_all_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(1,2.156215e+08);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(2,1.105522e+10);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(3,3.969942e+11);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(4,8.774299e+11);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(5,1.004357e+12);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(6,8.434079e+11);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(7,5.983363e+11);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(8,3.818368e+11);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(9,2.264988e+11);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(10,1.272032e+11);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(11,6.856214e+10);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(12,3.569144e+10);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(13,1.804696e+10);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(14,8.975453e+09);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinContent(15,8.284192e+09);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(1,2296882);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(2,1.717027e+07);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(3,1.030606e+08);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(4,1.472651e+08);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(5,1.506033e+08);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(6,1.328195e+08);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(7,1.083785e+08);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(8,8.452484e+07);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(9,6.373513e+07);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(10,4.695492e+07);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(11,3.394218e+07);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(12,2.414924e+07);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(13,1.696326e+07);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(14,1.184288e+07);
   VbbHcc_jets_all_nJet_all_stack_1->SetBinError(15,1.118596e+07);
   VbbHcc_jets_all_nJet_all_stack_1->SetEntries(8.490771e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nJet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nJet_all_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_all_stack_2 = new TH1D("VbbHcc_jets_all_nJet_all_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(1,94.19747);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(2,5284.728);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(3,98795.79);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(4,832806.6);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(5,3714101);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(6,9656895);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(7,1.641434e+07);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(8,2.034191e+07);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(9,2.010984e+07);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(10,1.681698e+07);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(11,1.237444e+07);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(12,8244828);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(13,5071830);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(14,2924418);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinContent(15,3237204);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(1,2.19443);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(2,17.44198);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(3,78.64609);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(4,234.3181);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(5,512.5381);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(6,854.5725);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(7,1136.706);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(8,1271.082);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(9,1261.731);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(10,1147.4);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(11,977.2722);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(12,791.8877);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(13,616.2566);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(14,464.7448);
   VbbHcc_jets_all_nJet_all_stack_2->SetBinError(15,483.404);
   VbbHcc_jets_all_nJet_all_stack_2->SetEntries(1.869087e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nJet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nJet_all_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_all_stack_1","QCD","F");

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
   nJet_jets_all_all->Modified();
   nJet_jets_all_all->cd();
   nJet_jets_all_all->SetSelected(nJet_jets_all_all);
}
