#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_18()
{
//=========Macro generated from canvas: Z_dR_alljet_18/Z_dR_alljet_18
//=========  (Tue Feb 14 16:10:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_18 = new TCanvas("Z_dR_alljet_18", "Z_dR_alljet_18",0,0,600,600);
   Z_dR_alljet_18->SetHighLightColor(2);
   Z_dR_alljet_18->Range(-1.310117,-2.102734e+10,7.029799,1.542005e+11);
   Z_dR_alljet_18->SetFillColor(0);
   Z_dR_alljet_18->SetFillStyle(4000);
   Z_dR_alljet_18->SetBorderMode(0);
   Z_dR_alljet_18->SetBorderSize(2);
   Z_dR_alljet_18->SetLeftMargin(0.15709);
   Z_dR_alljet_18->SetRightMargin(0.1234783);
   Z_dR_alljet_18->SetBottomMargin(0.12);
   Z_dR_alljet_18->SetFrameFillStyle(1000);
   Z_dR_alljet_18->SetFrameBorderMode(0);
   Z_dR_alljet_18->SetFrameFillStyle(1000);
   Z_dR_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.366777e+11);
   
   TH1F *st_stack_211 = new TH1F("st_stack_211","",30,0,6);
   st_stack_211->SetMinimum(0);
   st_stack_211->SetMaximum(1.366777e+11);
   st_stack_211->SetDirectory(0);
   st_stack_211->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_211->SetLineColor(ci);
   st_stack_211->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_211->GetXaxis()->SetRange(1,30);
   st_stack_211->GetXaxis()->SetLabelFont(42);
   st_stack_211->GetXaxis()->SetTitleOffset(1);
   st_stack_211->GetXaxis()->SetTitleFont(42);
   st_stack_211->GetYaxis()->SetTitle("Events/0.2");
   st_stack_211->GetYaxis()->SetLabelFont(42);
   st_stack_211->GetYaxis()->SetTitleSize(0.037);
   st_stack_211->GetYaxis()->SetTitleFont(42);
   st_stack_211->GetZaxis()->SetLabelFont(42);
   st_stack_211->GetZaxis()->SetTitleOffset(1);
   st_stack_211->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_211);
   
   
   TH1D *VbbHcc_alljet_Z_dR_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(2,2.948718e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(3,1.75867e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(4,4.229813e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(5,3.53967e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(6,3.805963e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(7,4.200171e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(8,4.595262e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(9,5.033602e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(10,5.526287e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(11,6.064914e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(12,6.63742e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(13,7.263166e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(14,7.9567e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(15,8.698468e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(16,9.111424e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(17,7.155598e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(18,6.145856e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(19,5.480415e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(20,4.977965e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(21,4.568475e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(22,4.208763e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(23,3.876877e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(24,3.551325e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(25,3.25317e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(26,3.007358e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(27,2.831801e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(28,2.721931e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(29,2.532778e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(30,2.327149e+10);
   VbbHcc_alljet_Z_dR_stack_1->SetBinContent(31,1.475245e+11);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(2,865596.9);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(3,2.180994e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(4,3.346591e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(5,3.060693e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(6,3.180326e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(7,3.327463e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(8,3.480655e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(9,3.65051e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(10,3.821461e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(11,4.022097e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(12,4.205402e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(13,4.406666e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(14,4.620517e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(15,4.818214e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(16,4.933188e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(17,4.37502e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(18,4.064243e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(19,3.820221e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(20,3.649552e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(21,3.473119e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(22,3.3409e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(23,3.200843e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(24,3.057178e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(25,2.92509e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(26,2.82155e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(27,2.726372e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(28,2.671986e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(29,2.564238e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(30,2.468115e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetBinError(31,6.172953e+07);
   VbbHcc_alljet_Z_dR_stack_1->SetEntries(2.385138e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(2,894.3368);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(3,749089.9);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(4,1494313);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(5,1813318);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(6,2241026);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(7,2621529);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(8,2932732);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(9,3183896);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(10,3390826);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(11,3580089);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(12,3764124);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(13,3950842);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(14,4135603);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(15,4312577);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(16,4216325);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(17,2600783);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(18,1811183);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(19,1353132);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(20,1044011);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(21,822310.6);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(22,656295.3);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(23,527946.4);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(24,426354.2);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(25,345252.8);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(26,279808.9);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(27,227144.2);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(28,183756.5);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(29,147078.9);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(30,117197.4);
   VbbHcc_alljet_Z_dR_stack_2->SetBinContent(31,396594.2);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(2,9.289585);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(3,260.8042);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(4,366.1309);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(5,405.4234);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(6,451.8987);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(7,488.4588);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(8,515.9721);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(9,537.8008);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(10,554.3085);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(11,570.059);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(12,583.215);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(13,597.6558);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(14,612.3941);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(15,626.3331);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(16,619.1239);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(17,483.506);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(18,400.9167);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(19,344.3103);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(20,301.3693);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(21,265.6563);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(22,235.7903);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(23,210.1411);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(24,188.3015);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(25,168.5068);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(26,150.2954);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(27,135.3356);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(28,120.6025);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(29,107.5387);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(30,95.55697);
   VbbHcc_alljet_Z_dR_stack_2->SetBinError(31,172.8414);
   VbbHcc_alljet_Z_dR_stack_2->SetEntries(7.560581e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_stack_1","QCD","F");

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
   Z_dR_alljet_18->Modified();
   Z_dR_alljet_18->cd();
   Z_dR_alljet_18->SetSelected(Z_dR_alljet_18);
}
