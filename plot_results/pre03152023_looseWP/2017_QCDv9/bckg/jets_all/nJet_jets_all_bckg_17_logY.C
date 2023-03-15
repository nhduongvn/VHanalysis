#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_bckg_17_logY()
{
//=========Macro generated from canvas: nJet_jets_all_bckg_17/nJet_jets_all_bckg_17
//=========  (Fri Mar 10 14:09:16 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_bckg_17 = new TCanvas("nJet_jets_all_bckg_17", "nJet_jets_all_bckg_17",0,0,600,600);
   nJet_jets_all_bckg_17->SetHighLightColor(2);
   nJet_jets_all_bckg_17->Range(-3.556941,-1.615663,15.90286,13.53991);
   nJet_jets_all_bckg_17->SetFillColor(0);
   nJet_jets_all_bckg_17->SetFillStyle(4000);
   nJet_jets_all_bckg_17->SetBorderMode(0);
   nJet_jets_all_bckg_17->SetBorderSize(2);
   nJet_jets_all_bckg_17->SetLogy();
   nJet_jets_all_bckg_17->SetLeftMargin(0.15709);
   nJet_jets_all_bckg_17->SetRightMargin(0.1234783);
   nJet_jets_all_bckg_17->SetBottomMargin(0.12);
   nJet_jets_all_bckg_17->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_17->SetFrameBorderMode(0);
   nJet_jets_all_bckg_17->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.404826e+11);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",14,-0.5,13.5);
   st_stack_160->SetMinimum(1.595902);
   st_stack_160->SetMaximum(1.057682e+12);
   st_stack_160->SetDirectory(0);
   st_stack_160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_160->SetLineColor(ci);
   st_stack_160->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_160->GetXaxis()->SetRange(1,14);
   st_stack_160->GetXaxis()->SetLabelFont(42);
   st_stack_160->GetXaxis()->SetTitleOffset(1);
   st_stack_160->GetXaxis()->SetTitleFont(42);
   st_stack_160->GetYaxis()->SetTitle("Event/1.0");
   st_stack_160->GetYaxis()->SetLabelFont(42);
   st_stack_160->GetYaxis()->SetTitleSize(0.037);
   st_stack_160->GetYaxis()->SetTitleFont(42);
   st_stack_160->GetZaxis()->SetLabelFont(42);
   st_stack_160->GetZaxis()->SetTitleOffset(1);
   st_stack_160->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_160);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,5.679619e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,2.92111e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.012376e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,2.329216e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,2.825996e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,2.540635e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,1.939447e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,1.338143e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,8.62956e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,5.284927e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,3.110353e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,1.771083e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,9.780039e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,5.268949e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,5.576482e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,994652.1);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,7133777);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,4.146473e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,6.240547e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,6.795533e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,6.370195e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,5.511696e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,4.544231e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,3.631723e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,2.833371e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,2.170317e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,1.636064e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,1.214774e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,8911986);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,9133565);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(3.028331e+08);

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
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,23.91306);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,1365.279);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,25514.72);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,215882.8);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,971657.9);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,2572315);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,4490937);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,5753634);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,5911680);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,5162612);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,3987447);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,2801386);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,1826939);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,1121971);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,1426756);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.017915);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,7.777481);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,34.38386);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,103.2052);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,227.8534);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,386.5448);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,527.8741);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,609.7995);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,626.0399);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,589.829);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,521.262);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,438.6926);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,355.4519);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,279.353);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,316.5083);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(6.292104e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_bckg_17->Modified();
   nJet_jets_all_bckg_17->cd();
   nJet_jets_all_bckg_17->SetSelected(nJet_jets_all_bckg_17);
}
