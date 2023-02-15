#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(-1.310117,-189513.6,7.029799,1389766);
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
   st->SetMaximum(1231838);
   
   TH1F *st_stack_111 = new TH1F("st_stack_111","",30,0,6);
   st_stack_111->SetMinimum(0);
   st_stack_111->SetMaximum(1231838);
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
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(1,2204.736);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,486724.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,806726);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,579860.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,674401.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,710329.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,602645.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,545928.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,560080.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,455912.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,408117.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,398738);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,434525.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,311321.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,268192.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,247656.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,128446.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,116118.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,79407.18);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,59683.79);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,27140.68);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,14186.81);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,11119.82);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,4006.109);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,1345.341);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,887.5547);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,70.37171);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,6.556405);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(1,2204.736);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,64700.78);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,84135.77);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,61771.82);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,70475.96);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,80569.48);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,69623.68);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,65215.28);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,68953.62);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,56041.38);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,50770.86);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,55011.47);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,59595.77);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,43328.72);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,35982.36);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,28186.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,11886.18);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,25388.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,24335.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,23785.87);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,5387.949);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,4558.374);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,3972.397);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,2295.388);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,627.0175);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,512.1658);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,41.26131);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,6.556405);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(36309);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,2.647973);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,4127.491);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,14499.42);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,20571.99);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,21442.22);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,18928.63);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,15899.64);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,13241.68);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,11002.42);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,9237.283);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,7768.629);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,6655.375);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,5862.571);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,5309.523);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,4861.012);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,4378.048);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,2625.218);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,1705.875);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,1120.182);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,724.4988);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,438.8542);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,264.4386);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,148.0947);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,80.11496);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,39.86622);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,20.32239);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,8.15035);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,3.173577);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.748902);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,0.8451251);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.171706);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.4142243);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,16.51636);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,31.00997);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,37.1061);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,38.10479);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,35.97784);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,33.09108);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,30.2251);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,27.53813);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,25.19081);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,23.05429);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,21.31347);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,19.95255);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,18.98041);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,18.13549);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,17.19981);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,13.30582);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,10.70186);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,8.657982);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,6.960017);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,5.408384);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,4.201245);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,3.148243);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,2.307908);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.63403);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,1.166655);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.746315);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.4658069);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.3420859);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.2460714);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.2803156);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2592187);

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
