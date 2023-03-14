#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_bckg_16()
{
//=========Macro generated from canvas: nJet_jets_all_bckg_16/nJet_jets_all_bckg_16
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_bckg_16 = new TCanvas("nJet_jets_all_bckg_16", "nJet_jets_all_bckg_16",0,0,600,600);
   nJet_jets_all_bckg_16->SetHighLightColor(2);
   nJet_jets_all_bckg_16->Range(-3.556941,-5.039461e+10,15.90286,3.695605e+11);
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
   st->SetMaximum(3.27565e+11);
   
   TH1F *st_stack_158 = new TH1F("st_stack_158","",14,-0.5,13.5);
   st_stack_158->SetMinimum(0);
   st_stack_158->SetMaximum(3.27565e+11);
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
   st_stack_158->GetYaxis()->SetTitle("Event/1.0");
   st_stack_158->GetYaxis()->SetLabelFont(42);
   st_stack_158->GetYaxis()->SetTitleSize(0.037);
   st_stack_158->GetYaxis()->SetTitleFont(42);
   st_stack_158->GetZaxis()->SetLabelFont(42);
   st_stack_158->GetZaxis()->SetTitleOffset(1);
   st_stack_158->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_158);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,7.972456e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,3.671297e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.297155e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,2.636161e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,2.718778e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,2.035574e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,1.28792e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,7.343604e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,3.914221e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,1.988471e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,9.782617e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,4.734166e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,2.231594e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,1.073807e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,9.853342e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,1341643);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,9114994);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,5.357625e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,7.577438e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,7.588612e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,6.460493e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,5.056424e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,3.762744e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,2.714372e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,1.916526e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,1.334902e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,9248928);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,6325719);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,4385555);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,4169900);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(2.416594e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);
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
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,32.86763);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,1756.266);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,32144.12);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,266688.4);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,1160117);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,2911461);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,4712622);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,5500477);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,5081151);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,3944802);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,2684110);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,1650277);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,936356);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,498886.1);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,486203.1);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.219295);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,8.953193);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,38.96142);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,115.1203);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,248.1473);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,407.2001);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,532.863);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,585.5266);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,568.4617);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,503.7376);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,416.6975);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,326.982);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,246.0888);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,179.2389);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,175.4361);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(5.194289e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   nJet_jets_all_bckg_16->Modified();
   nJet_jets_all_bckg_16->cd();
   nJet_jets_all_bckg_16->SetSelected(nJet_jets_all_bckg_16);
}
