#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Wed Jan 18 11:42:53 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(-1.310117,-0.827889,7.029799,9.076886);
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
   st->SetMaximum(5.206882e+07);
   
   TH1F *st_stack_109 = new TH1F("st_stack_109","",30,0,6);
   st_stack_109->SetMinimum(2.294478);
   st_stack_109->SetMaximum(1.220137e+08);
   st_stack_109->SetDirectory(0);
   st_stack_109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_109->SetLineColor(ci);
   st_stack_109->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_109->GetXaxis()->SetRange(1,30);
   st_stack_109->GetXaxis()->SetLabelFont(42);
   st_stack_109->GetXaxis()->SetTitleOffset(1);
   st_stack_109->GetXaxis()->SetTitleFont(42);
   st_stack_109->GetYaxis()->SetTitle("Events/0.2");
   st_stack_109->GetYaxis()->SetLabelFont(42);
   st_stack_109->GetYaxis()->SetTitleSize(0.037);
   st_stack_109->GetYaxis()->SetTitleFont(42);
   st_stack_109->GetZaxis()->SetLabelFont(42);
   st_stack_109->GetZaxis()->SetTitleOffset(1);
   st_stack_109->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_109);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,343518.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,512662.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,445597);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,455249.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,453491.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,499925.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,349594.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,322036.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,289210.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,281518.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,232648.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,220375.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,224900.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,139134.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,208052.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,153551.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,74121.13);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,50074.58);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,47092.94);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,10798.77);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,12868.31);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,25530.58);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,8762.116);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,1579.567);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,742.938);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,47.40852);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,362.7548);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,24.1281);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,50531.75);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,56433.71);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,56006.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,58246.09);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,60244.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,60746.87);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,45492.98);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,42248.79);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,35379.72);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,41612.34);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,30853.99);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,30422.79);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,34310.24);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,10290.22);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,30312.25);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,33513.17);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,17532.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,17021.19);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,17054.26);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,2722.297);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,3392.652);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,16455.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,3232.694);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,622.6597);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,438.801);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,28.22125);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,310.3572);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,24.1281);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(33722);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.9534408);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,2352.358);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,8025.996);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,11334.98);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,11705.05);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,10349.25);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,8658.452);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,7275.091);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,6060.69);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,5077.501);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,4321.332);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,3709.592);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,3268.904);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,2975.888);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,2752.105);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,2483.14);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,1483.928);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,974.9423);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,637.7004);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,417.6722);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,271.3083);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,157.517);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,89.51708);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,52.06875);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,24.11999);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,12.83691);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,5.204314);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,2.375903);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,0.7480533);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.357997);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,0.6627892);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2436641);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,11.8958);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,22.00924);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,26.30917);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,26.95477);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,25.52629);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,23.47071);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,21.5424);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,19.66118);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,17.95975);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,16.53647);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,15.29089);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,14.32135);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,13.6414);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,13.08985);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,12.43754);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,9.605003);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,7.770403);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,6.265526);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,5.066494);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,4.083958);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,3.097948);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,2.336043);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.788716);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.216574);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,0.896783);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.5630767);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.3932562);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.2128322);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.1504497);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.2128203);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(1587706);

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
