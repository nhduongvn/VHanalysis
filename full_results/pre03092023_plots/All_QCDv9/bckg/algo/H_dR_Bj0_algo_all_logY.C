#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,-0.8797286,7.029799,9.358834);
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
   st->SetMaximum(9.043766e+07);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",30,0,6);
   st_stack_108->SetMinimum(2.233053);
   st_stack_108->SetMaximum(2.162608e+08);
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
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,322133.2);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,861959.8);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,711511.2);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,471773.6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,317662.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,203601.3);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,162585.4);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,93349.79);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,46967.99);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,68081.04);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,20940.06);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,21971.29);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,17540.52);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,12931.27);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(15,15536.06);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(16,8502.151);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(17,6892.497);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(18,18734.28);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(19,2765.636);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(20,233.485);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(21,3871.734);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(22,421.3096);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(23,21.6364);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(24,106.013);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(26,54.41968);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(27,251.1178);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(30,1285.482);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,8955.046);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,25960.78);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,37485.44);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,42585.5);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,31391.57);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,20344.87);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,32779.54);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,9431.179);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,5935.415);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,23396.94);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,3992.848);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,4771.701);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,4385.171);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,3723.366);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(15,4385.055);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(16,3103.658);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(17,2910.189);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(18,15933.05);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(19,2015.796);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(20,66.66619);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(21,2656.888);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(22,369.2445);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(23,21.6364);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(24,47.64694);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(26,38.61306);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(27,251.1178);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(30,1285.482);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(70650);

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
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,12835.36);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,42416.82);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,42852.29);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,31616.54);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,20396.79);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,12773.26);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,8171.48);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,5396.916);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,3635.438);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,2508.565);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,1741.734);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,1232.834);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,870.3197);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(14,607.4455);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,415.9148);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(16,299.4416);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(17,209.8467);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(18,140.1677);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(19,96.71114);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,71.57879);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(21,44.23252);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(22,28.92551);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(23,21.83649);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(24,15.21364);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(25,11.14308);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(26,6.997112);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(27,4.517426);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(28,1.991096);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(29,1.942472);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(30,1.102665);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(31,3.196642);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,28.51735);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,52.03974);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,52.76863);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,45.5781);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,36.68982);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,29.04144);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,23.2194);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,18.85381);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,15.457);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,12.8301);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,10.685);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,8.984208);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,7.549914);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(14,6.298108);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,5.216863);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(16,4.425277);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(17,3.709521);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(18,3.023539);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(19,2.511693);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,2.159288);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(21,1.698686);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(22,1.371909);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(23,1.192601);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(24,1.001377);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(25,0.8513288);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(26,0.6735335);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(27,0.5483451);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(28,0.3613971);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(29,0.3590739);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(30,0.271695);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(31,0.4617946);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(2980897);

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
