#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.310117,-0.0989277,7.029799,0.7254698);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
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
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(-2.435176e+09);
   st_stack_150->SetMaximum(-0.6384931);
   st_stack_150->SetDirectory(0);
   st_stack_150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_150->SetLineColor(ci);
   st_stack_150->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_150->GetXaxis()->SetRange(1,31);
   st_stack_150->GetXaxis()->SetLabelFont(42);
   st_stack_150->GetXaxis()->SetTitleOffset(1);
   st_stack_150->GetXaxis()->SetTitleFont(42);
   st_stack_150->GetYaxis()->SetTitle("Event/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetTitleSize(0.037);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetTitleOffset(1);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.1239926);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.2917037);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,0.3584339);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,0.4226383);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,0.4215772);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,0.3506702);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,0.2733393);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,0.2466644);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,0.2380942);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,0.1986657);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,0.209559);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,0.3047479);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,0.2652666);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,0.3021029);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.1189068);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.06030417);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.04314518);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.021838);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.01635337);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.01221124);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.005492996);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,0.003357884);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.002776219);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.01299578);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.01980928);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.02178579);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.02402802);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.02351518);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.02172598);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.01883394);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.01817052);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.01758505);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.01628994);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.01649897);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.02000471);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.01894591);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.01991455);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.01235029);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.009020994);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.007601445);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.00535603);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.004606341);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.003908171);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.002594038);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,0.002004822);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.001668839);
   VbbHcc_both_H_dR_stack_1->SetEntries(3542);

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
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.04327659);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.09220728);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.1427562);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.1829868);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.1908324);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.178151);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.1340429);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.09830258);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.09140835);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.09069333);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.09838169);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.1036565);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.112012);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.1183973);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.05726044);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.03355203);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.0210741);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.01576865);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.009261906);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.004524953);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.001970519);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.001969892);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.0007608579);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.0008460112);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.0001342336);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.002712819);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.003927727);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.004888803);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.005546017);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.005718046);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.005496679);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.004781747);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.004070586);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.003941069);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.003924208);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.004065079);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.004175191);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.004364555);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.004463925);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.003100482);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.002371495);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.001887198);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.001640259);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.001221265);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.000861815);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.0005428065);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.0005609114);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.0003150021);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.0003799459);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.0001342336);
   VbbHcc_both_H_dR_stack_2->SetEntries(11286);

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
