#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Thu Feb 16 10:35:33 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.353788,-49364.44,7.264125,362005.9);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLeftMargin(0.15709);
   H_dR_algo_18->SetRightMargin(0.1234783);
   H_dR_algo_18->SetBottomMargin(0.12);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(320868.9);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",30,0,6);
   st_stack_87->SetMinimum(0);
   st_stack_87->SetMaximum(320868.9);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_87->GetXaxis()->SetRange(1,31);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Events/0.2");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetTitleSize(0.037);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,83755.05);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,109435.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,71500.09);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,69989.18);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,84167.48);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,69014.06);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,121623);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,130933.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,98378.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,100670.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,103103.9);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,206867.4);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,114180.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,99925.83);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,62892.32);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,53014.73);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,26558.33);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,15933.46);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,5600.783);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,6303.281);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,2021.803);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,639.2838);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,131.7085);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,44.21966);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,60.43218);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,5.886267);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,8391.694);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,10789.46);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,8577.849);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,7065.094);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,9870.704);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,7719.097);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,30664.1);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,34383.07);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,9669.844);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,9319.869);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,9721.423);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,51468.04);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,9936.861);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,9152.076);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,6695.253);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,6823.615);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,4993.635);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,3902.831);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,1383.534);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,2686.77);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,828.3824);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,395.8766);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,58.16623);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,20.3956);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,38.98752);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,5.886267);
   VbbHcc_algo_H_dR_stack_1->SetEntries(24188);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,1.03936);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,2103.895);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,4146.656);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,5082.206);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,5801.2);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,6066.006);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,6102.562);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,6256.85);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,6505.954);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,6856.222);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,7160.98);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,7260.449);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,7045.211);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,6645.652);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,6088.084);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,3638.945);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,2229.675);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,1356.461);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,785.453);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,433.1019);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,223.1511);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,117.3726);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,56.06982);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,20.12408);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,6.540064);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,1.956994);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,0.1776256);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.2807233);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,14.05793);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,19.07386);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,20.86067);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,22.54229);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,22.89582);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,23.4396);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,23.55485);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,24.5428);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,24.81757);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,25.31495);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,25.16295);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,25.35637);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,24.03857);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,22.68602);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,18.00082);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,14.26327);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,11.83691);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,8.090525);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,6.447756);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,4.157254);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,3.020459);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,2.302456);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,1.251492);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,0.7049535);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,0.3911612);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,0.1050912);
   VbbHcc_algo_H_dR_stack_2->SetEntries(1270077);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
