#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Mon Dec 19 11:11:47 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.310117,-494602.7,7.029799,3627087);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_17->SetBottomMargin(0.12);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3214918);
   
   TH1F *st_stack_98 = new TH1F("st_stack_98","",30,0,6);
   st_stack_98->SetMinimum(0);
   st_stack_98->SetMaximum(3214918);
   st_stack_98->SetDirectory(0);
   st_stack_98->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_98->SetLineColor(ci);
   st_stack_98->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_98->GetXaxis()->SetRange(1,30);
   st_stack_98->GetXaxis()->SetLabelFont(42);
   st_stack_98->GetXaxis()->SetTitleOffset(1);
   st_stack_98->GetXaxis()->SetTitleFont(42);
   st_stack_98->GetYaxis()->SetTitle("Events/0.2");
   st_stack_98->GetYaxis()->SetLabelFont(42);
   st_stack_98->GetYaxis()->SetTitleSize(0.037);
   st_stack_98->GetYaxis()->SetTitleFont(42);
   st_stack_98->GetZaxis()->SetLabelFont(42);
   st_stack_98->GetZaxis()->SetTitleOffset(1);
   st_stack_98->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_98);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,664563.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,2109613);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,1943300);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,1419541);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,824972.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,643339.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,373017);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,197004.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,208142.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,170004.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,50862.89);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,32814.04);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,16894.33);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,12685.97);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,14088.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,20417.97);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,3373.803);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,30913.63);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,582.0549);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1523.606);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1716.498);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,31.71237);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,22.8497);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,31.71237);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,254.8991);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,1183.85);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,36367.02);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,100315.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,115046.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,107790);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,80061.24);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,76498.86);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,57155.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,39327.62);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,44162.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,41455.75);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,15575.75);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,14957.67);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,3890.162);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,3454.753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,3660.685);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,14635.56);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,1732.883);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,20451.31);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,362.6668);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1211.547);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1237.728);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,24.50828);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,22.8497);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,24.50828);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,254.8991);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,1183.85);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(44389);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,9109.462);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,33665.56);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,33179.22);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,22163.86);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,13342.71);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,7940.345);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,4837.222);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,3078.939);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,2007.001);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,1315.431);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,885.2651);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,595.3296);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,396.6436);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,277.7984);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,188.2067);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,128.9528);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,90.54239);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,61.53074);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,40.19017);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,29.67074);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,17.81997);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,12.67507);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,9.406926);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,6.602883);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,4.098373);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,2.63216);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,2.121468);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.9292878);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.6981115);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.6069152);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.230827);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,22.66987);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,44.01586);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,44.19689);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,36.48202);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,28.47008);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,21.99402);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,17.16177);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,13.68671);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,11.04467);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,8.925266);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,7.3259);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,6.009959);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.914246);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.117085);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,3.385086);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.795594);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.344611);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.93081);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.55227);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.344418);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.043042);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.8763914);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.7569985);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.6431508);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.4980946);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3929418);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3582502);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2441324);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2077511);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.2036379);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.2802074);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2378377);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
