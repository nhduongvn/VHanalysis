#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Thu Mar  9 13:18:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-28281.42,7.029799,207397);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLeftMargin(0.15709);
   Z_dR_algo_17->SetRightMargin(0.1234783);
   Z_dR_algo_17->SetBottomMargin(0.12);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(183829.2);
   
   TH1F *st_stack_82 = new TH1F("st_stack_82","",30,0,6);
   st_stack_82->SetMinimum(0);
   st_stack_82->SetMaximum(183829.2);
   st_stack_82->SetDirectory(0);
   st_stack_82->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_82->SetLineColor(ci);
   st_stack_82->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_82->GetXaxis()->SetRange(1,30);
   st_stack_82->GetXaxis()->SetLabelFont(42);
   st_stack_82->GetXaxis()->SetTitleOffset(1);
   st_stack_82->GetXaxis()->SetTitleFont(42);
   st_stack_82->GetYaxis()->SetTitle("Event/0.2");
   st_stack_82->GetYaxis()->SetLabelFont(42);
   st_stack_82->GetYaxis()->SetTitleSize(0.037);
   st_stack_82->GetYaxis()->SetTitleFont(42);
   st_stack_82->GetZaxis()->SetLabelFont(42);
   st_stack_82->GetZaxis()->SetTitleOffset(1);
   st_stack_82->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_82);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,349.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,150244.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,149214.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,105141);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,135062.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,109233.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,85710.14);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,69200.09);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,54006.77);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,43442.88);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,52568.08);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,46857.38);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,67365.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,40452.15);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,38648.41);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,38608.14);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,14455.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,6245.761);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,4275.628);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,6812.853);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,1190.546);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,473.3955);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,68.2201);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,18.75861);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,3.818893);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,7.03002);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,319.9878);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,8885.187);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,8580.149);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,7670.132);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,25460.75);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,18683.35);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,13169.51);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,6023.827);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,4572.841);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,4337.428);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,18059.61);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,4817.415);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,18062.43);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,5017.329);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,5138.903);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,21103.66);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,3271.55);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,1109.672);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,1559.369);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2512.221);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,413.7829);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,274.0964);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,29.13503);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,11.14992);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,3.818893);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,6.474267);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(25364);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,1.597832);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,1576.075);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,3363.624);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,4458.665);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,5412.337);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,6001.58);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,6276.287);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,6263.058);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,5946.257);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,5538.956);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,4965.073);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,4469.343);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,4030.919);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,3641.524);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,3172.094);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,1448.455);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,715.8014);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,358.4946);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,177.5309);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,89.57884);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,38.81579);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,16.21873);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,6.182534);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,2.709624);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,0.6740706);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.3620163);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.05231717);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.3243468);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,10.79955);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,15.76077);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,18.11653);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,19.91715);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,20.96187);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,21.37762);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,21.29089);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,20.69932);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,19.94523);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,18.7926);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,17.7793);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,16.85579);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,15.977);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,14.87742);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,10.02348);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,7.039117);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,4.961558);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,3.453918);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,2.467305);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,1.628254);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.027589);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.6242661);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.4441246);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.1918461);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.1434146);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.05231717);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(1058517);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
