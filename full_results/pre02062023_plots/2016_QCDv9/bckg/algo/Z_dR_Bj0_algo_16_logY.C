#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.310117,-0.9205959,7.029799,9.582437);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLogy();
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.401674e+08);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(2.186594);
   st_stack_113->SetMaximum(3.405129e+08);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetTitleOffset(1);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetTitleSize(0.037);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetTitleOffset(1);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,330124.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,1385261);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,1128730);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,861122.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,548149.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,280905.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,194731);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,139103.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,59397.75);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,115745.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,117357.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,27732.92);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,32180.22);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,41136.72);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,22077.35);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,2187.923);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,17193.75);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,35637.47);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,1479.963);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,2368.02);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,19043.39);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,343.4289);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,10.12707);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,24.1281);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,10.12707);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,1418.554);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,20724.09);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,71789.33);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,83560.98);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,82182.43);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,63294.57);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,44828.95);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,37765.83);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,33462.24);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,17356.84);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,33269.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,36744.21);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,5930.602);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,16709.57);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,23045.54);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,16332.44);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1485.191);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,16191.02);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,22974.91);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1419.004);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1516.013);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,16306.05);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,309.5548);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,10.12707);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,24.1281);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,10.12707);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,1418.554);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(33722);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,2324.22);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,16413.25);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,22529.64);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,18612.41);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,12565.45);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,7833.404);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,4848.025);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,3076.95);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,2011.847);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,1359.631);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,914.8739);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,612.434);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,425.4276);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,293.6931);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,208.3012);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,142.0619);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,94.48011);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,66.9077);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,48.88892);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,32.37587);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,19.87989);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,16.92171);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,10.41911);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,6.185757);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,5.141731);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,3.061374);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,2.006286);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.482245);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.9097617);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.5681473);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.39446);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,11.99401);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,32.0243);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,37.5721);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,34.15643);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,28.03391);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,22.09719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,17.36536);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,13.81014);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,11.14416);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,9.154847);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,7.492753);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,6.123625);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,5.096889);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.237835);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,3.567423);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,2.948981);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,2.410369);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,2.014313);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.735331);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.407381);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.093898);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.022237);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.7998276);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.6192214);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.5532911);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.4347685);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.3568293);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.3035872);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.2337877);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.1853129);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.2971039);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(1587706);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
