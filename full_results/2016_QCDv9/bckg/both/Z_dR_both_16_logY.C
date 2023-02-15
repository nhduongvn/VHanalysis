#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Tue Feb 14 16:02:03 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.310117,-0.9895232,7.029799,9.962141);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLogy();
   Z_dR_both_16->SetLeftMargin(0.15709);
   Z_dR_both_16->SetRightMargin(0.1234783);
   Z_dR_both_16->SetBottomMargin(0.12);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.951722e+08);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(2.111916);
   st_stack_145->SetMaximum(7.36164e+08);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetTitleOffset(1);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Events/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetTitleSize(0.037);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetTitleOffset(1);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,1159.457);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,2423224);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,2892483);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,2317167);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,1931388);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,1728977);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,1621918);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,1742915);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,1602119);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,1511092);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,1591847);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,1713580);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,1932295);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,2438296);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,2334277);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,1361473);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,757167.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,642819.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,343152);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,295767.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,245083.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,138148.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,68818.84);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,53253.43);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,22908.13);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,3347.218);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,2081.87);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,0.4032327);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,513.6211);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,70368.26);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,87126.32);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,102212.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,87259.97);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,91100.12);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,98133.53);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,111395.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,96555.29);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,87439.49);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,88870.31);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,89243.87);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,108103.8);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,130375.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,124252.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,87091.02);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,50446.56);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,62854.97);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,27381.87);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,42512.63);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,48842.91);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,37162.09);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,8242.854);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,23391.86);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,5749.932);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,1658.939);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,1663.737);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,0.4032327);
   VbbHcc_both_Z_dR_stack_1->SetEntries(471796);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,23.51096);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,30684.08);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,59238.68);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,70921.86);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,86534.65);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,101003.9);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,114532.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,127998.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,142090.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,156785.9);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,173097.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,190114.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,207123.9);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,222398.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,217951.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,113876.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,64464.31);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,37836);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,22090.57);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,12619.55);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,7018.471);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,3722.998);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,1878.677);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,854.4638);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,351.9769);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,118.4064);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,28.39506);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,1.117575);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,1.281084);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,46.32116);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,64.4338);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,70.57427);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,77.96583);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,84.24774);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,89.72765);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,94.86077);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,99.96752);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,105.0432);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,110.4265);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,115.7825);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,120.9472);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,125.4009);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,124.2374);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,89.8185);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,67.58269);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,51.76995);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,39.54168);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,29.8727);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,22.22282);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,16.16026);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,11.42995);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,7.706603);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,4.927551);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,2.84017);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.384983);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.2626175);
   VbbHcc_both_Z_dR_stack_2->SetEntries(3.245983e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
