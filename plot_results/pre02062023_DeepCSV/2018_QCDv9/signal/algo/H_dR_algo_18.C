#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_18()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Wed Jan 18 11:40:23 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.353788,-0.1297226,7.264125,0.951299);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetFillStyle(4000);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLeftMargin(0.15709);
   H_dR_algo_18->SetRightMargin(0.1234783);
   H_dR_algo_18->SetBottomMargin(0.12);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   H_dR_algo_18->SetFrameFillStyle(1000);
   H_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.8431968);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",30,0,6);
   st_stack_87->SetMinimum(0);
   st_stack_87->SetMaximum(0.8431968);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_87->GetXaxis()->SetRange(1,31);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Events/0.2");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetTitleSize(0.037);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.0289898);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.1348531);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.1094602);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.2473043);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.3150329);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.3329509);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.443196);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.4278642);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.3705408);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.2514308);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.1866339);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.1770182);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.08931476);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.1019144);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.0240657);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.006646031);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.004616078);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,0.002794086);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,0.007214736);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,0.001281373);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,0.00192394);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.008686138);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.01945275);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01805844);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.02530551);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.02919485);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.02957577);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.03538684);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.0341786);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.03117273);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.02601242);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.02196433);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.02159007);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.01531084);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.01779437);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.007461091);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.004080327);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.002923361);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,0.002794086);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,0.004174966);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,0.001281373);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,0.00192394);
   VbbHcc_algo_H_dR_stack_1->SetEntries(1458);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.01330481);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.02621252);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.0454092);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.08535697);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.1158242);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.1345362);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.1189353);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.0881507);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.05578414);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.04420168);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.0340005);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.02756048);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.02579604);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.01899369);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.00922604);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.003968495);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.003824008);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.001622074);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.001069508);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0002618389);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.002528612);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.003052814);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.004170776);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.005726007);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.006709775);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.007448303);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.006750646);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.005800178);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.00453807);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.004118713);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.003603446);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.003261045);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.003154081);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.002700738);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.001828973);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.001215344);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.001208677);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0008037016);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.0005959643);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.0002618389);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2500);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

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
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
