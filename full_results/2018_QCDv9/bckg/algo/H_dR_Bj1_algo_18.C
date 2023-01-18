#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(-1.310117,-231180.7,7.029799,1695325);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_18->SetBottomMargin(0.12);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1502674);
   
   TH1F *st_stack_111 = new TH1F("st_stack_111","",30,0,6);
   st_stack_111->SetMinimum(0);
   st_stack_111->SetMaximum(1502674);
   st_stack_111->SetDirectory(0);
   st_stack_111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_111->SetLineColor(ci);
   st_stack_111->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_111->GetXaxis()->SetRange(1,30);
   st_stack_111->GetXaxis()->SetLabelFont(42);
   st_stack_111->GetXaxis()->SetTitleOffset(1);
   st_stack_111->GetXaxis()->SetTitleFont(42);
   st_stack_111->GetYaxis()->SetTitle("Events/0.2");
   st_stack_111->GetYaxis()->SetLabelFont(42);
   st_stack_111->GetYaxis()->SetTitleSize(0.037);
   st_stack_111->GetYaxis()->SetTitleFont(42);
   st_stack_111->GetZaxis()->SetLabelFont(42);
   st_stack_111->GetZaxis()->SetTitleOffset(1);
   st_stack_111->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_111);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(1,1876.019);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,445356.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,986754.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,830080.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,928133.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,838498.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,847851.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,764101.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,655131.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,625934.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,630912.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,555325.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,551495);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,449202.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,307592.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,314307.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,172879.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,143224.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,137303.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,72909.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,31525.36);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,33237.96);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,31925.77);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,3681.82);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,1572.141);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,896.0365);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,101.6335);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,10.73487);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(1,1876.019);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,52916.08);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,95905.51);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,90139.31);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,93387.89);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,90286.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,92771.97);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,87206.92);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,75350.95);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,75239.43);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,80791.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,71458.13);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,71326.94);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,63677.71);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,34843.74);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,40924.08);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,24931.75);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,32374.52);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,38538.31);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,22974.19);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,5756.064);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,21854.84);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,21912.62);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1989.057);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,656.7613);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,531.6843);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,51.26779);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,7.590698);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(38074);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,2.770058);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,4274.977);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,15028.8);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,21481.87);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,22400.84);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,19730.13);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,16552.24);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,13815.54);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,11471.06);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,9631.374);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,8077.289);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,6931.932);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,6073.307);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,5505.91);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,5059.916);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,4540.684);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,2712.483);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,1768.562);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,1166.772);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,745.6492);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,459.956);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,278.4632);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,152.7407);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,85.06752);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,41.2191);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,20.45467);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,8.523161);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,3.281809);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.55795);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,1.033266);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.254571);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.4342078);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,17.22779);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,32.34939);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,38.85657);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,39.9397);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,37.68646);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,34.66188);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,31.70005);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,28.88025);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,26.41703);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,24.14589);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,22.34133);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,20.85078);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,19.85376);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,19.00362);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,17.98847);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,13.88927);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,11.19063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,9.077108);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,7.246372);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,5.688545);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,4.426048);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,3.283149);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,2.445649);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.707061);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,1.197882);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.7845522);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.4868786);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.3309336);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.279254);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.3006358);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2572457);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
