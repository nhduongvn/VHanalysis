#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.353788,-0.2827227,7.264125,2.073299);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15709);
   H_dR_both_17->SetRightMargin(0.1234783);
   H_dR_both_17->SetBottomMargin(0.12);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.837697);
   
   TH1F *st_stack_134 = new TH1F("st_stack_134","",30,0,6);
   st_stack_134->SetMinimum(0);
   st_stack_134->SetMaximum(1.837697);
   st_stack_134->SetDirectory(0);
   st_stack_134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_134->SetLineColor(ci);
   st_stack_134->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_134->GetXaxis()->SetRange(1,31);
   st_stack_134->GetXaxis()->SetLabelFont(42);
   st_stack_134->GetXaxis()->SetTitleOffset(1);
   st_stack_134->GetXaxis()->SetTitleFont(42);
   st_stack_134->GetYaxis()->SetTitle("Events/0.2");
   st_stack_134->GetYaxis()->SetLabelFont(42);
   st_stack_134->GetYaxis()->SetTitleSize(0.037);
   st_stack_134->GetYaxis()->SetTitleFont(42);
   st_stack_134->GetZaxis()->SetLabelFont(42);
   st_stack_134->GetZaxis()->SetTitleOffset(1);
   st_stack_134->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_134);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.2110357);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.3888272);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,0.4651443);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,0.6117012);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,0.7052794);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,0.7722929);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,0.8265386);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,0.8324619);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,0.8083943);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,0.7600938);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,0.8487873);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,0.9031794);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,1.002917);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,0.982965);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.3393902);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.2158312);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.1029832);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.0704922);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.04972866);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.04155285);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.01944504);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,0.01164204);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.003138135);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,0.002923655);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.01942219);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.02672009);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.02878618);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.03354888);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.03572336);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.03762779);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.03905367);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.03882194);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.03855305);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.03762421);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.0394293);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.04001549);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.04289671);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.04248712);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.024997);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.01947717);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.01349513);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.01079809);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.00921039);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.008503042);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.00596042);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,0.004232208);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.002296413);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,0.001905132);
   VbbHcc_both_H_dR_stack_1->SetEntries(7343);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.06258473);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.1202865);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.1712292);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.2516084);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.2784615);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.2743038);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.2730794);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.213207);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.2040373);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.1962024);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.1917168);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.2202575);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.2222141);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.219101);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.1202651);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.06608899);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.03920035);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.02448325);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.01946252);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.01375228);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.005885172);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.004200106);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.003076079);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.0004644751);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.0001288878);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.003868845);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.005376372);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.006505879);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.007859031);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.008271305);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.008194733);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.008223203);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.007233448);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.007091952);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.006929016);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.006781835);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.007333868);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.007335585);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.007320222);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.00537507);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.004010703);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.003084725);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.002429793);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.002187058);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.001798022);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.001169859);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.0009831162);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.0008645618);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.0003327574);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.0001288878);
   VbbHcc_both_H_dR_stack_2->SetEntries(15101);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","ZHcc","F");

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
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
