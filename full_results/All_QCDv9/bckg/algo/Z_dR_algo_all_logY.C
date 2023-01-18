#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_algo_all/Z_dR_algo_all
//=========  (Wed Jan 18 11:42:52 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_all = new TCanvas("Z_dR_algo_all", "Z_dR_algo_all",0,0,600,600);
   Z_dR_algo_all->SetHighLightColor(2);
   Z_dR_algo_all->Range(-1.310117,-0.9994667,7.029799,10.01718);
   Z_dR_algo_all->SetFillColor(0);
   Z_dR_algo_all->SetFillStyle(4000);
   Z_dR_algo_all->SetBorderMode(0);
   Z_dR_algo_all->SetBorderSize(2);
   Z_dR_algo_all->SetLogy();
   Z_dR_algo_all->SetLeftMargin(0.15709);
   Z_dR_algo_all->SetRightMargin(0.1234783);
   Z_dR_algo_all->SetBottomMargin(0.12);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   Z_dR_algo_all->SetFrameFillStyle(1000);
   Z_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.288393e+08);
   
   TH1F *st_stack_84 = new TH1F("st_stack_84","",30,0,6);
   st_stack_84->SetMinimum(2.101506);
   st_stack_84->SetMaximum(8.232153e+08);
   st_stack_84->SetDirectory(0);
   st_stack_84->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_84->SetLineColor(ci);
   st_stack_84->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_84->GetXaxis()->SetRange(1,30);
   st_stack_84->GetXaxis()->SetLabelFont(42);
   st_stack_84->GetXaxis()->SetTitleOffset(1);
   st_stack_84->GetXaxis()->SetTitleFont(42);
   st_stack_84->GetYaxis()->SetTitle("Events/0.2");
   st_stack_84->GetYaxis()->SetLabelFont(42);
   st_stack_84->GetYaxis()->SetTitleSize(0.037);
   st_stack_84->GetYaxis()->SetTitleFont(42);
   st_stack_84->GetZaxis()->SetLabelFont(42);
   st_stack_84->GetZaxis()->SetTitleOffset(1);
   st_stack_84->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_84);
   
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(2,3116.835);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(3,2511872);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(4,3267037);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(5,2602309);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(6,2279502);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(7,1865628);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(8,2064109);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(9,1650380);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(10,1683866);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(11,1307339);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(12,1356936);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(13,1053953);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(14,1331136);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(15,1114734);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(16,1011714);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(17,519713.3);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(18,344629.5);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(19,237171.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(20,214604.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(21,51389.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(22,39283.68);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(23,9570.879);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(24,5884.03);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(25,2892.551);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(26,3244.136);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinContent(27,56.22192);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(2,2139.038);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(3,118437.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(4,143560.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(5,147518.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(6,139694.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(7,117613.9);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(8,138115.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(9,122773.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(10,128469.6);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(11,103826.8);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(12,117868.1);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(13,94010.38);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(14,124112.7);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(15,110059.2);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(16,99074.47);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(17,66234.4);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(18,55167.99);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(19,53799.83);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(20,53832.76);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(21,8061.723);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(22,19852.77);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(23,2472.195);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(24,2016.765);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(25,1562.443);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(26,2259.091);
   VbbHcc_algo_Z_dR_all_stack_1->SetBinError(27,22.27629);
   VbbHcc_algo_Z_dR_all_stack_1->SetEntries(113207);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(2,8.279658);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(3,9481.27);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(4,21356.18);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(5,28451.13);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(6,35726);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(7,40761.11);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(8,43107.95);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(9,42904.11);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(10,40343.42);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(11,36760.84);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(12,32497.67);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(13,28509.97);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(14,25157.78);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(15,22598.67);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(16,19381.21);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(17,9065.47);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(18,4528.083);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(19,2307.356);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(20,1201.965);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(21,603.9258);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(22,280.2492);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(23,126.4818);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(24,51.00733);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(25,21.59044);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(26,7.316767);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(27,1.833718);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinContent(28,0.3730282);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(2,0.8076602);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(3,27.74313);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(4,41.70215);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(5,48.27494);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(6,54.77474);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(7,58.22374);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(8,59.19397);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(9,59.09875);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(10,57.25996);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(11,54.54834);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(12,50.97054);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(13,47.54223);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(14,44.85133);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(15,42.75193);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(16,39.18104);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(17,26.6026);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(18,19.24742);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(19,13.15745);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(20,9.443463);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(21,6.830953);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(22,4.599718);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(23,3.067707);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(24,1.894429);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(25,1.24517);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(26,0.7255939);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(27,0.3707242);
   VbbHcc_algo_Z_dR_all_stack_2->SetBinError(28,0.1967805);
   VbbHcc_algo_Z_dR_all_stack_2->SetEntries(6476475);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_all_stack_1","QCD","F");

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
   Z_dR_algo_all->Modified();
   Z_dR_algo_all->cd();
   Z_dR_algo_all->SetSelected(Z_dR_algo_all);
}
