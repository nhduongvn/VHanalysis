#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.310117,-556734.9,7.029799,4082722);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3618777);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(0);
   st_stack_115->SetMaximum(3618777);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_115->GetXaxis()->SetRange(1,30);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.2");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetTitleSize(0.037);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,520097.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,2382546);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,1722331);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,1055510);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,721788.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,556346.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,330600.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,200317.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,73606.42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,124852.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,42091.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,57140.53);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,58292.42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,6137.36);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,9375.691);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,10203.27);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,31140.38);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,26365.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,788.5481);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,177.3101);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,2275.66);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,415.779);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,49.63866);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,395.0459);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,2936.818);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,30592.01);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,120914.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,117653.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,86771);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,80776.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,76029.94);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,54775.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,47773.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,10907.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,34539.13);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,8460.392);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,24217.57);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,32676.83);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,2458.425);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,3935.86);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,4454.166);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,23254.81);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,23042.04);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,509.3101);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,79.29548);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,2205.306);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,361.0388);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,38.19073);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,360.7008);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,2262.467);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(36309);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,4212.747);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,29971.45);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,41040.01);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,33843.38);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,22642.94);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,14050.84);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,8662.609);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,5451.535);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,3560.699);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,2395.628);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,1617.86);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,1089.561);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,765.73);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,516.6796);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,359.7183);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,243.725);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,173.5734);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,115.8711);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,80.87355);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,60.40962);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,37.43103);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,25.91907);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,16.35781);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,10.73462);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,7.700713);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,4.629509);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,3.951625);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,2.867999);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.786551);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.9777387);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,2.925315);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,16.85964);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,45.09222);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,52.85436);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,48.00612);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,39.25459);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,30.88645);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,24.22228);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,19.18503);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,15.4866);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,12.69181);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,10.41857);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,8.534263);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,7.160005);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,5.884559);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,4.900598);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,4.035968);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,3.412538);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,2.781078);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,2.318823);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,2.001275);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.578057);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.324424);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.037419);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.8477804);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.7135805);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.5576936);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.5083441);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.440712);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.3430257);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.255194);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.4444234);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2592187);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
