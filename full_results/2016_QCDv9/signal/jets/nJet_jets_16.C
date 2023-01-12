#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_16()
{
//=========Macro generated from canvas: nJet_jets_16/nJet_jets_16
//=========  (Mon Dec 19 11:03:46 2022) by ROOT version 6.26/06
   TCanvas *nJet_jets_16 = new TCanvas("nJet_jets_16", "nJet_jets_16",0,0,600,600);
   nJet_jets_16->SetHighLightColor(2);
   nJet_jets_16->Range(-3.556941,-47.22939,15.90286,346.3489);
   nJet_jets_16->SetFillColor(0);
   nJet_jets_16->SetFillStyle(4000);
   nJet_jets_16->SetBorderMode(0);
   nJet_jets_16->SetBorderSize(2);
   nJet_jets_16->SetLeftMargin(0.15709);
   nJet_jets_16->SetRightMargin(0.1234783);
   nJet_jets_16->SetBottomMargin(0.12);
   nJet_jets_16->SetFrameFillStyle(1000);
   nJet_jets_16->SetFrameBorderMode(0);
   nJet_jets_16->SetFrameFillStyle(1000);
   nJet_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(306.9911);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",14,-0.5,13.5);
   st_stack_1->SetMinimum(0);
   st_stack_1->SetMaximum(306.9911);
   st_stack_1->SetDirectory(0);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_1->GetXaxis()->SetRange(1,14);
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetTitleOffset(1);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/1.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetTitleSize(0.037);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,25.4626);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,64.24017);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,134.8637);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,184.9998);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,137.4272);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,54.18153);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,18.19511);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,5.62821);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,1.734415);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,0.4639795);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,0.1479277);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,0.02703688);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,0.003064927);
   VbbHcc_jets_nJet_stack_1->SetBinContent(14,0.001184486);
   VbbHcc_jets_nJet_stack_1->SetBinContent(15,0.001119176);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,0.214807);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,0.3292635);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,0.4697389);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,0.5455739);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,0.4661794);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,0.2885331);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,0.1663702);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,0.09229104);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,0.05099997);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,0.02650995);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,0.01492094);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,0.006372383);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,0.002168155);
   VbbHcc_jets_nJet_stack_1->SetBinError(14,0.001184486);
   VbbHcc_jets_nJet_stack_1->SetBinError(15,0.001119176);
   VbbHcc_jets_nJet_stack_1->SetEntries(472445);

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
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,0.1768654);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,1.482984);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,7.494283);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,19.66092);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,26.59907);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,18.34559);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,8.587052);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,3.171614);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,0.9636487);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,0.2712152);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,0.07276464);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,0.0165276);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,0.004378212);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,0.001013929);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,0.0001890315);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,0.005671214);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,0.01654335);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,0.0375244);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,0.0610459);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,0.07112386);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,0.05902588);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,0.04033024);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,0.02447063);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,0.0134827);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,0.007149355);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,0.003699173);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,0.001759728);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,0.0009014977);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,0.0004387209);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.0001890315);
   VbbHcc_jets_nJet_stack_2->SetEntries(492720);

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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_16->Modified();
   nJet_jets_16->cd();
   nJet_jets_16->SetSelected(nJet_jets_16);
}
