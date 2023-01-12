#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_17/Z_dR_Bj0_both_17
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_17 = new TCanvas("Z_dR_Bj0_both_17", "Z_dR_Bj0_both_17",0,0,600,600);
   Z_dR_Bj0_both_17->SetHighLightColor(2);
   Z_dR_Bj0_both_17->Range(-1.310117,-0.6194959,7.029799,4.54297);
   Z_dR_Bj0_both_17->SetFillColor(0);
   Z_dR_Bj0_both_17->SetFillStyle(4000);
   Z_dR_Bj0_both_17->SetBorderMode(0);
   Z_dR_Bj0_both_17->SetBorderSize(2);
   Z_dR_Bj0_both_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_17->SetBottomMargin(0.12);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.026723);
   
   TH1F *st_stack_162 = new TH1F("st_stack_162","",30,0,6);
   st_stack_162->SetMinimum(0);
   st_stack_162->SetMaximum(4.026723);
   st_stack_162->SetDirectory(0);
   st_stack_162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_162->SetLineColor(ci);
   st_stack_162->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_162->GetXaxis()->SetRange(1,30);
   st_stack_162->GetXaxis()->SetLabelFont(42);
   st_stack_162->GetXaxis()->SetTitleOffset(1);
   st_stack_162->GetXaxis()->SetTitleFont(42);
   st_stack_162->GetYaxis()->SetTitle("Events/0.2");
   st_stack_162->GetYaxis()->SetLabelFont(42);
   st_stack_162->GetYaxis()->SetTitleSize(0.037);
   st_stack_162->GetYaxis()->SetTitleFont(42);
   st_stack_162->GetZaxis()->SetLabelFont(42);
   st_stack_162->GetZaxis()->SetTitleOffset(1);
   st_stack_162->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_162);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.4412078);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,1.547402);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,1.996545);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,1.682303);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,1.3633);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,1.031601);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.7284691);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.5840449);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.4094663);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.344396);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.3126545);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.2269522);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.1904494);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.180927);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.180927);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.1555337);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.1047472);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.0666573);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.0444382);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.03174157);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.01269663);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.007935393);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,0.004761236);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,0.003174157);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,0.001587079);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.02646189);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.04955651);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.05629097);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.05167153);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.04651521);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.04046272);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.03400202);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.03044545);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.02549226);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.02337913);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.02227571);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.0189787);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.01738557);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.01694536);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.01694536);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.01571128);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.01289349);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.01028544);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.00839803);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.007097631);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.004488936);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.003548816);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,0.002748901);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,0.002244468);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,0.001587079);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(7343);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.1748544);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.6192762);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,0.6879375);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.5064597);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.3503712);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.20775);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.1505691);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.1064139);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.08963498);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.06932361);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.06601197);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.0538693);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.05210309);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.04857068);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.04636292);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.03819422);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.02318146);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.01258422);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.01081802);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.008168705);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.005077844);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.002428534);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,0.001103879);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.001986982);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,0.0004415516);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.0002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.0002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.006213182);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.01169278);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.01232396);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.01057422);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.008795084);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.006772458);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.005765589);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.004847022);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.00444851);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.003912157);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.003817571);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.003448629);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.003391623);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.003274635);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.003199346);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.002903853);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.002262279);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.001666821);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.001545431);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.001342927);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.001058804);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.0007322306);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.0004936697);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0006623275);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.0003122242);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.0002207758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(15101);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_17->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->SetSelected(Z_dR_Bj0_both_17);
}
