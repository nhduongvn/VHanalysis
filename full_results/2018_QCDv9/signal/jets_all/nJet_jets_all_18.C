void nJet_jets_all_18()
{
//=========Macro generated from canvas: nJet_jets_all_18/nJet_jets_all_18
//=========  (Thu Dec 15 10:04:53 2022) by ROOT version 6.14/09
   TCanvas *nJet_jets_all_18 = new TCanvas("nJet_jets_all_18", "nJet_jets_all_18",0,0,600,600);
   nJet_jets_all_18->SetHighLightColor(2);
   nJet_jets_all_18->Range(-3.556941,-50.4435,15.90286,369.919);
   nJet_jets_all_18->SetFillColor(0);
   nJet_jets_all_18->SetFillStyle(4000);
   nJet_jets_all_18->SetBorderMode(0);
   nJet_jets_all_18->SetBorderSize(2);
   nJet_jets_all_18->SetLeftMargin(0.15709);
   nJet_jets_all_18->SetRightMargin(0.1234783);
   nJet_jets_all_18->SetBottomMargin(0.12);
   nJet_jets_all_18->SetFrameFillStyle(1000);
   nJet_jets_all_18->SetFrameBorderMode(0);
   nJet_jets_all_18->SetFrameFillStyle(1000);
   nJet_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(312.2693);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",14,-0.5,13.5);
   st_stack_47->SetMinimum(0);
   st_stack_47->SetMaximum(327.8827);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_47->GetXaxis()->SetRange(1,14);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetLabelSize(0.035);
   st_stack_47->GetXaxis()->SetTitleSize(0.035);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/1.0");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.035);
   st_stack_47->GetYaxis()->SetTitleSize(0.037);
   st_stack_47->GetYaxis()->SetTitleOffset(0);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetLabelSize(0.035);
   st_stack_47->GetZaxis()->SetTitleSize(0.035);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,0.1191886);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,2.727879);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,24.57831);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,93.04726);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,158.8369);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,186.6846);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,178.4423);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,146.2663);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,106.9926);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,70.56646);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,43.57415);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,24.79019);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,14.0076);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,13.51511);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,0.02068494);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,0.09374555);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,0.2866042);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,0.5457543);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,0.6928124);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,0.7305566);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,0.6991812);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,0.6208367);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,0.5212868);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,0.4163832);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,0.3216215);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,0.2388412);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,0.1760092);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,0.1686551);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(486910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,0.0003681385);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,0.06046737);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,0.8764509);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,5.359642);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,13.66207);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,21.49493);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,25.37626);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,24.11212);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,19.9297);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,14.45369);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,9.523722);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,5.820609);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,3.346241);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,3.476822);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,0.0003681385);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,0.005200635);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,0.01989946);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,0.04808054);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,0.07603104);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,0.09365478);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,0.1003247);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,0.09649514);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,0.08664564);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,0.07237273);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,0.05788454);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,0.04455228);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,0.03331313);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,0.03291885);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(428940);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_18->Modified();
   nJet_jets_all_18->cd();
   nJet_jets_all_18->SetSelected(nJet_jets_all_18);
}
