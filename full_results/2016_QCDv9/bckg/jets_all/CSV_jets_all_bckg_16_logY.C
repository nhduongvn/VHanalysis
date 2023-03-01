#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_bckg_16_logY()
{
//=========Macro generated from canvas: CSV_jets_all_bckg_16/CSV_jets_all_bckg_16
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_bckg_16 = new TCanvas("CSV_jets_all_bckg_16", "CSV_jets_all_bckg_16",0,0,600,600);
   CSV_jets_all_bckg_16->SetHighLightColor(2);
   CSV_jets_all_bckg_16->Range(-0.2183529,4.5273,1.171633,16.0922);
   CSV_jets_all_bckg_16->SetFillColor(0);
   CSV_jets_all_bckg_16->SetFillStyle(4000);
   CSV_jets_all_bckg_16->SetBorderMode(0);
   CSV_jets_all_bckg_16->SetBorderSize(2);
   CSV_jets_all_bckg_16->SetLogy();
   CSV_jets_all_bckg_16->SetLeftMargin(0.15709);
   CSV_jets_all_bckg_16->SetRightMargin(0.1234783);
   CSV_jets_all_bckg_16->SetBottomMargin(0.12);
   CSV_jets_all_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_16->SetFrameBorderMode(0);
   CSV_jets_all_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(4076413);
   st->SetMaximum(3.339154e+14);
   
   TH1F *st_stack_164 = new TH1F("st_stack_164","",20,0,1);
   st_stack_164->SetMinimum(822408.1);
   st_stack_164->SetMaximum(8.623939e+14);
   st_stack_164->SetDirectory(0);
   st_stack_164->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_164->SetLineColor(ci);
   st_stack_164->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_164->GetXaxis()->SetRange(1,20);
   st_stack_164->GetXaxis()->SetLabelFont(42);
   st_stack_164->GetXaxis()->SetTitleOffset(1);
   st_stack_164->GetXaxis()->SetTitleFont(42);
   st_stack_164->GetYaxis()->SetTitle("Events/0.05");
   st_stack_164->GetYaxis()->SetLabelFont(42);
   st_stack_164->GetYaxis()->SetTitleSize(0.037);
   st_stack_164->GetYaxis()->SetTitleFont(42);
   st_stack_164->GetZaxis()->SetLabelFont(42);
   st_stack_164->GetZaxis()->SetTitleOffset(1);
   st_stack_164->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_164);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,3.339027e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,1.356763e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,1.744407e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,7.488498e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,4.509244e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,2.822129e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,2.030355e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,1.513726e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,1.142342e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,9.160294e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,7.662945e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,6.307954e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,5.371079e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,4.711212e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,4.306926e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,4.222408e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,4.074547e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,4.41937e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,5.735795e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,2.257192e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.603488e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.667953e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,5.954326e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,3.898802e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,3.025858e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,2.393432e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,2.029593e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,1.752036e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,1.521334e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,1.361715e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,1.244774e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,1.128172e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.040382e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,9734746);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,9296268);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,9192979);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,9021818);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,9382748);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.066637e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,2.097884e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.398694e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,1.276048e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,4.279305e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,8861037);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,4745824);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,3366638);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,2609356);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,2201625);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,1938573);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,1730936);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,1614476);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,1544364);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,1478371);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,1438897);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,1458728);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,1526603);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,1708565);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,1865776);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2268043);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,3412537);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,1.876737e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,2868.572);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,1638.719);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,747.3754);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,549.0246);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,462.8604);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,407.4072);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,374.1245);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,350.6181);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,330.8588);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,319.3993);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,312.8214);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,306.2657);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,302.1477);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,304.2139);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,311.1331);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,329.073);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,343.7362);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,378.7892);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,464.5239);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1090.355);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(3.953548e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_bckg_16->Modified();
   CSV_jets_all_bckg_16->cd();
   CSV_jets_all_bckg_16->SetSelected(CSV_jets_all_bckg_16);
}
