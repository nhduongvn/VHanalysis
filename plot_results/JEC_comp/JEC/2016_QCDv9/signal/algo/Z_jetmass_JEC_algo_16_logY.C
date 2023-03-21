#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_algo_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_16/Z_jetmass_JEC_algo_16
//=========  (Mon Mar 20 11:49:48 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_JEC_algo_16 = new TCanvas("Z_jetmass_JEC_algo_16", "Z_jetmass_JEC_algo_16",0,0,600,600);
   Z_jetmass_JEC_algo_16->SetHighLightColor(2);
   Z_jetmass_JEC_algo_16->Range(-65.50587,-4.083532,351.4899,-0.2373777);
   Z_jetmass_JEC_algo_16->SetFillColor(0);
   Z_jetmass_JEC_algo_16->SetFillStyle(4000);
   Z_jetmass_JEC_algo_16->SetBorderMode(0);
   Z_jetmass_JEC_algo_16->SetBorderSize(2);
   Z_jetmass_JEC_algo_16->SetLogy();
   Z_jetmass_JEC_algo_16->SetLeftMargin(0.15709);
   Z_jetmass_JEC_algo_16->SetRightMargin(0.1234783);
   Z_jetmass_JEC_algo_16->SetBottomMargin(0.12);
   Z_jetmass_JEC_algo_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(0.2694772);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",150,0,300);
   st_stack_189->SetMinimum(1.398091);
   st_stack_189->SetMaximum(0.2387849);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   st_stack_189->GetXaxis()->SetRange(1,150);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(3,0.005813477);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(4,0.06827305);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(5,0.1619525);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(6,0.157064);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(7,0.1378539);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(8,0.1341819);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(9,0.09509598);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(10,0.06010609);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(11,0.04345571);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(12,0.02909625);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(13,0.01071633);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(14,0.01652613);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(15,0.01066537);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(16,0.009130568);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(18,0.003274124);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(21,0.005840109);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(22,0.003229955);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(28,0.002491875);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(29,0.003032998);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(3,0.004111616);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(4,0.01430814);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(5,0.02184454);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(6,0.02170621);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(7,0.02018132);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(8,0.01985573);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(9,0.01682945);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(10,0.013318);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(11,0.01127081);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(12,0.01009453);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(13,0.006833316);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(14,0.006921707);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(15,0.005378683);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(16,0.005276941);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(18,0.003274124);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(21,0.004129706);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(22,0.003229955);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(28,0.002491875);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(29,0.003032998);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(3,0.0007363157);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(4,0.01330152);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(5,0.04557605);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(6,0.06660209);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(7,0.06467879);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(8,0.04112671);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(9,0.03252439);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(10,0.02281943);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(11,0.0152557);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(12,0.007378812);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(13,0.005768089);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(14,0.004472696);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(15,0.00346465);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(16,0.002728899);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(17,0.001378313);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(18,0.001525505);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(19,0.001149444);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(20,0.0003911379);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(21,0.000455736);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(22,0.0008218857);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(23,0.0003651592);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(24,0.0003800229);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(26,0.0004220871);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(3,0.0005206675);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(4,0.002266681);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(5,0.004201569);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(6,0.005053583);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(7,0.00499145);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(8,0.003951799);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(9,0.00353253);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(10,0.002959197);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(11,0.002404054);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(12,0.001699877);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(13,0.00149333);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(14,0.001303778);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(15,0.001160659);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(16,0.001034251);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(17,0.0006931522);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(18,0.000762957);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(19,0.0006638274);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(20,0.0003911379);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(21,0.0003839752);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(22,0.0005818355);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(23,0.0003651592);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(24,0.0003800229);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(26,0.0004220871);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_stack_1","ZHcc","F");

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
   Z_jetmass_JEC_algo_16->Modified();
   Z_jetmass_JEC_algo_16->cd();
   Z_jetmass_JEC_algo_16->SetSelected(Z_jetmass_JEC_algo_16);
}
