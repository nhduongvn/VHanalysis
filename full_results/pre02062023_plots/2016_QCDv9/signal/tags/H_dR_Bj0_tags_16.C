#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Wed Jan 18 11:40:23 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(-1.310117,-0.3155633,7.029799,2.314131);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetFillStyle(4000);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_16->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_16->SetBottomMargin(0.12);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.051162);
   
   TH1F *st_stack_41 = new TH1F("st_stack_41","",30,0,6);
   st_stack_41->SetMinimum(0);
   st_stack_41->SetMaximum(2.051162);
   st_stack_41->SetDirectory(0);
   st_stack_41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_41->SetLineColor(ci);
   st_stack_41->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_41->GetXaxis()->SetRange(1,30);
   st_stack_41->GetXaxis()->SetLabelFont(42);
   st_stack_41->GetXaxis()->SetTitleOffset(1);
   st_stack_41->GetXaxis()->SetTitleFont(42);
   st_stack_41->GetYaxis()->SetTitle("Events/0.2");
   st_stack_41->GetYaxis()->SetLabelFont(42);
   st_stack_41->GetYaxis()->SetTitleSize(0.037);
   st_stack_41->GetYaxis()->SetTitleFont(42);
   st_stack_41->GetZaxis()->SetLabelFont(42);
   st_stack_41->GetZaxis()->SetTitleOffset(1);
   st_stack_41->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_41);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.1771995);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,0.7361702);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,0.9969271);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,0.8499812);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,0.6641379);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,0.5993088);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,0.4552442);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,0.374568);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.3097389);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.2204189);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.2261814);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.2002498);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.1887246);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.1354207);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.167115);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.09796394);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.07059166);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.0561852);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.02737228);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.01440646);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.01296582);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.007203231);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.004321938);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,0.001440646);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.002881292);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,0.001440646);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.01597754);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.03256625);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.03789748);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.03499317);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.03093198);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.02938353);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.02560949);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.02322972);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.02112402);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.01781981);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.01805124);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.01698497);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.01648895);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.01396758);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.01551623);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.01187987);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.01008452);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.008996832);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.006279631);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.004555723);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.004321938);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.003221383);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.002495272);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,0.001440646);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.002037381);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,0.001440646);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,0.001440646);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(4581);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.1038807);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.3318063);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,0.370514);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.2993998);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.2410681);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.1949789);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.1411482);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.1107221);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.09091816);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.07453488);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.07489496);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.06301258);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.06535305);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.0525705);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.05221043);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.04266852);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.0275455);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.02106421);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.01494298);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.01026205);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.00666133);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.003420683);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.00180036);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.002520503);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.001260252);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,0.0007201438);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,0.001080216);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,0.000180036);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,0.0003600719);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.000180036);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.004324612);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.007728975);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.008167364);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.007341848);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.006587938);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.005924797);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.005041007);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.004464746);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.004045805);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.00366319);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.003672027);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.003368164);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.003430146);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.003076456);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.003065902);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.002771618);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.002226922);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.001947387);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.001640206);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.001359242);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.001095116);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.0007847585);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.0005693237);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.0006736328);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.0004763304);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.0003600719);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.0004409962);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.000180036);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.0002546093);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.000180036);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(13340);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
