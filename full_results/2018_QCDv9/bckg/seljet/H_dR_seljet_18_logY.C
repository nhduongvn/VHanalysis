#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_18_logY()
{
//=========Macro generated from canvas: H_dR_seljet_18/H_dR_seljet_18
//=========  (Mon Dec 19 11:15:41 2022) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_18 = new TCanvas("H_dR_seljet_18", "H_dR_seljet_18",0,0,600,600);
   H_dR_seljet_18->SetHighLightColor(2);
   H_dR_seljet_18->Range(-1.353788,0.15311,7.264125,13.45336);
   H_dR_seljet_18->SetFillColor(0);
   H_dR_seljet_18->SetFillStyle(4000);
   H_dR_seljet_18->SetBorderMode(0);
   H_dR_seljet_18->SetBorderSize(2);
   H_dR_seljet_18->SetLogy();
   H_dR_seljet_18->SetLeftMargin(0.15709);
   H_dR_seljet_18->SetRightMargin(0.1234783);
   H_dR_seljet_18->SetBottomMargin(0.12);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(313.5716);
   st->SetMaximum(4.685966e+11);
   
   TH1F *st_stack_247 = new TH1F("st_stack_247","",30,0,6);
   st_stack_247->SetMinimum(56.1229);
   st_stack_247->SetMaximum(1.328421e+12);
   st_stack_247->SetDirectory(0);
   st_stack_247->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_247->SetLineColor(ci);
   st_stack_247->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_247->GetXaxis()->SetRange(1,31);
   st_stack_247->GetXaxis()->SetLabelFont(42);
   st_stack_247->GetXaxis()->SetTitleOffset(1);
   st_stack_247->GetXaxis()->SetTitleFont(42);
   st_stack_247->GetYaxis()->SetTitle("Events/0.2");
   st_stack_247->GetYaxis()->SetLabelFont(42);
   st_stack_247->GetYaxis()->SetTitleSize(0.037);
   st_stack_247->GetYaxis()->SetTitleFont(42);
   st_stack_247->GetZaxis()->SetLabelFont(42);
   st_stack_247->GetZaxis()->SetTitleOffset(1);
   st_stack_247->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_247);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,313369.1);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,2.352937e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,3.812451e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,3.332805e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,3.498496e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,3.923077e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,4.68042e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,5.866354e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,7.542904e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,1.031388e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,1.435488e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,2.021119e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,2.846373e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,3.882607e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,4.681078e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,2.970573e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,2.081524e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,1.529842e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,1.124229e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,8.173829e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,5.802144e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,4.01061e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,2.597348e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,1.54836e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,8.134655e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,3.726618e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,1.064387e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,804649.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,69431);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,1704482);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,2436068);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,2260505);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,2279099);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,2477854);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,2646728);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,2931367);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,3215329);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,3627310);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,4293055);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,5014136);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,5577912);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,6603911);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,6986120);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,5657477);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,4873244);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,4351682);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,3659315);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,3211602);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,2588436);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,2152487);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,1699757);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,1331793);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,943071.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,657990.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,353712.7);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,117598.3);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(7.642441e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,202.4856);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,237436.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,532055.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,721305.3);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,867548.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,960152.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,1046441);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,1183994);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,1406762);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,1744513);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,2225454);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,2868566);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,3663500);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,4536463);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,4888747);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,2526395);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,1451326);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,887162.7);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,548421.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,336667.6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,203168.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,119338.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,66925.81);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,34839.58);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,16054.15);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,6154.971);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,1536.51);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,91.89952);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,5.506405);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,147.1205);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,220.7801);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,257.0242);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,282.0494);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,296.4093);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,309.9991);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,331.1775);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,361.5887);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,402.8859);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,456.9226);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,520.0851);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,589.9099);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,657.7041);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,683.8024);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,491.4804);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,371.257);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,290.1227);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,228.6418);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,177.9539);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,137.7748);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,105.4813);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,78.79331);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,56.41837);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,38.30282);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,24.15921);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,12.04438);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,3.044843);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(4.424954e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","QCD","F");

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
   H_dR_seljet_18->Modified();
   H_dR_seljet_18->cd();
   H_dR_seljet_18->SetSelected(H_dR_seljet_18);
}
