#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_18/H_dR_Bj1_tags_18
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_18 = new TCanvas("H_dR_Bj1_tags_18", "H_dR_Bj1_tags_18",0,0,600,600);
   H_dR_Bj1_tags_18->SetHighLightColor(2);
   H_dR_Bj1_tags_18->Range(-1.310117,0.5027849,7.029799,2.72777);
   H_dR_Bj1_tags_18->SetFillColor(0);
   H_dR_Bj1_tags_18->SetFillStyle(4000);
   H_dR_Bj1_tags_18->SetBorderMode(0);
   H_dR_Bj1_tags_18->SetBorderSize(2);
   H_dR_Bj1_tags_18->SetLogy();
   H_dR_Bj1_tags_18->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_18->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_18->SetBottomMargin(0.12);
   H_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
   H_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(250.1407);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",30,0,6);
   st_stack_47->SetMinimum(5.885496);
   st_stack_47->SetMaximum(320.0892);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_47->GetXaxis()->SetRange(1,30);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/0.2");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetTitleSize(0.037);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.3880115);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,1.326674);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,1.854091);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,1.700745);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,1.459109);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,1.298793);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,1.031599);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.8550194);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.7039969);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.6226772);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.4693313);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.3787178);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.3996286);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.3554836);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.2788107);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.3043683);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.120818);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.1161711);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.06970267);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.03717476);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.02788107);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.006970267);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,0.01161711);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.004646845);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.002323422);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,0.002323422);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.03002523);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.05551958);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.06563411);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.06286135);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.0582248);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.05493309);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.04895755);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.04457097);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.04044357);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.03803606);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.03302203);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.02966347);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.0304714);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.02873915);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.02545182);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.02659278);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.01675444);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.01642908);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.01272591);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.009293689);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.008048571);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.004024285);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,0.00519533);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.003285815);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.002323422);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,0.002323422);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(5951);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.154172);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.5289337);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.6473158);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.5795214);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.4546008);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.377859);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.3066233);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.2178367);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.1713787);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.1390301);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.1187262);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.1042726);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.09188374);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.08155972);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.07364465);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.07639772);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.03406925);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.02787484);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.01961563);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.01032402);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.008259213);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.005506142);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.002064803);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.001376535);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.001032402);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.001376535);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.0006882677);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,0.0003441339);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.007283941);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.01349163);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.01492526);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.01412207);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.01250774);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.01140325);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.01027227);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.008658233);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.007679661);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.006917005);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.006392003);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.005990302);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.005623194);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.005297873);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.005034244);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.005127479);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.003424089);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.003097205);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.002598154);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.001884899);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.001685905);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.001376535);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.0008429524);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.0006882677);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0005960573);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.0006882677);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.0004866788);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.0003441339);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(12310);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_18->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->SetSelected(H_dR_Bj1_tags_18);
}
