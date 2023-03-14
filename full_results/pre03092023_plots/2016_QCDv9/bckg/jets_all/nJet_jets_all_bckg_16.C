#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_bckg_16()
{
//=========Macro generated from canvas: nJet_jets_all_bckg_16/nJet_jets_all_bckg_16
//=========  (Wed Mar  1 14:06:14 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_bckg_16 = new TCanvas("nJet_jets_all_bckg_16", "nJet_jets_all_bckg_16",0,0,600,600);
   nJet_jets_all_bckg_16->SetHighLightColor(2);
   nJet_jets_all_bckg_16->Range(-3.556941,-6.273424e+10,15.90286,4.600511e+11);
   nJet_jets_all_bckg_16->SetFillColor(0);
   nJet_jets_all_bckg_16->SetFillStyle(4000);
   nJet_jets_all_bckg_16->SetBorderMode(0);
   nJet_jets_all_bckg_16->SetBorderSize(2);
   nJet_jets_all_bckg_16->SetLeftMargin(0.15709);
   nJet_jets_all_bckg_16->SetRightMargin(0.1234783);
   nJet_jets_all_bckg_16->SetBottomMargin(0.12);
   nJet_jets_all_bckg_16->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_16->SetFrameBorderMode(0);
   nJet_jets_all_bckg_16->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.077725e+11);
   
   TH1F *st_stack_158 = new TH1F("st_stack_158","",14,-0.5,13.5);
   st_stack_158->SetMinimum(0);
   st_stack_158->SetMaximum(4.077725e+11);
   st_stack_158->SetDirectory(0);
   st_stack_158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_158->SetLineColor(ci);
   st_stack_158->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_158->GetXaxis()->SetRange(1,14);
   st_stack_158->GetXaxis()->SetLabelFont(42);
   st_stack_158->GetXaxis()->SetTitleOffset(1);
   st_stack_158->GetXaxis()->SetTitleFont(42);
   st_stack_158->GetYaxis()->SetTitle("Events/1.0");
   st_stack_158->GetYaxis()->SetLabelFont(42);
   st_stack_158->GetYaxis()->SetTitleSize(0.037);
   st_stack_158->GetYaxis()->SetTitleFont(42);
   st_stack_158->GetZaxis()->SetLabelFont(42);
   st_stack_158->GetZaxis()->SetTitleOffset(1);
   st_stack_158->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_158);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,7.980284e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,3.672137e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.297169e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,2.636037e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,2.718472e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,2.035401e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,1.287942e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,7.34461e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,3.915802e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,1.989664e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,9.790734e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,4.739234e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,2.234683e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,1.075787e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,9.878998e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,1339367);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,9096366);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,5.346098e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,7.560908e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,7.571823e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,6.446302e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,5.04561e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,3.754961e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,2.709181e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,1.91306e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,1.332687e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,9234499);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,6316997);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,4380664);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,4166479);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(2.421249e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,32.94347);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,1756.381);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,32142.21);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,266686.8);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,1160109);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,2911551);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,4712925);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,5501202);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,5081680);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,3944903);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,2683793);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,1649893);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,935900.9);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,498469.7);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,485327.6);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.221579);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,8.958158);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,39.00722);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,115.3826);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,249.1088);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,409.5835);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,536.9312);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,590.6795);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,573.8777);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,508.7775);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,420.9866);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,330.4155);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,248.691);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,181.1242);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,177.2245);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(5.130375e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_bckg_16->Modified();
   nJet_jets_all_bckg_16->cd();
   nJet_jets_all_bckg_16->SetSelected(nJet_jets_all_bckg_16);
}
