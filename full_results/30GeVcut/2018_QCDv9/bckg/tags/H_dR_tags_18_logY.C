#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Tue Feb 14 16:02:01 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.353788,-1.050642,7.264125,10.30144);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLogy();
   H_dR_tags_18->SetLeftMargin(0.15709);
   H_dR_tags_18->SetRightMargin(0.1234783);
   H_dR_tags_18->SetBottomMargin(0.12);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.746093e+08);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(2.049312);
   st_stack_23->SetMaximum(1.466331e+09);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,638.9218);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,2740575);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,3176980);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,2394633);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,2370463);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,2498242);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,2382667);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,2628191);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,2891769);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,3456772);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,3628903);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,3669557);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,4709101);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,5041631);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,5384507);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,3677757);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,2645353);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,2075348);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,1480952);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,1389489);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,817762.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,771520.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,449967.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,270350.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,297925.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,48319.94);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,14633.21);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,1324.264);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,415.3803);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,128785.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,145805.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,112960);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,128946);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,144284.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,114792.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,140384.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,137798.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,192747.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,181773.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,146410.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,189233.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,185019.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,194248.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,170465.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,131398.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,125551.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,91850.82);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,109139.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,67812);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,85013.31);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,65952.06);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,38784.58);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,72064.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,14252.15);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,3861.045);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,666.3349);
   VbbHcc_tags_H_dR_stack_1->SetEntries(477143);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,78.22613);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,87563.61);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,155315.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,188926.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,226631.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,247524.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,254814.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,256852.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,262501.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,274010.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,292030.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,314985.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,340600);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,365593.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,361585.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,206086);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,131139.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,87736.52);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,59288.09);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,39590.48);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,25945.88);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,16394.7);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,9786.184);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,5228.425);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,2568.087);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,1054.155);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,281.1503);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,19.40412);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,4.642739);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,92.74905);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,122.0192);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,135.1145);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,146.8717);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,153.6119);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,157.2384);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,157.0419);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,159.5921);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,162.3873);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,167.447);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,174.4063);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,181.3558);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,187.5965);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,186.9292);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,141.4407);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,113.1126);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,91.97715);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,75.08566);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,60.38969);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,49.91812);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,39.08339);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,30.31961);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,21.4603);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,15.78724);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,9.655648);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,5.698538);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,1.268806);
   VbbHcc_tags_H_dR_stack_2->SetEntries(5.418176e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
