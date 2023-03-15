#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_signal_16_logY()
{
//=========Macro generated from canvas: nJet_jets_all_signal_16/nJet_jets_all_signal_16
//=========  (Fri Mar 10 14:09:16 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_signal_16 = new TCanvas("nJet_jets_all_signal_16", "nJet_jets_all_signal_16",0,0,600,600);
   nJet_jets_all_signal_16->SetHighLightColor(2);
   nJet_jets_all_signal_16->Range(-3.556941,0.5389365,15.90286,2.587239);
   nJet_jets_all_signal_16->SetFillColor(0);
   nJet_jets_all_signal_16->SetFillStyle(4000);
   nJet_jets_all_signal_16->SetBorderMode(0);
   nJet_jets_all_signal_16->SetBorderSize(2);
   nJet_jets_all_signal_16->SetLogy();
   nJet_jets_all_signal_16->SetLeftMargin(0.15709);
   nJet_jets_all_signal_16->SetRightMargin(0.1234783);
   nJet_jets_all_signal_16->SetBottomMargin(0.12);
   nJet_jets_all_signal_16->SetFrameFillStyle(1000);
   nJet_jets_all_signal_16->SetFrameBorderMode(0);
   nJet_jets_all_signal_16->SetFrameFillStyle(1000);
   nJet_jets_all_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(191.9545);
   
   TH1F *st_stack_157 = new TH1F("st_stack_157","",14,-0.5,13.5);
   st_stack_157->SetMinimum(6.091621);
   st_stack_157->SetMaximum(241.2176);
   st_stack_157->SetDirectory(0);
   st_stack_157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_157->SetLineColor(ci);
   st_stack_157->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_157->GetXaxis()->SetRange(1,14);
   st_stack_157->GetXaxis()->SetLabelFont(42);
   st_stack_157->GetXaxis()->SetTitleOffset(1);
   st_stack_157->GetXaxis()->SetTitleFont(42);
   st_stack_157->GetYaxis()->SetTitle("Event/1.0");
   st_stack_157->GetYaxis()->SetLabelFont(42);
   st_stack_157->GetYaxis()->SetTitleSize(0.037);
   st_stack_157->GetYaxis()->SetTitleFont(42);
   st_stack_157->GetZaxis()->SetLabelFont(42);
   st_stack_157->GetZaxis()->SetTitleOffset(1);
   st_stack_157->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_157);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,0.03344314);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,0.1844665);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,4.269262);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,34.04748);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,109.6713);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,144.3404);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,134.0855);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,100.4958);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,65.68181);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,38.66562);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,20.3611);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,10.88612);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,5.007332);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,2.193596);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,1.751332);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,0.01089323);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,0.02484862);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,0.121614);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,0.3358691);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,0.5983135);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,0.6767422);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,0.6433532);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,0.5525398);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,0.4428843);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,0.3377146);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,0.2430269);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,0.1766632);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,0.1187071);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,0.0784481);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,0.06911421);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,0.0007663821);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,0.078865);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,1.364468);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,7.044295);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,14.98186);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,18.91163);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,17.73502);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,13.71131);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,8.886567);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,5.185916);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,2.752829);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,1.380312);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,0.6257963);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,0.4988323);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,0.000541914);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,0.005540689);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,0.02302285);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,0.05233834);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,0.07612956);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,0.0853146);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,0.0823516);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,0.072149);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,0.05789252);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,0.04401699);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,0.03192638);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,0.02252377);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,0.01508022);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,0.01332482);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   nJet_jets_all_signal_16->Modified();
   nJet_jets_all_signal_16->cd();
   nJet_jets_all_signal_16->SetSelected(nJet_jets_all_signal_16);
}
