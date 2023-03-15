#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_16 = new TCanvas("H_dR_Bj0_both_16", "H_dR_Bj0_both_16",0,0,600,600);
   H_dR_Bj0_both_16->SetHighLightColor(2);
   H_dR_Bj0_both_16->Range(-1.310117,0.5640487,7.029799,2.490907);
   H_dR_Bj0_both_16->SetFillColor(0);
   H_dR_Bj0_both_16->SetFillStyle(4000);
   H_dR_Bj0_both_16->SetBorderMode(0);
   H_dR_Bj0_both_16->SetBorderSize(2);
   H_dR_Bj0_both_16->SetLogy();
   H_dR_Bj0_both_16->SetLeftMargin(0.15709);
   H_dR_Bj0_both_16->SetRightMargin(0.1234783);
   H_dR_Bj0_both_16->SetBottomMargin(0.12);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(160.1347);
   
   TH1F *st_stack_169 = new TH1F("st_stack_169","",30,0,6);
   st_stack_169->SetMinimum(6.241252);
   st_stack_169->SetMaximum(198.7106);
   st_stack_169->SetDirectory(0);
   st_stack_169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_169->SetLineColor(ci);
   st_stack_169->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_169->GetXaxis()->SetRange(1,30);
   st_stack_169->GetXaxis()->SetLabelFont(42);
   st_stack_169->GetXaxis()->SetTitleOffset(1);
   st_stack_169->GetXaxis()->SetTitleFont(42);
   st_stack_169->GetYaxis()->SetTitle("Events/0.2");
   st_stack_169->GetYaxis()->SetLabelFont(42);
   st_stack_169->GetYaxis()->SetTitleSize(0.037);
   st_stack_169->GetYaxis()->SetTitleFont(42);
   st_stack_169->GetZaxis()->SetLabelFont(42);
   st_stack_169->GetZaxis()->SetTitleOffset(1);
   st_stack_169->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_169);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,0.2045718);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,0.8687096);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,1.152517);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,1.014215);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,0.7995586);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,0.7174418);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,0.5186326);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,0.4466003);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,0.3644835);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,0.2737228);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,0.2838073);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,0.2477911);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,0.2305034);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,0.1699962);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,0.2045718);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,0.1411833);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,0.09220135);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,0.06482908);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,0.03313486);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,0.02016905);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,0.01728775);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,0.007203231);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,0.004321938);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,0.002881292);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,0.002881292);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,0.002881292);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,0.002881292);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,0.01716728);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,0.03537659);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,0.04074763);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,0.03822466);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,0.03393937);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,0.03214933);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,0.02733434);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,0.02536519);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,0.02291488);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,0.01985794);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,0.02022043);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,0.0188939);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,0.01822289);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,0.01564942);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,0.01716728);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,0.01426167);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,0.01152517);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,0.009664148);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,0.006909096);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,0.005390404);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,0.004990545);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,0.003221383);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,0.002495272);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,0.002037381);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,0.002037381);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,0.002037381);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,0.002037381);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(5476);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,0.1247649);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,0.3975194);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,0.4488296);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,0.3636726);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,0.2885976);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,0.2371073);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,0.1726545);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,0.1343068);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,0.1139628);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,0.09901977);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,0.09703938);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,0.08191636);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,0.08407679);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,0.06517301);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,0.06553309);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,0.05545107);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,0.03600719);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,0.02628525);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,0.01782356);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,0.01386277);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,0.00756151);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,0.004320863);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,0.002520503);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.003060611);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.001440288);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.0007201438);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.001080216);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.0003600719);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,0.0003600719);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,0.000180036);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.000180036);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,0.004739427);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,0.008459774);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,0.008989186);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,0.00809161);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,0.007208186);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,0.006533594);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,0.005575304);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,0.004917322);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,0.004529613);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,0.004222217);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,0.004179782);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,0.003840298);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,0.00389061);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,0.003425418);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,0.003434867);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,0.003159618);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,0.002546093);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,0.002175383);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.001791335);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.001579809);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.001166766);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.0008819924);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.0006736328);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.0007423072);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.0005092186);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.0003600719);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.0004409962);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.0002546093);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.0002546093);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.000180036);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.000180036);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_16->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->SetSelected(H_dR_Bj0_both_16);
}
