#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Feb 16 10:37:41 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-1.04378,1.171633,10.26323);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.330625e+08);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(2.056179);
   st_stack_191->SetMaximum(1.356834e+09);
   st_stack_191->SetDirectory(0);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->GetXaxis()->SetTitle("Aplanarity");
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Events/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetTitleSize(0.037);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,4867573);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,2272344);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,1261754);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,620597.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,351951.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,234327.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,196894.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,107465.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,72949.13);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,46341.81);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,31654.17);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,52182.03);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,18640.09);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,8924.755);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,9872.544);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,2080.444);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,1540.647);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,1069.677);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,1186.573);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,22.25613);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,41.29715);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,100414);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,75767.65);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,70099.72);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,37055.25);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,15691.75);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,14102.05);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,34663.45);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,10484.27);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,7945.247);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,7279.488);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,5337.764);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,24722.89);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,4817.182);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,2786.515);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,3605.271);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,730.9225);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,680.3769);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,556.1686);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,701.9593);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,16.71884);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,41.29715);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(266336);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.1935244);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,463052.6);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,335070.4);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,225351.2);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,154806.3);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,108765);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,77703.1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,56155.44);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,40745.29);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,29620.14);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,21358.83);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,15422.25);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,10907.47);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,7694.443);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,5272.637);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,3574.401);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,2321.806);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,1465.401);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,850.4076);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,476.9184);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,241.1858);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,104.2463);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,38.23696);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,10.1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,1.266814);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(25,0.05997242);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.1176549);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,207.581);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,175.1823);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,144.0048);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,119.3045);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,100.2271);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,84.75597);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,72.46581);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,60.85041);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,52.05152);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,44.01373);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,37.85033);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,31.15377);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,26.87207);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,22.56772);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,19.04816);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,14.76182);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,12.00247);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,8.642058);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,7.159489);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,4.779909);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,3.017715);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,1.773812);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.9281221);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.3132017);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(25,0.05997242);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(2.086813e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
