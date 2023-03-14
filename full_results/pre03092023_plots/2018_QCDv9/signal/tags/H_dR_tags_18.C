#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Thu Feb 16 10:35:18 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.353788,-0.2859232,7.264125,2.09677);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
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
   st->SetMaximum(1.8585);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(0);
   st_stack_23->SetMaximum(1.8585);
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
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.2190999);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.4793496);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.6322477);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.8771889);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.7923416);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.6326149);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,0.5535273);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,0.4029009);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,0.4221406);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,0.4469264);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,0.4431472);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,0.5033488);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,0.5386101);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,0.5593109);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.188463);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.09565922);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.06435964);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.03820757);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.01837373);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.02261647);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.01007408);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.008619444);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.00514927);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.0248861);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.04140162);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.04289349);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.06568876);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.04754624);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.04947492);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.03862614);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.03308772);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.03384924);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.03519792);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.03502079);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.04171947);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.03808826);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.04268642);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.02214149);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.01579919);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.01359254);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.009634155);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.006616966);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.007618722);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.005063667);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.004433555);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.00364265);
   VbbHcc_tags_H_dR_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.08488666);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.1738422);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.2558181);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.3618115);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.3824188);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.3159797);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.2514135);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.1942982);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.161391);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.1715207);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.1732078);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.196799);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.2221166);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.2185346);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.1054123);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.06572885);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.03956665);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.02221308);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.02016198);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.009308479);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.007116769);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.002406445);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.004541606);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.0007913076);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.0007312304);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,0.0004374943);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.005480538);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.008064114);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.009539981);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.01327983);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.01257674);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.01056218);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.009523463);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.008615612);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.007619894);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.007805275);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.007849591);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.008397965);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.009101503);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.009456727);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.007051658);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.005520485);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.003693624);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.00286029);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.002753941);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.001814936);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.001607361);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.0008671626);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.001290698);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0005617609);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.0005200467);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,0.0004374943);
   VbbHcc_tags_H_dR_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","ZHcc","F");

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
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
