#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_16()
{
//=========Macro generated from canvas: H_dR_16/H_dR_16
//=========  (Thu Feb 16 13:12:21 2023) by ROOT version 6.26/06
   TCanvas *H_dR_16 = new TCanvas("H_dR_16", "H_dR_16",0,0,600,600);
   H_dR_16->SetHighLightColor(2);
   H_dR_16->Range(-1.353788,-3.0959,7.264125,22.70326);
   H_dR_16->SetFillColor(0);
   H_dR_16->SetFillStyle(4000);
   H_dR_16->SetBorderMode(0);
   H_dR_16->SetBorderSize(2);
   H_dR_16->SetLeftMargin(0.15709);
   H_dR_16->SetRightMargin(0.1234783);
   H_dR_16->SetBottomMargin(0.12);
   H_dR_16->SetFrameFillStyle(1000);
   H_dR_16->SetFrameBorderMode(0);
   H_dR_16->SetFrameFillStyle(1000);
   H_dR_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",30,0,6);
   st_stack_7->SetMinimum(0);
   st_stack_7->SetMaximum(20.12335);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_7->GetXaxis()->SetRange(1,31);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetTitleOffset(1);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/0.2");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetTitleSize(0.037);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetTitleOffset(1);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VbbHcc_MC_H_dR_stack_1 = new TH1D("VbbHcc_MC_H_dR_stack_1","",30,0,6);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(2,0.02639205);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(3,0.2932182);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(4,0.8043546);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(5,1.555206);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(6,2.934721);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(7,4.252057);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(8,5.9443);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(9,7.529699);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(10,9.699184);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(11,11.46486);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(12,13.53069);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(13,15.25184);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(14,16.54498);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(15,17.91109);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(16,17.12559);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(17,8.716189);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(18,4.697156);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(19,2.916766);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(20,2.137849);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(21,1.399817);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(22,0.7633546);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(23,0.5471611);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(24,0.4022125);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(25,0.2665268);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(26,0.1430902);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(27,0.1029782);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(28,0.08155595);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(29,0.05242327);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(30,0.04577827);
   VbbHcc_MC_H_dR_stack_1->SetBinContent(31,0.08684262);
   VbbHcc_MC_H_dR_stack_1->SetBinError(2,0.01063078);
   VbbHcc_MC_H_dR_stack_1->SetBinError(3,0.02976371);
   VbbHcc_MC_H_dR_stack_1->SetBinError(4,0.04999189);
   VbbHcc_MC_H_dR_stack_1->SetBinError(5,0.06841503);
   VbbHcc_MC_H_dR_stack_1->SetBinError(6,0.09373858);
   VbbHcc_MC_H_dR_stack_1->SetBinError(7,0.1125021);
   VbbHcc_MC_H_dR_stack_1->SetBinError(8,0.1341739);
   VbbHcc_MC_H_dR_stack_1->SetBinError(9,0.1524026);
   VbbHcc_MC_H_dR_stack_1->SetBinError(10,0.1719054);
   VbbHcc_MC_H_dR_stack_1->SetBinError(11,0.1876619);
   VbbHcc_MC_H_dR_stack_1->SetBinError(12,0.2046786);
   VbbHcc_MC_H_dR_stack_1->SetBinError(13,0.2177546);
   VbbHcc_MC_H_dR_stack_1->SetBinError(14,0.227678);
   VbbHcc_MC_H_dR_stack_1->SetBinError(15,0.23625);
   VbbHcc_MC_H_dR_stack_1->SetBinError(16,0.2323488);
   VbbHcc_MC_H_dR_stack_1->SetBinError(17,0.1662224);
   VbbHcc_MC_H_dR_stack_1->SetBinError(18,0.1223769);
   VbbHcc_MC_H_dR_stack_1->SetBinError(19,0.09624527);
   VbbHcc_MC_H_dR_stack_1->SetBinError(20,0.08176983);
   VbbHcc_MC_H_dR_stack_1->SetBinError(21,0.0669571);
   VbbHcc_MC_H_dR_stack_1->SetBinError(22,0.04877558);
   VbbHcc_MC_H_dR_stack_1->SetBinError(23,0.04281056);
   VbbHcc_MC_H_dR_stack_1->SetBinError(24,0.03621486);
   VbbHcc_MC_H_dR_stack_1->SetBinError(25,0.02899175);
   VbbHcc_MC_H_dR_stack_1->SetBinError(26,0.02280956);
   VbbHcc_MC_H_dR_stack_1->SetBinError(27,0.01730404);
   VbbHcc_MC_H_dR_stack_1->SetBinError(28,0.01628956);
   VbbHcc_MC_H_dR_stack_1->SetBinError(29,0.01228601);
   VbbHcc_MC_H_dR_stack_1->SetBinError(30,0.01183887);
   VbbHcc_MC_H_dR_stack_1->SetBinError(31,0.01703445);
   VbbHcc_MC_H_dR_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_MC_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_MC_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_dR_stack_1,"");
   
   TH1D *VbbHcc_MC_H_dR_stack_2 = new TH1D("VbbHcc_MC_H_dR_stack_2","",30,0,6);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(2,0.001452907);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(3,0.06076008);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(4,0.2672165);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(5,0.6813983);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(6,1.165352);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(7,1.743816);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(8,2.186149);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(9,2.248815);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(10,2.108864);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(11,1.817301);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(12,1.61637);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(13,1.515475);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(14,1.382744);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(15,1.254005);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(16,1.083728);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(17,0.5329986);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(18,0.2941675);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(19,0.1765694);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(20,0.1051896);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(21,0.07480679);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(22,0.04833622);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(23,0.02509077);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(24,0.01364844);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(25,0.0093515);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(26,0.00830571);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(27,0.00666895);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(28,0.003098109);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(29,0.001009472);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(30,0.0003826674);
   VbbHcc_MC_H_dR_stack_2->SetBinContent(31,0.001782138);
   VbbHcc_MC_H_dR_stack_2->SetBinError(2,0.0007332388);
   VbbHcc_MC_H_dR_stack_2->SetBinError(3,0.004800065);
   VbbHcc_MC_H_dR_stack_2->SetBinError(4,0.01007684);
   VbbHcc_MC_H_dR_stack_2->SetBinError(5,0.0160687);
   VbbHcc_MC_H_dR_stack_2->SetBinError(6,0.02104977);
   VbbHcc_MC_H_dR_stack_2->SetBinError(7,0.02580001);
   VbbHcc_MC_H_dR_stack_2->SetBinError(8,0.02889183);
   VbbHcc_MC_H_dR_stack_2->SetBinError(9,0.0293345);
   VbbHcc_MC_H_dR_stack_2->SetBinError(10,0.02839481);
   VbbHcc_MC_H_dR_stack_2->SetBinError(11,0.02632769);
   VbbHcc_MC_H_dR_stack_2->SetBinError(12,0.02486798);
   VbbHcc_MC_H_dR_stack_2->SetBinError(13,0.0240647);
   VbbHcc_MC_H_dR_stack_2->SetBinError(14,0.0229834);
   VbbHcc_MC_H_dR_stack_2->SetBinError(15,0.02193363);
   VbbHcc_MC_H_dR_stack_2->SetBinError(16,0.02038047);
   VbbHcc_MC_H_dR_stack_2->SetBinError(17,0.01424682);
   VbbHcc_MC_H_dR_stack_2->SetBinError(18,0.01061425);
   VbbHcc_MC_H_dR_stack_2->SetBinError(19,0.008198526);
   VbbHcc_MC_H_dR_stack_2->SetBinError(20,0.006357795);
   VbbHcc_MC_H_dR_stack_2->SetBinError(21,0.005368516);
   VbbHcc_MC_H_dR_stack_2->SetBinError(22,0.004312167);
   VbbHcc_MC_H_dR_stack_2->SetBinError(23,0.003063254);
   VbbHcc_MC_H_dR_stack_2->SetBinError(24,0.002279717);
   VbbHcc_MC_H_dR_stack_2->SetBinError(25,0.001911856);
   VbbHcc_MC_H_dR_stack_2->SetBinError(26,0.001790811);
   VbbHcc_MC_H_dR_stack_2->SetBinError(27,0.001625008);
   VbbHcc_MC_H_dR_stack_2->SetBinError(28,0.001096612);
   VbbHcc_MC_H_dR_stack_2->SetBinError(29,0.0005949749);
   VbbHcc_MC_H_dR_stack_2->SetBinError(30,0.0003826674);
   VbbHcc_MC_H_dR_stack_2->SetBinError(31,0.0008035577);
   VbbHcc_MC_H_dR_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_MC_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_MC_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_H_dR_stack_1","ZHcc","F");

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
   H_dR_16->Modified();
   H_dR_16->cd();
   H_dR_16->SetSelected(H_dR_16);
}
