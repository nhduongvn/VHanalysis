#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_18()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Tue Feb 14 16:10:11 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.353788,-1357599,7.264125,9955723);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLeftMargin(0.15709);
   H_dR_both_18->SetRightMargin(0.1234783);
   H_dR_both_18->SetBottomMargin(0.12);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(8824391);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(0);
   st_stack_151->SetMaximum(8824391);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_151->GetXaxis()->SetRange(1,31);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetTitleOffset(1);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Events/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetTitleSize(0.037);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetTitleOffset(1);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,639.2145);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,2780890);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,3226741);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,2449908);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,2411527);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,2568580);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,2426644);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,2715451);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,2949012);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,3512693);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,3713788);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,3747018);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,4777321);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,5141386);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,5510865);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,3737300);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,2668716);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,2132347);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,1506394);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1408756);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,824665.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,783927.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,457144.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,273892.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,296208.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,48826.28);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,14770.94);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,1324.682);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,415.3804);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,128913.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,146002.1);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,113343.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,129129.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,146341.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,114998.8);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,144591.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,138033.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,192906.4);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,183443);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,146897.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,189409.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,186873.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,197388.4);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,170930.4);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,131224.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,128852.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,92015.39);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,109233.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,67834.84);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,85137.99);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,65968.83);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,38763.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,72025.69);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,14257.38);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,3861.618);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,666.3351);
   VbbHcc_both_H_dR_stack_1->SetEntries(497710);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,80.8161);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,90966.74);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,161036.2);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,195688.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,234497.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,256017.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,263477.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,265715.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,271457.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,283185.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,301507.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,324931.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,351028.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,376434.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,372062.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,212304);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,135171.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,90501.66);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,61160.34);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,40882.3);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,26788.07);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,16930.92);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,10099.41);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,5401.81);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,2650.542);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,1089.569);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,290.4133);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,20.16646);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,4.664942);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,94.54466);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,124.2684);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,137.4933);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,149.461);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,156.1273);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,159.8652);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,159.8002);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,162.3074);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,165.0342);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,170.1299);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,177.0366);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,184.2178);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,190.473);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,189.4344);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,143.6183);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,114.7614);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,93.46654);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,76.18826);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,61.63826);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,50.78368);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,39.76937);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,30.75429);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,21.81486);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,16.00983);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,9.811999);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,5.767846);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,1.29489);
   VbbHcc_both_H_dR_stack_2->SetEntries(5.594992e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
