#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.353788,-1.773514,7.264125,10.52852);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15709);
   H_dR_both_17->SetRightMargin(0.1234783);
   H_dR_both_17->SetBottomMargin(0.12);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(2.634689);
   st->SetMaximum(7.389801e+08);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(0.5043479);
   st_stack_150->SetMaximum(1.987547e+09);
   st_stack_150->SetDirectory(0);
   st_stack_150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_150->SetLineColor(ci);
   st_stack_150->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_150->GetXaxis()->SetRange(1,31);
   st_stack_150->GetXaxis()->SetLabelFont(42);
   st_stack_150->GetXaxis()->SetTitleOffset(1);
   st_stack_150->GetXaxis()->SetTitleFont(42);
   st_stack_150->GetYaxis()->SetTitle("Events/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetTitleSize(0.037);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetTitleOffset(1);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,20410.11);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,2491301);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,3284857);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,2708853);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,2966093);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,2899619);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,3325664);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,3363191);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,3484536);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,3855868);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,4290065);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,4898455);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,5969785);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,6425492);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,7107070);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,4775376);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,3502323);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,2947839);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2498646);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1626352);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1290108);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,934260.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,585016.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,445447.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,221789.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,75580.31);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,39837.36);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,2620.349);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,18764.93);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,111834.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,137914.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,126769.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,145483.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,141533.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,164291.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,159903.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,156587.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,163344.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,172324.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,191305.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,218594.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,214617.4);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,238447.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,192429.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,165259.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,158414.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,149529.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,109465);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,99972.23);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,88621.69);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,64234.58);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,63705.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,43412.24);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,21990.61);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,17891.76);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,1907.634);
   VbbHcc_both_H_dR_stack_1->SetEntries(567173);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,47.46404);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,67231.47);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,121737);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,147745.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,177466.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,193915.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,199687.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,202429.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,206616.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,215824.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,229543.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,247222.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,266902.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,286281.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,282730.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,162740.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,104599.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,70984.01);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,48572.68);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,32795.62);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,21614.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,13842.73);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,8297.468);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,4492.554);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,2168.527);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,888.2718);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,238.2167);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,14.34008);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,1.859885);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,70.59569);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,95.15782);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,104.8446);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,114.8686);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,120.0782);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,121.9152);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,122.8482);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,124.2431);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,127.115);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,131.2479);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,136.3505);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,141.8608);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,147.0132);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,146.1468);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,110.5499);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,88.26947);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,72.40393);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,59.59906);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,48.72638);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,39.35455);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,31.32197);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,24.10647);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,17.60402);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,12.17714);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,7.715863);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,3.948433);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.92794);
   VbbHcc_both_H_dR_stack_2->SetEntries(4.906418e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
