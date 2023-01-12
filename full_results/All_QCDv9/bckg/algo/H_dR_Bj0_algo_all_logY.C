#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,-1.053773,7.029799,10.31889);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetLogy();
   H_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_all->SetBottomMargin(0.12);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.946425e+08);
   
   TH1F *st_stack_100 = new TH1F("st_stack_100","",30,0,6);
   st_stack_100->SetMinimum(2.046192);
   st_stack_100->SetMaximum(1.519223e+09);
   st_stack_100->SetDirectory(0);
   st_stack_100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_100->SetLineColor(ci);
   st_stack_100->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_100->GetXaxis()->SetRange(1,30);
   st_stack_100->GetXaxis()->SetLabelFont(42);
   st_stack_100->GetXaxis()->SetTitleOffset(1);
   st_stack_100->GetXaxis()->SetTitleFont(42);
   st_stack_100->GetYaxis()->SetTitle("Events/0.2");
   st_stack_100->GetYaxis()->SetLabelFont(42);
   st_stack_100->GetYaxis()->SetTitleSize(0.037);
   st_stack_100->GetYaxis()->SetTitleFont(42);
   st_stack_100->GetZaxis()->SetLabelFont(42);
   st_stack_100->GetZaxis()->SetTitleOffset(1);
   st_stack_100->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_100);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,2131777);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,5843837);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,5284544);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,3666878);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,2308063);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,1655646);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,947549);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,744620.4);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,494605.2);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,445978.9);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,304729.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,116404.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,84898.55);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,124508.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,135494.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,51707.62);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,18501.09);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,37276.75);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(19,6717.594);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,5242.615);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,4911.789);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(22,2091.035);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(23,22.8497);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(24,109.311);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(26,56.61462);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(27,254.8991);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(30,1183.85);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,76190.48);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,169152.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,198670);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,186909);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,144533.2);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,129702.7);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,95017.38);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,91091.94);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,72434.18);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,74379.41);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,62462.38);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,32632.92);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,28913.5);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,44433.25);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,47614.71);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,26601);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,4652.511);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,20649.15);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(19,2873.724);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,2541.577);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,2529.466);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(22,1724.667);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(23,22.8497);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(24,49.54234);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(26,40.29258);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(27,254.8991);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(30,1183.85);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(124211);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,27800.33);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,102587.7);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,101021.4);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,67436.21);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,40454.46);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,24088.79);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,14761.24);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,9397.374);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,6107.604);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,4049.598);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,2693.901);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,1820.137);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,1228.922);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,832.6629);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,562.4127);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,393.999);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,270.9049);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,182.6377);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,121.1129);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,88.24481);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,54.40082);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(22,36.97371);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,27.12369);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(24,18.64536);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(25,13.18489);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(26,7.455476);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(27,5.530374);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(28,2.53823);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(29,2.485846);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(30,1.824805);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(31,3.630348);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,41.62772);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,80.75357);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,81.02791);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,66.81922);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,52.03719);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,40.23272);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,31.49851);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,25.11496);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,20.22096);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,16.47129);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,13.41831);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,11.0355);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,9.081743);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,7.459502);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,6.139013);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,5.142577);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,4.263719);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,3.498565);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,2.851642);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,2.424381);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,1.899376);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(22,1.568753);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,1.346732);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(24,1.122429);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(25,0.9417827);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(26,0.7035908);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(27,0.610463);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(28,0.4204829);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(29,0.4135272);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(30,0.3529137);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(31,0.4995721);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(6577915);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
