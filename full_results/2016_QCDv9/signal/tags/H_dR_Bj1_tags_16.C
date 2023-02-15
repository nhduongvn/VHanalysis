#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_16/H_dR_Bj1_tags_16
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_16 = new TCanvas("H_dR_Bj1_tags_16", "H_dR_Bj1_tags_16",0,0,600,600);
   H_dR_Bj1_tags_16->SetHighLightColor(2);
   H_dR_Bj1_tags_16->Range(-1.310117,-0.4380785,7.029799,3.212576);
   H_dR_Bj1_tags_16->SetFillColor(0);
   H_dR_Bj1_tags_16->SetFillStyle(4000);
   H_dR_Bj1_tags_16->SetBorderMode(0);
   H_dR_Bj1_tags_16->SetBorderSize(2);
   H_dR_Bj1_tags_16->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_16->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_16->SetBottomMargin(0.12);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.84751);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",30,0,6);
   st_stack_45->SetMinimum(0);
   st_stack_45->SetMaximum(2.84751);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_45->GetXaxis()->SetRange(1,30);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetTitleOffset(1);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Events/0.2");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetTitleSize(0.037);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetTitleOffset(1);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.3035858);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,1.083063);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,1.408529);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,1.233488);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,1.140498);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,0.8834074);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,0.8177672);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.6427268);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.5196514);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.369226);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.3309359);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.3172609);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.2762358);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.2652957);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.2379456);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.1887155);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.09299025);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.08205022);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.03008508);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.03008508);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.01914505);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.01641004);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.02881509);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.05442596);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.0620672);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.0580827);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.05585043);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.0491541);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.0472927);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.04192687);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.03769948);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.03177791);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.03008508);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.02945693);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.02748648);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.0269367);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.02551045);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.02271868);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.0159477);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.01498025);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.009070994);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.009070994);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.00723615);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.006699373);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(3765);

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
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.1032498);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.4040677);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.4898115);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.4062113);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.3544077);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.2833118);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.2172176);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.1600551);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.1246858);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.112896);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.09717631);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.09181732);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.06430785);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.06895231);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.06573692);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.05573347);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.03715565);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.01893509);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.01214704);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.01000344);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.006073519);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.003215393);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.003572658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.001786329);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.006073519);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.01201497);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.01322849);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.0120468);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.01125246);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.0100607);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.008809338);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.007561893);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.006674277);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.006350897);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.005892179);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.005727407);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.004793224);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.004963296);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.00484619);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.004462249);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.003643411);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.002600935);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.0020832);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.001890473);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.001473045);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.001129774);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.0007988707);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(8944);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_16->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->SetSelected(H_dR_Bj1_tags_16);
}
