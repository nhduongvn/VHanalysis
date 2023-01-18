#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_18()
{
//=========Macro generated from canvas: H_dR_seljet_18/H_dR_seljet_18
//=========  (Wed Jan 18 11:43:15 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_18 = new TCanvas("H_dR_seljet_18", "H_dR_seljet_18",0,0,600,600);
   H_dR_seljet_18->SetHighLightColor(2);
   H_dR_seljet_18->Range(-1.353788,-1.080917e+09,7.264125,7.926728e+09);
   H_dR_seljet_18->SetFillColor(0);
   H_dR_seljet_18->SetFillStyle(4000);
   H_dR_seljet_18->SetBorderMode(0);
   H_dR_seljet_18->SetBorderSize(2);
   H_dR_seljet_18->SetLeftMargin(0.15709);
   H_dR_seljet_18->SetRightMargin(0.1234783);
   H_dR_seljet_18->SetBottomMargin(0.12);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.025963e+09);
   
   TH1F *st_stack_279 = new TH1F("st_stack_279","",30,0,6);
   st_stack_279->SetMinimum(0);
   st_stack_279->SetMaximum(7.025963e+09);
   st_stack_279->SetDirectory(0);
   st_stack_279->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_279->SetLineColor(ci);
   st_stack_279->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_279->GetXaxis()->SetRange(1,31);
   st_stack_279->GetXaxis()->SetLabelFont(42);
   st_stack_279->GetXaxis()->SetTitleOffset(1);
   st_stack_279->GetXaxis()->SetTitleFont(42);
   st_stack_279->GetYaxis()->SetTitle("Events/0.2");
   st_stack_279->GetYaxis()->SetLabelFont(42);
   st_stack_279->GetYaxis()->SetTitleSize(0.037);
   st_stack_279->GetYaxis()->SetTitleFont(42);
   st_stack_279->GetZaxis()->SetLabelFont(42);
   st_stack_279->GetZaxis()->SetTitleOffset(1);
   st_stack_279->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_279);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,309275.9);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,2.352264e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,3.812303e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,3.333918e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,3.493658e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,3.922292e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,4.679044e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,5.861196e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,7.551909e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,1.03112e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,1.434676e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,2.021445e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,2.845948e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,3.883964e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,4.679086e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,2.970007e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,2.082912e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,1.528735e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,1.124331e+09);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,8.165502e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,5.802217e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,3.997521e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,2.598505e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,1.549126e+08);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,8.135928e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,3.714228e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,1.058179e+07);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,817784.6);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,68662.87);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,1698692);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,2425311);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,2251437);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,2266571);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,2464977);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,2634065);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,2915513);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,3204629);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,3620104);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,4276323);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,4998268);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,5563861);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,6583758);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,6971091);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,5642416);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,4868447);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,4332464);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,3644966);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,3196837);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,2581223);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,2141708);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,1697492);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,1327879);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,941257.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,656528.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,351105.4);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,119951);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(6.913018e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,201.6257);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,237442.1);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,531999.9);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,721227.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,867606.4);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,960227.2);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,1046391);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,1184079);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,1406948);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,1744796);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,2225351);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,2868681);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,3663287);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,4536523);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,4888999);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,2526438);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,1451157);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,887177.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,548515.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,336688.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,203158.5);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,119336.8);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,66920.31);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,34852.06);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,16058.42);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,6155.369);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,1532.609);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,92.04374);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,5.831037);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,152.3027);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,227.8676);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,265.5131);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,291.3704);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,306.1758);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,319.6733);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,341.7847);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,373.567);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,416.0964);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,471.7001);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,536.8607);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,608.4119);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,678.6654);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,705.5845);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,507.2496);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,383.002);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,299.5195);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,236.0898);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,183.6466);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,142.3682);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,109.0728);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,81.18539);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,58.48348);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,39.49777);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,24.99121);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,12.50754);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,2.835354);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(4.141391e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   H_dR_seljet_18->Modified();
   H_dR_seljet_18->cd();
   H_dR_seljet_18->SetSelected(H_dR_seljet_18);
}
