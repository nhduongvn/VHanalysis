#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Tue Feb 14 16:02:02 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,-1.044632,7.029799,10.26797);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetLogy();
   Z_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.380509e+08);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(2.055325);
   st_stack_116->SetMaximum(1.369966e+09);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,1191058);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,5312339);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,3812636);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,2649428);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,1619758);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,1156301);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,717929.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,411257.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,249689.6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,252387.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,104754);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,99706.09);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,129899.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,43555.54);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,23648.24);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,16147.76);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,35428.95);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,28478.13);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(19,4643.924);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(20,2074.74);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(21,22559.36);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(22,798.1498);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,349.9999);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(24,1651.66);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(25,5636.928);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(26,21.6364);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(31,1604.444);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,38915.33);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,161590.8);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,151923.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,139323.1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,108574.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,101405.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,76518.18);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,58193.28);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,37928.45);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,44797.97);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,18940.56);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,25177.75);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,42896.22);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,16411.85);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,5314.413);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,5080.471);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,23328.31);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,23099.99);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(19,2158.941);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(20,1290.268);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(21,15883.87);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(22,476.6154);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,263.7233);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(24,1263.684);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(25,2849.199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(26,21.6364);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(31,1604.444);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(109852);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,9634.768);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,68169.89);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,93307.23);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,77016.86);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,51710.81);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,32026.95);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,19718.13);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,12468.87);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,8148.722);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,5482.038);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,3700.017);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,2504.482);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,1741.689);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,1191.944);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,818.2245);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,564.3488);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(17,395.5266);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,270.2159);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,183.7742);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(20,135.128);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(21,83.54765);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(22,62.76837);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(23,39.59818);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(24,26.29372);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,17.74582);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(26,11.92682);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(27,8.830499);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(28,6.263384);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(29,3.77521);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(30,2.386179);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(31,5.578828);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,24.74791);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,66.0549);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,77.40606);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,70.34089);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,57.60387);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,45.27546);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,35.4825);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,28.17088);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,22.74259);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,18.63985);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,15.28978);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,12.5558);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,10.47269);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,8.666986);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,7.175179);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,5.961799);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(17,4.992565);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,4.117715);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,3.392217);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(20,2.912097);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(21,2.290655);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(22,1.996587);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(23,1.571588);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(24,1.287438);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,1.052709);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(26,0.867877);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(27,0.7436388);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(28,0.6300621);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(29,0.4845932);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(30,0.3840021);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(31,0.5964261);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(6312161);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","QCD","F");

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
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
