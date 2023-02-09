#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,-1.054867,7.029799,10.32499);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetLogy();
   H_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_all->SetBottomMargin(0.12);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(6.018103e+08);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",30,0,6);
   st_stack_108->SetMinimum(2.045103);
   st_stack_108->SetMaximum(1.538162e+09);
   st_stack_108->SetDirectory(0);
   st_stack_108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_108->SetLineColor(ci);
   st_stack_108->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_108->GetXaxis()->SetRange(1,30);
   st_stack_108->GetXaxis()->SetLabelFont(42);
   st_stack_108->GetXaxis()->SetTitleOffset(1);
   st_stack_108->GetXaxis()->SetTitleFont(42);
   st_stack_108->GetYaxis()->SetTitle("Events/0.2");
   st_stack_108->GetYaxis()->SetLabelFont(42);
   st_stack_108->GetYaxis()->SetTitleSize(0.037);
   st_stack_108->GetYaxis()->SetTitleFont(42);
   st_stack_108->GetZaxis()->SetLabelFont(42);
   st_stack_108->GetZaxis()->SetTitleOffset(1);
   st_stack_108->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_108);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,2128849);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,5915542);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,5213841);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,3686435);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,2292315);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,1631957);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,945639.5);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,765486.1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,484748.5);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,462423.4);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,295847.5);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,146490.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,82994.19);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,123899.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,133149.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,51838.48);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,16358.45);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,36712.16);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(19,7227.305);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,5529.213);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,5155.252);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(22,2307.844);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(23,21.4345);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(24,114.7133);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(26,56.60278);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(27,263.4425);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(30,1201.848);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,75402.19);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,171791.6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,196023.7);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,187211);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,143282.7);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,127390.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,94354.67);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,92167.56);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,71579.75);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,75870.72);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,60174.6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,39320.69);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,27952.89);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,43835.48);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,46587.11);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,26574.32);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,4543.521);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,21155.84);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(19,3108.652);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,2682.084);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,2668.07);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(22,1913.122);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(23,21.4345);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(24,50.62167);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(26,40.45701);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(27,263.4425);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(30,1201.848);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(113207);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,27806.08);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,102561.2);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,100997.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,67386.97);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,40433);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,24073.17);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,14755.95);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,9384.278);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,6113.39);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,4045.154);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,2694.83);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,1817.524);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,1232.609);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,835.1531);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,559.2892);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,393.4582);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,272.3867);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,180.8173);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,120.8804);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,88.45856);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,54.56532);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(22,36.95211);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,26.98636);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(24,19.06537);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(25,13.19775);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(26,7.593828);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(27,5.683956);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(28,2.333543);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(29,2.362977);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(30,1.770552);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(31,3.864824);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,41.88701);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,81.19525);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,81.40559);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,67.05824);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,52.20732);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,40.34082);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,31.58045);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,25.1682);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,20.28541);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,16.49728);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,13.45957);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,11.05157);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,9.118936);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,7.487519);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,6.132755);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,5.144554);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,4.286043);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,3.488098);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,2.846691);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,2.43417);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,1.910373);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(22,1.573598);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,1.344686);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(24,1.140031);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(25,0.9412859);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(26,0.7125026);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(27,0.61861);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(28,0.4016313);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(29,0.4031904);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(30,0.3473609);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(31,0.520445);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(6476475);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","QCD","F");

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
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
