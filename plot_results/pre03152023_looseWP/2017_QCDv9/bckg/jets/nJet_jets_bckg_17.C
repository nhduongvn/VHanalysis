#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_bckg_17()
{
//=========Macro generated from canvas: nJet_jets_bckg_17/nJet_jets_bckg_17
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_bckg_17 = new TCanvas("nJet_jets_bckg_17", "nJet_jets_bckg_17",0,0,600,600);
   nJet_jets_bckg_17->SetHighLightColor(2);
   nJet_jets_bckg_17->Range(-3.556941,-1.379906e+11,15.90286,1.011931e+12);
   nJet_jets_bckg_17->SetFillColor(0);
   nJet_jets_bckg_17->SetFillStyle(4000);
   nJet_jets_bckg_17->SetBorderMode(0);
   nJet_jets_bckg_17->SetBorderSize(2);
   nJet_jets_bckg_17->SetLeftMargin(0.15709);
   nJet_jets_bckg_17->SetRightMargin(0.1234783);
   nJet_jets_bckg_17->SetBottomMargin(0.12);
   nJet_jets_bckg_17->SetFrameFillStyle(1000);
   nJet_jets_bckg_17->SetFrameBorderMode(0);
   nJet_jets_bckg_17->SetFrameFillStyle(1000);
   nJet_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(8.969389e+11);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",14,-0.5,13.5);
   st_stack_4->SetMinimum(0);
   st_stack_4->SetMaximum(8.969389e+11);
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
   st_stack_4->GetYaxis()->SetTitle("Event/1.0");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetTitleSize(0.037);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,7.444581e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,4.113956e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,2.324838e+11);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,1.893542e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,2.515587e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,3.068053e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,4.164063e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,5913840);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,847810);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,127356.1);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,17550.6);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,2445.253);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,375.8819);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,37.54414);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,18.02648);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,1.126191e+08);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,8.147189e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,5.657207e+07);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,9460647);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,2077903);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,528212.7);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,145993.3);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,40937.79);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,6363.605);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,1954.039);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,365.1637);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,117.9328);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,43.99898);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,8.959485);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,9.831861);
   VbbHcc_jets_nJet_stack_1->SetEntries(3.028331e+08);

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
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,1204775);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,4313206);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,9041173);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,1.006315e+07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,6889009);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,3202047);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,1128663);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,323907.6);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,81178.68);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,18265.16);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,3823.124);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,755.6384);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,137.3456);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,23.2721);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,5.397348);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,253.5828);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,488.8232);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,741.32);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,817.8783);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,702.292);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,488.5519);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,292.9215);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,157.5858);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,79.04263);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,37.51953);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,17.16122);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,7.629255);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,3.23855);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.331824);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.6745857);
   VbbHcc_jets_nJet_stack_2->SetEntries(6.292104e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_bckg_17->Modified();
   nJet_jets_bckg_17->cd();
   nJet_jets_bckg_17->SetSelected(nJet_jets_bckg_17);
}
