#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-0.7121169,7.029799,8.454332);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(1.541376e+07);
   
   TH1F *st_stack_82 = new TH1F("st_stack_82","",30,0,6);
   st_stack_82->SetMinimum(2.442626);
   st_stack_82->SetMaximum(3.448954e+07);
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
   st_stack_82->GetYaxis()->SetTitle("Events/0.2");
   st_stack_82->GetYaxis()->SetLabelFont(42);
   st_stack_82->GetYaxis()->SetTitleSize(0.037);
   st_stack_82->GetYaxis()->SetTitleFont(42);
   st_stack_82->GetZaxis()->SetLabelFont(42);
   st_stack_82->GetZaxis()->SetTitleOffset(1);
   st_stack_82->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_82);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,349.8874);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,152035.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,150773.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,105186.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,138699.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,110465.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,72153.05);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,68283.39);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,54865.51);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,42847.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,52917.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,45404.02);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,69112.34);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,41520);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,37088.54);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,40859.94);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,15012.87);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,6254.182);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,4386.825);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,7141.145);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,1198.326);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,463.1957);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,69.71992);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,19.59941);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,4.165995);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,7.244911);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,320.0116);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,9285.712);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,8945.655);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,7927.069);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,27550.87);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,20106.37);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,6259.827);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,6090.623);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,4774.938);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,4310.401);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,19525.52);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,4779.652);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,19524.23);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,5332.294);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,5077.187);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,22911.65);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,3500.85);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,1110.134);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,1660.362);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2695.684);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,414.243);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,273.9928);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,29.65367);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,11.60621);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,4.165995);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,6.688633);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(24778);

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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,1.566601);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,1578.355);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,3364.053);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,4462.488);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,5409.521);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,5996.686);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,6278.528);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,6261.851);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,5953.451);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,5540.395);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,4968.78);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,4461.834);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,4033.698);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,3642.188);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,3176.089);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,1450.404);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,715.566);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,358.0137);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,178.6536);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,89.3797);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,38.469);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,16.23368);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,6.067125);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,2.94036);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,0.6623248);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.2894595);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.0523461);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.3235214);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,10.9278);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,15.94103);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,18.33091);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,20.14304);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,21.20063);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,21.64069);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,21.55293);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,20.97254);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,20.21297);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,19.05443);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,18.01994);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,17.10547);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,16.21877);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,15.11363);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,10.18964);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,7.154159);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,5.042157);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,3.525006);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,2.507726);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,1.64753);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.047376);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.6297205);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.4581694);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.1962622);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.1201394);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.0523461);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(1015007);

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
