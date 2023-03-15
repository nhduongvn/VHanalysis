#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_bckg_17()
{
//=========Macro generated from canvas: nJet_jets_all_bckg_17/nJet_jets_all_bckg_17
//=========  (Thu Mar  9 13:30:52 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_bckg_17 = new TCanvas("nJet_jets_all_bckg_17", "nJet_jets_all_bckg_17",0,0,600,600);
   nJet_jets_all_bckg_17->SetHighLightColor(2);
   nJet_jets_all_bckg_17->Range(-3.556941,-5.238227e+10,15.90286,3.841367e+11);
   nJet_jets_all_bckg_17->SetFillColor(0);
   nJet_jets_all_bckg_17->SetFillStyle(4000);
   nJet_jets_all_bckg_17->SetBorderMode(0);
   nJet_jets_all_bckg_17->SetBorderSize(2);
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
   st->SetMaximum(3.404848e+11);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",14,-0.5,13.5);
   st_stack_160->SetMinimum(0);
   st_stack_160->SetMaximum(3.404848e+11);
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
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,5.684616e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,2.921793e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.012469e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,2.329169e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,2.826014e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,2.540644e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,1.939391e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,1.338173e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,8.628694e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,5.285145e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,3.110472e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,1.771244e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,9.778247e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,5.268721e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,5.575756e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,996650.2);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,7147582);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,4.154022e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,6.251387e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,6.807288e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,6.381008e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,5.52088e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,4.551821e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,3.637509e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,2.838075e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,2.173907e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,1.638842e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,1.216577e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,8926912);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,9147347);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(3.060973e+08);

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
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,24.17902);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,1364.498);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,25515.96);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,215871.7);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,971672.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,2572342);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,4490926);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,5753682);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,5911721);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,5162504);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,3987504);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,2801347);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,1826995);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,1121947);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,1426746);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.031886);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,7.832155);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,34.61234);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,103.8142);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,229.0851);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,388.5386);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,530.5918);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,612.9674);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,629.3132);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,592.9237);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,524.0214);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,441.0149);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,357.3475);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,280.8387);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,318.197);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(6.227592e+08);

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
