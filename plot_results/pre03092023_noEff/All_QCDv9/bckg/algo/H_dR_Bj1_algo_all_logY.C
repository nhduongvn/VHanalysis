#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Thu Feb 16 10:37:39 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(-1.310117,-0.7818542,7.029799,8.828137);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetLogy();
   H_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_all->SetBottomMargin(0.12);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(3.200466e+07);
   
   TH1F *st_stack_112 = new TH1F("st_stack_112","",30,0,6);
   st_stack_112->SetMinimum(2.351499);
   st_stack_112->SetMaximum(7.364408e+07);
   st_stack_112->SetDirectory(0);
   st_stack_112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_112->SetLineColor(ci);
   st_stack_112->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_112->GetXaxis()->SetRange(1,30);
   st_stack_112->GetXaxis()->SetLabelFont(42);
   st_stack_112->GetXaxis()->SetTitleOffset(1);
   st_stack_112->GetXaxis()->SetTitleFont(42);
   st_stack_112->GetYaxis()->SetTitle("Events/0.2");
   st_stack_112->GetYaxis()->SetLabelFont(42);
   st_stack_112->GetYaxis()->SetTitleSize(0.037);
   st_stack_112->GetYaxis()->SetTitleFont(42);
   st_stack_112->GetZaxis()->SetLabelFont(42);
   st_stack_112->GetZaxis()->SetTitleOffset(1);
   st_stack_112->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_112);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(1,1958.381);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,213004.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,303733.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,266298.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,284994.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,279480.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,285681.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,215356.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,202749.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,212674.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,197607.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,140500.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,160825);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,140366.8);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,141848);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,113748.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,72709.73);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,68244.91);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,30172.03);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,23842.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,13087.02);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,7273.676);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(23,9277.496);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(24,3175.393);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(25,2387.094);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(26,251.8082);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(27,84.86347);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(28,349.9937);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(1,1958.381);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,12319.95);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,14452.09);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,13898.62);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,26570.57);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,33521.76);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,33831.03);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,19733.03);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,12298.78);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,29592.28);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,33317.25);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,8845.453);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,23854.91);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,9372.064);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,17520.18);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,6376.942);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,5460.325);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,16600.38);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,3194.206);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,3296.111);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,2331.85);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,2063.05);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(23,3401.95);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(24,1872.543);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(25,1373.386);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(26,68.97949);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(27,35.28083);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(28,300.0106);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(70650);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(1,3.257307);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,5528.012);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,16312.71);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,19804.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,19150.49);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,17348.05);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,15703);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,13896.66);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,12185.33);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,10707.46);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,9465.575);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,8550.231);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,7854.648);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,7340.951);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,6989.566);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,6433.151);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,3981.051);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,2635.515);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,1742.583);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,1143.472);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,718.6182);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(22,435.2571);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,240.6364);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(24,131.7434);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(25,64.1152);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(26,34.04651);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(27,15.32691);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(28,7.007526);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(29,3.380259);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(30,1.579027);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(31,2.747041);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(1,0.4508774);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,18.74773);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,32.38149);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,35.87331);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,35.45234);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,33.80337);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,32.15554);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,30.18911);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,28.22674);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,26.41269);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,24.77694);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,23.53267);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,22.5133);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,21.75613);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,21.21971);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,20.33734);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,15.98505);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,12.99105);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,10.55161);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,8.541372);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,6.767652);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(22,5.268067);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,3.924194);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(24,2.901909);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(25,2.031081);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(26,1.479319);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(27,0.994005);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(28,0.6797673);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(29,0.4778148);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(30,0.3253212);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(31,0.4283798);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(2980897);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_1","QCD","F");

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
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
