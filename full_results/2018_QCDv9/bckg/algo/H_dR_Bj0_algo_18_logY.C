#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.310117,-0.9735497,7.029799,9.873865);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetFillStyle(4000);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLogy();
   H_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_18->SetBottomMargin(0.12);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.482288e+08);
   
   TH1F *st_stack_107 = new TH1F("st_stack_107","",30,0,6);
   st_stack_107->SetMinimum(2.128825);
   st_stack_107->SetMaximum(6.153519e+08);
   st_stack_107->SetDirectory(0);
   st_stack_107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_107->SetLineColor(ci);
   st_stack_107->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_107->GetXaxis()->SetRange(1,30);
   st_stack_107->GetXaxis()->SetLabelFont(42);
   st_stack_107->GetXaxis()->SetTitleOffset(1);
   st_stack_107->GetXaxis()->SetTitleFont(42);
   st_stack_107->GetYaxis()->SetTitle("Events/0.2");
   st_stack_107->GetYaxis()->SetLabelFont(42);
   st_stack_107->GetYaxis()->SetTitleSize(0.037);
   st_stack_107->GetYaxis()->SetTitleFont(42);
   st_stack_107->GetZaxis()->SetLabelFont(42);
   st_stack_107->GetZaxis()->SetTitleOffset(1);
   st_stack_107->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_107);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,929710);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,2437238);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,2130409);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,1663352);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,960629.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,713511.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,364110.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,334105.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,159829);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,226517.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,103028.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,49905.35);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,37901.97);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,105468.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,96300.83);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,27565.07);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,8205.666);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,2761.765);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,4569.783);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,2415.158);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1940.969);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,2265.392);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,48.13303);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,32.47468);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,54693.27);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,114158.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,133609.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,139397.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,102724.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,92043.73);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,63388.66);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,66461.73);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,44413.34);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,58222.39);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,38221.07);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,22570.64);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,22158.29);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,43652);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,43451.51);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,21818.74);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,3377.33);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,1949.851);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,2705.616);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1913.971);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1876.581);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,1912.944);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,36.05258);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,32.47468);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(38074);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,12151.62);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,45050.36);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,44436.99);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,29662.48);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,17752.74);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,10500.93);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,6440.417);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,4077.861);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,2635.228);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,1738.648);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,1158.43);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,778.5625);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,535.0148);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,352.0097);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,235.3833);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,166.2842);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,116.0066);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,76.96647);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,48.76363);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,37.05394);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,23.30096);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,16.01799);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,11.42512);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,8.292409);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,5.14282);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,3.031747);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,2.060927);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.8922712);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.8922712);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.7940571);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,2.064769);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,28.9217);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,56.16983);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,56.30922);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,46.34769);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,36.02784);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,27.7457);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,21.72814);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,17.28083);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,13.87891);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,11.2722);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,9.198891);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,7.53891);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,6.260213);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,5.061235);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,4.149068);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,3.485675);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.917195);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,2.377359);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.895384);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.641583);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.298576);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,1.076881);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.9090724);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.7799012);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.6161381);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.4708253);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3952906);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2603365);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2603365);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.2345351);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.3891284);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2572457);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
