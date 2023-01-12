#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,-1.064532,7.029799,10.37889);
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
   st->SetMaximum(6.690252e+08);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",30,0,6);
   st_stack_108->SetMinimum(2.035532);
   st_stack_108->SetMaximum(1.716109e+09);
   st_stack_108->SetDirectory(0);
   st_stack_108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_108->SetLineColor(ci);
   st_stack_108->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
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
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,1378478);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,6619700);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,4954567);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,3722246);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,2430479);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,1393925);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,1190829);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,552318.6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,595956.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,457359.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,370374.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,199401.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,148114.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,128912.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,79552.64);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,15026.03);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,66166.75);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,47178.23);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(19,9552.979);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(20,6832.159);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(21,39192.41);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(22,1034.712);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,1522.984);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(24,439.4369);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(25,5318.287);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(26,1711.434);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(31,1418.554);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,53880.58);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,196417.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,188147.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,180369.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,151309.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,105036.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,109789.5);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,66769.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,86350.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,73294.86);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,70000.56);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,43797.34);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,40898.07);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,41552.46);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,27538.91);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,4299.515);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,31761.07);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,24971.65);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(19,3492.287);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(20,2826.144);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(21,22845.48);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(22,522.9826);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,1211.734);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(24,353.4783);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(25,2455.555);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(26,1688.739);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(31,1418.554);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(124211);

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
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,9899.314);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,70552.49);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,96888.15);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,80167.18);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,54051.84);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,33622.31);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,20742.05);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,13181.64);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,8625.444);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,5810.745);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,3932.527);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,2655.01);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,1850.207);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,1276.684);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,875.4596);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,604.0852);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(17,420.099);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,285.1209);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,198.6719);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(20,144.3504);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(21,90.68152);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(22,67.35213);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(23,42.39593);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(24,28.56145);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,20.63287);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(26,12.19463);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(27,9.939632);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(28,6.14839);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(29,3.296491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(30,2.555077);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(31,6.239862);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,25.30242);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,67.81638);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,79.60844);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,72.43573);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,59.42718);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,46.7968);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,36.69919);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,29.19984);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,23.57427);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,19.32887);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,15.87378);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,13.00824);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,10.86326);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,9.021908);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,7.467609);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,6.212765);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(17,5.181793);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,4.243407);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,3.548518);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(20,3.027345);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(21,2.402091);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(22,2.086415);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(23,1.639666);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(24,1.351889);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,1.136527);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(26,0.8815216);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(27,0.7916729);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(28,0.6270862);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(29,0.4482683);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(30,0.3967278);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(31,0.6386907);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(6577915);

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
