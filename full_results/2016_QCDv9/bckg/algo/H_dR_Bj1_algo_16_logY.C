#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(-1.310117,-0.8252288,7.029799,9.062469);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetLogy();
   H_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_16->SetBottomMargin(0.12);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.062012e+07);
   
   TH1F *st_stack_101 = new TH1F("st_stack_101","",30,0,6);
   st_stack_101->SetMinimum(2.297709);
   st_stack_101->SetMaximum(1.184948e+08);
   st_stack_101->SetDirectory(0);
   st_stack_101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_101->SetLineColor(ci);
   st_stack_101->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_101->GetXaxis()->SetRange(1,30);
   st_stack_101->GetXaxis()->SetLabelFont(42);
   st_stack_101->GetXaxis()->SetTitleOffset(1);
   st_stack_101->GetXaxis()->SetTitleFont(42);
   st_stack_101->GetYaxis()->SetTitle("Events/0.2");
   st_stack_101->GetYaxis()->SetLabelFont(42);
   st_stack_101->GetYaxis()->SetTitleSize(0.037);
   st_stack_101->GetYaxis()->SetTitleFont(42);
   st_stack_101->GetZaxis()->SetLabelFont(42);
   st_stack_101->GetZaxis()->SetTitleOffset(1);
   st_stack_101->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_101);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,319913.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,490185.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,423625.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,418040.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,472966.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,497527.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,342118.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,311073.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,276150.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,288925.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,234800.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,223299.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,177799.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,140719.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,212052.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,158624.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,75217.05);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,52400.23);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,48519.63);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,28826.66);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,12802.26);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,26883.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,8683.056);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,1459.994);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,677.9636);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,19.4882);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,343.8419);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,25.07582);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,48189.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,55100.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,54670.35);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,54616.99);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,64609.25);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,62688.08);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,45370.33);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,41607.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,33376.13);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,44519.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,32804.85);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,32402.42);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,20792.37);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,10259.49);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,32305.41);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,35922.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,18677.36);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,18215.46);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,18238.31);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,17644.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,3377.298);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,17684.27);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,3225.069);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,580.8054);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,408.8922);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,12.0363);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,289.8879);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,25.07582);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(37218);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.6145716);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,2353.019);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,8039.855);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,11357.58);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,11719.28);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,10359.41);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,8673.238);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,7289.013);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,6074.997);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,5089.385);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,4333.396);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,3713.738);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,3274.591);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,2983.879);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,2744.314);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,2500.989);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,1487.098);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,974.4639);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,638.8513);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,423.3088);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,269.4302);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,157.8971);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,89.25061);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,51.69951);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,24.91188);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,13.56032);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,5.397573);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.463553);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,0.8611989);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.485481);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,0.6681998);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2008081);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,12.55894);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,23.27442);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,27.85766);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,28.5786);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,27.10657);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,24.96324);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,22.92575);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,20.92096);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,19.10918);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,17.5922);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,16.2456);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,15.21229);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,14.48998);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,13.86287);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,13.23935);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,10.19695);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,8.234352);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,6.638638);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,5.408931);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,4.3088);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,3.2826);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,2.471322);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.884547);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.314152);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.984543);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.6087334);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.4237121);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.2478813);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.1905156);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.2281284);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(1448757);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
