#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_signal_18()
{
//=========Macro generated from canvas: H_pt_signal_18/H_pt_signal_18
//=========  (Fri Mar 10 11:21:20 2023) by ROOT version 6.26/06
   TCanvas *H_pt_signal_18 = new TCanvas("H_pt_signal_18", "H_pt_signal_18",0,0,600,600);
   H_pt_signal_18->SetHighLightColor(2);
   H_pt_signal_18->Range(37.97653,-18.51939,1705.96,135.8088);
   H_pt_signal_18->SetFillColor(0);
   H_pt_signal_18->SetFillStyle(4000);
   H_pt_signal_18->SetBorderMode(0);
   H_pt_signal_18->SetBorderSize(2);
   H_pt_signal_18->SetLeftMargin(0.15709);
   H_pt_signal_18->SetRightMargin(0.1234783);
   H_pt_signal_18->SetBottomMargin(0.12);
   H_pt_signal_18->SetFrameFillStyle(1000);
   H_pt_signal_18->SetFrameBorderMode(0);
   H_pt_signal_18->SetFrameFillStyle(1000);
   H_pt_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(120.376);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",40,0,2000);
   st_stack_59->SetMinimum(0);
   st_stack_59->SetMaximum(120.376);
   st_stack_59->SetDirectory(0);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_59->GetXaxis()->SetRange(7,30);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetTitleOffset(1);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetTitleSize(0.037);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetTitleOffset(1);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VbbHcc_MC_H_pt_stack_1 = new TH1D("VbbHcc_MC_H_pt_stack_1","",40,0,2000);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(1,80.90042);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(2,99.91208);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(3,48.14655);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(4,19.28972);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(5,8.530598);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(6,3.844341);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(7,1.767666);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(8,0.8600087);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(9,0.5889312);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(10,0.2851082);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(11,0.2017124);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(12,0.09701594);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(13,0.08093827);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(14,0.03353401);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(15,0.02222038);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(16,0.007414361);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(17,0.01116145);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(18,0.01740326);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(19,0.002434505);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(20,0.001884475);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(22,0.0009559662);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(23,0.002461314);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(24,0.002420368);
   VbbHcc_MC_H_pt_stack_1->SetBinContent(25,0.002133138);
   VbbHcc_MC_H_pt_stack_1->SetBinError(1,0.5195144);
   VbbHcc_MC_H_pt_stack_1->SetBinError(2,0.5602632);
   VbbHcc_MC_H_pt_stack_1->SetBinError(3,0.4003125);
   VbbHcc_MC_H_pt_stack_1->SetBinError(4,0.242835);
   VbbHcc_MC_H_pt_stack_1->SetBinError(5,0.1704658);
   VbbHcc_MC_H_pt_stack_1->SetBinError(6,0.1087813);
   VbbHcc_MC_H_pt_stack_1->SetBinError(7,0.08005471);
   VbbHcc_MC_H_pt_stack_1->SetBinError(8,0.04903889);
   VbbHcc_MC_H_pt_stack_1->SetBinError(9,0.04082343);
   VbbHcc_MC_H_pt_stack_1->SetBinError(10,0.02854477);
   VbbHcc_MC_H_pt_stack_1->SetBinError(11,0.02413836);
   VbbHcc_MC_H_pt_stack_1->SetBinError(12,0.01677735);
   VbbHcc_MC_H_pt_stack_1->SetBinError(13,0.01503227);
   VbbHcc_MC_H_pt_stack_1->SetBinError(14,0.0100151);
   VbbHcc_MC_H_pt_stack_1->SetBinError(15,0.007467074);
   VbbHcc_MC_H_pt_stack_1->SetBinError(16,0.004282933);
   VbbHcc_MC_H_pt_stack_1->SetBinError(17,0.00472);
   VbbHcc_MC_H_pt_stack_1->SetBinError(18,0.008452476);
   VbbHcc_MC_H_pt_stack_1->SetBinError(19,0.002434505);
   VbbHcc_MC_H_pt_stack_1->SetBinError(20,0.001884475);
   VbbHcc_MC_H_pt_stack_1->SetBinError(22,0.0009559662);
   VbbHcc_MC_H_pt_stack_1->SetBinError(23,0.002461314);
   VbbHcc_MC_H_pt_stack_1->SetBinError(24,0.002420368);
   VbbHcc_MC_H_pt_stack_1->SetBinError(25,0.002133138);
   VbbHcc_MC_H_pt_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_pt_stack_1->SetFillColor(ci);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_pt_stack_1,"");
   
   TH1D *VbbHcc_MC_H_pt_stack_2 = new TH1D("VbbHcc_MC_H_pt_stack_2","",40,0,2000);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(1,2.709741);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(2,8.371873);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(3,11.59528);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(4,7.785203);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(5,3.552046);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(6,1.52634);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(7,0.713321);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(8,0.3323873);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(9,0.1343257);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(10,0.06749642);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(11,0.03798946);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(12,0.01835589);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(13,0.01227241);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(14,0.003955182);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(15,0.001932027);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(16,0.001006469);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(17,0.0009532068);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(18,0.00070004);
   VbbHcc_MC_H_pt_stack_2->SetBinContent(22,0.0003262476);
   VbbHcc_MC_H_pt_stack_2->SetBinError(1,0.0319505);
   VbbHcc_MC_H_pt_stack_2->SetBinError(2,0.06119496);
   VbbHcc_MC_H_pt_stack_2->SetBinError(3,0.06890204);
   VbbHcc_MC_H_pt_stack_2->SetBinError(4,0.05736364);
   VbbHcc_MC_H_pt_stack_2->SetBinError(5,0.03759334);
   VbbHcc_MC_H_pt_stack_2->SetBinError(6,0.02417284);
   VbbHcc_MC_H_pt_stack_2->SetBinError(7,0.01770734);
   VbbHcc_MC_H_pt_stack_2->SetBinError(8,0.01099628);
   VbbHcc_MC_H_pt_stack_2->SetBinError(9,0.006882485);
   VbbHcc_MC_H_pt_stack_2->SetBinError(10,0.004979407);
   VbbHcc_MC_H_pt_stack_2->SetBinError(11,0.003648076);
   VbbHcc_MC_H_pt_stack_2->SetBinError(12,0.002556137);
   VbbHcc_MC_H_pt_stack_2->SetBinError(13,0.002043463);
   VbbHcc_MC_H_pt_stack_2->SetBinError(14,0.001232087);
   VbbHcc_MC_H_pt_stack_2->SetBinError(15,0.0007891163);
   VbbHcc_MC_H_pt_stack_2->SetBinError(16,0.0005813566);
   VbbHcc_MC_H_pt_stack_2->SetBinError(17,0.0005503582);
   VbbHcc_MC_H_pt_stack_2->SetBinError(18,0.0004981469);
   VbbHcc_MC_H_pt_stack_2->SetBinError(22,0.0003262476);
   VbbHcc_MC_H_pt_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_pt_stack_2->SetFillColor(ci);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_H_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_signal_18->Modified();
   H_pt_signal_18->cd();
   H_pt_signal_18->SetSelected(H_pt_signal_18);
}
