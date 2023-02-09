#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(-1.310117,0.4692959,7.029799,2.859865);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetFillStyle(4000);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetLogy();
   Z_dR_Bj0_tags_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_18->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(320.9481);
   
   TH1F *st_stack_51 = new TH1F("st_stack_51","",30,0,6);
   st_stack_51->SetMinimum(5.703799);
   st_stack_51->SetMaximum(417.6456);
   st_stack_51->SetDirectory(0);
   st_stack_51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_51->SetLineColor(ci);
   st_stack_51->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_51->GetXaxis()->SetRange(1,30);
   st_stack_51->GetXaxis()->SetLabelFont(42);
   st_stack_51->GetXaxis()->SetTitleOffset(1);
   st_stack_51->GetXaxis()->SetTitleFont(42);
   st_stack_51->GetYaxis()->SetTitle("Events/0.2");
   st_stack_51->GetYaxis()->SetLabelFont(42);
   st_stack_51->GetYaxis()->SetTitleSize(0.037);
   st_stack_51->GetYaxis()->SetTitleFont(42);
   st_stack_51->GetZaxis()->SetLabelFont(42);
   st_stack_51->GetZaxis()->SetTitleOffset(1);
   st_stack_51->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_51);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.5506511);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,1.842474);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,2.325746);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,2.074816);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,1.572957);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,1.256971);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.9618968);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.6389411);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.4507439);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.4112457);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.329926);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.2881044);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.2416359);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.2184017);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.1951675);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.192844);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.09293689);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.06040898);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.05576213);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.03020449);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.01394053);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,0.009293689);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,0.004646845);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.004646845);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,0.002323422);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.03576863);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.06542817);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.07350979);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.06943107);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.06045364);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.05404142);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.04727465);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.0385296);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.03236153);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.03091112);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.02768677);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.02587254);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.02369435);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.02252641);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.02129452);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.02116738);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.01469461);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.01184718);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.0113824);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.008377218);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.005691199);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,0.004646845);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,0.003285815);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.003285815);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,0.002323422);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(5951);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.2243753);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.8396866);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,0.8837358);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.668308);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.4329204);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.2594769);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.1706904);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.1280178);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.1059932);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.0894748);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.06779437);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.07054744);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.06159996);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.05196421);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.05540555);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.05093181);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.02271283);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.01892736);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.01204469);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.00894748);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.003441339);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.004817874);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.001376535);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.0006882677);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,0.0006882677);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,0.0006882677);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.0003441339);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,0.0003441339);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.0003441339);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.008787214);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.01699896);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.01743913);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.01516534);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.01220584);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.009449592);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.007664225);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.006637414);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.006039525);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.005548992);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.004830149);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.004927247);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.004604197);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.004228788);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.004366569);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.004186569);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.002795757);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.002552165);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.002035923);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.001754745);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.001088247);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.001287631);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.0006882677);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0004866788);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.0004866788);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.0004866788);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.0003441339);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,0.0003441339);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.0003441339);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(12310);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}
