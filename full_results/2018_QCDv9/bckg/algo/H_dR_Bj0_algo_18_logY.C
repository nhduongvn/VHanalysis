#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.310117,-0.7971744,7.029799,8.910747);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetFillStyle(4000);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLogy();
   H_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_18->SetBottomMargin(0.12);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.761742e+07);
   
   TH1F *st_stack_107 = new TH1F("st_stack_107","",30,0,6);
   st_stack_107->SetMinimum(2.332256);
   st_stack_107->SetMaximum(8.708725e+07);
   st_stack_107->SetDirectory(0);
   st_stack_107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_107->SetLineColor(ci);
   st_stack_107->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_107->GetXaxis()->SetRange(1,30);
   st_stack_107->GetXaxis()->SetLabelFont(42);
   st_stack_107->GetXaxis()->SetTitleOffset(1);
   st_stack_107->GetXaxis()->SetTitleFont(42);
   st_stack_107->GetYaxis()->SetTitle("Events/0.2");
   st_stack_107->GetYaxis()->SetLabelFont(42);
   st_stack_107->GetYaxis()->SetTitleSize(0.037);
   st_stack_107->GetYaxis()->SetTitleFont(42);
   st_stack_107->GetZaxis()->SetLabelFont(42);
   st_stack_107->GetZaxis()->SetTitleOffset(1);
   st_stack_107->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_107);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,137964.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,357682.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,277105.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,232350.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,147569.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,83679.48);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,72912.01);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,38639.94);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,18794.77);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,48298.38);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,9256.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,7123.773);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,6359.525);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,5219.408);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,6921.458);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,3688.333);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,5677.162);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,865.7087);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,2391.323);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,103.1247);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,2023.136);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,381.6076);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,42.2599);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,29.47015);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,5708.217);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,14534.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,14562.58);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,40834.44);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,25025.54);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,9470.724);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,23558.11);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,6139.961);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,3903.753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,23125.82);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,3032.217);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,2916.756);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2891.686);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2820.713);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,3432.883);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,2093.811);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,2867.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,523.1749);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,1993.135);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,47.55553);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1958.833);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,368.4093);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,32.1258);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,29.47015);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(24188);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,5590.743);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,18491.6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,18774.9);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,13889.03);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,8931.507);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,5591.623);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,3576.432);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,2341.298);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,1578.681);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,1080.199);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,745.2563);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,531.2825);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,375.7202);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,259.2384);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,177.7468);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,127.6809);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,87.96022);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,58.43614);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,38.96035);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,29.40882);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,19.00933);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,12.02619);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,9.242364);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,7.188258);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,3.807977);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,2.850943);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.57885);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.7889463);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.7334951);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.3873828);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.506527);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,19.02494);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,34.73477);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,35.29183);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,30.50633);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,24.52037);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,19.40349);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,15.5138);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,12.54015);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,10.28897);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,8.507635);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,7.056954);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.959177);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,5.008234);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.151732);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,3.446835);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.9186);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.427379);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.975213);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.616449);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.3984);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.122239);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.890384);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.7814112);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.6941997);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.5024939);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.4355923);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3328674);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2297347);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2229421);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.1612813);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.3177571);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(1270077);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
