#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_bckg_18_logY()
{
//=========Macro generated from canvas: nJet_jets_bckg_18/nJet_jets_bckg_18
//=========  (Fri Mar 10 14:09:13 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_bckg_18 = new TCanvas("nJet_jets_bckg_18", "nJet_jets_bckg_18",0,0,600,600);
   nJet_jets_bckg_18->SetHighLightColor(2);
   nJet_jets_bckg_18->Range(-3.556941,-1.73038,15.90286,14.21692);
   nJet_jets_bckg_18->SetFillColor(0);
   nJet_jets_bckg_18->SetFillStyle(4000);
   nJet_jets_bckg_18->SetBorderMode(0);
   nJet_jets_bckg_18->SetBorderSize(2);
   nJet_jets_bckg_18->SetLogy();
   nJet_jets_bckg_18->SetLeftMargin(0.15709);
   nJet_jets_bckg_18->SetRightMargin(0.1234783);
   nJet_jets_bckg_18->SetBottomMargin(0.12);
   nJet_jets_bckg_18->SetFrameFillStyle(1000);
   nJet_jets_bckg_18->SetFrameBorderMode(0);
   nJet_jets_bckg_18->SetFrameFillStyle(1000);
   nJet_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.300052e+12);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",14,-0.5,13.5);
   st_stack_6->SetMinimum(1.525092);
   st_stack_6->SetMaximum(4.189797e+12);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_6->GetXaxis()->SetRange(1,14);
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetTitleOffset(1);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Event/1.0");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetTitleSize(0.037);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetTitleOffset(1);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,1.079041e+12);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,5.982506e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,3.364396e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,2.727828e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,3.645616e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,4.442115e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,6.127698e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,8714271);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,1226392);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,179958.9);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,26734.18);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,3510.149);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,532.3674);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,53.98061);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,25.9183);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,1.818823e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,1.312236e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,9.048763e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,1.448541e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,3106749);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,746961.6);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,251626.4);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,82762.92);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,9922.562);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,2529.609);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,860.7619);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,168.7795);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,58.5545);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,12.88186);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,14.13616);
   VbbHcc_jets_nJet_stack_1->SetEntries(3.062923e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);
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
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,1805857);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,6448969);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,1.340339e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,1.486143e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,1.016054e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,4729401);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,1671684);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,481646.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,121247.3);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,27490.55);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,5734.273);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,1129.821);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,203.9544);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,40.23233);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,7.463615);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,344.1322);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,660.3941);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,986.6588);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,1077.567);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,917.81);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,636.6998);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,382.6351);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,206.2849);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,104.2013);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,49.86762);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,22.29306);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,9.763266);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,4.211829);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.77148);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.7678163);
   VbbHcc_jets_nJet_stack_2->SetEntries(8.938066e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);
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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_bckg_18->Modified();
   nJet_jets_bckg_18->cd();
   nJet_jets_bckg_18->SetSelected(nJet_jets_bckg_18);
}
